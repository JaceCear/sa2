#ifndef GUARDS_ANIMATIONS_H
#define GUARDS_ANIMATIONS_H

#include "constants/text.h" // for language-specific stuff

/* Collection of animation indices for Sonic Advance 1, 2 and 3.
 * - By JaceCear
 */

// "x_PROJ" means "projectile belonging to x"

/* -- Sonic Advance 1 -- */
#if 0
#define SA1_ANIM_SONIC_IDLE    0
#define SA1_ANIM_TAILS_IDLE    99
#define SA1_ANIM_KNUCKLES_IDLE 199
#define SA1_ANIM_AMY_IDLE      298

// Enemies
#define SA1_ANIM_KIKI          401
#define SA1_ANIM_KIKI_PROJ     402
#define SA1_ANIM_BUZZER        403
#define SA1_ANIM_GAMIGAMI      404
#define SA1_ANIM_RHINOTANK     405
#define SA1_ANIM_KEROKERO      406

#define SA1_ANIM_SENBON   411
#define SA1_ANIM_TENTOU   412
#define SA1_ANIM_FIREBALL 413
#define SA1_ANIM_HANABII  415

#define SA1_ANIM_SLOT    417
#define SA1_ANIM_PIERROT 418

#define SA1_ANIM_YUKIMARU 422
#define SA1_ANIM_DRISAME  424
#define SA1_ANIM_KURA     425
#define SA1_ANIM_PEN      426

#define SA1_ANIM_LEON       430
#define SA1_ANIM_WAMU       431
#define SA1_ANIM_MIRROR     432
#define SA1_ANIM_OCTO       433
#define SA1_ANIM_MOLE       434

// Interactables
#define SA1_ANIM_CHECKPOINT 452
#define SA1_ANIM_GOAL       453
#define SA1_ANIM_SPIKES     454
#define SA1_ANIM_SPRING     455

#define SA1_ANIM_FALLING_BOULDER 457
#define SA1_ANIM_ROCK            458

#define SA1_ANIM_TRAMPOLINE      461
#define SA1_ANIM_PLATFORM_WOODEN 462
#define SA1_ANIM_PLATFORM_NGH    463

#define SA1_ANIM_BOUNCE_BAR       468
#define SA1_ANIM_FLAG_H           469
#define SA1_ANIM_FLAG_V           470
#define SA1_ANIM_BOOSTER          471
#define SA1_ANIM_BOOSTER_VERT     472
#define SA1_ANIM_SPLASH_NGH_ACT2  473
#define SA1_ANIM_SPLASH_ON_PLAYER 474
#define SA1_ANIM_BUMPER_RIGHTANG  475
#define SA1_ANIM_BUMPER_TRI_H     476
#define SA1_ANIM_BUMPER_TRI_V     477
#define SA1_ANIM_FLIPPER          478
#define SA1_ANIM_BALLOON_BLUE     479
#define SA1_ANIM_BALLOON_RED      480
#define SA1_ANIM_BALLOON_YELLOW   481

#define SA1_ANIM_BUMPER_BIG       484
#define SA1_ANIM_BUMPER_ROUND     485
#define SA1_ANIM_BIG_BOWL_CAS_PAR 486
#define SA1_ANIM_GOROUND_CAS_PAR  487
#define SA1_ANIM_CHAR_RESIZER     488

#define SA1_ANIM_VIKING_SHIP_HOOK        490
#define SA1_ANIM_VIKING_SHIP             491
#define SA1_ANIM_SONIC_CHARS             492
#define SA1_ANIM_CYLINDER_CAS_PAR        493
#define SA1_ANIM_PLATFORM_SQUARE_CAS_PAR 494
#define SA1_ANIM_PLATFORM_HORZ_CAS_PAR   495
#define SA1_ANIM_ONEWAY_TURN_SIDEWAYS    496
#define SA1_ANIM_ONEWAY_TURN_UPDOWN      497
#define SA1_ANIM_GRABBER_SEC_BAS         498

#define SA1_ANIM_GRABBER_SEC_BAS_COPY 500
#define SA1_ANIM_PRESSURE_LID         501

#define SA1_ANIM_HANDLES_SEC_BAS_ANCHOR 503
#define SA1_ANIM_HANDLES_SEC_BAS        504

#define SA1_ANIM_CONVEYOR_BIG      508
#define SA1_ANIM_CONVEYOR_SMALL    509
#define SA1_ANIM_SPIKE_BALL_YELLOW 510

#define SA1_ANIM_PROPELLOR    516
#define SA1_ANIM_SPIKY_BARREL 516

#define SA1_ANIM_MINI_FLIPPER 522
#define SA1_ANIM_ICE_PLATFORM 523

#define SA1_ANIM_LAVA_PLATFORM_ICE_MTN 525

#define SA1_ANIM_AIR_BUBBLES          532
#define SA1_ANIM_MINIBUBBLES          533
#define SA1_ANIM_BLACKYELLOW_SHUTDOOR 534

#define SA1_ANIM_PLATFORM_SPIKE_ANG_ISL_UP     538
#define SA1_ANIM_PLATFORM_SPIKE_ANG_ISL_DOWN   539
#define SA1_ANIM_SPRING_PLATFORM_ANG_ISL       540
#define SA1_ANIM_SPIKE_BALL_BLACK              541
#define SA1_ANIM_WOODWHEEL_ANG_ISL             542
#define SA1_ANIM_PLATFORM_CLOUD                543
#define SA1_ANIM_PLATFORM_SQUARE_ARROW_ANG_ISL 544
#define SA1_ANIM_SILVER_HANDLE                 545
#define SA1_ANIM_BIG_BOWL_ANG_ISL              546
#define SA1_ANIM_ACCEL_PLATFORM_ANG_ISL        547

