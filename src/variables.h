#ifndef VARIABLES_H
#define VARIABLES_H

#include "types.h"
#include "common_rtl.h"

//#define r0w (*(uint16*)(g_ram+0x0))
//#define r1w (*(uint16*)(g_ram+0x1))
//#define r2w (*(uint16*)(g_ram+0x2))
//#define r3w (*(uint16*)(g_ram+0x3))
//#define r4w (*(uint16*)(g_ram+0x4))
//#define r5w (*(uint16*)(g_ram+0x5))
//#define r6w (*(uint16*)(g_ram+0x6))
//#define r8w (*(uint16*)(g_ram+0x8))
//#define r9w (*(uint16*)(g_ram+0x9))
//#define r10w (*(uint16*)(g_ram+0xA))
//#define r12w (*(uint16*)(g_ram+0xC))
//#define r14w (*(uint16*)(g_ram+0xE))

//#define r0 (*(uint8*)(g_ram+0x0))
//#define r1 (*(uint8*)(g_ram+0x1))
//#define r2 (*(uint8*)(g_ram+0x2))
//#define r3 (*(uint8*)(g_ram+0x3))
//#define r4 (*(uint8*)(g_ram+0x4))
//#define r5 (*(uint8*)(g_ram+0x5))
//#define r6 (*(uint8*)(g_ram+0x6))
//#define r7 (*(uint8*)(g_ram+0x7))
//#define r8 (*(uint8*)(g_ram+0x8))
//#define r9 (*(uint8*)(g_ram+0x9))
//#define r10 (*(uint8*)(g_ram+0xA))
//#define r11 (*(uint8*)(g_ram+0xB))
//#define r12 (*(uint8*)(g_ram+0xC))
//#define r13 (*(uint8*)(g_ram+0xD))
//#define r14 (*(uint8*)(g_ram+0xE))
//#define r15 (*(uint8*)(g_ram+0xF))

#define R5_slopeptr (*(LongPtr*)(g_ram+0x5))

#define lvlload_R4W (*(uint16*)(g_ram+0x4))

#define loadlvl_R10 (*(uint8*)(g_ram+0xA))
#define loadlvl_R11 (*(uint8*)(g_ram+0xB))

#define waiting_for_vblank (*(uint8*)(g_ram+0x10))
#define flag_irqto_use (*(uint8*)(g_ram+0x11))
#define graphics_stripe_image_to_upload (*(uint8*)(g_ram+0x12))
#define counter_global_frames (*(uint8*)(g_ram+0x13))
#define counter_local_frames (*(uint8*)(g_ram+0x14))
#define io_controller_hold1 (*(uint8*)(g_ram+0x15))
#define io_controller_press1 (*(uint8*)(g_ram+0x16))
#define io_controller_hold2 (*(uint8*)(g_ram+0x17))
#define io_controller_press2 (*(uint8*)(g_ram+0x18))
#define player_current_power_up (*(uint8*)(g_ram+0x19))
#define mirror_current_layer1_xpos (*(uint16*)(g_ram+0x1A))
#define mirror_current_layer1_ypos (*(uint16*)(g_ram+0x1C))
#define mirror_current_layer2_xpos (*(uint16*)(g_ram+0x1E))
#define mirror_current_layer2_ypos (*(uint16*)(g_ram+0x20))
#define mirror_layer3_xpos (*(uint16*)(g_ram+0x22))
#define mirror_layer3_ypos (*(uint16*)(g_ram+0x24))
#define misc_second_level_layer_xpos (*(uint16*)(g_ram+0x26))
#define misc_second_level_layer_ypos (*(uint16*)(g_ram+0x28))
#define mirror_m7_center_xpos (*(uint16*)(g_ram+0x2A))
#define mirror_m7_center_ypos (*(uint16*)(g_ram+0x2C))
#define mirror_m7_matrix_alo (*(uint8*)(g_ram+0x2E))
#define mirror_m7_matrix_ahi (*(uint8*)(g_ram+0x2F))
#define mirror_m7_matrix_blo (*(uint8*)(g_ram+0x30))
#define mirror_m7_matrix_bhi (*(uint8*)(g_ram+0x31))
#define mirror_m7_matrix_clo (*(uint8*)(g_ram+0x32))
#define mirror_m7_matrix_chi (*(uint8*)(g_ram+0x33))
#define mirror_m7_matrix_dlo (*(uint8*)(g_ram+0x34))
#define mirror_m7_matrix_dhi (*(uint8*)(g_ram+0x35))
#define misc_m7_rotation (*(uint16*)(g_ram+0x36))
#define misc_m7_angle (*(uint16*)(g_ram+0x38))
#define mirror_m7_xpos (*(uint16*)(g_ram+0x3A))
#define mirror_m7_ypos (*(uint16*)(g_ram+0x3C))
#define mirror_bgmode_and_tile_size_setting (*(uint8*)(g_ram+0x3E))
#define mirror_oamaddress_lo (*(uint8*)(g_ram+0x3F))
#define mirror_color_math_select_and_enable (*(uint8*)(g_ram+0x40))
#define mirror_bg1_and2_window_mask_settings (*(uint8*)(g_ram+0x41))
#define mirror_bg3_and4_window_mask_settings (*(uint8*)(g_ram+0x42))
#define mirror_object_and_color_window_settings (*(uint8*)(g_ram+0x43))
#define mirror_color_math_initial_settings (*(uint8*)(g_ram+0x44))
#define camera_layer1_row_column_to_update_left_up (*(uint16*)(g_ram+0x45))
#define camera_layer1_row_column_to_update_right_down (*(uint16*)(g_ram+0x47))
#define camera_layer2_row_column_to_update_left_up (*(uint16*)(g_ram+0x49))
#define camera_layer2_row_column_to_update_right_down (*(uint16*)(g_ram+0x4B))
#define camera_xy_layer1_vramupd_left_up (*(uint16*)(g_ram+0x4D))
#define camera_xy_layer1_vramupd_right_down (*(uint16*)(g_ram+0x4F))
#define camera_xy_layer2_vramupd_left_up (*(uint16*)(g_ram+0x51))
#define camera_xy_layer2_vramupd_right_down (*(uint16*)(g_ram+0x53))
#define camera_layer1_scrolling_direction (*(uint8*)(g_ram+0x55))
#define camera_layer2_scrolling_direction (*(uint8*)(g_ram+0x56))
#define blocks_sub_scr_pos (*(uint8*)(g_ram+0x57))
#define blocks_size_or_type (*(uint8*)(g_ram+0x59))
#define blocks_object_number (*(uint8*)(g_ram+0x5A))
#define misc_level_layout_flags (*(uint8*)(g_ram+0x5B))
#define misc_screens_in_lvl (*(uint8*)(g_ram+0x5D))
#define camera_last_screen_horiz (*(uint8*)(g_ram+0x5E))
#define camera_last_screen_vert (*(uint8*)(g_ram+0x5F))
#define sprites_tile_priority (*(uint8*)(g_ram+0x64))

// alias
#define credits_var65 (*(uint16*)(g_ram+0x65))
#define credits_index (*(uint8*)(g_ram+0x67))

extern const uint8 *ptr_layer1_data;
extern const uint8 *ptr_layer2_data;
extern uint8 *ptr_lo_map16_data;
extern uint8 *ptr_lo_map16_data_bak;
extern uint8 ptr_layer2_is_bg;

#define xptr_layer1_data (*(LongPtr*)(g_ram+0x65))
#define xptr_layer2_data (*(LongPtr*)(g_ram+0x68))
#define xptr_lo_map16_data (*(LongPtr*)(g_ram+0x6B))
#define xptr_hi_map16_data (*(LongPtr*)(g_ram+0x6E))

#define player_current_state (*(uint8*)(g_ram+0x71))
#define player_in_air_flag (*(uint8*)(g_ram+0x72))
#define player_ducking_flag (*(uint8*)(g_ram+0x73))
#define player_climbing_flag (*(uint8*)(g_ram+0x74))
#define player_swimming_flag (*(uint8*)(g_ram+0x75))
#define player_facing_direction (*(uint8*)(g_ram+0x76))
#define player_blocked_flags (*(uint8*)(g_ram+0x77))
#define player_hide_player_tile_flags (*(uint8*)(g_ram+0x78))
#define player_sub_xspeed (*(uint8*)(g_ram+0x7A))
#define player_xspeed (*(uint8*)(g_ram+0x7B))
#define player_sub_yspeed (*(uint8*)(g_ram+0x7C))
#define player_yspeed (*(uint8*)(g_ram+0x7D))
#define player_on_screen_pos_x (*(uint16*)(g_ram+0x7E))
#define player_on_screen_pos_y (*(uint16*)(g_ram+0x80))
#define ptr_slope_steepness (*(LongPtr*)(g_ram+0x82))
#define flag_underwater_level (*(uint8*)(g_ram+0x85))
#define flag_ice_level (*(uint8*)(g_ram+0x86))
#define player_timer_pipe_warping (*(uint8*)(g_ram+0x88))
#define player_pipe_action (*(uint8*)(g_ram+0x89))

#define player_collision_var8a (*(uint8*)(g_ram+0x8A))
#define player_collision_var8b (*(uint8*)(g_ram+0x8B))
#define player_collision_var8c (*(uint8*)(g_ram+0x8C))
#define temp8d (*(uint8*)(g_ram+0x8D))
#define temp8e (*(uint8*)(g_ram+0x8E))
#define temp8f (*(uint8*)(g_ram+0x8F))
#define player_ypos_in_block (*(uint8*)(g_ram+0x90))
#define player_vdir_push_out_of_block (*(uint8*)(g_ram+0x91))
#define player_xpos_in_block (*(uint8*)(g_ram+0x92))
#define player_hdir_block_touched (*(uint8*)(g_ram+0x93))
#define player_xpos (*(uint16*)(g_ram+0x94))
#define player_ypos (*(uint16*)(g_ram+0x96))
#define blocks_ypos (*(uint16*)(g_ram+0x98))
#define blocks_xpos (*(uint16*)(g_ram+0x9A))
#define blocks_map16_to_generate (*(uint8*)(g_ram+0x9C))
#define flag_sprites_locked (*(uint8*)(g_ram+0x9D))
#define spr_spriteid ((uint8*)(g_ram+0x9E))
#define spr_yspeed ((uint8*)(g_ram+0xAA))
#define spr_xspeed ((uint8*)(g_ram+0xB6))
#define spr_table00c2 ((uint8*)(g_ram+0xC2))
#define ptr_sprite_list_data (*(LongPtr*)(g_ram+0xCE))
#define player_current_xpos (*(uint16*)(g_ram+0xD1))
#define player_current_ypos (*(uint16*)(g_ram+0xD3))
#define spr86_wiggler_segment_pos_ptr (*(LongPtr*)(g_ram+0xD5))
#define spr_ypos_lo ((uint8*)(g_ram+0xD8))
#define spr_xpos_lo ((uint8*)(g_ram+0xE4))

