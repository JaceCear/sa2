

anim_time_attack_it_variant_0:
	mGetPalette 0x2CB 16 0x0
	mGetTiles 0x28383 168
	.4byte	1, 0

	mAnimCmd4 

anim_time_attack_it_variant_1:
	mGetPalette 0x2CB 16 0x0
	mGetTiles 0x2842B 168
	.4byte	1, 1

	mAnimCmd4 

anim_time_attack_it_variant_2:
	mGetPalette 0x2CB 16 0x0
	mGetTiles 0x284D3 168
	.4byte	1, 2

	mAnimCmd4 


anim_time_attack_it:
	.4byte anim_time_attack_it_variant_0
	.4byte anim_time_attack_it_variant_1
	.4byte anim_time_attack_it_variant_2
