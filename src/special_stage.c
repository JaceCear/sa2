#include "main.h"
#include "special_stage.h"
#include "game.h"
#include "sprite.h"
#include "transition.h"
#include "m4a.h"
#include "task.h"
#include "constants/songs.h"
#include "title_screen.h"
#include "trig.h"


struct SpecialStage {
    struct Task* unk0;
    struct Task* unk4; // UNK_806E6E8
    struct Task* unk8;

    // playerTask
    struct Task* unkC; // UNK_806CF78
    
    struct Task* unk10;
    struct Task* unk14; // UNK_8071438
    struct UNK_0808B3FC_UNK240 unk18;
    struct Unk_03002400 unk48;
    struct UNK_802D4CC_UNK270 unk88;
    s32 unk94[60][2];
    u8 unk274[796];
    u32 unk590;
    u32 unk594;
    u32 unk598;
    u32 unk59C;

    u16 unk5A0;
    s16 unk5A2;
    s16 unk5A4;

    // time
    s16 unk5A6;

    s32 unk5A8;
    s32 unk5AC;
    s32 unk5B0;

    u16 unk5B4;
    u8 unk5B6;
    u8 unk5B7;
    u8 unk5B8;
    u8 unk5B9;
    u8 unk5BA;

    s8 unk5BB;
    s8 unk5BC;
    s8 unk5BD;
    s8 unk5BE;

    u8 unk5BF;
    u8 unk5C0;
    u8 unk5C1;

    s8 unk5C2;
    s8 unk5C3;
    u8 unk5C4;

    s8 unk5C5;
    u8 unk5C6;

    s8 unk5C7;
    s8 unk5C8;

    u8 filler5C9;
    u16 unk5CA;
    u16 unk5CC;
    u16 unk5CE;
    u8 unk5D0;
    u8 unk5D1;
    u8 unk5D2;
    u8 unk5D3;
    void* unk5D4;
}; /* size 0x5D8 */

struct UNK_806BD94_old {
    struct SpecialStage* unk0;
    u8 unk4[2644];
    u16 unkA58;
    u16 unkA5A;
}; /* size 0xA5C */

struct UNK_806BD94_UNK874 {
    u32 unk0;
    u32 unk4;
    s32 unk8;
    s16 unkC;
    s16 unkE;
    u8 unk10[2];
    s16 unk12;
}; /* size 0x14 */


struct UNK_806CB84 {
    u8 unk0[2];
    s16 unk2;
    s16 unk4;
    s16 unk6;
    s16 unk8;
    s16 unkA;
    s16 unkC;
    s16 unkE;
    s16 unk10;
    s16 unk12;
};

struct UNK_806BD94 {
    struct SpecialStage* unk0;
    struct UNK_0808B3FC_UNK240 unk4;
    struct UNK_0808B3FC_UNK240 unk34;
    struct UNK_0808B3FC_UNK240 unk64;
    struct UNK_0808B3FC_UNK240 unk94;
    struct UNK_0808B3FC_UNK240 unkC4;
    struct UNK_0808B3FC_UNK240 unkF4;
    struct UNK_0808B3FC_UNK240 unk124;
    struct UNK_0808B3FC_UNK240 unk154;
    struct UNK_0808B3FC_UNK240 unk184;
    u8 unk1B4[1536];
    struct UNK_0808B3FC_UNK240 unk7B4[4];
    struct UNK_806BD94_UNK874 unk874[4][2];
    u8 unk914[324];
    u16 unkA58;
    u16 unkA5A;
}; /* size 0xA5C */

struct UNK_80DF670 {
    u16 unk0;
    u16 unk2;
    u16 unk4;
    u8 unk6;
    u8 unk7;
} /* size 0x8 */;

// Player
struct UNK_806CF78 {
    struct SpecialStage* unk0;
    void* unk4;
    struct UNK_0808B3FC_UNK240 unk8;
    struct UNK_0808B3FC_UNK240 unk38;
    struct UNK_0808B3FC_UNK240 unk68;

    // vram stuff
    void* unk98;
    void* unk9C;
    void* unkA0;

    s16 unkA4;
    u8 unkA6;

    s32 unkA8;
    s32 unkAC;

    s16 unkB0;
    s16 unkB2;

    u16 unkB4;
    s16 unkB6;

    s16 unkB8;

    u16 unkBA;
  
    s16 unkBC;  
    s16 unkBE;

    u16 unkC0;
    u16 unkC2;

    // sprites
    const struct UNK_80DF670* unkC4;
    
    u32 unkC8;
    u32 unkCC;
    u32 unkD0;
    u32 unkD4;
    u32 unkD8;
    s32 unkDC;
    s32 unkE0;
    u32 unkE4;
    u32 unkE8;

    u16 unkEC;
    u16 unkEE;
    s16 unkF0;
    s16 unkF2;
    s16 unkF4;
    s16 unkF6;
    s16 unkF8;
    s16 unkFA;
    s16 unkFC;
    s16 unkFE;
    s32 unk100;
    s32 unk104;
}; /* size 0x108 */

struct UNK_8071438 {
    struct SpecialStage* unk0;
    u8 filletemp_r4[56];
    u16 unk3C;
    u8 filler3E[26];
}; /* size 0x58 */

struct UNK_8070BF0 {
    struct SpecialStage* unk0;
    u8 unk4[1308];
}; /* size 0x520 */

struct UNK_806E6E8 {
    struct SpecialStage* unk0;
    void* unk4; // size 0xA00
    void* unk8; // size 0x280
    s32* unkC; // size 0x280
    struct Unk_03002400 unk10;
    struct Unk_03002400 unk50;
    u8 unk90[528];
}; /* size 0x2A0 */

void* gUnknown_03005B58;
void* gUnknown_03005B5C;

#define ResetSpecialStageScreenVram() ({ \
    gUnknown_03005B5C = (void*)OBJ_VRAM0; \
    gUnknown_03005B58 = NULL; \
})

#define ResetSpecialStateScreenSubMenuVram() ({ \
    gUnknown_03005B58 = NULL; \
})

#define RENDER_TARGET_SCREEN 0
#define RENDER_TARGET_SUB_MENU 1

void sub_806CEA8(void);
void sub_806C970(void);
void sub_806C950(struct Task*);

extern const s16 gUnknown_080DFA02[7];