#define SA1_ANIM_ICE_PLATFORM_SQUARE 555

#define SA1_ANIM_FIRE                558
#define SA1_ANIM_DESTRUCTABLE_PILLAR 559

#define SA1_ANIM_BLACK_PARTICLE 564

/* Version without lid (with lid: SA1_ANIM_PRESSURE_LID) */
#define SA1_ANIM_PRESSURE_TUBE  567

#define SA1_ANIM_BOOSTER_TURNED_CLOCKWISE         570
#define SA1_ANIM_BOOSTER_TURNED_COUNTER_CLOCKWISE 571
#define SA1_ANIM_SPECIAL_SPRING                   572

#define SA1_ANIM_FALLING_BRICK_XZONE 574

#define SA1_ANIM_MAZE_LAUNCHER_HORZ 588
#define SA1_ANIM_MAZE_LAUNCHER_VERT 589

#define SA1_ANIM_MAZE_LAUNCHER_CORNER 592

#define SA1_ANIM_BOSS_1 607

#define SA1_ANIM_BOSS_2 620

#define SA1_ANIM_BOSS_1_INTRO 693

#define SA1_ANIM_ITEMBOX      705
#define SA1_ANIM_ITEMBOX_TYPE 706
#define SA1_ANIM_RING         707

#define SA1_ANIM_TRIANGLE_BLUE 767

#define SA1_ANIM_RING_2 795

#define SA1_ANIM_CRUMBLE_PLATFORM 906
#endif

/* -- Sonic Advance 2 -- */
// In here, Cheese is sometimes treated like a player character, so have an ID for them.
#define SA2_ANIM_CHAR_ID_CHEESE 5

#define SA2_NUM_PLAYER_CHAR_ANIMATIONS (91) // TODO: Don't use constant here
#define SA2_ANIM_CHAR(anim, character)                                                  \
    ((anim) + character * SA2_NUM_PLAYER_CHAR_ANIMATIONS)

// TODO: If possible, make player animations macros, so there's no redundancy
#define SA2_CHAR_ANIM_IDLE                                   0
#define SA2_CHAR_ANIM_BEFORE_COUNTDOWN                       30
#define SA2_CHAR_ANIM_VARIANT_BEFORE_COUNTDOWN_GETTING_READY 0
#define SA2_CHAR_ANIM_VARIANT_BEFORE_COUNTDOWN_LIFTOFF       1

// #define SA2_ANIM_SONIC_IDLE                            0
// #define SA2_ANIM_CREAM_IDLE                            91
// #define SA2_ANIM_TAILS_IDLE                            182
// #define SA2_ANIM_KNUCKLES_IDLE                         273
// #define SA2_ANIM_AMY_IDLE                              364

// Example usage of the macro
#define SA2_ANIM_SONIC_IDLE                            SA2_ANIM_CHAR(SA2_CHAR_ANIM_IDLE, CHARACTER_SONIC)
#define SA2_ANIM_CREAM_IDLE                            SA2_ANIM_CHAR(SA2_CHAR_ANIM_IDLE, CHARACTER_CREAM)
#define SA2_ANIM_TAILS_IDLE                            SA2_ANIM_CHAR(SA2_CHAR_ANIM_IDLE, CHARACTER_TAILS)
#define SA2_ANIM_KNUCKLES_IDLE                         SA2_ANIM_CHAR(SA2_CHAR_ANIM_IDLE, CHARACTER_KNUCKLES)
#define SA2_ANIM_AMY_IDLE                              SA2_ANIM_CHAR(SA2_CHAR_ANIM_IDLE, CHARACTER_AMY)
#define SA2_ANIM_CREAM_HOLDING_ONTO_SONIC              130
#define SA2_ANIM_TAILS_CAPTURED                        222
#define SA2_ANIM_TAILS_FLYING                          223
#define SA2_ANIM_VARIANT_TAILS_FLYING_NORMAL           0
#define SA2_ANIM_VARIANT_TAILS_FLYING_WAVING_AT_PLAYER 1
#define SA2_ANIM_CHEESE_HOVERING                       455
#define SA2_ANIM_CHEESE_SIDEWAYS                       456
#define SA2_ANIM_CHEESE_BACKFLIP                       457
#define SA2_ANIM_CHEESE_NERVOUS                        458
#define SA2_ANIM_CHEESE_PIROUETTE                      459
#define SA2_ANIM_CHEESE_EATING                                                          \
    460 // Not sure about this one. They put their hand to their mouth, but it doesn't
        // have an eating animation
#define SA2_ANIM_CHEESE_LIFTING              461
#define SA2_ANIM_CHEESE_CELEBRATING          462
#define SA2_ANIM_CHEESE_STOMPING             463 // alternatively: SA2_ANIM_CHEESE_CANNON_BALL ?
#define SA2_ANIM_CHEESE_SKY_UPPERCUT         464
#define SA2_ANIM_CHEESE_DYING                465
#define SA2_ANIM_CHEESE_STRUGGLING           466
#define SA2_ANIM_CHEESE_SIDEWAYS_2           467
#define SA2_ANIM_CHEESE_DOWNWARDS            468
#define SA2_ANIM_CHEESE_469                  469
#define SA2_ANIM_CHEESE_WAVING_PLAYER        470
#define SA2_ANIM_SONIC_GOING_SUPER_0         471
#define SA2_ANIM_SONIC_GOING_SUPER_1         472
#define SA2_ANIM_SUPER_SONIC_SIDEWAYS        473
#define SA2_ANIM_SUPER_SONIC_ATTACK_CLOUD    474
#define SA2_ANIM_SUPER_SONIC_STOPPING_ROCKET 475
#define SA2_ANIM_SUPER_SONIC_FROZEN          476
#define SA2_ANIM_CLOUD                       477

