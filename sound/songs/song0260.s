	.include "MPlayDef.s"
	.section .rodata
	.align 2
	@********************** Track  1 **********************@

	.global song0260_1
song0260_1:	@ 0x08C83680
	.byte	0xBC
	.byte	0x00
	.byte	0xBB
	.byte	0x3C
	.byte	0xBD
	.byte	0x3C
	.byte	0xBE
	.byte	0x12
	.byte	0xC2
	.byte	0x54
	.byte	0xC5
	.byte	0x00
	.byte	0xBF
	.byte	0x40
	.byte	0xC4
	.byte	0x26
	.byte	0xEF
	.byte	0x39
	.byte	0x7F
	.byte	0x81
	.byte	0xBE
	.byte	0x3A
	.byte	0x81
	.byte	0x64
	.byte	0x81
	.byte	0x64
	.byte	0x81
	.byte	0x64
	.byte	0x81
	.byte	0x64
	.byte	0x81
	.byte	0x64
	.byte	0x81
	.byte	0x64
	.byte	0x81
	.byte	0x64
	.byte	0x81
	.byte	0x64
	.byte	0x81
	.byte	0x64
	.byte	0x81
	.byte	0x64
	.byte	0x81
	.byte	0x64
	.byte	0x81
	.byte	0x64
	.byte	0x81
	.byte	0x64
	.byte	0x81
	.byte	0x64
	.byte	0x81
	.byte	0x64
	.byte	0x81
	.byte	0x64
	.byte	0x81
	.byte	0x64
	.byte	0x81
	.byte	0x5E
	.byte	0x81
	.byte	0x58
	.byte	0x81
	.byte	0x51
	.byte	0x81
	.byte	0x4B
	.byte	0x81
	.byte	0x45
	.byte	0x81
	.byte	0x3E
	.byte	0x81
	.byte	0x38
	.byte	0x81
	.byte	0x32
	.byte	0x81
	.byte	0x2C
	.byte	0x81
	.byte	0x25
	.byte	0x81
	.byte	0x1C
	.byte	0x81
	.byte	0x19
	.byte	0x81
	.byte	0x15
	.byte	0x81
	.byte	0x12
	.byte	0x81
	.byte	0x0E
	.byte	0x81
	.byte	0x0B
	.byte	0x81
	.byte	0x07
	.byte	0x81
	.byte	0x03
	.byte	0x8C
	.byte	0xB1
	.byte	0x00
	.byte	0x00

	.align 2
	.global song0260
song0260:	@ 0x08C836E0
	.byte	1		@ trackCount
	.byte	0		@ blockCount
	.byte	20		@ priority
	.byte	128		@ reverb

	.word	voicegroup005		@ voicegroup/tone

	.word	song0260_1		@ track
