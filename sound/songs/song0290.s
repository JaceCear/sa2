	.include "MPlayDef.s"
	.section .rodata
	.align 2
	@********************** Track  1 **********************@

	.global song0290_1
song0290_1:	@ 0x08C84618
	.byte	0xBC
	.byte	0x00
	.byte	0xBB
	.byte	0x3F
	.byte	0xBD
	.byte	0x65
	.byte	0xBE
	.byte	0x64
	.byte	0xC1
	.byte	0x12
	.byte	0xC2
	.byte	0x1E
	.byte	0xC5
	.byte	0x00
	.byte	0xBF
	.byte	0x40
	.byte	0xC4
	.byte	0x00
	.byte	0xC0
	.byte	0x7F
	.byte	0xCF
	.byte	0x4D
	.byte	0x7F
	.byte	0x81
	.byte	0xBE
	.byte	0x63
	.byte	0xC0
	.byte	0x60
	.byte	0x81
	.byte	0xBE
	.byte	0x61
	.byte	0xC0
	.byte	0x40
	.byte	0x81
	.byte	0xBE
	.byte	0x60
	.byte	0xC0
	.byte	0x20
	.byte	0x81
	.byte	0xBE
	.byte	0x5F
	.byte	0xC0
	.byte	0x00
	.byte	0x81
	.byte	0xBE
	.byte	0x5E
	.byte	0xC0
	.byte	0x1F
	.byte	0x81
	.byte	0xBE
	.byte	0x5C
	.byte	0xC0
	.byte	0x3F
	.byte	0x81
	.byte	0xBE
	.byte	0x5B
	.byte	0xC0
	.byte	0x5F
	.byte	0x81
	.byte	0xBE
	.byte	0x5A
	.byte	0xC0
	.byte	0x7F
	.byte	0x81
	.byte	0xBE
	.byte	0x58
	.byte	0xC0
	.byte	0x7F
	.byte	0x81
	.byte	0xBE
	.byte	0x58
	.byte	0xC0
	.byte	0x7B
	.byte	0x81
	.byte	0xBE
	.byte	0x56
	.byte	0xC0
	.byte	0x76
	.byte	0x81
	.byte	0xBE
	.byte	0x55
	.byte	0xC0
	.byte	0x72
	.byte	0x81
	.byte	0xBE
	.byte	0x54
	.byte	0xC0
	.byte	0x6D
	.byte	0x81
	.byte	0xBE
	.byte	0x52
	.byte	0xC0
	.byte	0x69
	.byte	0x81
	.byte	0xBE
	.byte	0x51
	.byte	0xC0
	.byte	0x64
	.byte	0x81
	.byte	0xBE
	.byte	0x50
	.byte	0xC0
	.byte	0x60
	.byte	0x81
	.byte	0xBE
	.byte	0x4F
	.byte	0xC0
	.byte	0x5B
	.byte	0x81
	.byte	0xBE
	.byte	0x4D
	.byte	0xC0
	.byte	0x57
	.byte	0x81
	.byte	0xBE
	.byte	0x4C
	.byte	0xC0
	.byte	0x52
	.byte	0x81
	.byte	0xBE
	.byte	0x4B
	.byte	0xC0
	.byte	0x4E
	.byte	0x81
	.byte	0xBE
	.byte	0x4A
	.byte	0xC0
	.byte	0x49
	.byte	0x81
	.byte	0xBE
	.byte	0x49
	.byte	0xC0
	.byte	0x44
	.byte	0x81
	.byte	0xBE
	.byte	0x47
	.byte	0xC0
	.byte	0x40
	.byte	0x81
	.byte	0xBE
	.byte	0x46
	.byte	0xC0
	.byte	0x3B
	.byte	0x81
	.byte	0x37
	.byte	0x81
	.byte	0x32
	.byte	0x84
	.byte	0xBE
	.byte	0x3E
	.byte	0x86
	.byte	0x37
	.byte	0x86
	.byte	0x30
	.byte	0x86
gUnknown_08C846B3:
	.byte	0xBE
	.byte	0x28
	.byte	0x86
	.byte	0x21
	.byte	0x86
	.byte	0x19
	.byte	0x86
	.byte	0x12
	.byte	0x9A
	.byte	0xA0
	.byte	0xB2
	.word	gUnknown_08C846B3
	.byte	0x87
	.byte	0xCE
	.byte	0x4D
	.byte	0xB1
	.byte	0x00
	.byte	0x00

	.align 2
	.global song0290
song0290:	@ 0x08C846C8
	.byte	1		@ trackCount
	.byte	0		@ blockCount
	.byte	20		@ priority
	.byte	128		@ reverb

	.word	voicegroup005		@ voicegroup/tone

	.word	song0290_1		@ track