#define lunar_magic_F9 (*(uint8*)(g_ram+0xf9))
#define lunar_magic_FA (*(uint8*)(g_ram+0xfa))
#define lunar_magic_FB (*(uint8*)(g_ram+0xfb))
#define lunar_magic_FC (*(uint8*)(g_ram+0xfc))
#define lunar_magic_FD (*(uint8*)(g_ram+0xfd))
#define lunar_magic_FE (*(uint16*)(g_ram+0xfe))
#define misc_game_mode (*(uint8*)(g_ram+0x100))
#define misc_currently_loaded_sprite_graphics_files ((uint8*)(g_ram+0x101))
#define misc_intro_level_flag (*(uint8*)(g_ram+0x109))
#define misc_current_save_file (*(uint8*)(g_ram+0x10A))
#define misc_scratchram0110 ((uint8*)(g_ram+0x110))
#define sa1_snescode_pointer (*(uint16*)(g_ram+0x183))
#define sa1_snescode_pointer_bank (*(uint8*)(g_ram+0x185))
#define sa1_snesdone_flag ((uint8*)(g_ram+0x18A))
#define oam_buf ((OamEnt*)(g_ram+0x200))
#define oam_buf_ext ((uint8*)(g_ram+0x400))
#define sprites_oamtile_size_buffer ((uint8*)(g_ram+0x420))
#define misc_hdmawindow_effect_table ((uint8*)(g_ram+0x4A0))
#define palettes_palette_upload_table_index (*(uint8*)(g_ram+0x680))
#define palettes_dynamic_palette_upload_index (*(uint8*)(g_ram+0x681))
#define palettes_dynamic_palette_bytes_to_upload (*(uint8*)(g_ram+0x682))
#define palettes_dynamic_palette_cgramaddress (*(uint8*)(g_ram+0x683))
#define palettes_dynamic_palette_colors ((uint8*)(g_ram+0x684))
#define palettes_background_color (*(uint16*)(g_ram+0x701))
#define palettes_palette_mirror ((uint16*)(g_ram+0x703))
#define palettes_copy_of_background_color (*(uint16*)(g_ram+0x903))
#define palettes_copy_of_palette_mirror ((uint16*)(g_ram+0x905))
#define unused_byte_7E0AF5 (*(uint8*)(g_ram+0xAF5))
#define sprites_cutscene_sprite_table_0AF6 ((uint8*)(g_ram+0xAF6))
#define sprites_cutscene_sprite_yspeed ((uint8*)(g_ram+0xB05))
#define sprites_cutscene_sprite_xspeed ((uint8*)(g_ram+0xB14))
#define sprites_cutscene_sprite_sub_ypos ((uint8*)(g_ram+0xB23))
#define sprites_cutscene_sprite_sub_xpos ((uint8*)(g_ram+0xB32))
#define sprites_cutscene_sprite_ypos_lo ((uint8*)(g_ram+0xB41))
#define sprites_cutscene_sprite_xpos_lo ((uint8*)(g_ram+0xB50))
#define sprites_cutscene_sprite_ypos_hi ((uint8*)(g_ram+0xB5F))
#define sprites_cutscene_sprite_xpos_hi ((uint8*)(g_ram+0xB6E))
#define cutscene_spr_hammer_debris_yacceleration ((uint8*)(g_ram+0xB7D))
#define cutscene_spr_hammer_debris_current_status ((uint8*)(g_ram+0xB8C))
#define decompressed_gfx_plus_256 ((uint16*)(g_ram+0xBF6))
#define graphics_tile_anim_source_address1 (*(uint16*)(g_ram+0xD76))
#define graphics_tile_anim_source_address2 (*(uint16*)(g_ram+0xD78))
#define graphics_tile_anim_source_address3 (*(uint16*)(g_ram+0xD7A))
#define graphics_tile_anim_vramaddress1 (*(uint16*)(g_ram+0xD7C))
#define graphics_tile_anim_vramaddress2 (*(uint16*)(g_ram+0xD7E))
#define graphics_tile_anim_vramaddress3 (*(uint16*)(g_ram+0xD80))
#define pointer_player_palette (*(uint16*)(g_ram+0xD82))
#define player_number_of_tiles_to_update (*(uint8*)(g_ram+0xD84))
#define graphics_dynamic_sprite_pointers_top_lo ((uint8*)(g_ram+0xD85))
#define graphics_dynamic_sprite_pointers_bottom_lo ((uint8*)(g_ram+0xD8F))
#define graphics_dynamic_sprite_tile7 (*(uint16*)(g_ram+0xD99))
#define misc_nmito_use_flag (*(uint8*)(g_ram+0xD9B))
#define mirror_main_screen_layers (*(uint8*)(g_ram+0xD9D))
#define mirror_sub_screen_layers (*(uint8*)(g_ram+0xD9E))
#define mirror_hdmaenable (*(uint8*)(g_ram+0xD9F))
#define io_controllers_plugged_in (*(uint8*)(g_ram+0xDA0))
#define io_controller_hold1_copyp1 (*(uint8*)(g_ram+0xDA2))
#define io_controller_hold1_copyp2 (*(uint8*)(g_ram+0xDA3))
#define io_controller_hold2_copyp1 (*(uint8*)(g_ram+0xDA4))
#define io_controller_hold2_copyp2 (*(uint8*)(g_ram+0xDA5))
#define io_controller_press1_copyp1 (*(uint8*)(g_ram+0xDA6))
#define io_controller_press1_copyp2 (*(uint8*)(g_ram+0xDA7))
#define io_controller_press2_copyp1 (*(uint8*)(g_ram+0xDA8))
#define io_controller_press2_copyp2 (*(uint8*)(g_ram+0xDA9))
#define io_p1_ctrl_disable_lo (*(uint8*)(g_ram+0xDAA))
#define io_p2_ctrl_disable_lo (*(uint8*)(g_ram+0xDAB))
#define io_p1_ctrl_disable_hi (*(uint8*)(g_ram+0xDAC))
#define io_p2_ctrl_disable_hi (*(uint8*)(g_ram+0xDAD))
#define mirror_screen_display_register (*(uint8*)(g_ram+0xDAE))
#define misc_mosaic_direction (*(uint8*)(g_ram+0xDAF))
#define mirror_mosaic_size_and_bgenable (*(uint8*)(g_ram+0xDB0))
#define timer_keep_game_mode_active (*(uint8*)(g_ram+0xDB1))
#define flag_two_player_game (*(uint8*)(g_ram+0xDB2))
#define player_current_character (*(uint8*)(g_ram+0xDB3))
#define players_lives ((uint8*)(g_ram+0xDB4))
#define players_coins ((uint8*)(g_ram+0xDB6))
#define players_power_up ((uint8*)(g_ram+0xDB8))
#define players_has_yoshi ((uint8*)(g_ram+0xDBA))
#define players_item_box ((uint8*)(g_ram+0xDBC))
#define player_current_life_count (*(uint8*)(g_ram+0xDBE))
#define player_current_coin_count (*(uint8*)(g_ram+0xDBF))
#define counter_green_star_block (*(uint8*)(g_ram+0xDC0))
#define yoshi_carry_over_levels_flag (*(uint8*)(g_ram+0xDC1))
#define player_current_item_box (*(uint8*)(g_ram+0xDC2))
#define unusedram_7e0dc3 ((uint8*)(g_ram+0xDC3))
#define players_overworld_xpos_is_going_to ((PointU16*)(g_ram+0xDC7))
#define player_overworld_xspeed (*(uint16*)(g_ram+0xDCF))
#define player_overworld_yspeed (*(uint16*)(g_ram+0xDD1))
#define ow_player_direction (*(uint16*)(g_ram+0xDD3))
#define misc_exit_level_action (*(uint8*)(g_ram+0xDD5))
#define player_current_characterx4 (*(uint16*)(g_ram+0xDD6))
#define flag_switch_players (*(uint8*)(g_ram+0xDD8))
#define misc_music_register_backup (*(uint8*)(g_ram+0xDDA))
#define misc_which_file_to_erase (*(uint8*)(g_ram+0xDDE))
#define sprites_starting_oamindex_for_overworld_sprites (*(uint8*)(g_ram+0xDDF))
#define sprites_overworld_cloud_sync_table (*(uint8*)(g_ram+0xDE0))
#define owspr_spriteid ((uint8*)(g_ram+0xDE5))
#define owspr_table0df5 ((uint8*)(g_ram+0xDF5))
#define owspr_table0e05 ((uint8*)(g_ram+0xE05))
#define owspr_table0e15 ((uint8*)(g_ram+0xE15))
#define owspr_table0e25 ((uint8*)(g_ram+0xE25))
#define owspr_xpos_lo ((uint8*)(g_ram+0xE35))
#define owspr_ypos_lo ((uint8*)(g_ram+0xE45))
#define owspr_zpos_lo ((uint8*)(g_ram+0xE55))
#define owspr_xpos_hi ((uint8*)(g_ram+0xE65))
#define owspr_ypos_hi ((uint8*)(g_ram+0xE75))
#define owspr_zpos_hi ((uint8*)(g_ram+0xE85))
#define owspr_xspeed ((uint8*)(g_ram+0xE95))
#define owspr_yspeed ((uint8*)(g_ram+0xEA5))
#define owspr_zspeed ((uint8*)(g_ram+0xEB5))
#define owspr_sub_xpos ((uint8*)(g_ram+0xEC5))
#define owspr_sub_ypos ((uint8*)(g_ram+0xED5))
#define owspr_sub_zpos ((uint8*)(g_ram+0xEE5))
#define owspr06_koopa_kid_activate_flag (*(uint8*)(g_ram+0xEF5))
#define owspr06_koopa_kid_tile_index (*(uint8*)(g_ram+0xEF6))
#define ow_enter_level_flag (*(uint8*)(g_ram+0xEF7))
#define flag_yoshi_saved (*(uint8*)(g_ram+0xEF8))
#define misc_status_bar_tilemap ((uint8*)(g_ram+0xEF9))
#define counter_timer_hundreds (*(uint8*)(g_ram+0xF31))
#define counter_timer_tens (*(uint8*)(g_ram+0xF32))
#define counter_timer_ones (*(uint8*)(g_ram+0xF33))
#define player_mario_score_lo (*(uint8*)(g_ram+0xF34))
#define player_mario_score_mid (*(uint8*)(g_ram+0xF35))
#define player_mario_score_hi (*(uint8*)(g_ram+0xF36))
#define player_luigi_score_lo (*(uint8*)(g_ram+0xF37))
#define player_luigi_score_mid (*(uint8*)(g_ram+0xF38))
#define player_luigi_score_hi (*(uint8*)(g_ram+0xF39))
#define counter_level_end_score_tally (*(uint16*)(g_ram+0xF40))
#define player_mario_bonus_stars (*(uint8*)(g_ram+0xF48))
#define player_luigi_bonus_stars (*(uint8*)(g_ram+0xF49))
#define cluster_spr_table0f4a ((uint8*)(g_ram+0xF4A))
#define cluster_spr_table0f72 ((uint8*)(g_ram+0xF72))
#define cluster_spr_table0f86 ((uint8*)(g_ram+0xF86))
#define cluster_spr_table0f9a ((uint8*)(g_ram+0xF9A))
#define cluster_spr04_boo_ring1_angle_lo (*(uint8*)(g_ram+0xFAE))
#define cluster_spr04_boo_ring2_angle_lo (*(uint8*)(g_ram+0xFAF))
#define cluster_spr04_boo_ring1_angle_hi (*(uint8*)(g_ram+0xFB0))
#define cluster_spr04_boo_ring1_center_xpos_lo (*(uint8*)(g_ram+0xFB2))
#define cluster_spr04_boo_ring2_center_xpos_lo (*(uint8*)(g_ram+0xFB3))
#define cluster_spr04_boo_ring1_center_xpos_hi (*(uint8*)(g_ram+0xFB4))
#define cluster_spr04_boo_ring2_center_xpos_hi (*(uint8*)(g_ram+0xFB5))
#define cluster_spr04_boo_ring1_center_ypos_lo (*(uint8*)(g_ram+0xFB6))
#define cluster_spr04_boo_ring2_center_ypos_lo (*(uint8*)(g_ram+0xFB7))
#define cluster_spr04_boo_ring1_center_ypos_hi (*(uint8*)(g_ram+0xFB8))
#define cluster_spr04_boo_ring2_center_ypos_hi (*(uint8*)(g_ram+0xFB9))
#define cluster_spr04_boo_ring1_offscreen_flag (*(uint8*)(g_ram+0xFBA))
#define cluster_spr04_boo_ring2_offscreen_flag (*(uint8*)(g_ram+0xFBB))
#define cluster_spr04_boo_ring_unused_ring1_level_list_index (*(uint8*)(g_ram+0xFBC))
#define pointer_map16_tiles ((uint16*)(g_ram+0xFBE))
#define misc_item_memory_setting (*(uint8*)(g_ram+0x13BE))
#define ow_level_number_lo (*(uint8*)(g_ram+0x13BF))
#define unusedram_level_number_hi (*(uint8*)(g_ram+0x13C0))
#define ow_tile_player_is_standing_on (*(uint16*)(g_ram+0x13C1))
#define ow_currently_loaded_submap (*(uint16*)(g_ram+0x13C3))
#define unusedram_3up_moons_counter (*(uint8*)(g_ram+0x13C5))
#define misc_currently_active_boss_end_cutscene (*(uint8*)(g_ram+0x13C6))
#define yoshi_current_yoshi_color (*(uint8*)(g_ram+0x13C7))
#define flag_show_continue_and_end (*(uint8*)(g_ram+0x13C9))
#define flag_show_save_prompt (*(uint8*)(g_ram+0x13CA))
#define unusedram_got_invincible_star_from_goal (*(uint8*)(g_ram+0x13CB))
#define counter_coin_handler (*(uint8*)(g_ram+0x13CC))
#define lm_var13CD (*(uint8*)(g_ram+0x13CD))
#define flag_got_midpoint (*(uint8*)(g_ram+0x13CE))
#define flag_override_no_yoshi_intro_for_midway_entrance (*(uint8*)(g_ram+0x13CF))
#define ow_destroy_tile_event_tile_index (*(uint8*)(g_ram+0x13D0))
#define ow_destroy_tile_event_vramindex (*(uint8*)(g_ram+0x13D1))
#define misc_color_of_palace_switch_pressed1 (*(uint8*)(g_ram+0x13D2))
#define timer_prevent_pause (*(uint8*)(g_ram+0x13D3))
#define flag_pause (*(uint8*)(g_ram+0x13D4))
#define flag_disable_layer3_scroll (*(uint8*)(g_ram+0x13D5))
#define timer_wait_before_score_tally (*(uint8*)(g_ram+0x13D6))
#define player_overworld_sub_ypos (*(uint16*)(g_ram+0x13D7))
#define pointer_current_overworld_process (*(uint8*)(g_ram+0x13D9))
#define player_sub_xpos (*(uint8*)(g_ram+0x13DA))
#define player_walking_frame (*(uint8*)(g_ram+0x13DB))
#define player_sub_ypos (*(uint8*)(g_ram+0x13DC))
#define player_turning_around_flag (*(uint8*)(g_ram+0x13DD))
#define player_override_walking_frames (*(uint8*)(g_ram+0x13DE))
#define player_cape_image (*(uint8*)(g_ram+0x13DF))                     // The Cape on Mario's Back?
#define player_current_pose (*(uint8*)(g_ram+0x13E0))                   // Current Player Sprite
#define player_slope_player_is_on1 (*(uint8*)(g_ram+0x13E1))            // 45° Slope?
#define player_spinjump_fireball_timer (*(uint8*)(g_ram+0x13E2))
#define player_wall_walk_status (*(uint8*)(g_ram+0x13E3))
#define player_pmeter (*(uint8*)(g_ram+0x13E4))
#define player_anim_speed_index (*(uint8*)(g_ram+0x13E5))
#define flag_cape_to_sprite_interaction (*(uint8*)(g_ram+0x13E8))
#define player_cape_hitbox_x (*(uint16*)(g_ram+0x13E9))
#define player_cape_hitbox_y (*(uint16*)(g_ram+0x13EB))
#define player_sliding_on_ground (*(uint8*)(g_ram+0x13ED))
#define player_slope_player_is_on2 (*(uint8*)(g_ram+0x13EE))            // 90° Slope?
#define player_on_ground_flag (*(uint8*)(g_ram+0x13EF))
#define player_facing_direction_on_net_door (*(uint8*)(g_ram+0x13F0))
#define flag_enable_vert_scroll (*(uint8*)(g_ram+0x13F1))
#define unusedram_7e13f2 (*(uint8*)(g_ram+0x13F2))
#define timer_inflate_from_pballoon (*(uint8*)(g_ram+0x13F3))
#define blocks_give_life_in_bonus_flags_row1 (*(uint8*)(g_ram+0x13F4))
#define blocks_give_life_in_bonus_flags_row2 (*(uint8*)(g_ram+0x13F5))
#define blocks_give_life_in_bonus_flags_row3 (*(uint8*)(g_ram+0x13F6))
#define blocks_give_life_in_bonus_flags_row4 (*(uint8*)(g_ram+0x13F7))
#define blocks_give_life_in_bonus_flags_row5 (*(uint8*)(g_ram+0x13F8))
#define player_current_layer_priority (*(uint8*)(g_ram+0x13F9))
#define player_can_jump_out_of_water (*(uint8*)(g_ram+0x13FA))
#define player_freeze_player_flag (*(uint8*)(g_ram+0x13FB))
#define misc_currently_active_boss (*(uint8*)(g_ram+0x13FC))
#define flag_lrscroll_flag (*(uint8*)(g_ram+0x13FD))
#define misc_lrscroll_direction (*(uint8*)(g_ram+0x13FE))
#define player_facing_directionx2 (*(uint8*)(g_ram+0x13FF))
#define camera_lrscroll_move_flag (*(uint8*)(g_ram+0x1400))
#define timer_time_before_lrscroll (*(uint8*)(g_ram+0x1401))
#define blocks_note_block_bounce_flag (*(uint8*)(g_ram+0x1402))
#define flag_layer3_tide_level (*(uint8*)(g_ram+0x1403))
#define flag_scroll_up_to_player (*(uint8*)(g_ram+0x1404))
#define flag_about_to_warp_in_pipe (*(uint8*)(g_ram+0x1405))
#define camera_bounce_off_spring_flag (*(uint8*)(g_ram+0x1406))
#define player_cape_flying_phase (*(uint8*)(g_ram+0x1407))
#define player_cape_glide_index (*(uint8*)(g_ram+0x1408))
#define player_furthest_cape_dive_stage (*(uint8*)(g_ram+0x1409))
#define unusedram_7e140a (*(uint8*)(g_ram+0x140A))
#define player_spin_jump_flag (*(uint8*)(g_ram+0x140D))
#define sprites_layer2_is_touched_flag (*(uint8*)(g_ram+0x140E))
#define flag_reznor_room_oamindex_timer (*(uint8*)(g_ram+0x140F))
#define flag_display_yoshis_wings (*(uint8*)(g_ram+0x1410))
#define flag_layer1_horiz_scroll_level_setting (*(uint8*)(g_ram+0x1411))
#define flag_layer1_vert_scroll_level_setting (*(uint8*)(g_ram+0x1412))
#define flag_layer2_horiz_scroll_level_setting (*(uint8*)(g_ram+0x1413))
#define flag_layer2_vert_scroll_level_setting (*(uint8*)(g_ram+0x1414))
#define camera_layer2_ypos_relative_to_layer1 (*(uint16*)(g_ram+0x1417))
#define yoshi_in_pipe (*(uint8*)(g_ram+0x1419))
#define counter_sublevels_entered (*(uint8*)(g_ram+0x141A))
#define flag_prevent_coin_bonus_game_replay (*(uint8*)(g_ram+0x141B))
#define flag_secret_goal_sprite (*(uint8*)(g_ram+0x141C))
#define flag_show_player_start (*(uint8*)(g_ram+0x141D))
#define yoshi_yoshi_has_wings (*(uint8*)(g_ram+0x141E))
#define flag_disable_no_yoshi_intro (*(uint8*)(g_ram+0x141F))
#define counter_yoshi_coins_collected (*(uint8*)(g_ram+0x1420))
#define counter_1up_check_points_collected (*(uint8*)(g_ram+0x1421))
#define counter_yoshi_coins_to_display (*(uint8*)(g_ram+0x1422))
#define misc_color_of_palace_switch_pressed2 (*(uint8*)(g_ram+0x1423))
#define timer_display_bonus_stars (*(uint8*)(g_ram+0x1424))
#define flag_active_bonus_game (*(uint8*)(g_ram+0x1425))
#define misc_display_message (*(uint8*)(g_ram+0x1426))
#define spra0_bowser_clown_car_face_anim_frame (*(uint8*)(g_ram+0x1427))
#define spra0_bowser_propeller_anim_frame_counter (*(uint8*)(g_ram+0x1428))
#define spra0_bowser_palette_index (*(uint8*)(g_ram+0x1429))
#define player_relative_position_needed_to_scroll_screen (*(uint16*)(g_ram+0x142A))
#define camera_pos_for_scroll ((uint16*)(g_ram+0x142C))
#define blocks_lowest_number_solid_map16_tile_for_sprites (*(uint8*)(g_ram+0x1430))
#define blocks_highest_number_solid_map16_tile_for_sprites (*(uint8*)(g_ram+0x1431))
#define spr45_directional_coins_no_respawn_flag (*(uint8*)(g_ram+0x1432))
#define timer_hdmawindow_scaling_factor (*(uint8*)(g_ram+0x1433))
#define timer_end_level_via_keyhole (*(uint8*)(g_ram+0x1434))
#define flag_keyhole_anim_phase (*(uint8*)(g_ram+0x1435))
#define flag_upload_load_screen_letters_tovram (*(uint8*)(g_ram+0x143A))
#define misc_death_message_to_display (*(uint8*)(g_ram+0x143B))
#define timer_display_death_message_animation (*(uint8*)(g_ram+0x143C))
#define timer_time_to_display_death_message (*(uint8*)(g_ram+0x143D))
#define l1_l2_scroll_spr_spriteid ((uint8*)(g_ram+0x143E))
#define l1_l2_scroll_spr_scroll_type_index ((uint8*)(g_ram+0x1440))
#define l1_l2_scroll_spr_current_state ((uint8*)(g_ram+0x1442))
#define l1_l2_scroll_spr_timer ((uint8*)(g_ram+0x1444))
#define l1_l2_scroll_spr_speed ((PointU16*)(g_ram+0x1446))
#define l1_l2_scroll_spr_sub_pos ((PointU16*)(g_ram+0x144E))
#define scroll_spr_layer_index (*(uint8*)(g_ram+0x1456))
#define sprites_draw_ending_yoshis (*(uint8*)(g_ram+0x1457))
#define misc_layer3_xspeed (*(uint16*)(g_ram+0x1458))
#define misc_layer3_yspeed (*(uint16*)(g_ram+0x145A))
#define misc_layer3_tide_sub_ypos (*(uint16*)(g_ram+0x145C))
#define lm_word_7E145E (*(uint16*)(g_ram+0x145e))
#define flag_layer3_vert_scroll_direction (*(uint8*)(g_ram+0x1460))
#define unusedram_7e1461 (*(uint8*)(g_ram+0x1461))
#define misc_layer1_pos ((PointU16*)(g_ram+0x1462))
#define misc_layer3_xdisp (*(uint16*)(g_ram+0x146A))
#define player_carrying_something_flag1 (*(uint8*)(g_ram+0x1470))
#define misc_player_on_solid_sprite (*(uint8*)(g_ram+0x1471))