void sub_806BA84(s16 a, s16 b) {
    struct Task* t;
    struct SpecialStage* stage;
    
    s16 level, character, temp, i, target;
    
    m4aMPlayAllStop();

    if (b != -1) {
        temp = b >> 2;
    } else {
        temp = gCurrentLevel >> 2;
    }
    level = temp;

    if (a == -1) {
        character = gSelectedCharacter;
    } else {
        character = a;
    }

    sub_806CEA8();

    t = TaskCreate(sub_806C970, 0x5D8, 0x2000, 0, sub_806C950);
    stage = TaskGetStructPtr(t);
    stage->unk594 = 0x1000000;
    stage->unk598 = 0x1000000;
    stage->unk59C = 0;
    stage->unk5A0 = 0x200;

    if (character < 5) {
        stage->unk5B6 = character;
        stage->unk5B7 = 0;
    } else {
        stage->unk5B6 = 2;
        stage->unk5B7 = 1;
    }

    stage->unk5B8 = level;
    stage->unk5B9 = b;
    stage->unk5A2 = 0;
    
    stage->unk5BB = 1;
    stage->unk5BC = 2;
    stage->unk5BD = 0;
    stage->unk5BE = 0;

    stage->unk5A4 = 0;
    stage->unk5A6 = gUnknown_080DFA02[level];

    stage->unk5B4 = 0;
    stage->unk5BA = 0;
    stage->unk5BF = 0;

    stage->unk5C0 = 0;
    stage->unk5C1 = 0;

    stage->unk5C2 = Div(stage->unk5A6, 100);
    stage->unk5C3 = Div(stage->unk5A6, 10) - (stage->unk5C2 * 10);
    stage->unk5C4 = Mod(stage->unk5A6, 10);

    stage->unk5C5 = 0;
    stage->unk5C5 = 0;
    stage->unk5C6 = 0;
    stage->unk5C7 = 0;
    stage->unk5C8 = 0;

    stage->unk5CA = 0x78;
    stage->unk5CC = 0x8C;
    stage->unk5CE = 0x40;
    
    stage->unk5D0 = 0x28;
    stage->unk5D1 = 0x3C;

    // wtf, all this stuff is const
    target = 0x31;
    stage->unk5D2 = target;

    for (i = 1; i < stage->unk5D2; i *= 2);

    stage->unk5D2 = i;
    stage->unk5D3 = ((0x9F - stage->unk5D1) >> 1) + stage->unk5D1;
}

void sub_806BCB8(void) {
    gDispCnt = 0x1641;
    gBgCntRegs[1] = 0x703;
    gBgCntRegs[2] = 0xD086;
    gBldRegs.bldCnt = 0xAF;
    gBldRegs.bldY = 0x10;

    gBgScrollRegs[1][0] = 0;
    gBgScrollRegs[1][1] = 0;
    gBgScrollRegs[2][0] = 0;
    gBgScrollRegs[2][1] = 0;

    gUnknown_03004D80[1] = 0;
    gUnknown_03002280[4] = 0;
    gUnknown_03002280[5] = 0;
    gUnknown_03002280[6] = 0xFF;
    gUnknown_03002280[7] = 0x20;
    gUnknown_03004D80[2] = 0;
    gUnknown_03002280[8] = 0;
    gUnknown_03002280[9] = 0;
    gUnknown_03002280[10] = 0xFF;
    gUnknown_03002280[11] = 0x80;
}

void sub_806BD94(void);

void sub_806BD28(void) {
    struct SpecialStage* stage = TaskGetStructPtr(gCurTask);

    struct UNK_802D4CC_UNK270* transitionConfig = &stage->unk88;
    sub_80051E8(&stage->unk18);
    gBldRegs.bldCnt = 0xAF;
    
    stage->unk5A2++;

    if (stage->unk5A2 > 0x8B) {
        gBldRegs.bldCnt = 0xBF;
        gBldRegs.bldY = 0x10;
        
        transitionConfig->unk0 = 0;
        transitionConfig->unk2 = 2;
        transitionConfig->unk4 = 0;
        transitionConfig->unk6 = 0x100;
        transitionConfig->unkA = 0;
        transitionConfig->unk8 = 0xBF;
        stage->unk5A2 = 0;
        gCurTask->main = sub_806BD94;
    }
}

struct Task* sub_806F910(struct SpecialStage*);
struct Task* sub_806CF78(struct SpecialStage*);
struct Task* sub_806E684(struct SpecialStage*);
struct Task* sub_806E6E8(struct SpecialStage*);
struct Task* sub_8071438(struct SpecialStage*);
struct Task* sub_8070B90(struct SpecialStage*);

void sub_806C9CC(void);

void sub_806BD94(void) {
    struct SpecialStage* stage = TaskGetStructPtr(gCurTask);
    stage->unk5B4 = 2;
    
    switch(stage->unk5A2) {
        case 0:
            stage->unk0 = sub_806F910(stage);
            stage->unkC = sub_806CF78(stage);
            stage->unk5D4 = gUnknown_03005B5C;
            stage->unk14 = sub_8071438(stage);
            break;
        case 1:
            stage->unk8 = sub_806E684(stage);
            break;
        case 2:
            stage->unk4 = sub_806E6E8(stage);
            stage->unk10 = sub_8070B90(stage);
            break;
        case 3:
            stage->unk5B4 = 3;
            gCurTask->main = sub_806C9CC;
            return;
    }

    stage->unk5A2++;
}

void sub_806C864(void);
void sub_806C7B8(void);
void sub_806BE9C(void);
void sub_806BFD0(void);

void sub_806BE40(void) {
    struct SpecialStage* stage = TaskGetStructPtr(gCurTask);
    sub_806C864();

    if (stage->unk5BA == 0) {
        sub_806C7B8();
        stage->unk5A2++;
    }

    if (stage->unk5A2 > 0x3B) {
        stage->unk5A2 = 0;
        stage->unk5B4 = 5;
        gCurTask->main = sub_806BE9C;
    }
}