// Enemies
#define SA2_ANIM_APE                    478
#define SA2_ANIM_KIKI                   479
#define SA2_ANIM_KIKI_PROJ              480
#define SA2_ANIM_KIKI_PROJ_EXPLOSION    481
#define SA2_ANIM_BUZZER                 482
#define SA2_ANIM_GOHLA                  483
#define SA2_ANIM_GOHLA_PROJ             484
#define SA2_ANIM_KURAKURA               485
#define SA2_ANIM_KURAKURA_PROJ          486
#define SA2_ANIM_KURAKURA_PROJ_FIREBALL 487
#define SA2_ANIM_KUBINAGA               488
#define SA2_ANIM_KUBINAGA_NECK          489
#define SA2_ANIM_KUBINAGA_BASE          490
#define SA2_ANIM_KUBINAGA_PROJ          491
#define SA2_ANIM_KOURA                  492
#define SA2_ANIM_BELL                   493
#define SA2_ANIM_PIKOPIKO               494
#define SA2_ANIM_CIRCUS                 495
#define SA2_ANIM_CIRCUS_PROJ            496
#define SA2_ANIM_YADO                   497
#define SA2_ANIM_YADO_PROJ              498
#define SA2_ANIM_HAMMERHEAD             499
#define SA2_ANIM_PEN                    500
#define SA2_ANIM_BALLOON                501
#define SA2_ANIM_BALLOON_PROJ           502
#define SA2_ANIM_MADILLO                503
#define SA2_ANIM_STRAW                  504
#define SA2_ANIM_BULLETBUZZER           505
#define SA2_ANIM_BUZZER_PROJ            506
#define SA2_ANIM_FLICKEY                507
#define SA2_ANIM_FLICKEY_PROJ           508
#define SA2_ANIM_KYURA                  509
#define SA2_ANIM_KYURA_PROJ             510
#define SA2_ANIM_STAR                   511
#define SA2_ANIM_GEJIGEJI               512
#define SA2_ANIM_MOUSE                  513
#define SA2_ANIM_SPINNER                514

// Animals
#define SA2_ANIM_ANIMAL_SEAL      515
#define SA2_ANIM_ANIMAL_GORILLA   516
#define SA2_ANIM_ANIMAL_PEACOCK   517
#define SA2_ANIM_ANIMAL_LION      518
#define SA2_ANIM_ANIMAL_MOLE      519
#define SA2_ANIM_ANIMAL_PARROT    520
#define SA2_ANIM_ANIMAL_PENGUIN   521
#define SA2_ANIM_ANIMAL_RABBIT    522
#define SA2_ANIM_ANIMAL_SEA_OTTER 523
#define SA2_ANIM_ANIMAL_DEER      524
#define SA2_ANIM_ANIMAL_SKUNK     525
#define SA2_ANIM_ANIMAL_ROBIN     526
#define SA2_ANIM_ANIMAL_KANGAROO  527
#define SA2_ANIM_ANIMAL_KOALA     528
#define SA2_ANIM_ANIMAL_ELEPHANT  529

// Interactable
#define SA2_ANIM_LEVEL_START_MACHINE 530
#define SA2_ANIM_CHECKPOINT          531
#define SA2_ANIM_GOAL_LEVER          532
#define SA2_ANIM_WATER_SPLASH        533
#define SA2_ANIM_534                 534

#define SA2_ANIM_LEAF_FOREST_GROUND_TILE 535
#define SA2_ANIM_SPRING                  536
#define SA2_ANIM_SPRING_BOUNCY           537
#define SA2_ANIM_BOUNCY_BAR              538
#define SA2_ANIM_PLATFORM_LF_WIDE        539
#define SA2_ANIM_BOOSTER                 540
#define SA2_ANIM_PLATFORM_LEA_FOR        541
#define SA2_ANIM_SPIKES                  542
#define SA2_ANIM_RAMP                    543

#define SA2_ANIM_ROTATING_HANDLE   546
#define SA2_ANIM_FLOWER_YELLOW     547
#define SA2_ANIM_FLOWER_RED_SMALL  548
#define SA2_ANIM_FLOWER_BLUE       549
#define SA2_ANIM_FLOWER_BLUE_SMALL 550
#define SA2_ANIM_ROCK              551
#define SA2_ANIM_552               552

#define SA2_ANIM_WATER_GROUND_SPLASH 560

#define SA2_ANIM_THROW_CRANE_HOOK 564
#define SA2_ANIM_THROW_CRANE      565
#define SA2_ANIM_PLATFORM_HOT_CRA 566
#define SA2_ANIM_TURNAROUND_BAR   567
#define SA2_ANIM_SPRING_PLATFORM  568

#define SA2_ANIM_DRUM             570
#define SA2_ANIM_SPRING_UNKNOWN   571
#define SA2_ANIM_SPRING_MUS_PLA   572
#define SA2_ANIM_SPRING_MUS_PLA_2 573
#define SA2_ANIM_DICE             574
#define SA2_ANIM_NOTE_BLOCK       575
#define SA2_ANIM_LONE_NOTE        576
#define SA2_ANIM_YELLOW_STAR      577
#define SA2_ANIM_SMOKE            578

#define SA2_ANIM_SPIKES_MUS_PLA   580
#define SA2_ANIM_PLATFORM_ICE_PAR 581
#define SA2_ANIM_SNOWBALL         582

