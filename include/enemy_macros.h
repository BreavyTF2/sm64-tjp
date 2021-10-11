#define	SEGMENT_CODE			0x00
#define	SEGMENT_DYNAMIC			0x01
#define	SEGMENT_BASIC			0x02
#define	SEGMENT_KEEP			0x03
#define	SEGMENT_PLAYER			0x04
#define	SEGMENT_FACE			0x04
#define	SEGMENT_ENEMY1			0x05
#define	SEGMENT_ENEMY2			0x06
#define	SEGMENT_STAGE1			0x07
#define	SEGMENT_ENEMY3			0x08
#define	SEGMENT_TEXTURE			0x09
#define	SEGMENT_BACK			0x0A
#define	SEGMENT_WEATHER			0x0B
#define	SEGMENT_ENEMYDATA1		0x0C
#define	SEGMENT_ENEMYDATA2		0x0D
#define	SEGMENT_STAGEDATA1		0x0E
#define	SEGMENT_ENEMYDATA3		0x0F
#define	SEGMENT_BOOTSEQ			0x10
#define	SEGMENT_MARIOANIM		0x11
#define	SEGMENT_LUIGIANIM		0x12
#define	SEGMENT_PATHDATA		0x13
#define	SEGMENT_DEMODATA		0x14
#define	SEGMENT_GAMEDATA		0x15
#define	SEGMENT_KEEPDATA		0x16
#define	SEGMENT_PLAYDATA		0x17
#define	SEGMENT_CONTDATA		0x18
#define		StrategyRecord		struct Object
#define		contOr		m
#define	 	trigger		input
#define		player_posX	gMarioObject->oPosX
#define		player_posY	gMarioObject->oPosY
#define		player_posZ	gMarioObject->oPosZ
#define     player_worldY   gMarioObject->oPosY
#define		obj_actor_high	o->oBehParams
#define		enemydemo_flag	o->oDialogResponse
#define		enemydemo_mode	o->oDialogState
#define		obj_bgpointer		o->oFloor
#define		obj_bgcode			o->oFloorType
#define		obj_bgarea			o->oFloorRoom
#define		obj_havecoin		o->oNumLootCoins
#define		obj_areamap			o->oRoom
#define		obj_imm				o->oBooDeathStatus
#define		obj_mainflag		o->oFlags
#define		obj_my_status		o->oUnk94
#define		obj_hit_timer		o->oIntangibleTimer
#define		obj_worldX			o->oPosX
#define		obj_worldY			o->oPosY
#define		obj_worldZ			o->oPosZ
#define		obj_speedX			o->oVelX
#define		obj_speedY			o->oVelY
#define		obj_speedZ			o->oVelZ
#define		obj_speedF			o->oForwardVel
#define		obj_speedL			o->oUnkBC
#define		obj_speedU			o->oUnkC0
#define		obj_angleX			o->oMoveAnglePitch
#define		obj_angleY			o->oMoveAngleYaw
#define		obj_angleZ			o->oMoveAngleRoll
#define		obj_animeangleX		o->oFaceAnglePitch
#define		obj_animeangleY		o->oFaceAngleYaw
#define		obj_animeangleZ		o->oFaceAngleRoll
#define		obj_animepositionY 	o->oGraphYOffset
#define		obj_effect			o->oActiveParticleFlags
#define		obj_gravity			o->oGravity
#define		obj_groundY			o->oFloorHeight
#define		obj_movestatus		o->oMoveFlags
#define		obj_animecounter	o->oAnimState
#define		obj_anglespeedX		o->oAngleVelPitch
#define		obj_anglespeedY		o->oAngleVelYaw
#define		obj_anglespeedZ		o->oAngleVelRoll
#define		obj_skelanime_ptr	o->oAnimations
#define		obj_actionmode		o->oHeldState
#define		obj_wall_offsetR	o->oWallHitboxRadius
#define		obj_air_fric		o->oDragStrength
#define		obj_objname			o->oInteractType
#define		obj_mail			o->oInteractStatus
#define		obj_skeletonX		o->oParentRelativePosX
#define		obj_skeletonY		o->oParentRelativePosY
#define		obj_skeletonZ		o->oParentRelativePosZ
#define		obj_programselect	o->oBehParams2ndByte
#define		obj_mode			o->oAction
#define		obj_process			o->oSubAction
#define		obj_timer			o->oTimer
#define		obj_bound_e			o->oBounciness
#define		obj_playerdist  	o->oDistanceToMario
#define		obj_targetangle		o->oAngleToMario
#define		obj_attX			o->oHomeX
#define		obj_attY			o->oHomeY
#define		obj_attZ			o->oHomeZ
#define		obj_friction		o->oFriction
#define		obj_specficG		o->oBuoyancy
#define		obj_skelanimeNo		o->oSoundStateID
#define		obj_alpha			o->oOpacity
#define		obj_ap				o->oDamageOrCoinValue
#define		obj_hp				o->oHealth
#define		obj_hmsselectNo		o->oAnimState
#define		obj_oldmode			o->oPrevAction
#define		obj_work0			o->oMarioParticleFlags
#define		obj_work1			o->oActivatedBackAndForthPlatformOffset
#define		obj_work2			o->oActivatedBackAndForthPlatformVel
#define		obj_speed			o->oForwardVel
//#define     objnamestr          "OBJNAME_"
//#define		s_set_objname(data)		o->oInteractType = objnamestr ## (data)
#define		obj_wallangleY 			o->oWallAngle
#define		obj_returnangle			o->oAngleToHome
#define		obj_erasedist			o->oCollisionDistance
#define		obj_enemyinfo			o->oInteractionSubtype
#define		obj_shapeLOD			o->oDrawingDistance
#define		obj_movebg_checkdist	o->oCollisionDistance
#define		obj_soundparam			o->oDeathSound