void sub_806BE9C(void) {
    struct SpecialStage* stage = TaskGetStructPtr(gCurTask);
    struct UNK_806CF78* unkCF78 = TaskGetStructPtr(stage->unkC);

    if (stage->unk5B4 == 6) {
#ifndef NON_MATCHING
        do 
#endif
        if (unkCF78->unkB4 != 0xE && unkCF78->unkB4 != 0xF) {
            unkCF78->unkB4 = 0xB;
        }
#ifndef NON_MATCHING
        while (0);
#endif
        stage->unk5B4 = 7;
    }

    if (stage->unk5B4 == 6 || stage->unk5B4 == 7) {
        if (unkCF78->unkB4 != 0xB && unkCF78->unkB4 != 0xC && unkCF78->unkB4 != 0xD) {
            unkCF78->unkB4 = 0xB;
        }
    }

    switch (unkCF78->unkB4) {
        case 0xD:
             stage->unk5B4 = 8;
            gCurTask->main = sub_806BFD0;
            return;
        case 0xF:
             stage->unk5B4 = 8;
            gCurTask->main = sub_806BFD0;
            return;
        case 0xE:
            break;
        default:
            sub_806C864();
            break;
    }
    
    if (stage->unk5BA == 0) {
        sub_806C7B8();
        if (stage->unk5C7) {
            s32 temp = --stage->unk5C8;
            if (temp == 0) {
                stage->unk5C7 = temp;
                if (stage->unk5BB == 0 && stage->unk5BC < 3) {
                    m4aSongNumStart(MUS_SPECIAL_STAGE_PINCH);
                } else {
                    m4aSongNumStart(MUS_SPECIAL_STAGE);
                }
            }
        } else {
            if (stage->unk5BB == 0 && stage->unk5BC == 3 && stage->unk5BD == 0 && stage->unk5BE == 0) {
                m4aSongNumStart(MUS_SPECIAL_STAGE_PINCH);
            }
        }
    }
}

void sub_806C050(void);

void sub_806BFD0(void) {
    struct SpecialStage* stage = TaskGetStructPtr(gCurTask);
    struct UNK_802D4CC_UNK270* transitionConfig = &stage->unk88;
    struct UNK_8071438* unk1438 = TaskGetStructPtr(stage->unk14);
    struct UNK_806CF78* unkCF78 = TaskGetStructPtr(stage->unkC);

    unk1438->unk3C = 0;

    transitionConfig->unk0 = 1;
    transitionConfig->unk2 = 1;
    transitionConfig->unk4 = 0;
    transitionConfig->unk6 = 0x40;
    transitionConfig->unkA = 0;
    transitionConfig->unk8 = 0xBF;
    sub_802D4CC(transitionConfig);

    gDispCnt = 0x9641;
    gWinRegs[5] = 0x103F;

    if (unkCF78->unkB4 == 0xD) {
        m4aSongNumStart(MUS_SPECIAL_STAGE_CLEAR);
    }
    gCurTask->main = sub_806C050;
}

void sub_806CEC4(struct Unk_03002400* background, u32 a, u32 b, u8 assetId, u16 d, u16 e, u16 f, u8 g, u16 h, u16 i);

void sub_806CA18(void);
void sub_806C158(void);

void sub_806C050(void) {
    struct SpecialStage* stage = TaskGetStructPtr(gCurTask);
    struct UNK_802D4CC_UNK270* unk88 = &stage->unk88;
    struct UNK_806CF78* unkCF78 = TaskGetStructPtr(stage->unkC);

    if (sub_802D4CC(unk88) == 0) {
        gDispCnt = 0x9641;
        gWinRegs[5] = 0x103F;
    } else {
        if (stage->unk14 != NULL) {
            TaskDestroy(stage->unk14);
            stage->unk14 = NULL;
        }

        if (stage->unk0 != NULL) {
            TaskDestroy(stage->unk0);
            stage->unk0 = NULL;
        }

        if (stage->unk4 != NULL) {
            TaskDestroy(stage->unk4);
            stage->unk4 = NULL;
        }

        if (stage->unk8 != NULL) {
            TaskDestroy(stage->unk8);
            stage->unk8 = NULL;
        }

        if (stage->unk10 != NULL) {
            TaskDestroy(stage->unk10);
            stage->unk10 = NULL;
        }

        sub_806CEC4(&stage->unk48, 0, 7, 0x8B, 0x20, 0x20, 0, 1, 0, 0);
        gBgScrollRegs[1][0] = 0;
        gBgScrollRegs[1][1] = 0;
        gDispCnt = 0x1240;

        if (unkCF78->unkB4 == 0xD) {
            stage->unk5A2 = 0;
            unkCF78->unkB4 = 0x10;
            gCurTask->main = sub_806CA18;
        } else {
            gCurTask->main = sub_806C158;
        }
    }
}

struct Task* sub_8070BF0(struct SpecialStage*);
void sub_806CA54(void);

void sub_806C158(void) {
    struct SpecialStage* stage = TaskGetStructPtr(gCurTask);
    struct UNK_806CF78* unkCF78 = TaskGetStructPtr(stage->unkC);

    gBldRegs.bldY = 0;
    gBldRegs.bldCnt = 0;
    gBldRegs.bldAlpha = 0;

    stage->unk10 = sub_8070BF0(stage);
    stage->unk5A8 = stage->unk5A4 * 100;
    
    if (stage->unk5A8 > 0x1863C) {
        stage->unk5A8 = 0x1863C;
    }

    stage->unk5AC = stage->unk5C5 ? 10000 : 0;
    stage->unk5B0 = 0;

    if (unkCF78->unkB4 == 0x10) {
        if (stage->unk5C5 != 0) {
            m4aSongNumStart(MUS_CHAOS_EMERALD);
            stage->unk5C7 = 1;
            stage->unk5C8 = 0x96;
        } else {
            m4aSongNumStart(MUS_SPECIAL_STAGE_RESULT);
            stage->unk5C7 = 0;
            stage->unk5C8 = 0;
           
        }
    } else {
        m4aSongNumStart(MUS_SPECIAL_STAGE_RESULT_LOSE);
    }

    stage->unk5A2 = 0;
    gCurTask->main = sub_806CA54;
}

void sub_806C42C(void);
void sub_806C338(void);

void sub_806C25C(void) {
    struct SpecialStage* stage = TaskGetStructPtr(gCurTask);

    if (stage->unk5C7 == 1) {
        s32 temp = --stage->unk5C8;
        if (temp == 0) {
            m4aSongNumStart(MUS_SPECIAL_STAGE_RESULT);
            stage->unk5C7 = temp;
        }
    }

    if (gPressedKeys & A_BUTTON) {
        gCurTask->main = sub_806C42C;
        return;
    }

    if (stage->unk5A8 < 100) {
        stage->unk5B0 += stage->unk5A8;
        stage->unk5A8 = 0;
    } else {
        stage->unk5B0 += 100;
        stage->unk5A8 -= 100;
    }

    if (stage->unk5B0  > 0x1863C) {
        stage->unk5B0 = 0x1863C;
    }

    stage->unk5A2++;

    if ((stage->unk5A2 & 3) == 0) {
        m4aSongNumStart(SE_STAGE_RESULT_COUNTER);
    }

    if (stage->unk5A8 == 0) {
        stage->unk5A8 = 0;
        gCurTask->main = sub_806C338;
    }   
}