#define sprc6_spotlight_left_top_x (*(uint8*)(g_ram+0x1472))
#define sprc6_spotlight_right_top_x (*(uint8*)(g_ram+0x1474))
#define sprc6_spotlight_left_bottom_x (*(uint8*)(g_ram+0x1476))
#define sprc6_spotlight_right_bottom_x (*(uint8*)(g_ram+0x1478))
#define sprc6_spotlight_left_scanline_x (*(uint8*)(g_ram+0x147A))
#define sprc6_spotlight_right_scanline_x (*(uint8*)(g_ram+0x147C))
#define sprc6_spotlight_shift_left (*(uint8*)(g_ram+0x147E))
#define sprc6_spotlight_shift_right (*(uint8*)(g_ram+0x147F))
#define sprc6_spotlight_left_side_w (*(uint8*)(g_ram+0x1480))
#define sprc6_spotlight_width_right_side_w (*(uint8*)(g_ram+0x1481))
#define flag_skip_spotlight_init (*(uint8*)(g_ram+0x1482))
#define sprc6_spotlight_dir (*(uint8*)(g_ram+0x1483))
#define sprc6_spotlight_bottom_left_window_pos_relative_to_top (*(uint8*)(g_ram+0x1484))
#define sprc6_spotlight_bottom_right_window_pos_relative_to_top (*(uint8*)(g_ram+0x1485))
#define unusedram_7e1486 ((uint8*)(g_ram+0x1486))
#define misc_rngroutine_scratchram148b (*(uint8*)(g_ram+0x148B))
#define misc_rngroutine_scratchram148c (*(uint8*)(g_ram+0x148C))
#define misc_random_byte1 (*(uint8*)(g_ram+0x148D))
#define misc_random_byte2 (*(uint8*)(g_ram+0x148E))
#define player_carrying_something_flag2 (*(uint8*)(g_ram+0x148F))
#define timer_star_power (*(uint8*)(g_ram+0x1490))
#define sprites_position_disp (*(uint8*)(g_ram+0x1491))
#define timer_show_victory_pose (*(uint8*)(g_ram+0x1492))
#define timer_end_level (*(uint8*)(g_ram+0x1493))
#define palettes_level_end_color_fade_direction (*(uint8*)(g_ram+0x1494))
#define timer_level_end_fade (*(uint8*)(g_ram+0x1495))
#define player_anim_timer (*(uint8*)(g_ram+0x1496))
#define timer_player_hurt (*(uint8*)(g_ram+0x1497))
#define timer_display_player_pick_up_pose (*(uint8*)(g_ram+0x1498))
#define timer_display_player_face_screen_pose (*(uint8*)(g_ram+0x1499))
#define timer_display_player_kicking_pose (*(uint8*)(g_ram+0x149A))
#define timer_player_palette_cycle (*(uint8*)(g_ram+0x149B))
#define timer_display_player_shoot_fireball_pose (*(uint8*)(g_ram+0x149C))
#define timer_on_swinging_climbing_net_door (*(uint8*)(g_ram+0x149D))
#define timer_display_player_net_punch_pose (*(uint8*)(g_ram+0x149E))
#define timer_wait_before_cape_flight_begins (*(uint8*)(g_ram+0x149F))
#define timer_show_running_frames_before_take_off (*(uint8*)(g_ram+0x14A0))
#define timer_player_slides_when_turing (*(uint8*)(g_ram+0x14A1))
#define timer_cape_flap_animation (*(uint8*)(g_ram+0x14A2))
#define timer_yoshi_tongue_is_out (*(uint8*)(g_ram+0x14A3))
#define timer_change_diving_state (*(uint8*)(g_ram+0x14A4))
#define timer_time_to_float_after_cape_flight (*(uint8*)(g_ram+0x14A5))
#define timer_active_cape_spin (*(uint8*)(g_ram+0x14A6))
#define timer_reznor_bridge_breaking (*(uint8*)(g_ram+0x14A7))
#define unusedram_7e14a8 (*(uint8*)(g_ram+0x14A8))
#define unusedram_7e14a9 (*(uint8*)(g_ram+0x14A9))
#define unusedram_7e14aa (*(uint8*)(g_ram+0x14AA))
#define timer_bonus_game_end (*(uint8*)(g_ram+0x14AB))
#define unusedram_7e14ac (*(uint8*)(g_ram+0x14AC))
#define timer_blue_pswitch (*(uint8*)(g_ram+0x14AD))
#define timer_silver_pswitch (*(uint8*)(g_ram+0x14AE))
#define flag_on_off_switch (*(uint8*)(g_ram+0x14AF))
//#define temp14b0 (*(uint8*)(g_ram+0x14B0))
//#define temp14b1 (*(uint8*)(g_ram+0x14B1))
//#define temp14b2 (*(uint8*)(g_ram+0x14B2))
//#define temp14b3 (*(uint8*)(g_ram+0x14B3))
// 
//#define temp14b4 (*(uint8*)(g_ram+0x14B4))
//#define temp14b5 (*(uint8*)(g_ram+0x14B5))
//#define temp14b6 (*(uint8*)(g_ram+0x14B6))
//#define temp14b7 (*(uint8*)(g_ram+0x14B7))
// 
//#define temp14b8 (*(uint8*)(g_ram+0x14B8))
//#define temp14b9 (*(uint8*)(g_ram+0x14B9))
//#define temp14ba (*(uint8*)(g_ram+0x14BA))
//#define temp14bb (*(uint8*)(g_ram+0x14BB))
// 
//#define temp14bc (*(uint8*)(g_ram+0x14BC))
// 
//#define temp1436 (*(uint8*)(g_ram+0x1436))
//#define player_on_tilting_platform_xpos_hi (*(uint8*)(g_ram+0x1437))

