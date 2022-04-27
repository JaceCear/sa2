#ifndef GUARD_SPRITE_H
#define GUARD_SPRITE_H

#include "global.h"

// TODO: move the struct declaration to a proper location
struct Unk_03002400 {
    u32 unk0;
    u32 unk4; // vram
    u16 unk8;
    u16 unkA;
    u32 unkC; // vram
    const u16 *unk10;
    u16 unk14;
    u16 unk16;
    u16 unk18;
    u16 unk1A;
    u16 unk1C;
    u16 unk1E;
    u16 unk20;
    u16 unk22;
    u16 unk24;
    u16 unk26;
    u16 unk28;
    u8 unk2A;
    u8 unk2B;
    u8 unk2C;
    u8 unk2D;
    u16 unk2E;
    u16 unk30;
    u16 unk32;
    u16 unk34;
    u16 unk36;
    u32 unk38;
    u16 unk3C;
    u16 unk3E;
}; /* size = 0x40 */

// TODO: work out what makes this struct different from the above
struct UNK_0808B3FC_UNK240 {
    u32 unk0;
    u32 unk4; // something vram

    u16 unk8;
    u16 unkA;

    u32 unkC;
    u32 unk10;

    u16 unk14;
    u16 unk16;
    u16 unk18;
    u16 unk1A;
    u16 unk1C;
    u16 unk1E;
    
    u8 unk20;
    u8 unk21;
    u8 unk22;
    u8 unk23;
    u8 unk24;
    u8 unk25;

    u8 filler26[10];
} /* size = 0x30 */;

struct Unk_03002EC0 {
    /* TODO: fixing types breaks sub_80021C4. */
    u32 unk0;  // const void *
    u32 unk4;  // void *
    u16 unk8;
    u8 fillerA[2];
};

// Register menu item
u32 sub_8004558(struct UNK_0808B3FC_UNK240*);

void sub_80051E8(struct UNK_0808B3FC_UNK240*);
void sub_8002A3C(struct Unk_03002400 *);
u32 sub_8004010(void);
u32 sub_80039E4(void);
u32 sub_8002B20(void);
void DrawToOamBuffer(void);

// Probably a list of sprites to draw to screen
extern struct Unk_03002EC0* gUnknown_030027A0[];

#endif