void sub_806C49C(void);

void sub_806C338(void) {
    struct SpecialStage* stage = TaskGetStructPtr(gCurTask);
    if (stage->unk5C7 == 1) {
        s32 temp = --stage->unk5C8;
        if (temp == 0) {
            m4aSongNumStart(MUS_SPECIAL_STAGE_RESULT);
            stage->unk5C7 = temp;
        }
    }

    if (gPressedKeys & A_BUTTON) {
        gCurTask->main = sub_806C42C;
        return;
    }

    if (stage->unk5AC < 100) {
        stage->unk5B0 += stage->unk5AC;
        stage->unk5AC = 0;
    } else {
        stage->unk5B0 += 100;
        stage->unk5AC -= 100;
    }

    if (stage->unk5B0  > 0x1863C) {
        stage->unk5B0 = 0x1863C;
    }

    stage->unk5A2++;

    if ((stage->unk5A2 & 3) == 0) {
        m4aSongNumStart(SE_STAGE_RESULT_COUNTER);
    }

    if (stage->unk5AC == 0) {
        if (stage->unk5B0 != 0) {
            m4aSongNumStart(SE_STAGE_RESULT_COUNTER_DONE);
        }
    
        stage->unk5AC = 0;
        stage->unk5A2 = 0;
        gCurTask->main = sub_806C49C;
    }
}

void sub_806C42C(void) {
    struct SpecialStage* stage = TaskGetStructPtr(gCurTask);
    stage->unk5B0 += stage->unk5A8;
    stage->unk5A8 = 0;
    
    stage->unk5B0 += stage->unk5AC;
    stage->unk5AC = 0;

    if (stage->unk5B0 > 0x1863C) {
        stage->unk5B0 = 0x1863C;
    }

    if (stage->unk5B0 != 0) {
        m4aSongNumStart(SE_STAGE_RESULT_COUNTER_DONE);
    }

    stage->unk5A2 = 0;
    gCurTask->main = sub_806C49C;
}

void sub_806C6A4(void);
void sub_806C560(void);

void sub_806C49C(void) {
    struct SpecialStage* stage = TaskGetStructPtr(gCurTask);
    struct UNK_802D4CC_UNK270* transitionConfig = &stage->unk88;
    stage->unk5A2++;

    if (stage->unk5C7 == 1) {
        s32 temp = --stage->unk5C8;
        if (temp == 0) {
            m4aSongNumStart(MUS_SPECIAL_STAGE_RESULT);
            stage->unk5C7 = temp;
        }
    }

    if (gPressedKeys & A_BUTTON || stage->unk5A2 > 0x3C) {
        transitionConfig->unk0 = 0;
        transitionConfig->unk2 = 1;
        transitionConfig->unk4 = 0;
        transitionConfig->unk6 = 0x40;
        transitionConfig->unkA = 0;
        transitionConfig->unk8 = 0xBF;

        stage->unk5A2 = 0;
        if (stage->unk5C5 != 0) {
            gCurTask->main = sub_806C560;
        } else {
            gCurTask->main = sub_806C6A4;
        }
    }
}

void sub_8070C30(struct SpecialStage*);
void sub_806C638(void);

void sub_806C560(void) {
    struct SpecialStage* stage = TaskGetStructPtr(gCurTask);
    u8 unk5B6 = stage->unk5B6;
    u8 something = gLoadedSaveGame->unkC[unk5B6];

    if (stage->unk5C7 == 1) {
        s32 temp = --stage->unk5C8;
        if (temp == 0) {
            m4aSongNumStart(MUS_SPECIAL_STAGE_RESULT);
            stage->unk5C7 = temp;
        }
    }

    if (!GetBit(something, stage->unk5B8)) {
        sub_8070C30(stage);
        gLoadedSaveGame->unkC[unk5B6] |= 1 << stage->unk5B8;
        stage->unk5A2 = 0x78;
    } else {
        stage->unk5A2 = 0xC;
    }

    if ((gLoadedSaveGame->unkC[unk5B6] & 0x7F) == 0x7F) {
        gLoadedSaveGame->unkC[unk5B6] = 0xFF;
    }

    gCurTask->main = sub_806C638;
}

void sub_806C638(void) {
    struct SpecialStage* stage = TaskGetStructPtr(gCurTask);

    if (stage->unk5C7 == 1) {
        s32 temp = --stage->unk5C8;
        if (temp == 0) {
            m4aSongNumStart(MUS_SPECIAL_STAGE_RESULT);
            stage->unk5C7 = temp;
        }
    }

    stage->unk5A2--;

    if (stage->unk5A2 < 1) {
        stage->unk5A2 = 0;
        gCurTask->main = sub_806C6A4;
    }
}

void sub_806C6A4(void) {
    struct SpecialStage* stage = TaskGetStructPtr(gCurTask);
    if (sub_802D4CC(&stage->unk88) == 0) {
        return;
    }
    
    stage->unk5A2++;
    if (stage->unk5A2 > 0x77) {
        s32 temp2, temp3, temp4;
        s32 temp = stage->unk5B0;

        if (stage->unkC != NULL) {
            TaskDestroy(stage->unkC);
            stage->unkC = NULL;
        }

        if (stage->unk10 != NULL) {
            TaskDestroy(stage->unk10);
            stage->unk10 = NULL;
        }

        temp4 = gUnknown_03005450;
        gUnknown_03005450 += temp;

        temp2 = Div(gUnknown_03005450, 50000);
        temp3 = Div(temp4, 50000);

        if (temp2 != temp3 && gGameMode == GAME_MODE_SINGLE_PLAYER) {
            u16 temp5 = (temp2 - temp3);
            temp5 += gUnknown_03005448;

            if (temp5 > 0xFF) {
                temp5 = 0xFF;
            }

            gUnknown_03005448 = temp5;
        }

        gLoadedSaveGame->unk374 += stage->unk5A4;

        TasksDestroyAll();
        gUnknown_03002AE4 = gUnknown_0300287C;
        gUnknown_03005390 = 0;
        gUnknown_03004D5C = gUnknown_03002A84;
        WriteSaveGame();
        sub_801A770();
    }
}