#define player_on_tilting_platform_xpos (*(uint16*)(g_ram+0x1436))
#define player_on_tilting_platform_ypos (*(uint16*)(g_ram+0x1438))

//#define temp1438 (*(uint8*)(g_ram+0x1438))
//#define player_on_tilting_platform_ypos_hi (*(uint8*)(g_ram+0x1439))

// These are aliased
#define switch_block_event_oam_index (*(uint8*)(g_ram+0x1438))
#define switch_block_event_blocks_thrown_ctr (*(uint8*)(g_ram+0x1436))
#define switch_block_event_wait_counter (*(uint8*)(g_ram+0x1437))
#define switch_block_event_ejection_counter (*(uint8*)(g_ram+0x1439))

#define bowserbattle_var14b0 (*(uint8*)(g_ram+0x14B0))
#define bowserbattle_var14b1 (*(uint8*)(g_ram+0x14B1))
#define bowserbattle_var14b2 (*(uint8*)(g_ram+0x14B2))
#define bowserbattle_var14b3 (*(uint8*)(g_ram+0x14B3))
#define bowserbattle_var14b4 (*(uint8*)(g_ram+0x14B4))
#define bowserbattle_var14b5 (*(uint8*)(g_ram+0x14B5))
#define bowserbattle_var14b6 (*(uint8*)(g_ram+0x14B6))
#define bowserbattle_var14b7 (*(uint8*)(g_ram+0x14B7))
#define bowserbattle_var14b8 (*(uint8*)(g_ram+0x14B8))
#define bowserbattle_var14b9 (*(uint8*)(g_ram+0x14B9))
#define bowserbattle_var14ba (*(uint8*)(g_ram+0x14BA))
#define bowserbattle_var14bb (*(uint8*)(g_ram+0x14BB))
#define bowserbattle_var14bc (*(uint8*)(g_ram+0x14BC))