#define	OBJNAME_BIRD                  1
#define	OBJNAME_TAKE                  2
#define	OBJNAME_DOOR                  4
#define	OBJNAME_DAMAGE                8
#define	OBJNAME_COIN                  16
#define	OBJNAME_ITEMHAT               32
#define	OBJNAME_BAR                   64
#define	OBJNAME_NOKONOKO              128
#define	OBJNAME_TOGEZO                256
#define	OBJNAME_PUNCHITEM             512
#define	OBJNAME_WIND                  1024
#define	OBJNAME_TRIPDOOR              2048
#define	OBJNAME_TRIPSTAR              4096
#define	OBJNAME_TRIPCHIMNEY           8192
#define	OBJNAME_CANNON                16384
#define	OBJNAME_PUNCHATTACK           32768
#define	OBJNAME_RECOVER               65536
#define	OBJNAME_MOTOS                 131072
#define	OBJNAME_FIRE                  262144
#define	OBJNAME_NOKOBOARD             524288
#define	OBJNAME_HANACYAN              1048576
#define	OBJNAME_WANWAN                2097152
#define	OBJNAME_HEYHO                 4194304
#define	OBJNAME_FRIEND                8388608
#define	OBJNAME_TORNEDO               16777216
#define	OBJNAME_DRAINPIPE             33554432
#define	OBJNAME_SHELL                 67108864
#define	OBJNAME_TRIPKAGO              134217728
#define	OBJNAME_TAMA                  268435456
#define	OBJNAME_BIRIBIRI              536870912

#define Randomd()                     random_u16()

//#define	player                0
#define	allfire               1
#define	plfire                2
#define	enfire                3
#define	enemyA                4
#define	enemyB                5
//#define	item                  6
#define	build                 7
#define	option                8
#define	moveBG                9
#define	player_friend         10
#define	control               11
#define	effect                12
#define	totalcount            13

#define	stf_moveON                1
#define	stf_FspeedON              2
#define	stf_YspeedON              4
#define	stf_YangleSAME            8
#define	stf_ALLangleSAME          16
#define	stf_createON              32
#define	stf_playerdistON          64
#define	stf_alldispON             128
#define	stf_playerON              256
#define	stf_relativeON            512
#define	stf_catchON               1024
#define	stf_matrixON              2048
#define	stf_programstopON         4096
#define	stf_playerangleON         8192
#define	stf_NOramsave             16384