void sub_806C7B8(void) {
    struct SpecialStage* stage = TaskGetStructPtr(gCurTask);

    if (stage->unk5BE > 0) {
        stage->unk5BE--;
        return;
    }

    if (stage->unk5BD > 0) {
        stage->unk5BD--;
    } else if (stage->unk5BC > 0) {
        stage->unk5BC--;
        stage->unk5BD = 9;
    } else if (stage->unk5BB > 0) {
        stage->unk5BB--;
        stage->unk5BC = 9;
        stage->unk5BD = 9;
    } else {
        stage->unk5BB = 0;
        stage->unk5BC = 0;
        stage->unk5BD = 0;
        stage->unk5BE = 0;

        if (stage->unk5B4 != 7) {
            stage->unk5B4 = 6;
        }
        return;
    }

    stage->unk5BE = 0x3B;
}

void sub_806C864(void) {
    struct SpecialStage* stage = TaskGetStructPtr(gCurTask);

    if (stage->unk5BA == 1) {
        if (gPressedKeys & (DPAD_UP | DPAD_DOWN)) {
            u8 temp = stage->unk5C6;

            if (gPressedKeys & DPAD_UP) {
                stage->unk5C6 = 0;
            }

            if (gPressedKeys & DPAD_DOWN) {
                stage->unk5C6 = 1;
            }

            if (temp != stage->unk5C6) {
                m4aSongNumStart(SE_MENU_CURSOR_MOVE);
            }
            return;
        }

        if (gPressedKeys & A_BUTTON) {
            if (stage->unk5C6 == 0) {
                stage->unk5BA = 0;
                gPressedKeys &= ~A_BUTTON;
                return;
            }
            TasksDestroyAll();
            gUnknown_03002AE4 = gUnknown_0300287C;
            gUnknown_03005390 = 0;
            gUnknown_03004D5C = gUnknown_03002A84;
            CreateTitleScreenAndSkipIntro();
            return;
        }
    }

    if (gPressedKeys & START_BUTTON) {
        stage->unk5BA = stage->unk5BA == 0 ? 1 : 0;
        stage->unk5C6 = 0;
    }
}

void sub_806C950(UNUSED struct Task* t) {
    gUnknown_03004D54 = &gUnknown_03001B60[0];
    gUnknown_030022C0 = &gUnknown_03001B60[1];
}

void sub_806BCB8(void);
void sub_806CA88(struct UNK_0808B3FC_UNK240* obj, s8 target, u32 size, u16 c, u32 assetId, s16 xPos, s16 yPos, u16 g, u8 h, u8 focused);

void sub_806C970(void) {
    struct SpecialStage* stage = TaskGetStructPtr(gCurTask);
    sub_806BCB8();
    sub_806CA88(&stage->unk18, RENDER_TARGET_SCREEN, 0x28, 0x37C, 0, 0x78, 0x50, 0, 0, 0);

    stage->unk5B4 = 1;
    m4aSongNumStart(MUS_SPECIAL_STAGE_INTRO);

    gCurTask->main = sub_806BD28;
}

void sub_806C9CC(void) {
    struct SpecialStage* stage = TaskGetStructPtr(gCurTask);

    if (sub_802D4CC(&stage->unk88) != 0) {
        stage->unk5A2 = 0;
        stage->unk5B4 = 4;
        m4aSongNumStart(MUS_SPECIAL_STAGE);
        gCurTask->main = sub_806BE40;
    }
}

void sub_806CA18(void) {
    struct SpecialStage* stage = TaskGetStructPtr(gCurTask);

    gBldRegs.bldY = 0;
    gBldRegs.bldCnt = 0;
    gBldRegs.bldAlpha = 0;

    stage->unk5A2++;

    if (stage->unk5A2 > 0xb3) {
        gCurTask->main = sub_806C158;
    }
}

void sub_806CA54(void) {
    struct SpecialStage* stage = TaskGetStructPtr(gCurTask);
    stage->unk5A2++;

    if (stage->unk5A2 > 0x3B) {
        stage->unk5A2 = 0;
        gCurTask->main = sub_806C25C;
    }
}

/** special_stage_utils.c */

// same function in profile.c
void sub_806CA88(struct UNK_0808B3FC_UNK240* obj, s8 target, u32 size, u16 c, u32 assetId, s16 xPos, s16 yPos, u16 g, u8 h, u8 focused) {
    struct UNK_0808B3FC_UNK240 newObj;
    struct UNK_0808B3FC_UNK240* element;
    element = &newObj;
   
    if (obj != NULL) {
        element = obj;
    }

    if (target != 0) {
        if (gUnknown_03005B58 == NULL) {
            gUnknown_03005B58 = gUnknown_03005B5C;
        }
        element->unk4 = gUnknown_03005B58;
    } else {
        element->unk4 = gUnknown_03005B5C;
    }
    
    element->unk8 = 0;
    element->unkA = c;
    element->unk10 = assetId;
    element->unk16 = xPos;
    element->unk18 = yPos;
    element->unk1A = g << 6;
    element->unk1C = 0;
    element->unk1E = 0xffff;
    element->unk20 = h;
    element->unk21 = 0xff;
    element->unk22 = 0x10;
    element->unk25 = focused;
    element->unk28 = -1;

    sub_8004558(element);

    switch(target) {
        case RENDER_TARGET_SCREEN:
            gUnknown_03005B5C += size * TILE_SIZE_4BPP;
            // if we render to screen then the sub menu address should reset
            ResetSpecialStateScreenSubMenuVram();
            break;
        case RENDER_TARGET_SUB_MENU:
            gUnknown_03005B58 += size * TILE_SIZE_4BPP;
            break;
    }
}