#define misc_rotating_object_xradius_hi (*(uint8*)(g_ram+0x14BD))
//#define temp14bf (*(uint8*)(g_ram+0x14BF))
//#define temp14c0 (*(uint8*)(g_ram+0x14C0))
#define sprites_brown_rotating_platform_sine (*(uint16*)(g_ram+0x14C2))
#define sprites_brown_rotating_platform_cosine (*(uint16*)(g_ram+0x14C5))
#define spr_current_status ((uint8*)(g_ram+0x14C8))
#define spr_ypos_hi ((uint8*)(g_ram+0x14D4))
#define spr_xpos_hi ((uint8*)(g_ram+0x14E0))
#define spr_sub_ypos ((uint8*)(g_ram+0x14EC))
#define spr_sub_xpos ((uint8*)(g_ram+0x14F8))
#define spr_table1504 ((uint8*)(g_ram+0x1504))
#define spr_table1510 ((uint8*)(g_ram+0x1510))
#define spr_table151c ((uint8*)(g_ram+0x151C))
#define spr_table1528 ((uint8*)(g_ram+0x1528))
#define spr_table1534 ((uint8*)(g_ram+0x1534))
#define spr_decrementing_table1540 ((uint8*)(g_ram+0x1540))
#define spr_decrementing_table154c ((uint8*)(g_ram+0x154C))
#define spr_decrementing_table1558 ((uint8*)(g_ram+0x1558))
#define spr_decrementing_table1564 ((uint8*)(g_ram+0x1564))
#define spr_table1570 ((uint8*)(g_ram+0x1570))
#define spr_table157c ((uint8*)(g_ram+0x157C))
#define spr_table1588 ((uint8*)(g_ram+0x1588))
#define spr_table1594 ((uint8*)(g_ram+0x1594))
#define spr_xoffscreen_flag ((uint8*)(g_ram+0x15A0))
#define spr_decrementing_table15ac ((uint8*)(g_ram+0x15AC))
#define spr_slope_surface_its_on ((uint8*)(g_ram+0x15B8))
#define spr_table15c4 ((uint8*)(g_ram+0x15C4))
#define spr_table15d0 ((uint8*)(g_ram+0x15D0))
#define spr_no_level_collision_flag ((uint8*)(g_ram+0x15DC))
#define spr_current_slotid (*(uint8*)(g_ram+0x15E9))
#define spr_oamindex ((uint8*)(g_ram+0x15EA))
#define spr_table15f6 ((uint8*)(g_ram+0x15F6))
#define spr_table1602 ((uint8*)(g_ram+0x1602))
#define spr_table160e ((uint8*)(g_ram+0x160E))
#define spr_load_status_table_index ((uint8*)(g_ram+0x161A))
#define spr_table1626 ((uint8*)(g_ram+0x1626))
#define spr_table1632 ((uint8*)(g_ram+0x1632))
#define spr_decrementing_table163e ((uint8*)(g_ram+0x163E))
#define spr_table164a ((uint8*)(g_ram+0x164A))
#define spr_property_bits1656 ((uint8*)(g_ram+0x1656))
#define spr_property_bits1662 ((uint8*)(g_ram+0x1662))
#define spr_property_bits166e ((uint8*)(g_ram+0x166E))
#define spr_property_bits167a ((uint8*)(g_ram+0x167A))
#define spr_property_bits1686 ((uint8*)(g_ram+0x1686))
#define sprites_sprite_memory_setting (*(uint8*)(g_ram+0x1692))
#define blocks_currently_processed_map16_tile_lo (*(uint8*)(g_ram+0x1693))
#define sprites_distance_to_snap_down_to_nearest_tile (*(uint8*)(g_ram+0x1694))
#define sprites_second_tracked_sprite_index (*(uint8*)(g_ram+0x1695))
#define counter_consecutive_enemies_stomped (*(uint8*)(g_ram+0x1697))
#define sprites_currently_processed_misc_sprite (*(uint8*)(g_ram+0x1698))
#define bounce_spr_spriteid ((uint8*)(g_ram+0x1699))
#define bounce_spr_current_status ((uint8*)(g_ram+0x169D))
#define bounce_spr_ypos_lo ((uint8*)(g_ram+0x16A1))
#define bounce_spr_xpos_lo ((uint8*)(g_ram+0x16A5))
#define bounce_spr_ypos_hi ((uint8*)(g_ram+0x16A9))
#define bounce_spr_xpos_hi ((uint8*)(g_ram+0x16AD))
#define bounce_spr_yspeed ((uint8*)(g_ram+0x16B1))
#define bounce_spr_xspeed ((uint8*)(g_ram+0x16B5))
#define bounce_spr_sub_ypos ((uint8*)(g_ram+0x16B9))
#define bounce_spr_sub_xpos ((uint8*)(g_ram+0x16BD))
#define bounce_spr_map16_tile_to_spawn ((uint8*)(g_ram+0x16C1))
#define bounce_spr_timer ((uint8*)(g_ram+0x16C5))
#define bounce_spr_properties ((uint8*)(g_ram+0x16C9))
#define bounce_spr_type ((uint8*)(g_ram+0x16CD))
#define bounce_spr_hitbox_x_lo ((uint8*)(g_ram+0x16D1))
#define bounce_spr_hitbox_x_hi ((uint8*)(g_ram+0x16D5))
#define bounce_spr_hitbox_y_lo ((uint8*)(g_ram+0x16D9))
#define bounce_spr_hitbox_y_hi ((uint8*)(g_ram+0x16DD))
#define score_spr_spriteid ((uint8*)(g_ram+0x16E1))
#define score_spr_ypos_lo ((uint8*)(g_ram+0x16E7))
#define score_spr_xpos_lo ((uint8*)(g_ram+0x16ED))
#define score_spr_xpos_hi ((uint8*)(g_ram+0x16F3))
#define score_spr_ypos_hi ((uint8*)(g_ram+0x16F9))
#define score_spr_yspeed ((uint8*)(g_ram+0x16FF))
#define score_spr_layer_index ((uint8*)(g_ram+0x1705))
#define ext_spr_spriteid ((uint8*)(g_ram+0x170B))
#define ext_spr_ypos_lo ((uint8*)(g_ram+0x1715))
#define ext_spr_xpos_lo ((uint8*)(g_ram+0x171F))
#define ext_spr_ypos_hi ((uint8*)(g_ram+0x1729))
#define ext_spr_xpos_hi ((uint8*)(g_ram+0x1733))
#define ext_spr_yspeed ((uint8*)(g_ram+0x173D))
#define ext_spr_xspeed ((uint8*)(g_ram+0x1747))
#define ext_spr_sub_ypos ((uint8*)(g_ram+0x1751))
#define ext_spr_sub_xpos ((uint8*)(g_ram+0x175B))
#define ext_spr_table1765 ((uint8*)(g_ram+0x1765))
#define ext_spr_decrementing_table176f ((uint8*)(g_ram+0x176F))
#define ext_spr_table1779 ((uint8*)(g_ram+0x1779))
#define shooter_spr_spriteid ((uint8*)(g_ram+0x1783))
#define shooter_spr_ypos_lo ((uint8*)(g_ram+0x178B))
#define shooter_spr_ypos_hi ((uint8*)(g_ram+0x1793))
#define shooter_spr_xpos_lo ((uint8*)(g_ram+0x179B))
#define shooter_spr_xpos_hi ((uint8*)(g_ram+0x17A3))
#define shooter_spr_shoot_timer ((uint8*)(g_ram+0x17AB))
#define shooter_spr_unused_level_list_index ((uint8*)(g_ram+0x17B3))
#define unusedram_7e17bb (*(uint8*)(g_ram+0x17BB))
#define misc_layer1_ydisp (*(uint8*)(g_ram+0x17BC))
#define misc_layer1_xdisp (*(uint8*)(g_ram+0x17BD))
#define misc_layer2_ydisp (*(uint8*)(g_ram+0x17BE))
#define misc_layer2_xdisp (*(uint8*)(g_ram+0x17BF))
#define smoke_spr_spriteid ((uint8*)(g_ram+0x17C0))
#define smoke_spr_ypos_lo ((uint8*)(g_ram+0x17C4))
#define smoke_spr_xpos_lo ((uint8*)(g_ram+0x17C8))
#define smoke_spr_timer ((uint8*)(g_ram+0x17CC))
#define block_coin_spr_slotid ((uint8*)(g_ram+0x17D0))
#define block_coin_spr_ypos_lo ((uint8*)(g_ram+0x17D4))
#define block_coin_spr_yspeed ((uint8*)(g_ram+0x17D8))
#define block_coin_spr_sub_ypos ((uint8*)(g_ram+0x17DC))
#define block_coin_spr_xpos_lo ((uint8*)(g_ram+0x17E0))
#define block_coin_spr_layer_index ((uint8*)(g_ram+0x17E4))
#define block_coin_spr_ypos_hi ((uint8*)(g_ram+0x17E8))
#define block_coin_spr_xpos_hi ((uint8*)(g_ram+0x17EC))
#define mextspr_spriteid ((uint8*)(g_ram+0x17F0))
#define mextspr_ypos_lo ((uint8*)(g_ram+0x17FC))
#define mextspr_xpos_lo ((uint8*)(g_ram+0x1808))
#define mextspr_ypos_hi ((uint8*)(g_ram+0x1814))
#define mextspr_yspeed ((uint8*)(g_ram+0x1820))
#define mextspr_xspeed ((uint8*)(g_ram+0x182C))
#define mextspr_sub_ypos ((uint8*)(g_ram+0x1838))
#define mextspr_sub_xpos ((uint8*)(g_ram+0x1844))
#define mextspr_timer ((uint8*)(g_ram+0x1850))
#define player_disable_object_interaction_flag (*(uint8*)(g_ram+0x185C))
#define mextspr_slot_to_overwrite_when_slots_full (*(uint8*)(g_ram+0x185D))
#define misc_scratch7e185e (*(uint8*)(g_ram+0x185E))
#define sprites_map16_tile_touched_vert_lo (*(uint8*)(g_ram+0x185F))
#define sprites_map16_tile_touched_horiz_lo (*(uint8*)(g_ram+0x1860))
#define spr_slot_to_overwrite_when_slots_full (*(uint8*)(g_ram+0x1861))
#define sprites_map16_tile_touched_horiz_hi (*(uint8*)(g_ram+0x1862))
#define smoke_spr_slot_to_overwrite_when_slots_full (*(uint8*)(g_ram+0x1863))
#define block_coin_spr_slot_to_overwrite_when_slots_full (*(uint8*)(g_ram+0x1865))
#define sprites_brown_roating_platform_angle_sign1 (*(uint8*)(g_ram+0x1866))
#define sprites_brown_roating_platform_angle_sign2 (*(uint8*)(g_ram+0x1867))
#define blocks_copy_of_currently_processed_map16_tile_lo1 (*(uint8*)(g_ram+0x1868))
#define blocks_multi_coin_block_timer (*(uint8*)(g_ram+0x186B))
#define spr_yoffscreen_flag ((uint8*)(g_ram+0x186C))
#define sprites_player_xspeed_on_swinging_net_door (*(uint8*)(g_ram+0x1878))
#define player_riding_yoshi_flag (*(uint8*)(g_ram+0x187A))
#define spr_table187b ((uint8*)(g_ram+0x187B))
#define timer_shake_layer1 (*(uint8*)(g_ram+0x1887))
#define shaking_layer1_disp_y (*(uint16*)(g_ram+0x1888))
#define unusedram_7e188a (*(uint8*)(g_ram+0x188A))
#define player_relative_yposition_during_screen_shake (*(uint8*)(g_ram+0x188B))
#define flag_update_background_sprites_in_koopa_kid_rooms (*(uint8*)(g_ram+0x188C))
#define misc_morton_roy_ludwig_background_xoffset (*(uint8*)(g_ram+0x188D))
#define sprites_bonus_game_is_over_flag (*(uint8*)(g_ram+0x188F))
#define counter_number_of_bonus_game1ups_to_spawn (*(uint8*)(g_ram+0x1890))
#define timer_player_has_pballoon (*(uint8*)(g_ram+0x1891))
#define cluster_spr_spriteid ((uint8*)(g_ram+0x1892))
#define unusedram_7e18a6 (*(uint8*)(g_ram+0x18A6))
#define blocks_copy_of_currently_processed_map16_tile_lo2 (*(uint8*)(g_ram+0x18A7))
#define sprites_morton_and_roy_left_pillar_status (*(uint8*)(g_ram+0x18A8))
#define sprites_morton_and_roy_right_pillar_status (*(uint8*)(g_ram+0x18A9))
#define sprites_morton_and_roy_left_pillar_yposition (*(uint8*)(g_ram+0x18AA))
#define sprites_morton_and_roy_right_pillar_yposition (*(uint8*)(g_ram+0x18AB))
#define yoshi_swallow_timer (*(uint8*)(g_ram+0x18AC))
#define yoshi_walking_frames (*(uint8*)(g_ram+0x18AD))
#define timer_yoshi_tongue_init (*(uint8*)(g_ram+0x18AE))
#define timer_yoshi_squatting (*(uint8*)(g_ram+0x18AF))
#define yoshi_xpos (*(uint16*)(g_ram+0x18B0))
#define yoshi_ypos (*(uint16*)(g_ram+0x18B2))
#define flag_standing_on_beta_cage (*(uint8*)(g_ram+0x18B5))
#define misc_scratch7e18b6 (*(uint8*)(g_ram+0x18B6))
#define flag_run_cluster_sprites (*(uint8*)(g_ram+0x18B8))
#define gen_spr_spriteid (*(uint8*)(g_ram+0x18B9))
#define cluster_spr04_boo_ring_index (*(uint8*)(g_ram+0x18BA))
#define sprites_floating_skull_speed (*(uint8*)(g_ram+0x18BC))
#define timer_stun_player (*(uint8*)(g_ram+0x18BD))
#define flag_player_climb_on_air (*(uint8*)(g_ram+0x18BE))
#define timer_disappearing_sprite (*(uint8*)(g_ram+0x18BF))
#define timer_respawn_sprite (*(uint8*)(g_ram+0x18C0))
#define sprites_sprite_to_respawn (*(uint8*)(g_ram+0x18C1))
#define flag_player_in_lakitus_cloud (*(uint8*)(g_ram+0x18C2))
#define sprites_ypos_of_respawning_sprite (*(uint16*)(g_ram+0x18C3))
#define bounce_spr_slot_to_overwrite_when_slots_full (*(uint8*)(g_ram+0x18CD))
#define bounce_spr07_spinning_turn_block_despawn_timer ((uint8*)(g_ram+0x18CE))
#define player_star_kill_count (*(uint8*)(g_ram+0x18D2))
#define timer_unused_player_sparkle (*(uint8*)(g_ram+0x18D3))
#define counter_eaten_red_berries (*(uint8*)(g_ram+0x18D4))
#define counter_eaten_pink_berries (*(uint8*)(g_ram+0x18D5))
#define yoshi_berry_being_eaten (*(uint8*)(g_ram+0x18D6))
#define sprites_map16_tile_being_touched_vertically_hi (*(uint8*)(g_ram+0x18D7))
#define timer_no_yoshi_intro_door_timer (*(uint8*)(g_ram+0x18D9))
#define yoshi_laid_egg_contents (*(uint8*)(g_ram+0x18DA))
#define unusedram_7e18db (*(uint8*)(g_ram+0x18DB))
#define yoshi_ducking_flag (*(uint8*)(g_ram+0x18DC))
#define counter_current_silver_coins (*(uint8*)(g_ram+0x18DD))
#define yoshi_egg_lay_timer (*(uint8*)(g_ram+0x18DE))
#define sprites_yoshi_slot_index (*(uint8*)(g_ram+0x18DF))
#define timer_despawn_lakitu_cloud (*(uint8*)(g_ram+0x18E0))
#define sprites_lakitu_cloud_slot_index (*(uint8*)(g_ram+0x18E1))
#define yoshi_stray_yoshi_flag (*(uint8*)(g_ram+0x18E2))
#define counter_pink_berry_cloud_coins (*(uint8*)(g_ram+0x18E3))
#define misc_1up_handler (*(uint8*)(g_ram+0x18E4))
#define timer_give1up (*(uint8*)(g_ram+0x18E5))
#define yoshi_stomp_ground_flag (*(uint8*)(g_ram+0x18E7))
#define growing_yoshi_timer (*(uint8*)(g_ram+0x18E8))
#define smoke_spr_copy_of_slot_to_overwrite_when_slots_full (*(uint8*)(g_ram+0x18E9))
#define mextspr_xpos_hi ((uint8*)(g_ram+0x18EA))
#define score_spr_slot_to_overwrite_when_slots_full (*(uint8*)(g_ram+0x18F7))
#define bounce_spr_interact_timer ((uint8*)(g_ram+0x18F8))
#define ext_spr_slot_to_overwrite_when_slots_full (*(uint8*)(g_ram+0x18FC))
#define flag_wake_up_rip_van_fish (*(uint8*)(g_ram+0x18FD))
#define sprites_special_bullet_generator_timer (*(uint8*)(g_ram+0x18FE))
#define shooter_spr_slot_to_overwrite_when_slots_full (*(uint8*)(g_ram+0x18FF))
#define counter_bonus_stars_earned (*(uint8*)(g_ram+0x1900))
#define bounce_spr_yxppccct ((uint8*)(g_ram+0x1901))
#define counter_direction_to_tilt_platform (*(uint8*)(g_ram+0x1905))
#define timer_wait_before_next_tilting_platform_phase (*(uint8*)(g_ram+0x1906))
#define counter_tilting_platform_phase (*(uint8*)(g_ram+0x1907))
#define flag_active_create_eat_block (*(uint8*)(g_ram+0x1909))
#define sprites_disappearing_boo_frame_counter (*(uint8*)(g_ram+0x190A))
#define sprites_big_boo_boss_palette_index (*(uint8*)(g_ram+0x190B))
#define spr45_directional_coins_despawn_timer (*(uint8*)(g_ram+0x190C))
#define spra0_bowser_end_of_battle_flag (*(uint8*)(g_ram+0x190D))
#define sprites_sprite_buoyancy_settings (*(uint8*)(g_ram+0x190E))
#define spr_property_bits190f ((uint8*)(g_ram+0x190F))
#define unusedram_7e191b (*(uint8*)(g_ram+0x191B))
#define yoshi_key_in_mouth_flag (*(uint8*)(g_ram+0x191C))
#define cluster_spr_slot_to_overwrite_when_slots_full (*(uint8*)(g_ram+0x191D))
#define sprites_color_of_flat_palace_switch_to_spawn (*(uint8*)(g_ram+0x191E))
#define counter_remaining_bonus_game1ups (*(uint8*)(g_ram+0x1920))
#define spr7c_princess_peach_current_letter (*(uint16*)(g_ram+0x1921))
#define misc_level_mode_setting (*(uint8*)(g_ram+0x1925))
#define blocks_screen_to_place_current_object (*(uint8*)(g_ram+0x1928))
#define misc_level_header_entrance_settings (*(uint8*)(g_ram+0x192A))
#define graphics_level_sprite_graphics_setting (*(uint8*)(g_ram+0x192B))
#define misc_fgpalette_setting (*(uint8*)(g_ram+0x192D))
#define misc_sprite_palette_setting (*(uint8*)(g_ram+0x192E))
#define misc_background_color_setting (*(uint8*)(g_ram+0x192F))
#define misc_bgpalette_setting (*(uint8*)(g_ram+0x1930))
#define misc_level_tileset_setting (*(uint8*)(g_ram+0x1931))
#define unusedram_copy_of_level_tileset_setting (*(uint8*)(g_ram+0x1932))
#define misc_current_layer_being_processed (*(uint16*)(g_ram+0x1933))
#define flag_restoresp1_tiles_after_mario_start (*(uint8*)(g_ram+0x1935))
#define sprites_load_status ((uint8*)(g_ram+0x1938))
#define misc_subscreen_exit_entrance_number_lo ((uint8*)(g_ram+0x19B8))
#define misc_subscreen_exit_properties ((uint8*)(g_ram+0x19D8))
#define misc_item_memory_bits ((uint8*)(g_ram+0x19F8))
#define misc_item_memory1_bits ((uint8*)(g_ram+0x1A78))
#define misc_item_memory2_bits ((uint8*)(g_ram+0x1AF8))
#define ow_process_hardcoded_path_flag (*(uint16*)(g_ram+0x1B78))
#define ow_hardcoded_path_index (*(uint16*)(g_ram+0x1B7A))
#define ow_layer1_sub_xpos (*(uint8*)(g_ram+0x1B7C))
#define ow_layer1_sub_ypos (*(uint8*)(g_ram+0x1B7D))
#define copy_of_tile_player_is_standingd_on (*(uint16*)(g_ram+0x1B7E))
#define ow_player_on_climbing_tile (*(uint16*)(g_ram+0x1B80))
#define ow_on_screen_xpos_of_current_event_tile (*(uint8*)(g_ram+0x1B82))
#define ow_on_screen_ypos_of_current_event_tile (*(uint8*)(g_ram+0x1B83))
#define timer_destroy_tile_event_unknown (*(uint8*)(g_ram+0x1B84))
#define ow_event_tile_size_address_hi (*(uint8*)(g_ram+0x1B85))
#define pointer_overworld_event_process (*(uint8*)(g_ram+0x1B86))
#define pointer_display_overworld_prompt (*(uint8*)(g_ram+0x1B87))
#define flag_message_window_size_change_direction (*(uint8*)(g_ram+0x1B88))
#define timer_wait_before_message_window_size_change (*(uint8*)(g_ram+0x1B89))
#define flag_who_gets_lives_in_exchange_menu (*(uint8*)(g_ram+0x1B8A))
#define timer_life_exchange_blinking_arrow_frames (*(uint8*)(g_ram+0x1B8B))
#define ow_hdmatransition_effect_flag (*(uint8*)(g_ram+0x1B8C))
#define ow_hdmatransition_effect_xpos (*(uint16*)(g_ram+0x1B8D))
#define ow_hdmatransition_effect_ypos (*(uint16*)(g_ram+0x1B8F))
#define counter_blinking_cursor_frame (*(uint8*)(g_ram+0x1B91))
#define misc_blinking_cursor_pos (*(uint8*)(g_ram+0x1B92))
#define flag_use_secondary_entrance (*(uint8*)(g_ram+0x1B93))
#define flag_disable_bonus_game_sprite (*(uint8*)(g_ram+0x1B94))
#define in_yoshi_wings_bonus_area (*(uint8*)(g_ram+0x1B95))
#define flag_side_exits (*(uint8*)(g_ram+0x1B96))
#define unusedram_unknown_scroll_function_flag (*(uint16*)(g_ram+0x1B97))
#define flag_show_victory_pose_during_level_end (*(uint8*)(g_ram+0x1B99))
#define flag_active_fast_background_scroll_generator (*(uint8*)(g_ram+0x1B9A))
#define flag_prevent_yoshi_carry_over (*(uint8*)(g_ram+0x1B9B))
#define ow_warping_on_pipe_or_star_flag (*(uint8*)(g_ram+0x1B9C))
#define timer_wait_before_layer3_tide_moves_vertically (*(uint8*)(g_ram+0x1B9D))
#define flag_change_submap_music_on_player_switch (*(uint8*)(g_ram+0x1B9E))
#define counter_number_of_broken_reznor_bridge_tiles (*(uint8*)(g_ram+0x1B9F))
#define ow_active_earthquake_event (*(uint8*)(g_ram+0x1BA0))
#define blocks_screen_to_place_next_object (*(uint8*)(g_ram+0x1BA1))
#define misc_mode7_tilemap_index (*(uint8*)(g_ram+0x1BA2))
#define graphics_mode7_tile_buffer ((uint8*)(g_ram+0x1BA3))
#define graphics_3_bppto4_bppbuffer ((uint8*)(g_ram+0x1BB2))
#define flag_alter3_bppto4_bppconversion ((uint8*)(g_ram+0x1BBC))
#define misc_level_layer3_settings (*(uint8*)(g_ram+0x1BE3))
#define blocks_layer1_vramupload_address (*(uint16*)(g_ram+0x1BE4))
#define blocks_layer1_tiles_to_upload_buffer ((uint16*)(g_ram+0x1BE6))
#define blocks_layer2_vramupload_address (*(uint16*)(g_ram+0x1CE6))
#define blocks_layer2_tiles_to_upload_buffer ((uint16*)(g_ram+0x1CE8))
#define ow_submap_switch_process (*(uint8*)(g_ram+0x1DE8))
#define counter_enemy_rollcall_screen (*(uint8*)(g_ram+0x1DE9))
#define ow_current_event_number (*(uint8*)(g_ram+0x1DEA))
#define ow_starting_event_tile (*(uint16*)(g_ram+0x1DEB))
#define ow_final_event_tile (*(uint16*)(g_ram+0x1DED))
#define ow_scroll_camera_xpos (*(uint16*)(g_ram+0x1DF0))
#define ow_scroll_camera_ypos (*(uint16*)(g_ram+0x1DF2))
#define misc_title_screen_movement_data_index (*(uint8*)(g_ram+0x1DF4))
#define timer_title_screen_input_timer (*(uint8*)(g_ram+0x1DF5))
#define ow_star_pipe_index (*(uint8*)(g_ram+0x1DF6))
#define ow_star_launch_speed (*(uint8*)(g_ram+0x1DF7))
#define timer_wait_before_star_launch (*(uint8*)(g_ram+0x1DF8))
#define io_sound_ch1 (*(uint8*)(g_ram+0x1DF9))
#define io_sound_ch2 (*(uint8*)(g_ram+0x1DFA))
#define io_music_ch1 (*(uint8*)(g_ram+0x1DFB))
#define io_sound_ch3 (*(uint8*)(g_ram+0x1DFC))
#define unusedram_7e1dfd (*(uint8*)(g_ram+0x1DFD))
#define unusedram_7e1dfe (*(uint8*)(g_ram+0x1DFE))
#define io_copy_of_music_ch1 (*(uint8*)(g_ram+0x1DFF))
#define unusedram_7e1e00 (*(uint8*)(g_ram+0x1E00))
#define debug_free_movement (*(uint8*)(g_ram+0x1E01))
#define cluster_spr_ypos_lo ((uint8*)(g_ram+0x1E02))
#define cluster_spr_xpos_lo ((uint8*)(g_ram+0x1E16))
#define cluster_spr_ypos_hi ((uint8*)(g_ram+0x1E2A))
#define cluster_spr_xpos_hi ((uint8*)(g_ram+0x1E3E))
#define cluster_spr_table1e52 ((uint8*)(g_ram+0x1E52))
#define cluster_spr_table1e66 ((uint8*)(g_ram+0x1E66))
#define cluster_spr_table1e7a ((uint8*)(g_ram+0x1E7A))
#define cluster_spr_table1e8e ((uint8*)(g_ram+0x1E8E))
#define ow_level_tile_settings ((uint8 *)(g_ram + 0x1EA2))
#define ow_event_flags ((uint8*)(g_ram+0x1F02))
#define ow_players_map ((uint8*)(g_ram+0x1F11))
#define ow_players_animation ((uint16*)(g_ram+0x1F13))
#define ow_players_pos ((PointU16*)(g_ram+0x1F17))
#define ow_players_grid_aligned_pos ((PointU16*)(g_ram+0x1F1F))
#define flag_activated_switches ((uint8*)(g_ram+0x1F27))
#define counter_events_triggered (*(uint8*)(g_ram+0x1F2E))
#define flag_collected5_yoshi_coins ((uint8*)(g_ram+0x1F2F))
#define flag_collected1up_checkpoints ((uint8*)(g_ram+0x1F3C))
#define byte_7E1F48 (*(uint8*)(g_ram+0x1F48))
#define ow_save_buffer ((uint8*)(g_ram+0x1F49))
#define spr_unused_table1fd6 ((uint8*)(g_ram+0x1FD6))
#define spr_decrementing_table1fe2 ((uint8*)(g_ram+0x1FE2))
#define spr7c_princess_peach_spawn_fireworks_timer (*(uint8*)(g_ram+0x1FEB))
#define flag_collected_moons ((uint8*)(g_ram+0x1FEE))
#define palettes_lightning_flash_color_index (*(uint8*)(g_ram+0x1FFB))
#define timer_wait_before_next_lightning_flash (*(uint8*)(g_ram+0x1FFC))
#define timer_lightning_frame_duration (*(uint8*)(g_ram+0x1FFD))
#define flag_update_credits_background (*(uint8*)(g_ram+0x1FFE))
#define graphics_decompressedgfx32 ((uint8*)(g_ram+0x2000))
#define graphics_decompressedgfx33 ((uint8*)(g_ram+0x7D00))
#define graphics_graphic_decompression_buffer ((uint8*)(g_ram+0xAD00))
#define blocks_layer2_tiles_lo ((uint8*)(g_ram+0xB900))
#define blocks_layer2_tiles_hi ((uint8*)(g_ram+0xBD00))
#define misc_mode7_boss_tilemap ((uint8*)(g_ram+0xC680))
#define blocks_map16_table_lo ((uint8*)(g_ram+0xC800))
#define ow_level_number_of_each_tiletbl ((uint8*)(g_ram+0xD000))
#define ow_level_direction_flags ((uint8*)(g_ram+0xD800))
#define ow_byte_7EE000 ((uint8*)(g_ram+0xE000))
#define ow_layer2_event_tiles ((uint8*)(g_ram+0x10000))
#define ow_layer2_tiles ((uint8*)(g_ram+0x14000))
#define reset_sprites_y_function_in_ram ((uint8*)(g_ram+0x18000))
#define stripe_image_upload (*(uint16*)(g_ram+0x1837B))
#define stripe_image_upload_data ((uint8*)(g_ram+0x1837D))
#define graphics_decompressed_loading_letters ((uint8*)(g_ram+0x1977B))
#define spr86_wiggler_segment_pos_table ((uint8*)(g_ram+0x19A7B))

