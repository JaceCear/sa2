	.include "MPlayDef.s"
	.section .rodata
	.align 2
	@********************** Track  1 **********************@

	.global song0255_1
song0255_1:	@ 0x08C83484
	.byte	0xBC
	.byte	0x00
	.byte	0xBB
	.byte	0x4B
	.byte	0xBD
	.byte	0x37
	.byte	0xBE
	.byte	0x5A
	.byte	0xC1
	.byte	0x0F
	.byte	0xBF
	.byte	0x40
	.byte	0xD0
	.byte	0x50
	.byte	0x6C
	.byte	0x82
	.byte	0xD0
	.byte	0x82
	.byte	0xD0
	.byte	0x88
	.byte	0xD0
	.byte	0x82
	.byte	0xD0
	.byte	0x82
	.byte	0xD0
	.byte	0x81
	.byte	0xB1
	.byte	0x00

	.align 2
	.global song0255
song0255:	@ 0x08C834A0
	.byte	1		@ trackCount
	.byte	0		@ blockCount
	.byte	20		@ priority
	.byte	128		@ reverb

	.word	voicegroup005		@ voicegroup/tone

	.word	song0255_1		@ track
