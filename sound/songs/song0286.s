	.include "MPlayDef.s"
	.section .rodata
	.align 2
	@********************** Track  1 **********************@

	.global song0286_1
song0286_1:	@ 0x08C84484
	.byte	0xBC
	.byte	0x00
	.byte	0xBB
	.byte	0x3C
	.byte	0xBD
	.byte	0x56
	.byte	0xC1
	.byte	0x0B
	.byte	0xC2
	.byte	0x49
	.byte	0xC5
	.byte	0x00
	.byte	0xBE
	.byte	0x5A
	.byte	0xBF
	.byte	0x40
	.byte	0xC4
	.byte	0x1D
	.byte	0xC0
	.byte	0x09
	.byte	0xCF
	.byte	0x40
	.byte	0x7F
	.byte	0x81
	.byte	0xC0
	.byte	0x12
	.byte	0x81
	.byte	0x1C
	.byte	0x81
	.byte	0x26
	.byte	0x81
	.byte	0x30
	.byte	0x81
	.byte	0x3A
	.byte	0x81
	.byte	0x44
	.byte	0x81
	.byte	0x4D
	.byte	0x81
	.byte	0x57
	.byte	0x81
	.byte	0x61
	.byte	0x81
	.byte	0x6B
	.byte	0x81
	.byte	0x75
	.byte	0x81
	.byte	0x7F
	.byte	0x81
	.byte	0x7F
	.byte	0x81
	.byte	0x7F
	.byte	0x9B
	.byte	0x82
gUnknown_08C844BA:
	.byte	0xA0
	.byte	0xB0
	.byte	0xB2
	.word	gUnknown_08C844BA
	.byte	0x96
	.byte	0xCE
	.byte	0x40
	.byte	0xB1
	.byte	0x00
	.byte	0x00
	.byte	0x00

	.align 2
	.global song0286
song0286:	@ 0x08C844C8
	.byte	1		@ trackCount
	.byte	0		@ blockCount
	.byte	20		@ priority
	.byte	128		@ reverb

	.word	voicegroup005		@ voicegroup/tone

	.word	song0286_1		@ track