#define my_flags (*(uint8*)(g_ram+0x19C7C))

#define blocks_map16_table_hi ((uint8*)(g_ram+0x1C800))

#define lm_ptr0 (*(LongPtr*)(g_ram + 0x1c000))
#define lm_var3 (*(uint8*)(g_ram + 0x1c003))
#define lm_var4 (*(uint8*)(g_ram + 0x1c004))
#define lm_level_info (*(LongPtr*)(g_ram + 0x1c006))
#define lm_var9 (*(uint8*)(g_ram + 0x1c009))
#define lm_varA (*(uint8*)(g_ram + 0x1c00a))
#define lm_varB (*(uint8*)(g_ram + 0x1c00b))
#define lm_varC (*(uint16*)(g_ram + 0x1c00c))
#define lm_varE (*(uint16*)(g_ram + 0x1c00e))
#define lm_ptr10 (*(LongPtr *)(g_ram + 0x1c010))
#define lm_ptr16 (*(LongPtr*)(g_ram + 0x1c016))
#define lm_var19 (*(uint8*)(g_ram + 0x1c019))

#define lm_var1a (*(uint8*)(g_ram + 0x1c01a))
#define lm_var1b (*(uint8*)(g_ram + 0x1c01b))
#define lm_var1c  (*(uint8*)(g_ram + 0x1c01c))