u32 sub_806CB84(struct UNK_806CB84* a, struct UNK_806BD94_UNK874* unk874, struct SpecialStage* stage) {
    struct UNK_806E6E8* unkE6E8 = TaskGetStructPtr(stage->unk4);
    s32 r9;
    s32 r4;
    s16 val2, val;

    {
        u16 deg = -stage->unk5A0 & 0x3FF;
        s32 r2 = (gSineTable[deg] * 4);
        s32 r5 = gSineTable[(deg) + 0x100];
        s32 temp_r4 = (-unk874->unk0 + stage->unk594);
        s32 r3 = (-unk874->unk4 + stage->unk598);
        r9 = (((r2 >> 8) * (r3 >> 8)) + ((r5 >> 6) * (temp_r4 >> 8))) >> 2;
        r4 = (((-r2 >> 8) * (temp_r4 >> 8)) + ((r5 >> 6) * (r3 >> 8))) >> 1;
    }

    {
        s32 unk590 = stage->unk590;
        s32 unk94 = stage->unk94[stage->unk5D1][1];
    
        if (r4 <= unk590 || r4 >= unk94) {
            return 0;
        }
    }

    val2 = stage->unk5D2;
    val = stage->unk5D3;

    while (val2 != 0) {
        if (val >= 0xA0) {
            val -= val2 >> 1;
        } else if (val < stage->unk5D1) {
            val += val2 >> 1;
        } else if (stage->unk94[val][1] > r4) {
            val += val2 >> 1;
        } else if (stage->unk94[val][1] < r4) {
            val -= val2 >> 1;
        } else {
            val = val2;
            break;
        }
        val2 >>= 1;
    }
    

    {
        s32 r2 = (-(stage->unk94[val][0] >> 1) * 9) >> 3;
        s32 r8 = ((stage->unk94[val][0] >> 1) * 9) >> 3;
        
        if (r9 <= r2 || r9 >= r8) {
            return 0;
        }
        a->unkA = val;
        a->unk4 = (a->unkA - unk874->unkE) - ((unk874->unk12 << 0x10) / unkE6E8->unkC[val]);
        a->unk8 = (0x78 - ((r9 * 0x87) / r8));
        a->unk2 = a->unk8 - unk874->unkC;
        if (unk874->unk8 != 0) {
            a->unk6 = (((unk874->unk8 << 3) / unkE6E8->unkC[val]) * 9) >> 2;
        } else {
            a->unk6 = 0;
        }
    
        a->unkC = unkE6E8->unkC[val] >> 8;
        a->unk12 = a->unkC;
    
        a->unk10 = 0;
        a->unkE = 0; 
    }

    return 1;
}

void sub_806CD68(struct UNK_0808B3FC_UNK240* element) {
    u16* reference;
    OamData* oam;
    u32 unk16, unk18;
    u16 unkC_6;
    u16 unkC_4;
    s16 unkC_2;

    s16 i;
    // Might be wrong, seems to make sense?
    struct UNK_0808B3FC_UNK240_UNKC* unkC = (void*)element->unkC;
    
    element->unk24 = unkC->unk2;
    unkC_4 = unkC->unk4;
    unkC_6 = unkC->unk6;
    unk16 = (s16)element->unk16 - (unkC_4 >> 1);
    unk18 = (s16)element->unk18 - (unkC_6 >> 1);

    unkC_2 = unkC->unk2;
    for (i = 0; i < unkC_2; i++) {
        u32 attr1_2;
        reference = gUnknown_03002794->oamData[element->unkA];
        oam = sub_80058B4((element->unk1A & 0x7C0) >> 6);
        if (oam == iwram_end) {
            return;
        }

        if (i == 0) {
            element->unk23 = gUnknown_030018F0 - 1;
        }

        DmaCopy16(3, &reference[(unkC->unk1 + i) * 3], oam, 0x6);
        attr1_2 = oam->all.attr1 & 0x1FF;
        oam->all.attr0 = (unk18 + (oam->all.attr0 & 0xff)) & 0xff;
        oam->all.attr0 |=  0x300;
        oam->all.attr1 &= 0xfe00;
        oam->all.attr1 |= ((element->unk10 & 0x1f) << 9);
        oam->all.attr1 |=  ((unk16 + attr1_2) & 0x1ff);
        oam->all.attr2 += element->unk25 * 0x1000;
        oam->all.attr2 |= ((element->unk10 & 0x3000) >> 2);
        oam->all.attr2 += (((u32)element->unk4 - OBJ_VRAM0) >> 5);
    }
}

void sub_806CEA8(void) {
    gUnknown_03005B5C = (void*)OBJ_VRAM0;
    gUnknown_03005B58 = NULL;
}

void sub_806CEC4(struct Unk_03002400* background, u32 a, u32 b, u8 assetId, u16 d, u16 e, u16 f, u8 g, u16 h, u16 i) {
    background->unk4 = BG_CHAR_ADDR(a);
    background->unkA = 0;
    background->unkC = BG_SCREEN_ADDR(b);
    background->unk18 = 0;
    background->unk1A = 0;
    background->unk1C = assetId;
    background->unk1E = 0;
    background->unk20 = 0;
    background->unk22 = 0;
    background->unk24 = 0;
    background->unk26 = d;
    background->unk28 = e;
    background->unk2A = f;
    background->unk2B = 0;
    background->unk2C = 0;
    background->unk2E = g;
    background->unk30 = h;
    background->unk32 = i;
    sub_8002A3C(background);
}

/** special_stage_player.c **/

s16 sub_806CF44(const struct UNK_80DF670 *spriteConfig) {
    s16 result = 0;

    while (spriteConfig->unk0 != 0xFFFF) {
        if (result < spriteConfig->unk4) {
            result = spriteConfig->unk4;
        }
        spriteConfig++;
    }

    return result;
}


// character sprites
extern const struct UNK_80DF670* const gUnknown_080DF670[5];

extern const s16 gUnknown_080DF9D8[7][3];

extern const struct UNK_80DF670 gUnknown_080DF668;

void sub_806D2C8(void);

void sub_806D548(struct UNK_0808B3FC_UNK240* element, void*, s16, u8, const struct UNK_80DF670*);
struct Task* sub_806CF78(struct SpecialStage* stage) {
    const struct UNK_80DF670* unkF670[5];
    u8 lang;
    s16 result;
    u32 unk5B5C;
    void* ram;
    u32 temp;

    struct Task* t;
    struct UNK_806CF78* unkCF78;

    memcpy(&unkF670, &gUnknown_080DF670, 0x14);
    lang = stage->unk5B8;

    t = TaskCreate(sub_806D2C8, 0x108, 0x9000, 0, NULL);
    unkCF78 = TaskGetStructPtr(t);
    unkCF78->unk0 = stage;
    unkCF78->unk4 = NULL;
    unkCF78->unkA8 = gUnknown_080DF9D8[lang][0] << 0x10;
    unkCF78->unkAC = gUnknown_080DF9D8[lang][1] << 0x10;

