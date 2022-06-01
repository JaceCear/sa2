from enum import IntEnum
from io import BufferedReader
import os
import struct

"""
This script opens a baserom.gba file (which should be one of the Sonic Advance games)
and extracts the position information of all entity types in all stages.

At this point in time it was only tested with SA2, but below you can see various addresses
of the other games in the series, which should represent the respective tables.
Just uncomment the one you'd like to try and give it a go!

    Jace - June 1st, 2022
"""

class Entity(IntEnum):
    INTERACTABLES = 0
    ITEMBOXES     = 1
    ENEMIES       = 2
    RINGS         = 3

#tables = [0x000BAF8C, 0x000BAFD4, 0x000BB01C, 0x000BAF44] # SA1 (PAL)
tables = [0x000D4C84, 0x000D4D0C, 0x000D4D94, 0x000D4BFC] # SA2 (PAL, NTSC)
#tables = [0x000D1224, 0x000D1348, 0x000D146C, 0x000CEF58] # SA3 (PAL)
#tables = [0x000D0E9C, 0x000D0FC0, 0x000D10E4, 0x000CEBD0] # SA3 (NTSC)
#tables = [0x000D1218, 0x000D133C, 0x000D1460, 0x000CEF4C] # SA3 (JP)

#total_stage_count_sa1 = 18
total_stage_count_sa2 = 34
#total_stage_count_sa3 = 73
tables_length = total_stage_count_sa2 # SA2

final_position_entry_end = 0x80AED70 # SA2 (PAL, NTSC)

def read_u32(rom: BufferedReader):
    return struct.unpack('I', rom.read(4))[0]

def file_addr(addr):
    if addr > 0x8000000:
        return addr - 0x8000000
    return addr

# TODO
def print_asm_file(all_addresses, duplicates, export_path):
    print("\t.section .rodata")
    print(export_path)
    for i in range(len(all_addresses)):
        entity_index = all_addresses[i][0]
        stage_index = all_addresses[i][1]
        address = all_addresses[i][2]

        

        entity_type = Entity(entity_index).name.lower()
        label_str = f"stage_{stage_index}_{entity_type}"
        print(f"\t.global {label_str}")
        print(f"{label_str}: @ {hex(address)}")
        print(f"\t.incbin \"{export_path}/{label_str}.bin.rl\"")
        print()

with open('baserom.gba', 'rb') as rom:
    all_addresses = []
    duplicates = []

    # Fill all_addresses with the addresses in the tables
    for entity_index in range(len(Entity)):
        rom.seek(tables[entity_index])

        for stage_index in range(tables_length):
            address = read_u32(rom)

            if (address > 0):
                full_tbl_entry = [entity_index, stage_index, address]
                all_addresses.append(full_tbl_entry)


    # Sort the entire list by the addresses in it.
    # This is done to later calculate the sizes of the compressed entity positions
    getAddress = lambda entry : entry[2]
    all_addresses = sorted(all_addresses, key=getAddress)
    

    # Calculate each entry's size
    last_index = len(all_addresses)-1
    for entry_index in (range(last_index)):
        entry_address = all_addresses[entry_index][2]
        i = 1

        # Find the next entry that is not equal to the current entry's address
        while(
            all_addresses[entry_index][2] == all_addresses[entry_index+i][2] and
            entry_index+i <= last_index):
                i += 1
           
        # Add the size to the respective entry
        all_addresses[entry_index].append(all_addresses[entry_index+i][2]-all_addresses[entry_index][2])
       
    # The final entry's size has to be calculated semi-manually
    final_position_data_size = final_position_entry_end - all_addresses[last_index][2]
    all_addresses[last_index].append(final_position_data_size)

    """
    # DEBUG: Print the finished all_addresses array
    print("Entity-Type, Stage-Index, Address, Size")
    for i in range(len(all_addresses)):
        print(
            i,
            all_addresses[i][0],
            all_addresses[i][1],
            hex(all_addresses[i][2]),
            hex(all_addresses[i][3])
        )
    """


    # Create the export directory if necessary    
    export_directory = "data/entity_positions"
    if not os.path.isdir(export_directory):
        os.mkdir(export_directory)


    ## Find out duplicates ##
    # (make i start at 1 instead of 0)
    all_range = list(range(len(all_addresses)))
    del(all_range[0])

    for i in all_range:
        last_address = all_addresses[i-1][2]
        current_address = all_addresses[i][2]
        if(current_address and current_address == last_address):
            duplicates.append(current_address)

    """
    print("Extracting and decompressing data...")
    for entity_index in range(len(Entity)):
        for stage_index in range(tables_length):
            addresses_index = entity_index*tables_length+stage_index
            # FIXME:
            #Using stage_index here is wrong
            start_addr = file_addr(all_addresses[stage_index][2])

            length = all_addresses[stage_index][3]

            rom.seek(start_addr)


            # Don't re-export duplicates
            if (stage_index > 0):
            # FIXME:
            #Using stage_index here is wrong
                prev_address = file_addr(all_addresses[stage_index-1][2])

                if(start_addr and prev_address == start_addr):
                    if not start_addr in duplicates:
                        duplicates.append((stage_index, start_addr))
                    continue

            # Generate file names
            entity_type = Entity(entity_index).name.lower()
            position_file_name_format  = f"stage_{stage_index}_{entity_type}.bin"
            position_file_uncompressed = f"{export_directory}/{position_file_name_format}"
            position_file_compressed   = f"{position_file_uncompressed}.rl"

            # Export the files
            with open(position_file_compressed, "wb") as recording:
                recording.write(rom.read(length))

            # The os.system()-call expects program paths in Windows to have back-slashes
            if os.name == "nt":
                slash = '\\'
            else:
                slash = '/'

            # Decompress the exported files
            os.system(f"tools{slash}gbagfx{slash}gbagfx {position_file_compressed} {position_file_uncompressed}")
    """
    print("Done!")
    print()
    print()
    #print_asm_file(all_addresses, duplicates, export_directory)