#define SA2_ANIM_LAUNCH_RING      584
#define SA2_ANIM_CROSS_SKY_CAN    585
#define SA2_ANIM_PLATFORM_SKY_CAN 586

#define SA2_ANIM_PROPELLOR               589
#define SA2_ANIM_SPRING_FLYING           590
#define SA2_ANIM_MINI_PROPELLOR          591
#define SA2_ANIM_FLYING_HANDLE           592
#define SA2_ANIM_PLATFORM_SKY_CAN_2      593
#define SA2_ANIM_PLATFORM_SQUARE_SKY_CAN 594

#define SA2_ANIM_ARROW_SCREEN     595
#define SA2_ANIM_SPIKE_SCREEN     596
#define SA2_ANIM_PLATFORM_TEC_BAS 597

#define SA2_ANIM_603                 603
#define SA2_ANIM_SPIKES_TEC_BAS      604
#define SA2_ANIM_LAUNCH_RING_TEC_BAS 605
#define SA2_ANIM_DIR_ARROW_TEC_BAS   606

#define SA2_ANIM_SPEEDING_PLATFORM 612

#define SA2_ANIM_PLATFORM_EGG_UTO 617

#define SA2_ANIM_TAILS_CAPTURED_COPY 659

#define SA2_ANIM_ITEMBOX      724
#define SA2_ANIM_ITEMBOX_TYPE 725
#define SA2_ANIM_RING_STATIC  726

#define SA2_ANIM_SCORE              728 // variant: 0 = 100 | 1 = 200 | 2 = 400 | 3 = 800 | 4 = 1000
#define SA2_ANIM_VARIANT_SCORE_100  0
#define SA2_ANIM_VARIANT_SCORE_200  1
#define SA2_ANIM_VARIANT_SCORE_400  2
#define SA2_ANIM_VARIANT_SCORE_800  3
#define SA2_ANIM_VARIANT_SCORE_1000 4

#define SA2_ANIM_SPECIAL_EMBLEM 730

#define SA2_ANIM_CHAR_SELECT_CHARACTER                  736
#define SA2_ANIM_VARIANT_CHAR_SELECT_CHARACTER_STATIC   0
#define SA2_ANIM_VARIANT_CHAR_SELECT_CHARACTER_SELECTED 1
#define SA2_CHAR_SELECT_NUM_CHARACTER_ANIMATIONS        2
#define SA2_ANIM_VARIANT_SELECT_CHARACTER(character, type)                              \
    ((character)*SA2_CHAR_SELECT_NUM_CHARACTER_ANIMATIONS + type)

#define SA2_ANIM_CHAR_SELECT_CIRCLE                  737
#define SA2_ANIM_VARIANT_CHAR_SELECT_CIRCLE_INACTIVE 0
#define SA2_ANIM_VARIANT_CHAR_SELECT_CIRCLE_ACTIVE                                      \
    (SA2_ANIM_VARIANT_CHAR_SELECT_CIRCLE_INACTIVE + NUM_CHARACTERS)

#define SA2_ANIM_CHAR_SELECT_ARROW                   738
#define SA2_ANIM_VARIANT_CHAR_SELECT_ARROW_STATIC    0
#define SA2_ANIM_VARIANT_CHAR_SELECT_ARROW_SCROLLING 1

#define SA2_ANIM_CHAR_SELECT_RED_CROSS_BOX 742

#define SA2_ANIM_ZONEX_NAME 762

#define SA2_ANIM_COMPANY_LOGO                     828
#define SA2_ANIM_VARIANT_COMPANY_LOGO_SONIC_TEAM  0
#define SA2_ANIM_VARIANT_COMPANY_LOGO_DIMPS       1
#define SA2_ANIM_VARIANT_COMPANY_LOGO_WAVE_MASTER 2
#define SA2_ANIM_VARIANT_COMPANY_LOGO_SEGA        3

// Both use the same variants (2002/2003)
#define SA2_ANIM_CREDITS_COPYRIGHT      829
#define SA2_ANIM_TITLE_COPYRIGHT        830
#define SA2_ANIM_VARIANT_COPYRIGHT_2002 0
#define SA2_ANIM_VARIANT_COPYRIGHT_2003 1

#define SA2_ANIM_TITLE_SEAGULL    831
#define SA2_ANIM_TITLE_LENS_FLARE 832

#define SA2_ANIM_TRIANGLE_RED 866

#define SA2_ANIM_SOME_JAPANESE_TXT           868
#define SA2_ANIM_VARIANT_SOME_JAPANESE_TXT_7 7

#define SA2_ANIM_BOOST_EFFECT              873
#define SA2_ANIM_MAIN_MENU                 874
#define SA2_ANIM_VARIANT_MAIN_MENU_OPTIONS 3

#define SA2_ANIM_RACE_START_ICON  879
#define SA2_ANIM_RACE_FINISH_ICON 880

#define SA2_ANIM_RING                    882
#define SA2_ANIM_E100_ALPHA              883
#define SA2_ANIM_SP_STAGE_HOLE           884
#define SA2_ANIM_VARIANT_SP_STAGE_HOLE_0 0
#define SA2_ANIM_VARIANT_SP_STAGE_HOLE_1 1
#define SA2_ANIM_VARIANT_SP_STAGE_HOLE_2 2
#define SA2_ANIM_VARIANT_SP_STAGE_HOLE_3 3

#define SA2_ANIM_SP_STAGE_ARROW                890
#define SA2_ANIM_VARIANT_SP_STAGE_ARROW_GREEN  0
#define SA2_ANIM_VARIANT_SP_STAGE_ARROW_YELLOW 1
#define SA2_ANIM_VARIANT_SP_STAGE_ARROW_RED    2