#define		EMAIL_PLAYER_PUNCH				1
#define		EMAIL_PLAYER_KICK				2
#define		EMAIL_PLAYER_TRAMP				3
#define		EMAIL_PLAYER_HIPDROP			4
#define		EMAIL_PLAYER_SLIDING			5
#define		EMAIL_PLAYER_HEADATTACK			6

#define		EMAIL_PLAYERMETAL				(1<<9)
#define		EMAIL_PLAYERGETOFF				(1<<10)
#define		EMAIL_CARRYMODE_ON				(1<<11)
#define		EMAIL_PLAYEREVEN				(1<<12)
#define		EMAIL_PLAYERDAMAGE				(1<<13)
#define		EMAIL_PLAYERATTACK				(1<<14)
#define		EMAIL_PLAYERHIT					(1<<15)


#define		EMAIL_DOOROPEN_1				(1<<16)
#define		EMAIL_DOOROPEN_2				(1<<17)
#define		EMAIL_DOORCLOSE_1				(1<<18)
#define		EMAIL_DOORCLOSE_2				(1<<19)
#define		EMAIL_RIDEON					(1<<20)
#define		EMAIL_KOPADOWN					(1<<21)
#define		EMAIL_NOKOBOARD_OFF				(1<<22)

#define		EMAIL_BOMB						(1<<23)


#define		EMAIL_PLAYERHITALL				0xffffffff

#define     StrategyRecord                  struct Object

#define     execstp                         o

#define s_remove_obj(s)                     obj_mark_for_deletion(s)

#define mode_kagoteresa_init                0
#define mode_kagoteresa_main                1
#define mode_kagoteresa_roll                2
#define mode_kagoteresa_hitaway             3

#define mode_kaidanteresa_init              0
#define mode_kaidanteresa_main              1
#define mode_kaidanteresa_roll              2
#define mode_kaidanteresa_hitaway           3
#define mode_kaidanteresa_demo              4

#define mode_oba_init                       0
#define mode_oba_playersearch               1
#define mode_oba_roll                       2
#define mode_oba_hitaway                    3
#define mode_oba_endmessage                 4

#define	OBJECT_ON                    1
#define	OBJECT_ERASE                 2
#define	OBJECT_CALC_MOVEBG           4
#define	OBJECT_AREAOUT               8
#define	OBJECT_DEMOMOVEOBJ           16
#define	OBJECT_DEMOMOVEENTRY         32
#define	OBJECT_GHOST                 64
#define	OBJECT_DITHER                128
#define	OBJECT_INITIAL               256
#define	OBJECT_PLFIRE_OFF            512
#define	OBJECT_NOWATER               1024

#define	MOVESTAT_BGBOUND               1
#define	MOVESTAT_BGTOUCH               2
#define	MOVESTAT_BGTAKEOFF             4
#define	MOVESTAT_DIVE                  8
#define	MOVESTAT_SURFACEWATER          16
#define	MOVESTAT_UNDERWATER            32
#define	MOVESTAT_BOTTOMWATER           64
#define	MOVESTAT_SKY                   128
#define	MOVESTAT_OUTSCOPE              256
#define	MOVESTAT_WALL                  512
#define	MOVESTAT_GAKE                  1024
#define	MOVESTAT_FIRE                  2048
#define	MOVESTAT_WATERJUMP             4096
#define	MOVESTAT_BIGBOUND              8192
#define	MOVESTAT_DEATHCODE             16384

#define	ENEMYDEMO_LOOKPLAYER            1
#define	ENEMYDEMO_SETMESSAGE            2
#define	ENEMYDEMO_SETMESSAGE_YESNO      4
#define	ENEMYDEMO_CAMERA                8
#define	ENEMYDEMO_DLOG_NOSTOP           16

#define	DLOG_DONE				0
#define	DLOG_LOOKFRONT			1
#define	DLOG_LOOKUP				2
#define	DLOG_LOOKDOWN			3

