	.include "MPlayDef.s"
	.section .rodata
	.align 2
	@********************** Track  1 **********************@

	.global song0158_1
song0158_1:	@ 0x08C81C3C
	.byte	0xBC
	.byte	0x00
	.byte	0xBB
	.byte	0x3C
	.byte	0xBD
	.byte	0x24
	.byte	0xBE
	.byte	0x5A
	.byte	0xC2
	.byte	0x02
	.byte	0xC1
	.byte	0x04
	.byte	0xC5
	.byte	0x00
	.byte	0xBF
	.byte	0x40
	.byte	0xC4
	.byte	0x00
	.byte	0xC0
	.byte	0x00
	.byte	0xD5
	.byte	0x47
	.byte	0x7F
	.byte	0x82
	.byte	0xC0
	.byte	0x0B
	.byte	0x81
	.byte	0x17
	.byte	0x81
	.byte	0x22
	.byte	0x81
	.byte	0x2E
	.byte	0x81
	.byte	0x39
	.byte	0x81
	.byte	0x45
	.byte	0x81
	.byte	0x50
	.byte	0x81
	.byte	0x5C
	.byte	0x81
	.byte	0x67
	.byte	0x81
	.byte	0x73
	.byte	0x81
	.byte	0x00
	.byte	0xD5
	.byte	0x4E
	.byte	0x81
	.byte	0xC0
	.byte	0x0B
	.byte	0x81
	.byte	0x17
	.byte	0x81
	.byte	0x22
	.byte	0x81
	.byte	0x2E
	.byte	0x81
	.byte	0x39
	.byte	0x81
	.byte	0x45
	.byte	0x81
	.byte	0x50
	.byte	0x81
	.byte	0x5C
	.byte	0x81
	.byte	0x67
	.byte	0x81
	.byte	0x73
	.byte	0xB1
	.byte	0x00
	.byte	0x00

	.align 2
	.global song0158
song0158:	@ 0x08C81C84
	.byte	1		@ trackCount
	.byte	0		@ blockCount
	.byte	20		@ priority
	.byte	128		@ reverb

	.word	voicegroup000		@ voicegroup/tone

	.word	song0158_1		@ track
