	.include "MPlayDef.s"
	.section .rodata
	.align 2
	@********************** Track  1 **********************@

	.global song0215_1
song0215_1:	@ 0x08C821A8
	.byte	0xBC
	.byte	0x00
	.byte	0xBB
	.byte	0x25
	.byte	0xBD
	.byte	0x0F
	.byte	0xBE
	.byte	0x62
	.byte	0xC2
	.byte	0x30
	.byte	0xC5
	.byte	0x00
	.byte	0xBF
	.byte	0x40
	.byte	0xC4
	.byte	0x14
	.byte	0xC0
	.byte	0x7F
	.byte	0xEF
	.byte	0x33
	.byte	0x68
	.byte	0x81
	.byte	0xBE
	.byte	0x60
	.byte	0x81
	.byte	0x5D
	.byte	0x81
	.byte	0x5B
	.byte	0x81
	.byte	0x59
	.byte	0x81
	.byte	0x57
	.byte	0x81
	.byte	0x55
	.byte	0x81
	.byte	0x52
	.byte	0x81
	.byte	0x50
	.byte	0x81
	.byte	0x4E
	.byte	0x81
	.byte	0x4C
	.byte	0x81
	.byte	0x4A
	.byte	0x81
	.byte	0x47
	.byte	0x81
	.byte	0x45
	.byte	0x81
	.byte	0x43
	.byte	0x81
	.byte	0x41
	.byte	0x81
	.byte	0x3E
	.byte	0x81
	.byte	0x3C
	.byte	0x81
	.byte	0x3B
	.byte	0x81
	.byte	0x38
	.byte	0x81
	.byte	0x36
	.byte	0x81
	.byte	0x33
	.byte	0x81
	.byte	0x31
	.byte	0x81
	.byte	0x30
	.byte	0x81
	.byte	0x2D
	.byte	0x81
	.byte	0x2B
	.byte	0x81
	.byte	0x28
	.byte	0x81
	.byte	0x23
	.byte	0x81
	.byte	0x22
	.byte	0x81
	.byte	0x21
	.byte	0x81
	.byte	0x20
	.byte	0x81
	.byte	0x1F
	.byte	0x81
	.byte	0x1E
	.byte	0x81
	.byte	0x1D
	.byte	0x81
	.byte	0x1C
	.byte	0x81
	.byte	0x1B
	.byte	0x81
	.byte	0x19
	.byte	0x81
	.byte	0x19
	.byte	0x81
	.byte	0x17
	.byte	0x81
	.byte	0x16
	.byte	0x81
	.byte	0x16
	.byte	0x81
	.byte	0x14
	.byte	0x81
	.byte	0x13
	.byte	0x81
	.byte	0x12
	.byte	0x81
	.byte	0x11
	.byte	0x81
	.byte	0x10
	.byte	0x81
	.byte	0x0F
	.byte	0x81
	.byte	0x0E
	.byte	0x81
	.byte	0x0D
	.byte	0x81
	.byte	0x0B
	.byte	0x81
	.byte	0x0B
	.byte	0x81
	.byte	0x0A
	.byte	0x81
	.byte	0x08
	.byte	0x81
	.byte	0x07
	.byte	0x81
	.byte	0x07
	.byte	0x81
	.byte	0x05
	.byte	0x81
	.byte	0x04
	.byte	0xB1
	.byte	0x00

	.align 2
	.global song0215
song0215:	@ 0x08C82230
	.byte	1		@ trackCount
	.byte	0		@ blockCount
	.byte	20		@ priority
	.byte	128		@ reverb

	.word	voicegroup005		@ voicegroup/tone

	.word	song0215_1		@ track
