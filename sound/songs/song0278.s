	.include "MPlayDef.s"
	.section .rodata
	.align 2
	@********************** Track  1 **********************@

	.global song0278_1
song0278_1:	@ 0x08C84064
	.byte	0xBC
	.byte	0x00
	.byte	0xBB
	.byte	0x3C
	.byte	0xBD
	.byte	0x4E
	.byte	0xBE
	.byte	0x64
	.byte	0xC2
	.byte	0x5A
	.byte	0xC5
	.byte	0x00
	.byte	0xBF
	.byte	0x40
	.byte	0xC4
	.byte	0x31
	.byte	0xD3
	.byte	0x53
	.byte	0x7F
	.byte	0x84
	.byte	0xEA
	.byte	0x4C
	.byte	0x78
	.byte	0x89
	.byte	0xBE
	.byte	0x60
	.byte	0x81
	.byte	0x5C
	.byte	0x81
	.byte	0x58
	.byte	0x81
	.byte	0x53
	.byte	0x81
	.byte	0x4F
	.byte	0x81
	.byte	0x4B
	.byte	0x81
	.byte	0x46
	.byte	0x81
	.byte	0x42
	.byte	0x81
	.byte	0x3E
	.byte	0x81
	.byte	0x3B
	.byte	0x81
	.byte	0x36
	.byte	0x81
	.byte	0x32
	.byte	0x81
	.byte	0x2E
	.byte	0x81
	.byte	0x29
	.byte	0x81
	.byte	0x25
	.byte	0x81
	.byte	0x21
	.byte	0x81
	.byte	0x1D
	.byte	0x81
	.byte	0x19
	.byte	0x81
	.byte	0x15
	.byte	0x81
	.byte	0x11
	.byte	0x81
	.byte	0x0C
	.byte	0x81
	.byte	0x08
	.byte	0x81
	.byte	0x04
	.byte	0x83
	.byte	0xB1

	.align 2
	.global song0278
song0278:	@ 0x08C840AC
	.byte	1		@ trackCount
	.byte	0		@ blockCount
	.byte	20		@ priority
	.byte	128		@ reverb

	.word	voicegroup005		@ voicegroup/tone

	.word	song0278_1		@ track