#define	Mbitclr(work,bit)		(work) = (work) & ((bit)^-1)
#define	Mbitset(work,bit)		(work) = (work) | (bit)

#define s_find_obj(stp)                                                          cur_obj_nearest_object_with_behavior(stp)
#define s_calc_playerscope()                                                     cur_obj_lateral_dist_from_mario_to_home()
#define s_check_playerjump()                                                     mario_is_in_air_action()
#define objsound(sound)                                                          cur_obj_play_sound_2(sound)
#define s_kemuri()                                                               spawn_mist_particles()
#define s_call_enemydemo(type,flag,messageNo,cameraNo)                           cur_obj_update_dialog(type,flag,messageNo,cameraNo)
#define s_calc_dangle(angle1,angle2)                                             abs_angle_diff(angle1,angle2)
#define s_allOFF()                                                               cur_obj_disable()
#define s_hitOFF()                                                               cur_obj_become_intangible()
#define s_hitON()                                                                cur_obj_become_tangible()
#define s_hitON_obj(stp)                                                         obj_become_tangible(stp)
#define s_enemybgcheck()                                                         cur_obj_update_floor_and_walls()
#define s_enemymove(angdata)                                                     cur_obj_move_standard(angdata)
#define s_makeobj_chain(mode,ox,oy,oz,mother,shape,pathpointer)                  spawn_object_relative(mode,ox,oy,oz,mother,shape,pathpointer)
#define s_modejmp(actionFunctions)                                               cur_obj_call_action_function(actionFunctions)
#define s_copy_initpos()                                                         cur_obj_set_pos_to_home()
#define CtrlHand(code,node,  data)                                               geo_update_projectile_pos_from_parent(code,node,  data)
#define AlphaControl(code, node,  data)                                          geo_update_layer_transparency(code, node,  data)
#define ControlShapeAnime(code, node)                                            geo_switch_anim_state(code, node)
#define ControlSwitchMap(code,node)                                              geo_switch_area(mtx,stratp)
#define s_calc_skeleton_glbpos(mtx,stratp)                                       obj_update_pos_from_parent_transformation
#define s_copy_scale_matrix(stp,mdst,msrc)                                       obj_apply_scale_to_matrix(stp,mdst,msrc)
#define s_calc_skeleton_glbmtx(mc,ma,mb)                                         create_transformation_from_matrices(mc,ma,mb)
#define s_modechange(obj, pathdata)                                              obj_set_held_state(obj, pathdata)
#define s_distanceXZ_obj2obj(obj1,obj2)                                          lateral_dist_between_objects(obj1,obj2)
#define s_distance_obj2obj(obj1,obj2)                                            dist_between_objects(obj1,obj2)
#define s_chase_speedF(limit, accel)                                             cur_obj_forward_vel_approach_upward(limit, accel)
#define s_chase_speed(speed,limit, accel)                                        approach_f32_signed(speed,limit, accel)
#define s_chase_position(mypos, targetpos,limit)                                 approach_f32_symmetric(mypos, targetpos,limit)
#define s_chase_angle(myangle,targetangle,limit)                                 approach_s16_symmetric(myangle,targetangle,limit)
#define s_chase_angleY( targetangle,speed )                                      cur_obj_rotate_yaw_toward( targetangle,speed )
#define s_calc_targetangle(myobj,targetobj)                                      obj_angle_to_object(myobj,targetobj)
#define s_chase_obj_angle(myobj,targetobj,idx_angle,limit)                       obj_turn_toward_object(myobj,targetobj,idx_angle,limit)
#define s_set_skeleton(stratp,sx,sy,sz)                                          obj_set_parent_relative_pos(stratp,sx,sy,sz)
#define s_set_world(stratp,wx,wy,wz)                                             obj_set_pos(stratp,wx,wy,wz)
#define s_set_angle(stratp,ax,ay,az)                                             obj_set_angle(stratp,ax,ay,az)
#define s_makeobj_absolute(mother,name,shape,pathpointer,wx,wy,wz,ax,ay,az)      spawn_object_abs_with_rot(mother,name,shape,pathpointer,wx,wy,wz,ax,ay,az)
#define s_makeobj_relative(mother,shape,pathpointer,sx,sy,sz,ax,ay,az)           spawn_object_rel_with_rot(mother,shape,pathpointer,sx,sy,sz,ax,ay,az)
#define s_makeobj_mother(mother,shape,pathpointer)                               spawn_obj_with_transform_flags(mother,shape,pathpointer)
#define s_makeobj_initdata(mother,move)                                          spawn_water_droplet(mother,move)
#define s_makeobj(mother,name,shape,pathpointer)                                 spawn_object_at_origin(mother,name,shape,pathpointer)
#define s_makeobj_nowpos(mother,shape,pathpointer)                               spawn_object(mother,shape,pathpointer)
#define s_makeobj_effect(oy,scale,mother,shape,pathpointer)                      try_to_spawn_object(oy,scale,mother,shape,pathpointer)
#define s_makeobj_nowpos_scale(mother,shape,pathpointer,scale)                   spawn_object_with_scale(mother,shape,pathpointer,scale)
#define s_set_childpos(child)                                                    spawn_object_relative(child)
//#define s_makeobj_chain(mode,ox,oy,oz,mother,shape,pathpointer);
//#define s_makeobj_chain_scale(mode,ox,oy,oz,scale,mother,shape,pathpointer);
#define s_calc_speedXYZ()                                                        cur_obj_move_using_vel()
#define s_copy_animeposY(dist,source)                                            obj_copy_graph_y_offset(dist,source)
#define s_copy_worldXYZ_angleXYZ(dist,source)                                    obj_copy_pos_and_angle(dist,source)
#define s_copy_worldXYZ(dist,source)                                             obj_copy_pos(dist,source)
#define s_copy_angleXYZ(dist,source)                                             obj_copy_angle(dist,source)
#define s_copy_worldXYZmappos(stratp)                                            obj_set_gfx_pos_from_pos(stratp)
//#define s_set_animation(stratp,animeNo)                   Object Animation With sounds
#define stRotatePoint(matrix,dst,src)                                            linear_mtxf_mul_vec3f(matrix,dst,src)
#define stBackPoint(matrix,dst,src)                                              linear_mtxf_transpose_mul_vec3f(matrix,dst,src)
#define s_scale_matrix(stratp)                                                   obj_apply_scale_to_transform(stratp)
#define s_copy_scale(dist,source)                                                obj_copy_scale(dist,source)
#define stSetScale(stratp,sx,sy, sz)                                             obj_scale_xyz(stratp,sx,sy, sz)
#define s_scale(stratp,scale)                                                    obj_scale(stratp,scale)
#define s_set_scale(scale)                                                       cur_obj_scale(scale)
#define stSetSkelAnimeNumber(animeNo)                                            cur_obj_init_animation_with_sound(animeNo)
#define s_set_skelanimeNo(animeNo)                                               cur_obj_init_animation(animeNo)
#define s_set_skelanime_speed(animeNo,speed)                                     cur_obj_init_animation_with_accel_and_sound(animeNo,speed)
#define s_set_skeletonobj(stratp, animePtr,animeNo)                              obj_init_animation_with_sound(stratp, animePtr,animeNo)
#define s_shapedispON(stratp)                                                    cur_obj_enable_rendering(stratp)
#define s_shapeON()                                                              cur_obj_unhide()
#define s_shapedispOFF(stratp)                                                   cur_obj_disable_rendering(stratp)
#define s_shapeOFF()                                                             cur_obj_hide()
#define s_shape_disp()                                                           cur_obj_unhide()
#define s_shape_hide()                                                           cur_obj_hide()
#define s_posoffset_mother(p,ox,oy,oz)                                           cur_obj_set_pos_relative(p,ox,oy,oz)
#define s_set_catchOFF(ox,oy,oz)                                                 cur_obj_set_pos_relative_to_parent(ox,oy,oz)
#define s_throw_object()                                                         cur_obj_get_thrown_or_placed()
#define s_drop_object()                                                          cur_obj_get_dropped()
