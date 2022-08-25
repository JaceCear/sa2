#include "global.h"
#include "multiplayer_team_play.h"
#include "save.h"
#include "constants/text.h"
#include "data.h"
#include "task.h"
#include "sprite.h"

struct MultiplayerTeamPlayScreen {
    struct UNK_0808B3FC_UNK240 unk0[4];
    struct UNK_0808B3FC_UNK240 unkC0[5];
    struct UNK_0808B3FC_UNK240 unk1B0;
    struct UNK_0808B3FC_UNK240 unk1E0;
    struct Unk_03002400 unk210;
    struct Unk_03002400 unk250;
    struct Unk_03002400 unk290;
    struct Unk_03002400 unk2D0;
    u16 unk310;
    u16 unk312;
    u16 unk314;
    u8 unk316;
    u8 unk317;
    u8 filler318[8];
}; /* 0x320 */

void sub_805CB34(void);

extern const struct UNK_080E0D64 gUnknown_080D92BC[4];
extern const struct UNK_080E0D64 gUnknown_080D92DC[35];

void sub_805C78C(void) {
    struct Task* t;
    struct MultiplayerTeamPlayScreen* teamPlayScreen;
    struct UNK_0808B3FC_UNK240* element;
    struct Unk_03002400* background;
    u32 lang, vram;
    u8 i;
    
    lang = gLoadedSaveGame->unk6;
    if (lang > NUM_LANGUAGES) {
        lang = LANG_JAPANESE;
    }

    DmaFill32(3, 0, &gMultiSioSend, sizeof(gMultiSioSend));
    DmaFill32(3, 0, gMultiSioRecv, sizeof(gMultiSioRecv));
    gUnknown_030054D4[3] = 0;
    gUnknown_030054D4[2] = 0;
    gUnknown_030054D4[1] = 0;
    gUnknown_030054D4[0] = 0;
    gDispCnt = 0x1B00;
    gDispCnt |= 0x40;
    gBgCntRegs[3] = 0x1e0d;
    gBgCntRegs[2] = 0x9608;
    gBgCntRegs[1] = 0x8e06;
    gBgCntRegs[0] = 0x8603;
    gBgScrollRegs[0][0] = 0;
    gBgScrollRegs[0][1] = 0;
    gBgScrollRegs[1][0] = 0;
    gBgScrollRegs[1][1] = 0;
    gBgScrollRegs[2][0] = 0;
    gBgScrollRegs[2][1] = 0;
    gBgScrollRegs[3][0] = 0;
    gBgScrollRegs[3][1] = 0;
    gUnknown_03004D80[2] = 0;
    gUnknown_03002280[8] = 0;
    gUnknown_03002280[9] = 0;
    gUnknown_03002280[10] = 0xff;
    gUnknown_03002280[11] = 32;

    t = TaskCreate(sub_805CB34, 0x320, 0x3000, 0, NULL);
    teamPlayScreen = TaskGetStructPtr(t, teamPlayScreen);
    teamPlayScreen->unk310 = 0;
    teamPlayScreen->unk312 = 0;
    teamPlayScreen->unk314 = 0;
    teamPlayScreen->unk316 = 1;
    teamPlayScreen->unk317 = 0;

    for (i = 0, vram = OBJ_VRAM0; i < 4; i++) {
        element = &teamPlayScreen->unk0[i];
        element->unk16 = 0;
        element->unk18 = 0;
        element->unk4 = (void*)vram;
        vram += gUnknown_080D92BC[i].unk0 * 0x20;
        element->unk1A = 0x100;
        element->unk8 = 0;
        element->unkA = gUnknown_080D92BC[i].unk4;
        element->unk20 = gUnknown_080D92BC[i].unk6;
        element->unk14 = 0;
        element->unk1C = 0;
        element->unk21 = 0xFF;
        element->unk22 = 0x10;
        element->unk25 = 0;
        element->unk28 = -1;
        element->unk10 = 0x1000;
        sub_8004558(element);
    }

    for (i = 0; i < 5; i++) {
        element = &teamPlayScreen->unkC0[i];
        element->unk16 = 0;
        element->unk18 = 0;
        element->unk4 = (void*)vram;
        vram += gUnknown_080D92DC[i + lang * 5].unk0 * 0x20;
        element->unk1A = 0xC0;
        element->unk8 = 0;
        element->unkA = gUnknown_080D92DC[i + lang * 5].unk4;
        element->unk20 = gUnknown_080D92DC[i + lang * 5].unk6;
        element->unk14 = 0;
        element->unk1C = 0;
        element->unk21 = 0xFF;
        element->unk22 = 0x10;
        element->unk25 = 0;
        element->unk28 = -1;
        element->unk10 = 0;
        sub_8004558(element);
    }
    element = &teamPlayScreen->unk1B0;
    element->unk16 = 0;
    element->unk18 = 0;
    element->unk4 = (void*)vram;
    element->unk1A = 0xC0;
    element->unk8 = 0;
    element->unkA = 0x434;
    element->unk20 = 9;
    element->unk14 = 0;
    element->unk1C = 0;
    element->unk21 = 0xFF;
    element->unk22 = 0x10;
    element->unk25 = 0;
    element->unk28 = -1;
    element->unk10 = 0;

    background = &teamPlayScreen->unk210;
    background->unk4 = BG_SCREEN_ADDR(0);
    background->unkA = 0;
    background->unkC = BG_SCREEN_ADDR(6);
    background->unk18 = 0;
    background->unk1A = 0;
    background->unk1C = 0x7B;
    background->unk1E = 0;
    background->unk20 = 0;
    background->unk22 = 0;
    background->unk24 = 0;
    background->unk26 = 0x1E;
    background->unk28 = 0x14;
    background->unk2A = 0;
    background->unk2E = 0;
    sub_8002A3C(background);

    background = &teamPlayScreen->unk250;
    background->unk4 = BG_SCREEN_ADDR(8);
    background->unkA = 0;
    background->unkC = BG_SCREEN_ADDR(14);
    background->unk18 = 0;
    background->unk1A = 0;
    background->unk1C = 0x7A;
    background->unk1E = 0;
    background->unk20 = 0;
    background->unk22 = 0;
    background->unk24 = 0;
    background->unk26 = 0x1E;
    background->unk28 = 0x28;
    background->unk2A = 0;
    background->unk2E = 1;
    sub_8002A3C(background);

    background = &teamPlayScreen->unk290;
    background->unk4 = BG_SCREEN_ADDR(16);
    background->unkA = 0;
    background->unkC = BG_SCREEN_ADDR(22);
    background->unk18 = 0;
    background->unk1A = 0;
    background->unk1C = 0x7C;
    background->unk1E = 0;
    background->unk20 = 0;
    background->unk22 = 0;
    background->unk24 = 0;
    background->unk26 = 0x1E;
    background->unk28 = 10;
    background->unk2A = 0;
    background->unk2E = 3;
    sub_8002A3C(background);

    background = &teamPlayScreen->unk2D0;
    background->unk4 = BG_SCREEN_ADDR(24);
    background->unkA = 0;
    background->unkC = BG_SCREEN_ADDR(30);
    background->unk18 = 0;
    background->unk1A = 0;
    background->unk1C = 0x7E;
    background->unk1E = 0;
    background->unk20 = 0;
    background->unk22 = 0;
    background->unk24 = 0;
    background->unk26 = 0x20;
    background->unk28 = 0x20;
    background->unk2A = 0;
    background->unk2E = 3;
    sub_8002A3C(background);
}