#define lm_exanim_setting (*(uint8*)(g_ram + 0x1c00a))
#define lm_custom_triggers (*(uint16*)(g_ram + 0x1c0fc))

#define smart_spawn_horiz_collision (*(uint8*)(g_ram + 0xBEE))
#define smart_spawn_vert_collision (*(uint8*)(g_ram + 0xBEF))
#define min_y_offset_from_screen_to_spawn (*(uint16*)(g_ram + 0xBF0))
#define max_y_offset_from_screen_to_spawn (*(uint16*)(g_ram + 0xBF2))
#define extra_flags_for_sprites (*(uint8*)(g_ram + 0xBF4))
#define extra_flags_and_horiz_level_mode (*(uint8*)(g_ram + 0xBF5))
#define L1_Screen_Lo ((LongPtr*)(g_ram + 0xBF6))
#define L2_Screen_Lo ((LongPtr*)(g_ram + 0xC26))
#define L1_Screen_Hi ((LongPtr*)(g_ram + 0xC56))
#define L2_Screen_Hi ((LongPtr*)(g_ram + 0xC86))
#define lm_ptrs_to_sprites_per_screen ((uint16*)(g_ram + 0xCF6))
#define lm_screen_sprite_data ((uint16*)(g_ram + 0xD36))

#define lm_level_height (*(uint16*)(g_ram + 0x13D7))
#define lm_level_height_minus_16 (*(uint16*)(g_ram + 0x1936))

#define L1_Screen_8bit_Lo (g_ram + 0xcb6)
#define L1_Screen_8bit_Hi (g_ram + 0xcd6)

#define lm_var8325 (*(uint16*)(g_ram + 0x18325))
#define lm_var8323 (*(uint16*)(g_ram + 0x18323))
#define lm_var8321 (*(uint16*)(g_ram + 0x18321))
#define lm_var831f (*(uint16*)(g_ram + 0x1831f))

#pragma pack (push, 1)
typedef struct ExAnimationInfo {
  uint16 hdr_size;
  uint16 dst;
  LongPtr src;
} ExAnimationInfo;
#pragma pack (pop)

#define lm_exanim_manual_triggers ((uint8*)(g_ram + 0x1c070))
#define lm_exanim_frame_ctr ((uint16*)(g_ram + 0x1c080))
#define ex_anim_info_0 (*(ExAnimationInfo*)(g_ram + 0x1c0c0))
#define ex_anim_info_1 (*(ExAnimationInfo*)(g_ram + 0x1c0c7))
#define ex_anim_info_2 (*(ExAnimationInfo*)(g_ram + 0x1c0ce))
#define ex_anim_info_3 (*(ExAnimationInfo*)(g_ram + 0x1c0d5))
#define ex_anim_info_4 (*(ExAnimationInfo*)(g_ram + 0x1c0dc))
#define ex_anim_info_5 (*(ExAnimationInfo*)(g_ram + 0x1c0e3))
#define ex_anim_info_6 (*(ExAnimationInfo*)(g_ram + 0x1c0ea))
#define ex_anim_info_7 (*(ExAnimationInfo*)(g_ram + 0x1c0f1))

#define lm_one_shot_triggers (*(uint32*)(g_ram + 0x1c0f8))

#define lm_vram_dma_dst0 (*(uint16*)(g_ram + 0x695))
#define lm_vram_dma_dst1 (*(uint16*)(g_ram + 0x697))
#define lm_vram_dma_dst2 (*(uint16*)(g_ram + 0x699))
#define lm_vram_dma_dst3 (*(uint16*)(g_ram + 0x69b))
#define lm_vram_dma_dst4 (*(uint16*)(g_ram + 0x69d))
#define lm_vram_dma_dst5 (*(uint16*)(g_ram + 0x69f))

#define lm_vram_dma_size0 (*(uint8*)(g_ram + 0x6a1))
#define lm_vram_dma_size1 (*(uint8*)(g_ram + 0x6a2))
#define lm_vram_dma_size2 (*(uint8*)(g_ram + 0x6a3))
#define lm_vram_dma_size3 (*(uint8*)(g_ram + 0x6a4))
#define lm_vram_dma_size4 (*(uint8*)(g_ram + 0x6a5))
#define lm_vram_dma_size5 (*(uint8*)(g_ram + 0x6a6))

#define lm_vram_dma_src0 (*(uint16*)(g_ram + 0x6a7))
#define lm_vram_dma_src1 (*(uint16*)(g_ram + 0x6a9))
#define lm_vram_dma_src2 (*(uint16*)(g_ram + 0x6ab))
#define lm_vram_dma_src3 (*(uint16*)(g_ram + 0x6ad))
#define lm_vram_dma_src4 (*(uint16*)(g_ram + 0x6af))
#define lm_vram_dma_src5 (*(uint16*)(g_ram + 0x6b1))

#define lm_vram_dma_dst6 (*(uint16*)(g_ram + 0x6b3))
#define lm_vram_dma_dst7 (*(uint16*)(g_ram + 0x6b5))
#define lm_vram_dma_dst8 (*(uint16*)(g_ram + 0x6b7))
#define lm_vram_dma_dst9 (*(uint16*)(g_ram + 0x6b9))
#define lm_vram_dma_dst10 (*(uint16*)(g_ram + 0x6bb))
#define lm_vram_dma_dst11 (*(uint16*)(g_ram + 0x6bd))

#define lm_vram_dma_size6 (*(uint8*)(g_ram + 0x6bf))
#define lm_vram_dma_size7 (*(uint8*)(g_ram + 0x6c0))
#define lm_vram_dma_size8 (*(uint8*)(g_ram + 0x6c1))
#define lm_vram_dma_size9 (*(uint8*)(g_ram + 0x6c2))
#define lm_vram_dma_size10 (*(uint8*)(g_ram + 0x6c3))
#define lm_vram_dma_size11 (*(uint8*)(g_ram + 0x6c4))

#define lm_vram_dma_src6 (*(uint16*)(g_ram + 0x6c5))
#define lm_vram_dma_src7 (*(uint16*)(g_ram + 0x6c7))
#define lm_vram_dma_src8 (*(uint16*)(g_ram + 0x6c9))
#define lm_vram_dma_src9 (*(uint16*)(g_ram + 0x6cb))
#define lm_vram_dma_src10 (*(uint16*)(g_ram + 0x6cd))
#define lm_vram_dma_src11 (*(uint16*)(g_ram + 0x6cf))

#define lm_vram_dma_dst12 (*(uint16*)(g_ram + 0x6d1))
#define lm_vram_dma_dst13 (*(uint16*)(g_ram + 0x6d3))
#define lm_vram_dma_dst14 (*(uint16*)(g_ram + 0x6d5))
#define lm_vram_dma_dst15 (*(uint16*)(g_ram + 0x6d7))

#define lm_vram_dma_size12 (*(uint8*)(g_ram + 0x6d9))
#define lm_vram_dma_size13 (*(uint8*)(g_ram + 0x6da))
#define lm_vram_dma_size14 (*(uint8*)(g_ram + 0x6db))
#define lm_vram_dma_size15 (*(uint8*)(g_ram + 0x6dc))

#define lm_vram_dma_src12 (*(uint16*)(g_ram + 0x6dd))
#define lm_vram_dma_src13 (*(uint16*)(g_ram + 0x6df))
#define lm_vram_dma_src14 (*(uint16*)(g_ram + 0x6e1))
#define lm_vram_dma_src15 (*(uint16*)(g_ram + 0x6e3))

#define lm_vram_dma_dst16 (*(uint16*)(g_ram + 0x6e5))
#define lm_vram_dma_dst17 (*(uint16*)(g_ram + 0x6e7))
#define lm_vram_dma_dst18 (*(uint16*)(g_ram + 0x6e9))
#define lm_vram_dma_dst19 (*(uint16*)(g_ram + 0x6eb))

#define lm_vram_dma_size16 (*(uint8*)(g_ram + 0x6ed))
#define lm_vram_dma_size17 (*(uint8*)(g_ram + 0x6ee))
#define lm_vram_dma_size18 (*(uint8*)(g_ram + 0x6ef))
#define lm_vram_dma_size19 (*(uint8*)(g_ram + 0x6f0))

#define lm_vram_dma_src16 (*(uint16*)(g_ram + 0x6f1))
#define lm_vram_dma_src17 (*(uint16*)(g_ram + 0x6f3))
#define lm_vram_dma_src18 (*(uint16*)(g_ram + 0x6f5))
#define lm_vram_dma_src19 (*(uint16*)(g_ram + 0x6f7))

#define lm_vram_upload_enable_0 (*(uint16*)(g_ram + 0x18183))
#define lm_vram_upload_enable_6 (*(uint16*)(g_ram + 0x18185))
#define lm_vram_upload_enable_12 (*(uint16*)(g_ram + 0x18187))
#define lm_vram_upload_enable_16 (*(uint16*)(g_ram + 0x18189))

#define lm_L1_colbuf ((uint16*)(g_ram + 0x1818b))
#define lm_L2_colbuf ((uint16*)(g_ram + 0x1820b))
#define lm_tilebuf3 ((uint16*)(g_ram + 0x1828b))

#define lm_arr1830b ((uint16*)(g_ram + 0x1830b))
#define lm_arr1831b ((uint8*)(g_ram + 0x1831b))
#define lm_arr1831f ((uint16*)(g_ram + 0x1831f))

#define lm_arr_7FBC00 ((uint16*)(g_ram + 0x1BC00))
#define lm_arr_7FC300 ((uint16*)(g_ram + 0x1C300))

#define lm_var18327 (*(uint16*)(g_ram + 0x18327))

#define lm_var_0045 (*(uint8 *)(g_ram + 0x45))
#define lm_var_0046 (*(uint16 *)(g_ram + 0x46))
#define lm_var_0048 (*(uint16 *)(g_ram + 0x48))
#define lm_var_004A (*(uint16 *)(g_ram + 0x4A))
#define lm_var_004C (*(uint16 *)(g_ram + 0x4C))
#define lm_var_004E (*(uint16 *)(g_ram + 0x4E))
#define lm_var_0050 (*(uint16 *)(g_ram + 0x50))
#define lm_var_0052 (*(uint16 *)(g_ram + 0x52))
#define lm_var_0054 (*(uint8 *)(g_ram + 0x54))

#define lm_state_array ((uint8 *)(g_ram + 0x1c060))

#define lm_title_screen_var (*(uint16 *)(g_ram + 0x1fffe))

#define lm_timer_var (*(uint8 *)(g_ram + 0x1ffe0))

extern bool g_lunar_magic;

enum SpriteStatus {
  ss_NonExistant = 0x0,
  ss_Init = 0x1,
  ss_FallOffScreen = 0x2,
  ss_Smushed = 0x3,
  ss_SpinJumped = 0x4,
  ss_Unknown = 0x5,
  ss_TurnToCoin = 0x6,
  ss_Unused = 0x7,
  ss_Normal = 0x8,
  ss_Carryable = 0x9,
  ss_Kicked = 0xA,
  ss_Carried = 0xB,
  ss_Fleeing = 0xC
};

