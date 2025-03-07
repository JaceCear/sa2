#include "global.h"
#include "cut_scenes_credits.h"
#include "main.h"
#include "game.h"
#include "sprite.h"
#include "transition.h"
#include "task.h"
#include "m4a.h"
#include "save.h"

#include "constants/animations.h"
#include "constants/songs.h"

struct ExtraEndingCutSceneSlides {
    Background unk0;
    struct UNK_802D4CC_UNK270 unk40;
    u16 unk4C;
}; /* 0x50 */

void sub_8091590(void);
void sub_8091680(struct Task *);

void CreateExtraEndingSlidesCutScene(void)
{
    struct Task *t = NULL;
    struct ExtraEndingCutSceneSlides *scene;
    Background *background;
    struct UNK_802D4CC_UNK270 *transitionConfig = NULL;

    gDispCnt = 0x1140;
    gBgCntRegs[0] = 0x5C00;
    gBgScrollRegs[0][0] = 0;
    gBgScrollRegs[0][1] = 0;
    gUnknown_03004D80[0] = 0;
    gUnknown_03002280[0] = 0;
    gUnknown_03002280[1] = 0;
    gUnknown_03002280[2] = 0xFF;
    gUnknown_03002280[3] = 0x20;

    t = TaskCreate(sub_8091590, 0x50, 0x3100, 0, sub_8091680);
    scene = TaskGetStructPtr(t);

    scene->unk4C = 0xF0;

    transitionConfig = &scene->unk40;
    transitionConfig->unk2 = 1;
    transitionConfig->unk0 = 1;
    transitionConfig->unk4 = 0;
    transitionConfig->unk6 = 0x80;
    transitionConfig->unk8 = 0x3FFF;
    transitionConfig->unkA = 0;

    background = &scene->unk0;
    background->unk4 = BG_SCREEN_ADDR(0);
    background->unkA = 0;
    background->unkC = BG_SCREEN_ADDR(28);
    background->unk18 = 0;
    background->unk1A = 0;
    background->unk1C = 0xD2;
    background->unk1E = 0;
    background->unk20 = 0;
    background->unk22 = 0;
    background->unk24 = 0;
    background->unk26 = 0x1E;
    background->unk28 = 0x14;
    background->unk2A = 0;
    background->unk2E = 0;
    sub_8002A3C(background);
}

void sub_8091608(void);

void sub_8091590(void)
{
    struct ExtraEndingCutSceneSlides *scene = TaskGetStructPtr(gCurTask);
    struct UNK_802D4CC_UNK270 *transitionConfig = &scene->unk40;

    transitionConfig->unk2 = 2;
    if (sub_802D4CC(transitionConfig) == 1) {
        transitionConfig->unk4 = 0;
        gCurTask->main = sub_8091608;
    }
}

void sub_8091638(void);

void sub_80915CC(void)
{
    struct ExtraEndingCutSceneSlides *scene = TaskGetStructPtr(gCurTask);
    struct UNK_802D4CC_UNK270 *transitionConfig = &scene->unk40;

    transitionConfig->unk2 = 1;
    if (sub_802D4CC(transitionConfig) == 1) {
        transitionConfig->unk4 = 0;
        gCurTask->main = sub_8091638;
    }
}

void sub_8091608(void)
{
    struct ExtraEndingCutSceneSlides *scene = TaskGetStructPtr(gCurTask);

    if (scene->unk4C != 0) {
        scene->unk4C--;
    } else {
        scene->unk4C = 0xF0;
        gCurTask->main = sub_80915CC;
    }
}

void sub_8091638(void)
{
    struct ExtraEndingCutSceneSlides *scene = TaskGetStructPtr(gCurTask);

    if (scene->unk4C != 0) {
        scene->unk4C--;
        if (scene->unk4C == 0x3C) {
            m4aSongNumStart(MUS_STAFF_CREDITS);
        }
    } else {
        CreateCreditsCutScene(CREDITS_VARIANT_EXTRA_ENDING, 0, 0);
        TaskDestroy(gCurTask);
    }
}

void sub_8091680(struct Task *t)
{
    // unused logic
}
