

anim_propellor_variant_0:
	mGetPalette 0x71 16 0x70
	mGetTiles 0x1B25A 54
	.4byte	4, 0

	mGetTiles 0x1B290 54
	.4byte	4, 1

	mGetTiles 0x1B2C6 42
	.4byte	4, 2

	mGetTiles 0x1B2F0 54
	.4byte	4, 3

	mJumpBack 0x17


anim_propellor:
	.4byte anim_propellor_variant_0