#define SA2_ANIM_SOUNDTEST_CREAM_CLAP_UP                 968
#define SA2_ANIM_VARIANT_SOUNDTEST_CREAM_CLAP_UP_ACTIVE  0
#define SA2_ANIM_VARIANT_SOUNDTEST_CREAM_CLAP_UP_HOLDING 1
#define SA2_ANIM_SOUNDTEST_CREAM_BOW                     970
#define SA2_ANIM_SOUNDTEST_CREAM_WAITING                 971
#define SA2_ANIM_SOUNDTEST_PLATFORM                      972
#define SA2_ANIM_SOUNDTEST_CLAP_FORWARD                  973

#define SA2_ANIM_TIME_ATTACK_DIGITS               1047
#define SA2_ANIM_VARIANT_TA_DIGITS_0              0
#define SA2_ANIM_VARIANT_TA_DIGITS_1              1
#define SA2_ANIM_VARIANT_TA_DIGITS_2              2
#define SA2_ANIM_VARIANT_TA_DIGITS_3              3
#define SA2_ANIM_VARIANT_TA_DIGITS_4              4
#define SA2_ANIM_VARIANT_TA_DIGITS_5              5
#define SA2_ANIM_VARIANT_TA_DIGITS_6              6
#define SA2_ANIM_VARIANT_TA_DIGITS_7              7
#define SA2_ANIM_VARIANT_TA_DIGITS_8              8
#define SA2_ANIM_VARIANT_TA_DIGITS_9              9
#define SA2_ANIM_VARIANT_TA_DIGITS_COLON          10
#define SA2_ANIM_VARIANT_TA_DIGITS_PLATE_0_GOLD   11
#define SA2_ANIM_VARIANT_TA_DIGITS_PLATE_0_SILVER 12
#define SA2_ANIM_VARIANT_TA_DIGITS_PLATE_0_BRONZE 13
#define SA2_ANIM_VARIANT_TA_DIGITS_PLATE_1_GOLD   14
#define SA2_ANIM_VARIANT_TA_DIGITS_PLATE_1_SILVER 15
#define SA2_ANIM_VARIANT_TA_DIGITS_PLATE_1_BRONZE 16

#define SA2_ANIM_MSG_JP_TRY_AGAIN 1051
#define SA2_ANIM_MSG_EN_TRY_AGAIN 1052

// #define SA2_ANIM_TIME_ATTACK_JP                1057
// #define SA2_ANIM_TIME_ATTACK_EN                1058
// #define SA2_ANIM_TIME_ATTACK_DE                1059
// #define SA2_ANIM_TIME_ATTACK_FR                1060
// #define SA2_ANIM_TIME_ATTACK_ES                1061
// #define SA2_ANIM_TIME_ATTACK_IT                1062

#define SA2_ANIM_TIME_ATTACK 1057 + LanguageIndex(LANG_JAPANESE) // 1057
#define SA2_ANIM_TIME_ATTACK_JP                                                         \
    (SA2_ANIM_TIME_ATTACK                                                               \
     + LanguageIndex(LANG_JAPANESE)) // 1057 - WARNING: Different layout!
#define SA2_ANIM_TIME_ATTACK_EN                                                         \
    (SA2_ANIM_TIME_ATTACK + LanguageIndex(LANG_ENGLISH)) // 1058
#define SA2_ANIM_TIME_ATTACK_DE                                                         \
    (SA2_ANIM_TIME_ATTACK + LanguageIndex(LANG_GERMAN)) // 1059
#define SA2_ANIM_TIME_ATTACK_FR                                                         \
    (SA2_ANIM_TIME_ATTACK + LanguageIndex(LANG_FRENCH)) // 1060
#define SA2_ANIM_TIME_ATTACK_ES                                                         \
    (SA2_ANIM_TIME_ATTACK + LanguageIndex(LANG_SPANISH)) // 1061
#define SA2_ANIM_TIME_ATTACK_IT                                                         \
    (SA2_ANIM_TIME_ATTACK + LanguageIndex(LANG_ITALIAN)) // 1062
#define SA2_ANIM_VARIANT_TA_CLEAR_ZONE_ASAP    0
#define SA2_ANIM_VARIANT_TA_DEFEAT_BOSS_ASAP   1
#define SA2_ANIM_VARIANT_TA_CANT_PLAY_THIS_YET 2
#define SA2_ANIM_VARIANT_TA_ZONE               3 // "ZONE" - only in SA2_ANIM_TIME_ATTACK_EN
#define SA2_ANIM_VARIANT_TA_BOSS               4 // "BOSS" - only in SA2_ANIM_TIME_ATTACK_EN

#define SA2_ANIM_VARIANT_TA_TITLE        0 // variant of only SA2_ANIM_TIME_ATTACK
#define SA2_ANIM_VARIANT_TA_JP_ZONE      1
#define SA2_ANIM_VARIANT_TA_JP_BOSS      2
#define SA2_ANIM_VARIANT_TA_JP_CLEAR     (3 + SA2_ANIM_VARIANT_TA_CLEAR_ZONE_ASAP)
#define SA2_ANIM_VARIANT_TA_JP_DEFEAT    (3 + SA2_ANIM_VARIANT_TA_DEFEAT_BOSS_ASAP)
#define SA2_ANIM_VARIANT_TA_JP_CANT_PLAY (3 + SA2_ANIM_VARIANT_TA_CANT_PLAY_THIS_YET)

