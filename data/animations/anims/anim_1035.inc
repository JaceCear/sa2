

anim_data__1035_0:
	mGetPalette 0x2C4 16 0x20
	mGetTiles 0x2725F 8
	.4byte	1, 0

	mAnimCmd4 

anim_data__1035_1:
	mGetPalette 0x2C4 16 0x20
	mGetTiles 0x27267 12
	.4byte	1, 1

	mAnimCmd4 


anim_1035:
	.4byte anim_data__1035_0
	.4byte anim_data__1035_1