enum GameMode {
  gm_LoadNintendoPresents = 0x00,
  gm_NintendoPresents = 0x01,
  gm_FadeToTitleScreen = 0x02,
  gm_LoadTitleScreen = 0x03,
  gm_PrepareTitleScreen = 0x04,
  gm_TitleScreenFadeIn = 0x05,
  gm_TitleScreenCircle = 0x06,
  gm_TitleScreen = 0x07,
  gm_TitleScreenFileSelect = 0x08,
  gm_TitleScreenFileDelete = 0x09,
  gm_TitleScreenPlayerSelect = 0x0A,
  gm_FadeToOverworld = 0x0B,
  gm_LoadOverworld = 0x0C,
  gm_OverworldFadeIn = 0x0D,
  gm_Overworld = 0x0E,
  gm_FadeToLevel = 0x0F,
  gm_FadeToLevelBlack = 0x10,
  gm_LoadLevelMarioStart = 0x11,
  gm_PrepareLevel = 0x12,
  gm_LevelFadeIn = 0x13,
  gm_Level = 0x14,
  gm_FadeToGameOverOrTimeUp = 0x15,
  gm_LoadGameOverOrTimeUp = 0x16,
  gm_GameOverOrTimeUp = 0x17,
  gm_LoadCreditsCutscene = 0x18,
  gm_LoadCreditsCutscene2 = 0x19,
  gm_LoadCreditsCutscene3 = 0x1A,
  gm_EndingCreditsCutscene = 0x1B,
  gm_EndingFadeToYoshisHouse = 0x1C,
  gm_EndingLoadYoshisHouse = 0x1D,
  gm_EndingYoshisHouseFadeIn = 0x1E,
  gm_EndingYoshisHouse = 0x1F,
  gm_EndingFadeToEnemies = 0x20,
  gm_EndingFadeToEnemiesBlack = 0x21,
  gm_EndingFadeToEnemies2 = 0x22,
  gm_EndingFadeToEnemiesBlack2 = 0x23,
  gm_EndingEnemiesFadeIn = 0x24,
  gm_EndingEnemies = 0x25,
  gm_EndingFadeToEnd = 0x26,
  gm_EndingLoadTheEnd = 0x27,
  gm_EndingTheEndFadeIn = 0x28,
  gm_EndingTheEnd = 0x29,
};

enum ControllerButtons {
  // io_controller_hold1
  cb_Nothing = 0x00,
  cb_Left = 0x01,
  cb_Right = 0x02,
  cb_Down = 0x04,
  cb_Up = 0x08,
  cb_Start = 0x10,
  cb_Select = 0x20,
  cb_YAndX = 0x40,
  cb_BAndA = 0x80,

  // io_controller_hold2
  cb_L = 0x10,
  cb_R = 0x20,
};

enum WorldMaps{   // To be used with ow_players_map[0].
  wm_World2 = 0,  // Shared with Worlds 4 and 6.
  wm_World1 = 1,
  wm_World3 = 2,
  wm_World5 = 3,
  wm_World7 = 4,
  wm_Special = 5,
  wm_Star = 6
};

/* Cheats */
#define CHEAT_PIT_BOUNCING
#define CHEAT_INVICIBLE

/* Inputs */
#define CON_HOLD_LEFT   (io_controller_hold1 & cb_Left)
#define CON_HOLD_RIGHT  (io_controller_hold1 & cb_Right)
#define CON_HOLD_UP     (io_controller_hold1 & cb_Up)
#define CON_HOLD_DOWN   (io_controller_hold1 & cb_Down)
//#define CON_HOLD_YX     (io_controller_hold1 & cb_YAndX)
#define CON_HOLD_Y      (io_controller_hold1 & cb_YAndX)
#define CON_HOLD_X      (io_controller_hold2 & cb_YAndX)
//#define CON_HOLD_AB     (io_controller_hold1 & cb_BAndA)
#define CON_HOLD_B      (io_controller_hold1 & cb_BAndA)
#define CON_HOLD_A      (io_controller_hold2 & cb_BAndA)
#define CON_HOLD_START  (io_controller_hold1 & cb_Start)
#define CON_HOLD_SELECT (io_controller_hold1 & cb_Select)
#define CON_HOLD_L      (io_controller_hold2 & cb_L)
#define CON_HOLD_R      (io_controller_hold2 & cb_R)

#define CON_PRESS_LEFT    (io_controller_press1 & cb_Left)
#define CON_PRESS_RIGHT   (io_controller_press1 & cb_Right)
#define CON_PRESS_UP      (io_controller_press1 & cb_Up)
#define CON_PRESS_DOWN    (io_controller_press1 & cb_Down)
//#define CON_PRESS_YX     (io_controller_press1 & cb_YAndX)
#define CON_PRESS_Y       (io_controller_press1 & cb_YAndX)
#define CON_PRESS_X       (io_controller_press2 & cb_YAndX)
//#define CON_PRESS_AB     ((io_controller_press1 | io_controller_press2) & cb_BAndA)
#define CON_PRESS_B       (io_controller_press1 & cb_BAndA)
#define CON_PRESS_A       (io_controller_press2 & cb_BAndA)
#define CON_PRESS_START   (io_controller_press1 & cb_Start)
#define CON_PRESS_SELECT  (io_controller_press1 & cb_Select)
#define CON_PRESS_L       (io_controller_press2 & cb_L)
#define CON_PRESS_R       (io_controller_press2 & cb_R)

/* World Map */
#define MAP_WORLD2_4_6  (ow_players_map[0] == wm_World2)
#define MAP_WORLD1      (ow_players_map[0] == wm_World1)
#define MAP_WORLD3      (ow_players_map[0] == wm_World3)
#define MAP_WORLD5      (ow_players_map[0] == wm_World5)
#define MAP_WORLD7      (ow_players_map[0] == wm_World7)
#define MAP_SPECIAL     (ow_players_map[0] == wm_Special)
#define MAP_STAR        (ow_players_map[0] == wm_Star)

/* Custom Music */
#define USE_CUSTOM_MUSIC  1
#define USE_CUSTOM_SOUNDS 1
#define USE_MUSICVAR_BACK 1

// Misc. Music
#define MUSID_TITLE       1
#define MUSID_KISS        28
#define MUSID_EGGSHATCH   10
#define MUSID_ROLECALL    11
#define MUSID_STAFFROLL   9
#define MUSID_STOP        128

// Func. Music
#define MUSID_PSWITCH     14
#define MUSID_STARMAN     13
#define MUSID_KEYFADE     16
#define MUSID_LEVELFADE   17
#define MUSID_DEAD        9
#define MUSID_GAMEOVER    10

// World Music
#define MUSID_WORLD1      3
#define MUSID_WORLD2      2
#define MUSID_WORLD3      4
#define MUSID_WORLD4      2
#define MUSID_WORLD5      0 // TODO: Forest of Illusion
#define MUSID_WORLD6      2
#define MUSID_WORLD7      0 // TODO: Valley of Bowser
#define MUSID_SPECIAL     9

// Level Music
#define MUSID_ATHLETIC    1
#define MUSID_OVERWORLD   2
#define MUSID_SWIMMING    3
#define MUSID_UNDERGROUND 6
#define MUSID_HAUNTED     7
#define MUSID_CASTLE      8
#define MUSID_PALACE      18
#define MUSID_BOSS        5

// Bowser
#define MUSID_BOWSER          22
#define MUSID_BOWSEROUT       23
#define MUSID_BOWSERIN        24
#define MUSID_BOWSERINTER     29
#define MUSID_BOWSERINTEROVER 25  // May be wrong? Possibly switch with 26.
#define MUSID_BOWSERDEFEAT    27

/* Custom Sounds 
    Certain sounds share an ID. For which ID uses what channel, refer to https://floating.muncher.se/bot/sound.txt.
    $1DF9 = io_sound_ch1
    $1DFA = io_sound_ch2
    $1DFC = io_sound_ch3
*/
// Levels
#define SNDID_PIPE            0x04  // Shared with Mario Hurt.
#define SNDID_CHECKPOINT      0x05
#define SNDID_SWITCHBLOCK     0x0B
#define SNDID_ITEMPASTGOAL    0x0C  // Carrying item past goal.
#define SNDID_YOSHICOIN       0x1C
#define SNDID_GRINDER         0x04
#define SNDID_SPRING          0x08
#define SNDID_DOOR            0x0F
#define SNDID_MSGBOX          0x22  // Shared with Save Prompt.

// Yoshi
#define SNDID_YOSHIGULP       0x06
#define SNDID_YOSHISPIT       0x20  // ("OW!")
#define SNDID_YOSHIHATCH      0x0A
#define SNDID_YOSHILOSE       0x13
#define SNDID_YOSHIFIRE       0x17  // Shared with the Bowser Statues.
#define SNDID_YOSHIMOUNT      0x1F
#define SNDID_YOSHITONGUE     0x21
#define SNDID_YOSHISTOMP      0x25

// Mario
#define SNDID_FLY             0x09
#define SNDID_FLYHURT         0x0F
#define SNDID_HITHEAD         0x01
#define SNDID_SPINJUMPHOP     0x02  // Spin jumping on a spiked enemy.
#define SNDID_SPINJUMPKILL    0x08
#define SNDID_KICK            0x03
#define SNDID_POWERUP         0x0A
#define SNDID_GETCAPE         0x0D
#define SNDID_SWIM            0x0E
#define SNDID_GETPBALLOON     0x1E
#define SNDID_JUMP            0x01
#define SNDID_SPINJUMP        0x04
#define SNDID_FIREBALL        0x06
#define SNDID_ITEMINRESERVE   0x0B
#define SNDID_ITEMOUTRESERVE  0x0C
#define SNDID_LRSCROLL        0x0E

// Boss
#define SNDID_KOOPASHRINK     0x1F  // When a Koopaling is defeated.
#define SNDID_LEMMYWENDYFALL  0x23
#define SNDID_LEMMYWENDYLAVA  0x20
#define SNDID_PEACHHELP       0x2A

// Overworld
#define SNDID_TILEREVEAL      0x15
#define SNDID_CASTLECOLLAPSE  0x16
#define SNDID_BLOCKEJECTION   0x1C
#define SNDID_TOLEVELTILE     0x23

// Ending
#define SNDID_FIREWORKWHISTLE 0x2C
#define SNDID_FIREWORKBANG    0x2B

// SFX
#define SNDID_DRYBONES        0x07
#define SNDID_MAGIC           0x10
#define SNDID_PAUSE           0x11
#define SNDID_UNPAUSE         0x12
#define SNDID_STOMP1          0x13
#define SNDID_STOMP2          0x14
#define SNDID_STOMP3          0x15
#define SNDID_STOMP4          0x16
#define SNDID_STOMP5          0x17
#define SNDID_STOMP6          0x18
#define SNDID_STOMP7          0x19
#define SNDID_TIMELOW         0x1D  // The thing that plays at 100 seconds.
#define SNDID_WORLD7APPEARS   0x21  // When the skull thing rises out of the water.
#define SNDID_BLARGGROAR      0x25
#define SNDID_COIN            0x01
#define SNDID_POWERBLOCK      0x02
#define SNDID_VINEBLOCK       0x03
#define SNDID_1UP             0x05
#define SNDID_DESTROYEDBLOCK  0x07  // Shared with Monty Moles.
#define SNDID_BULLETBILL      0x09
#define SNDID_DRUMROLLSTART   0x11
#define SNDID_DRUMROLLEND     0x12
#define SNDID_THUNDER         0x18
#define SNDID_CHUCKCLAP       0x19  // Shared with bubbles.
#define SNDID_BOMBBLOW        0x1A
#define SNDID_BOMBFUSE        0x1B
#define SNDID_WHISTLE         0x1E
#define SNDID_PSWITCHOVER     0x24
#define SNDID_SWOOPER         0x26
#define SNDID_PODOBOO         0x27
#define SNDID_STUNNED         0x28
#define SNDID_CORRECT         0x29
#define SNDID_WRONG           0x2A

#endif