#define SA2_ANIM_TIME_ATTACK_ZONE_NAME 1063
#define SA2_ANIM_VARIANT_TA_ZONE_1     0
#define SA2_ANIM_VARIANT_TA_ZONE_2     1
#define SA2_ANIM_VARIANT_TA_ZONE_3     2
#define SA2_ANIM_VARIANT_TA_ZONE_4     3
#define SA2_ANIM_VARIANT_TA_ZONE_5     4
#define SA2_ANIM_VARIANT_TA_ZONE_6     5
#define SA2_ANIM_VARIANT_TA_ZONE_7     6
#define SA2_ANIM_VARIANT_TA_ZONE_FINAL 7
#define SA2_ANIM_VARIANT_TA_ZONE_EXTRA 8

#define SA2_ANIM_TA_RECORD             1072
#define SA2_ANIM_VARIANT_TA_NEW_RECORD 0
#define SA2_ANIM_VARIANT_TA_TIME       1

#define SA2_ANIM_VS 1073

// TODO: Translate Japanese texts
#define SA2_ANIM_MP_MSG                    1074
#define SA2_ANIM_VARIANT_MP_MSG_JAPANESE_0 0
#define SA2_ANIM_VARIANT_MP_MSG_JAPANESE_1 1
#define SA2_ANIM_VARIANT_MP_MSG_JAPANESE_2 2
#define SA2_ANIM_VARIANT_MP_MSG_JAPANESE_3 3
#define SA2_ANIM_VARIANT_MP_MSG_JAPANESE_4 4
#define SA2_ANIM_VARIANT_MP_MSG_JAPANESE_5 5
#define SA2_ANIM_VARIANT_MP_MSG_OK         6
#define SA2_ANIM_VARIANT_MP_MSG_ERROR      7
#define SA2_ANIM_VARIANT_MP_MSG_2          8
#define SA2_ANIM_VARIANT_MP_MSG_3          9
#define SA2_ANIM_VARIANT_MP_MSG_4          10
#define SA2_ANIM_VARIANT_MP_MSG_JAPANESE_6 11
#define SA2_ANIM_VARIANT_MP_MSG_JAPANESE_7 12
#define SA2_ANIM_VARIANT_MP_MSG_1P         13
#define SA2_ANIM_VARIANT_MP_MSG_2P         14
#define SA2_ANIM_VARIANT_MP_MSG_3P         15
#define SA2_ANIM_VARIANT_MP_MSG_4P         16
#define SA2_ANIM_VARIANT_MP_MSG_JAPANESE_8 17
#define SA2_ANIM_VARIANT_MP_MSG_JAPANESE_9 18

#define SA2_ANIM_MULTIPLAYER_UNKNOWN                1076
#define SA2_ANIM_VARIANT_MULTIPLAYER_UNKNOWN_ARROWS 9

#define SA2_ANIM_MP_COMM_MSG_EN 1079
#define SA2_ANIM_MP_COMM_MSG_DE 1080
#define SA2_ANIM_MP_COMM_MSG_FR 1081
#define SA2_ANIM_MP_COMM_MSG_ES 1082
#define SA2_ANIM_MP_COMM_MSG_IT 1083
#define SA2_ANIM_VARIANT_MP_COMM_MSG_PLEASE_WAIT                                        \
    0 // "PLEASE WAIT..."             | "BITTE WARTEN..."      | "VEUILLEZ PATIENTER..."
      // | "ESPERE POR FAVOR..."   | "ASPETTARE..."            |
#define SA2_ANIM_VARIANT_MP_COMM_MSG_COMMUNICATION_ERROR                                \
    1 // "COMMUNICATION ERROR"        | "KOMMUNIKATIONSFEHLER" | "ERREUR DE
      // COMMUNICATION" | "ERROR DE COMUNICACIÓN" | "ERRORE DI COMUNICAZIONE" |
#define SA2_ANIM_VARIANT_MP_COMM_MSG_PLAY_AGAIN                                         \
    2 // "PLAY AGAIN?"                | "NOCHMAL SPIELEN?"     | "REJOUER?" | "¿JUEGA DE
      // NUEVO?"      | "GIOCARE DI NUOVO?"       |
#define SA2_ANIM_VARIANT_MP_COMM_MSG_LETS_PLAY_WITH_2P                                  \
    3 // "LET'S PLAY WITH 2 PLAYERS!" |
#define SA2_ANIM_VARIANT_MP_COMM_MSG_LETS_PLAY_WITH_3P                                  \
    4 // "LET'S PLAY WITH 3 PLAYERS!" |
#define SA2_ANIM_VARIANT_MP_COMM_MSG_LETS_PLAY_WITH_4P                                  \
    5 // "LET'S PLAY WITH 4 PLAYERS!" |
#define SA2_ANIM_VARIANT_MP_COMM_MSG_YES 6 // "YES"
#define SA2_ANIM_VARIANT_MP_COMM_MSG_NO  7 // "NO"

#define SA2_ANIM_MP_TEAM_PLAY_MSG_EN 1084
#define SA2_ANIM_MP_TEAM_PLAY_MSG_DE 1085
#define SA2_ANIM_MP_TEAM_PLAY_MSG_FR 1086
#define SA2_ANIM_MP_TEAM_PLAY_MSG_ES 1086
#define SA2_ANIM_MP_TEAM_PLAY_MSG_IT 1087

#define SA2_ANIM_MP_SINGLE_PAK_RESULTS_CUMULATIVE              1099
#define SA2_ANIM_VARIANT_MP_SINGLE_PAK_RESULTS_CUMULATIVE_0    0
#define SA2_ANIM_VARIANT_MP_SINGLE_PAK_RESULTS_CUMULATIVE_1    1
#define SA2_ANIM_VARIANT_MP_SINGLE_PAK_RESULTS_CUMULATIVE_2    2
#define SA2_ANIM_VARIANT_MP_SINGLE_PAK_RESULTS_CUMULATIVE_WINS 3 // "win(s)"

