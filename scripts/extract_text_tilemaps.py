from io import BufferedReader
import os
import sys
import struct

address = int(sys.argv[1], 16)
length = int(sys.argv[2], 16)

def read_u8(rom: BufferedReader):
    return struct.unpack('B', rom.read(1))[0]

def read_s8(rom: BufferedReader):
    return struct.unpack('b', rom.read(1))[0]


def read_u16(rom: BufferedReader):
    return struct.unpack('H', rom.read(2))[0]

def read_u32(rom: BufferedReader):
    return struct.unpack('I', rom.read(4))[0]

def format_hex(val):
    return f"0x{hex(val)[2:].upper()}"

def extract_next_map(rom: BufferedReader):
    print(f"{{ {format_hex(read_u32(rom))}, {format_hex(read_u16(rom))}, {format_hex(read_s8(rom))} }},")
    read_u8(rom)


with open('baserom.gba', 'rb') as rom:
    rom.seek(address)
    for i in range(length // 8):
        extract_next_map(rom)
