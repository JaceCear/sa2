	.include "MPlayDef.s"
	.section .rodata
	.align 2
	@********************** Track  1 **********************@

	.global song0329_1
song0329_1:	@ 0x08C84EA4
	.byte	0xBC
	.byte	0x00
	.byte	0xBB
	.byte	0x2D
	.byte	0xBD
	.byte	0x1D
	.byte	0xBE
	.byte	0x78
	.byte	0xC5
	.byte	0x00
	.byte	0xC2
	.byte	0x16
	.byte	0xBF
	.byte	0x40
	.byte	0xC4
	.byte	0x00
	.byte	0xC1
	.byte	0x14
	.byte	0xF6
	.byte	0x48
	.byte	0x7F
	.byte	0xA7
	.byte	0x81
	.byte	0xB1

	.align 2
	.global song0329
song0329:	@ 0x08C84EBC
	.byte	1		@ trackCount
	.byte	0		@ blockCount
	.byte	20		@ priority
	.byte	128		@ reverb

	.word	voicegroup006		@ voicegroup/tone

	.word	song0329_1		@ track