    unkCF78->unkB0 = 0;
    unkCF78->unkB2 = gUnknown_080DF9D8[lang][2];
    unkCF78->unkB4 = 0;
    unkCF78->unkB6 = 0x96;
    unkCF78->unkBC = 0;
    unkCF78->unkBE = 0;
    unkCF78->unkC0 = 1;

    unkCF78->unkC4 = unkF670[stage->unk5B6];
    result = sub_806CF44(unkCF78->unkC4);
    unkCF78->unk98 = gUnknown_03005B5C;
    gUnknown_03005B5C += (result * TILE_SIZE_4BPP);
    unkCF78->unk9C = gUnknown_03005B5C;
    unkCF78->unkA0 = gUnknown_03005B5C + 0x40;

    // required for match
    temp = 2;

    gUnknown_03005B5C += 0xC0;

    sub_806D548(&unkCF78->unk8, unkCF78->unk98, stage->unk5CC, 9, unkCF78->unkC4);
    sub_806D548(&unkCF78->unk38, unkCF78->unk9C, stage->unk5CC, 10, &gUnknown_080DF668);

    {
        struct UNK_0808B3FC_UNK240* element = &unkCF78->unk68;
        u16* affine = &gOamBuffer[120].all.affineParam;

        element->unk4 = unkCF78->unkA0;
        element->unk8 = 0;
        element->unkA = 0x37A;
        element->unk10 = 0x107E;
        element->unk16 = 0x78;
        element->unk18 = 0x50;
        element->unk1A = 0;
        element->unk1C = 0;
        element->unk1E = -1;
        
        element->unk20 = temp;
        element->unk21 = -1;
        element->unk22 = 0x10;
        element->unk25 = 0;
        element->unk28 = -1;
        
        if (stage->unk5BA == 0) {
            sub_8004558(element);
        }

        *affine = 0x100;
        affine+=4;
        *affine = 0;
        affine+=4;
        *affine = 0;
        affine+=4;
        *affine= 0x100;
    }

    if (stage->unk5B7 == 0) {
        unkCF78->unkC8 = 0;
        unkCF78->unkCC = 6;
        unkCF78->unkD0 = 0x10000;
        unkCF78->unkD4 = 0x10000;
        unkCF78->unkD8 = 0x28;
        unkCF78->unkDC = -0x2B;
        unkCF78->unkE0 = -0x15E;
        unkCF78->unkE4 = 0x2C80;
        unkCF78->unkE8 = 0x3F80;
        unkCF78->unkEC = 0x502;
        unkCF78->unkEE = 0x8C0;
        unkCF78->unkF0 = 0x14;
        unkCF78->unkF2 = -0x28;
        unkCF78->unkF4 = -0x36;
        unkCF78->unkF6 = -0x48;
        unkCF78->unk100 = -0x10;
        unkCF78->unk104 = -8;
        unkCF78->unkF8 = 0x800;
        unkCF78->unkFA = -0x80;
        unkCF78->unkFC = 0x600;
        unkCF78->unkFE = -0x40;
    } else {
        unkCF78->unkC8 = 0;
        unkCF78->unkCC = 0;
        unkCF78->unkD0 = 0xC00;
        unkCF78->unkD4 = 0x7FFF;
        unkCF78->unkD8 = 0x100;
        unkCF78->unkDC = 0x800;
    }

    return t;
}

typedef void (*TaskFunc_80DF684)(void);

extern TaskFunc_80DF684 const gUnknown_080DF684[18];

void sub_806D788(void);

void sub_806D2C8(void) {
    TaskFunc_80DF684 funcs[18];
    struct UNK_0808B3FC_UNK240 *unk8, *unk38;
    
    struct UNK_806CF78* unkCF78 = TaskGetStructPtr(gCurTask);
    struct SpecialStage* stage = unkCF78->unk0;

    memcpy(funcs, gUnknown_080DF684, sizeof(gUnknown_080DF684));

    if (stage->unk5BA == 0) {
        funcs[unkCF78->unkB4 + 1]();
        sub_806D788();
    } else {
        funcs[0]();
    }

    unk8 = &unkCF78->unk8;
    unk38 = &unkCF78->unk38;
    
    if (unkCF78->unkB6 != 0 && stage->unk5BA == 0) {
        if ((--unkCF78->unkB6) & 2) {
            sub_80051E8(unk8);
            if (unkCF78->unkB4 < 0xE) {
                sub_80051E8(unk38);
            }
        }
    } else {
        sub_80051E8(unk8);
        if (unkCF78->unkB4 < 0xE) {
            sub_80051E8(unk38);
        }
    }
}

void sub_806D7D0(struct UNK_0808B3FC_UNK240* element, s16, s16, const struct UNK_80DF670*);
void sub_806D830(struct UNK_0808B3FC_UNK240* element, s16, s16, const struct UNK_80DF670*);

// Animations for different player speeds

// Stopped?
void sub_806D388(void) {
    struct UNK_806CF78* unkCF78 = TaskGetStructPtr(gCurTask);
    struct SpecialStage* stage = unkCF78->unk0;
    const struct UNK_80DF670* unkC4;
    struct UNK_0808B3FC_UNK240* unk8;
    u32 index = 0;
    
    if (stage->unk5B4 != 8) {
        if (gInput & DPAD_LEFT) {
            index = 1;
        } else if (gInput & DPAD_RIGHT) {
            index = 2;
        }
    }

    unkC4 = &unkCF78->unkC4[index];
    unk8 = &unkCF78->unk8;

    sub_806D7D0(unk8, -1, stage->unk5CC, unkC4);

    if (stage->unk5B4 == 8) {
        sub_80051E8(unk8);
        sub_806D830(unk8, -1, stage->unk5CC, unkC4);
    }
}

// Moving?
void sub_806D424(void) {
    struct UNK_806CF78* unkCF78 = TaskGetStructPtr(gCurTask);
    struct SpecialStage* stage = unkCF78->unk0;

    const struct UNK_80DF670* unkC4;
    struct UNK_0808B3FC_UNK240* unk8;

    u32 index = 3;
    if (gInput & DPAD_LEFT) {
        index = 4;
    } else if (gInput & DPAD_RIGHT) {
        index = 5;
    }

    unkC4 = &unkCF78->unkC4[index];
    unk8 = &unkCF78->unk8;
    sub_806D7D0(unk8, unkCF78->unkA4, stage->unk5CC, unkC4);
}