#define SA2_ANIM_MP_SINGLE_PAK_RESULTS_ROUND              1100
#define SA2_ANIM_VARIANT_MP_SINGLE_PAK_RESULTS_ROUND_WIN  0
#define SA2_ANIM_VARIANT_MP_SINGLE_PAK_RESULTS_ROUND_LOSE 1
#define SA2_ANIM_VARIANT_MP_SINGLE_PAK_RESULTS_ROUND_DRAW 2

// We can infer this Chao is Cheese, since they have a red bow
#define SA2_ANIM_MP_CHEESE_WAVING   1103
#define SA2_ANIM_MP_CHEESE_SITTING  1104
#define SA2_ANIM_DIGITS             1105
#define SA2_ANIM_PRESS_START_MSG_JP 1106
#define SA2_ANIM_PRESS_START_MSG_EN 1107
#define SA2_ANIM_PRESS_START_MSG_DE 1108
#define SA2_ANIM_PRESS_START_MSG_FR 1109
#define SA2_ANIM_PRESS_START_MSG_ES 1110
#define SA2_ANIM_PRESS_START_MSG_IT 1111

#define SA2_ANIM_TA_WHITE_BAR 1120

#define SA2_ANIM_STAGE               1123
#define SA2_ANIM_VARIANT_STAGE_ACT_1 0
#define SA2_ANIM_VARIANT_STAGE_ACT_2 1
#define SA2_ANIM_VARIANT_STAGE_FINAL 2
#define SA2_ANIM_VARIANT_STAGE_EXTRA 3

#define SA2_ANIM_LIFE_COUNTER                  1125
#define SA2_ANIM_VARIANT_LIFE_COUNTER_SONIC    0
#define SA2_ANIM_VARIANT_LIFE_COUNTER_TAILS    1
#define SA2_ANIM_VARIANT_LIFE_COUNTER_KNUCKLES 2
#define SA2_ANIM_VARIANT_LIFE_COUNTER_CREAM    3
#define SA2_ANIM_VARIANT_LIFE_COUNTER_AMY      4

#define SA2_ANIM_COUNTDOWN           1129
#define SA2_ANIM_VARIANT_COUNTDOWN_3 0
#define SA2_ANIM_VARIANT_COUNTDOWN_2 1
#define SA2_ANIM_VARIANT_COUNTDOWN_1 2

// The "START!" graphic has 2 64x64 images (hence Left / Right variants).
#define SA2_ANIM_COUNTDOWN_START           1130
#define SA2_ANIM_VARIANT_COUNTDOWN_START_L 0
#define SA2_ANIM_VARIANT_COUNTDOWN_START_R 1

/* -- Sonic Advance 3 -- */
#if 0
#define SA3_ANIM_SONIC_IDLE        0
#define SA3_ANIM_CREAM_IDLE        163
#define SA3_ANIM_TAILS_IDLE        326
#define SA3_ANIM_KNUCKLES_IDLE     489
#define SA3_ANIM_AMY_IDLE          652

// UI elements etc.
#define SA3_ANIM_CHAOS_EMERALD_BIG 854
#define SA3_ANIM_ARROWUP           855

#define SA3_ANIM_CHAOMAP_EMERALD 858

#define SA3_ANIM_ACT_EMBLEM 860
/*SA3_ANIM_ACT_EMBLEM:
    0="ACT 01"
    1="ACT 02"
    2="ACT 03"
    3="ACT 04"
    4="VS BOSS"
*/

#define SA3_ANIM_CHARACTER_NAMES 861
/*SA3_ANIM_CHARACTER_NAMES:
    0="SONIC"
*/

#define SA3_ANIM_ACT_MEDALS 862
/*SA3_ANIM_ACT_MEDALS:
    0=Gold
    1=Silver
    2=Bronze
*/

#define SA3_ANIM_ACT_NAMES_JAP    863
// 864: White ???
#define SA3_ANIM_ACT_NAMES_ENG    865

// Interactables
#define SA3_ANIM_SPRING           866
#define SA3_ANIM_LAUNCH_RING      867
#define SA3_ANIM_BOOSTER          868
#define SA3_ANIM_SPIKES           869
#define SA3_ANIM_RAMP             870
#define SA3_ANIM_PLATFORM_R99     871
#define SA3_ANIM_ZONE_TELEPORT    872
#define SA3_ANIM_BOUNCE_BAR       873
#define SA3_ANIM_ROTATING_HANDLE  874
#define SA3_ANIM_CHECKPOINT       875
#define SA3_ANIM_HANG_HANDLE      876
#define SA3_ANIM_PLATFORM_2       877
#define SA3_ANIM_TRAMPOLINE       878
#define SA3_ANIM_INV_PLATFORM_W01 879 // xxx
#define SA3_ANIM_INACTIVE_SPRING  880 // substate 15 = red switch
#define SA3_ANIM_BREAKABLE_WALL   881
#define SA3_ANIM_ROCK             882
#define SA3_ANIM_HORZ_SWITCH      883
#define SA3_ANIM_WHEEL_PLATFORM   884
#define SA3_ANIM_SEESAW           885
#define SA3_ANIM_YELLOW_SPRING_SH 886

#define SA3_ANIM_SUNSET_LAUNCHER 891
#define SA3_ANIM_SUNSET_BRIDGE   892
#define SA3_ANIM_SUNSET_WAGGLE   894

#define SA3_ANIM_PLATFORM_SH       897
#define SA3_ANIM_TRANSFER_PLATFORM 898

