	.include "MPlayDef.s"
	.section .rodata
	.align 2
	@********************** Track  1 **********************@

	.global song0154_1
song0154_1:	@ 0x08C819F0
	.byte	0xBC
	.byte	0x00
	.byte	0xBB
	.byte	0x4B
	.byte	0xBD
	.byte	0x3C
	.byte	0xBE
	.byte	0x5A
	.byte	0xBF
	.byte	0x40
	.byte	0xC1
	.byte	0x05
	.byte	0xD5
	.byte	0x41
	.byte	0x68
	.byte	0x86
	.byte	0xC0
	.byte	0x00
	.byte	0xED
	.byte	0x50
	.byte	0x6C
	.byte	0x81
	.byte	0xC0
	.byte	0x03
	.byte	0x81
	.byte	0x06
	.byte	0x81
	.byte	0x09
	.byte	0x81
	.byte	0x0C
	.byte	0x81
	.byte	0x0F
	.byte	0x81
	.byte	0x13
	.byte	0x81
	.byte	0x16
	.byte	0x81
	.byte	0x19
	.byte	0x81
	.byte	0x1C
	.byte	0x81
	.byte	0x1F
	.byte	0x81
	.byte	0x22
	.byte	0x81
	.byte	0x26
	.byte	0x81
	.byte	0x29
	.byte	0x81
	.byte	0x2C
	.byte	0x81
	.byte	0x2F
	.byte	0x81
	.byte	0x32
	.byte	0x81
	.byte	0x35
	.byte	0x81
	.byte	0x39
	.byte	0x81
	.byte	0x3C
	.byte	0x81
	.byte	0x3F
	.byte	0x81
	.byte	0x42
	.byte	0x81
	.byte	0x45
	.byte	0x81
	.byte	0x49
	.byte	0x81
	.byte	0x4C
	.byte	0x81
	.byte	0x4F
	.byte	0x81
	.byte	0x52
	.byte	0x81
	.byte	0x55
	.byte	0x81
	.byte	0x58
	.byte	0x81
	.byte	0x5C
	.byte	0x82
	.byte	0x62
	.byte	0x81
	.byte	0x65
	.byte	0x81
	.byte	0x68
	.byte	0x81
	.byte	0x6B
	.byte	0x81
	.byte	0x6F
	.byte	0x81
	.byte	0x72
	.byte	0x81
	.byte	0x75
	.byte	0x81
	.byte	0x78
	.byte	0x81
	.byte	0x7B
	.byte	0x81
	.byte	0x7F
	.byte	0x82
	.byte	0xB1
	.byte	0x00
	.byte	0x00

	.align 2
	.global song0154
song0154:	@ 0x08C81A58
	.byte	1		@ trackCount
	.byte	0		@ blockCount
	.byte	20		@ priority
	.byte	128		@ reverb

	.word	voicegroup000		@ voicegroup/tone

	.word	song0154_1		@ track
