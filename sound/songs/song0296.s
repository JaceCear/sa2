	.include "MPlayDef.s"
	.section .rodata
	.align 2
	@********************** Track  1 **********************@

	.global song0296_1
song0296_1:	@ 0x08C84980
	.byte	0xBC
	.byte	0x00
	.byte	0xBB
	.byte	0x3C
	.byte	0xBD
	.byte	0x60
	.byte	0xC1
	.byte	0x0A
	.byte	0xC4
	.byte	0x6D
	.byte	0xC2
	.byte	0x07
	.byte	0xC5
	.byte	0x00
	.byte	0xBF
	.byte	0x40
	.byte	0xBE
	.byte	0x00
	.byte	0xCF
	.byte	0x50
	.byte	0x7F
	.byte	0x81
	.byte	0xBE
	.byte	0x0C
	.byte	0x81
	.byte	0x13
	.byte	0x81
	.byte	0x19
	.byte	0x81
	.byte	0x21
	.byte	0x81
	.byte	0x27
	.byte	0x81
	.byte	0x2E
	.byte	0x81
	.byte	0x34
	.byte	0x81
	.byte	0x3B
	.byte	0x81
	.byte	0x42
	.byte	0x81
	.byte	0x49
	.byte	0x81
	.byte	0x4F
	.byte	0x81
	.byte	0x56
	.byte	0x81
	.byte	0x5C
	.byte	0x81
	.byte	0x64
	.byte	0x8A
gUnknown_08C849B3:
	.byte	0xA8
	.byte	0xB2
	.word	gUnknown_08C849B3
	.byte	0xB0
	.byte	0xCE
	.byte	0x50
	.byte	0xB1
	.byte	0x00
	.byte	0x00
	.byte	0x00

	.align 2
	.global song0296
song0296:	@ 0x08C849C0
	.byte	1		@ trackCount
	.byte	0		@ blockCount
	.byte	20		@ priority
	.byte	128		@ reverb

	.word	voicegroup005		@ voicegroup/tone

	.word	song0296_1		@ track