#define SA3_ANIM_DEATH_CRUSHER_SPIKED 903
#define SA3_ANIM_PLATFORM_OB          904
#define SA3_ANIM_DEATH_CRUSHER        905
//#define SA3_ANIM_PLATFORM_CRUMBLE 906
#define SA3_ANIM_PLATFORM_CRUMBLE     907

#define SA3_ANIM_LAUNCHER_TS     910
#define SA3_ANIM_FACTORY_RING    911
#define SA3_ANIM_SPECIAL_SPRING  912
#define SA3_ANIM_BONUS_TELEPORT  913
#define SA3_ANIM_BONUS_TLPT_ANIM 914
#define SA3_ANIM_ROCKET          915
#define SA3_ANIM_CIRCLE_THINGY   916
#define SA3_ANIM_BALLOON         917
#define SA3_ANIM_SPRING_IN_A_BOX 918
#define SA3_ANIM_PANDA_CART      919
#define SA3_ANIM_PENDULUM        920

#define SA3_ANIM_ICE_SPIKE    922
#define SA3_ANIM_ICE_LAUNCHER 923

#define SA3_ANIM_MINECART    925
#define SA3_ANIM_AIR_BUBBLES 926

#define SA3_ANIM_FALLING_BOULDER 929
#define SA3_ANIM_SQUEEZER        930
#define SA3_ANIM_UFO_PLATFORM    931

#define SA3_ANIM_FALL_PLATFORM_CA 933

#define SA3_ANIM_MAZE_LAUNCHER 940
/* SA3_ANIM_MAZE_LAUNCHER:
    0=Std
    1=Blink Left
    2=Blink Right
    3=Downward std
    6=Corner
    7=Un-Launcher
*/

#define SA3_ANIM_GOAL_RING 948

#define SA3_ANIM_OMOCHAO0  977
#define SA3_ANIM_OMOCHAO1  978
#define SA3_ANIM_OMOCHAO2  979
#define SA3_ANIM_OMOCHAO3  980
#define SA3_ANIM_OMOCHAO4  981
#define SA3_ANIM_OMOCHAO5  982
#define SA3_ANIM_ACT_RINGS 983
/* SA3_ANIM_ACT_RINGS:
    0=Act 1
    1=Act 2
    2=Act 3
    3=Crown (completed stage)
*/

#define SA3_ANIM_PLATFORM_CA_ACT3 986
#define SA3_ANIM_SPRING_TK        987
#define SA3_ANIM_SPIKES_TK        988
#define SA3_ANIM_INV_PLATFORM_W02 989
#define SA3_ANIM_INV_PLATFORM_W03 990
#define SA3_ANIM_INV_PLATFORM_W04 991
#define SA3_ANIM_INV_PLATFORM_W05 992
#define SA3_ANIM_INV_PLATFORM_W06 993
#define SA3_ANIM_INV_PLATFORM_W07 994

#define SA3_ANIM_FINALZONE_RING 996

#define SA3_ANIM_CHAOx 1004

#define SA3_ANIM_RING 1117

#define SA3_ANIM_BONUS_CAPSULE 1154

// SA3 - Enemies
#define SA3_ANIM_SPINNER       1166
#define SA3_ANIM_CONDOR        1167
#define SA3_ANIM_RED_BEETLE    1168
#define SA3_ANIM_BLUE_BEETLE   1169

#define SA3_ANIM_APE 1171

#define SA3_ANIM_FROG     1173
#define SA3_ANIM_MINIMOLE 1174
#define SA3_ANIM_BUZZER   1175

#define SA3_ANIM_JOUSUN  1177 /* Green Plane */
#define SA3_ANIM_TAKKON  1178 /* Red Octopus */
#define SA3_ANIM_UUTSUBO 1179 /* Yellow Eel */

#define SA3_ANIM_BUBU          1181
#define SA3_ANIM_BAOBAO        1182
#define SA3_ANIM_GUARD         1183
#define SA3_ANIM_GUARD_PROJ    1184
#define SA3_ANIM_JUGGLING      1185
#define SA3_ANIM_JUGGLING_PROJ 1186

#define SA3_ANIM_GINPE         1187 /* Penguin */
#define SA3_ANIM_GINPE_PROJ    1188
#define SA3_ANIM_PUFFER        1189
#define SA3_ANIM_PUFFER_PROJ   1190

// Crab with spin projectile (which isn't its own anim?)
#define SA3_ANIM_YADOKKA       1191
#define SA3_ANIM_SNOWMAN       1192
#define SA3_ANIM_SNOWMAN_PROJ  1193
#define SA3_ANIM_KYACCHAA      1194 /* Spider */
#define SA3_ANIM_KYACCHAA_PROJ 1195
#define SA3_ANIM_GURUGURU      1196
#define SA3_ANIM_KAMAKI        1197 /* Mantis */
#define SA3_ANIM_KAMAKI_PROJ   1198
#define SA3_ANIM_CLAMP         1199
#define SA3_ANIM_CLAMP_PROJ    1200
#define SA3_ANIM_MARRUN        1201
#define SA3_ANIM_MUUGADEN      1202
#define SA3_ANIM_MUUGADEN_PART 1203
#define SA3_ANIM_MUUGADEN_PROJ 1204

#define SA3_ANIM_ITEMBOX_TYPE 1315
#define SA3_ANIM_ITEMBOX      1316

#define SA3_ANIM_SPECIAL_KEY 1348

#define SA3_ANIM_ZONEX_NAME 1424 /* Substate-Index == Zone number */
#endif

#endif // GUARDS_ANIMATIONS_H