// Running?
void sub_806D484(void) {
    struct UNK_806CF78* unkCF78 = TaskGetStructPtr(gCurTask);
    struct SpecialStage* stage = unkCF78->unk0;

    const struct UNK_80DF670* unkC4;
    struct UNK_0808B3FC_UNK240* unk8;

    u32 index = 6;
    if (gInput & DPAD_LEFT) {
        index = 7;
    } else if (gInput & DPAD_RIGHT) {
        index = 8;
    }

    unkC4 = &unkCF78->unkC4[index];
    unk8 = &unkCF78->unk8;
    sub_806D7D0(unk8, unkCF78->unkA4, stage->unk5CC, unkC4);
}

// Sprinting?
void sub_806D4E4(void) {
    struct UNK_806CF78* unkCF78 = TaskGetStructPtr(gCurTask);
    struct SpecialStage* stage = unkCF78->unk0;

    const struct UNK_80DF670* unkC4;
    struct UNK_0808B3FC_UNK240* unk8;

    u32 index = 9;
    if (gInput & DPAD_LEFT) {
        index = 10;
    } else if (gInput & DPAD_RIGHT) {
        index = 11;
    }

    unkC4 = &unkCF78->unkC4[index];
    unk8 = &unkCF78->unk8;
    sub_806D7D0(unk8, unkCF78->unkA4 >> 1, stage->unk5CC, unkC4);
}

void sub_806D548(struct UNK_0808B3FC_UNK240* element, void* vram, s16 a, u8 b, const struct UNK_80DF670* c4) {
    u32 unk10 = 0x1000;
    if (c4->unk7 & 1) {
        unk10 |= 0x400;
    }

    if (c4->unk7 & 2) {
        unk10 |= 0x800;
    }

    element->unk4 = vram;
    element->unk8 = 0;
    element->unkA = c4->unk0;
    element->unk10 = unk10;
    element->unk16 = 0x78;
    element->unk18 = a;
    element->unk1A = b << 6;
    element->unk1C = 0;
    element->unk1E = 0xffff;
    element->unk20 = c4->unk2;
    element->unk21 = 0xff;
    element->unk22 = c4->unk6;
    element->unk25 = 0;
    element->unk28 = -1;
    sub_8004558(element);
}

UNUSED static void sub_806D5CC(void) {}

#define Macro_806D4E(val, val2) ({\
    ((val) >> 4) + (val2); \
})\

void sub_806D5D0(void) {
    struct UNK_806CF78* unkCF78 = TaskGetStructPtr(gCurTask);
    struct SpecialStage* stage = unkCF78->unk0;
    
    const struct UNK_80DF670* unkC4 = &unkCF78->unkC4[12];
    unkCF78->unkB0 += unkCF78->unkB8 >> 4;

    sub_806D7D0(&unkCF78->unk8, -1, stage->unk5CC - Macro_806D4E(unkCF78->unkB0, 0xF), unkC4);
}

void sub_806D634(void) {
    struct UNK_806CF78* unkCF78 = TaskGetStructPtr(gCurTask);
    struct SpecialStage* stage = unkCF78->unk0;
    const struct UNK_80DF670* unkC4 = &unkCF78->unkC4[15];

    unkCF78->unkB0 += unkCF78->unkB8 >> 4;

    sub_806D7D0(&unkCF78->unk8, -1, stage->unk5CC - Macro_806D4E(unkCF78->unkB0, 10), unkC4);
}

void sub_806D698(void) {
    struct UNK_806CF78* unkCF78 = TaskGetStructPtr(gCurTask);
    struct SpecialStage* stage = unkCF78->unk0;
    const struct UNK_80DF670* unkC4 = &unkCF78->unkC4[18];

    sub_806D7D0(&unkCF78->unk8, -1, stage->unk5CC, unkC4);
}

void sub_806D6DC(void) {
    struct UNK_806CF78* unkCF78 = TaskGetStructPtr(gCurTask);
    struct SpecialStage* stage = unkCF78->unk0;
    const struct UNK_80DF670* unkC4 = &unkCF78->unkC4[19];

    unkCF78->unkB0 += unkCF78->unkB8 >> 4;

    sub_806D7D0(&unkCF78->unk8, -1, stage->unk5CC - Macro_806D4E(unkCF78->unkB0, 10), unkC4);
}

void sub_806D740(void) {
    struct UNK_806CF78* unkCF78 = TaskGetStructPtr(gCurTask);
    struct SpecialStage* stage = unkCF78->unk0;
    const struct UNK_80DF670* unkC4 = &unkCF78->unkC4[20];

    sub_806D7D0(&unkCF78->unk8, -1, stage->unk5CC - 0xC, unkC4);
}

void sub_806D788(void) {
    struct UNK_806CF78* unkCF78 = TaskGetStructPtr(gCurTask);
    if (unkCF78->unkBC != 0) {
        s32 temp = --unkCF78->unkBC;
        if (temp == 0) {
            unkCF78->unkBE = temp;
            unkCF78->unkC0 = 1;
        }
    }
}

void sub_806D7D0(struct UNK_0808B3FC_UNK240* element, s16 a, s16 b, const struct UNK_80DF670* anim) {
    u32 unk10 = 0x1000;
    if (anim->unk7 & 1) {
        unk10 |= 0x400;
    }

    if (anim->unk7 & 2) {
        unk10 |= 0x800;
    }
    element->unkA = anim->unk0;
    element->unk10 = unk10;
    element->unk18 = b;
    element->unk20 = anim->unk2;

    element->unk22 = a != -1 ? a : 0x10;
    sub_8004558(element);
}

void sub_806D830(struct UNK_0808B3FC_UNK240* element, s16 a, s16 b, const struct UNK_80DF670* anim) {
    u8 unk22;
    u32 unk10 = 0x1100;
    if (anim->unk7 & 1) {
        unk10 |= 0x400;
    }

    if (anim->unk7 & 2) {
        unk10 |= 0x800;
    }
    element->unkA = anim->unk0;
    element->unk10 = unk10;
    element->unk18 = b;
    element->unk20 = anim->unk2;

    element->unk22 = a != -1 ? a : 0x10;
    sub_8004558(element);
}
