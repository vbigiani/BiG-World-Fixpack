DEFINE_PATCH_FUNCTION fj_are_structure

  // let's set up our variables! i++++ 4eva

  INT_VAR

  // these are internal variables, not to be used as input
  is_bg2               = ENGINE_IS ~soa tob~
  is_pst               = ENGINE_IS pst
  is_id2               = ENGINE_IS iwd2
  fj_position          = 0x11c
  fj_itm_idx           = 0
  fj_vertex_idx        = 0
  off                  = 0
  num                  = 0
  off1                 = 0
  num1                 = 0
  key                  = 0
  value                = 0
  key1                 = 0
  value1               = 0
  fj_return_offset     = 0
  fj_deleted           = 0

  // instead of adding fj_structure_type, delete if num == fj_delete_mode
  fj_delete_mode       = ` 0

  // offsets to various structures unpointed at zero
  fj_unzero_header_off = 0

  // spams your console with psuedoinformative nonsense
  fj_debug             = 0

  // actors
  fj_loc_x             = 0
  fj_loc_y             = 0
  fj_dest_x            = 0
  fj_dest_y            = 0
  fj_loading           = 1
  fj_spawned           = 0
  fj_animation         = 0
  fj_orientation       = 0
  fj_expiry            = ` 0
  fj_wander_dist_actor = 0
  fj_mvmt_dist_actor   = 0
  fj_schedule          = ` 0
  fj_num_talked        = 0

  // regions
  fj_type              = 0
  fj_box_left          = 0
  fj_box_top           = 0
  fj_box_right         = 0
  fj_box_bottom        = 0
  fj_cursor_idx        = 0
  fj_flags             = 0
  fj_info_point_strref = ` 0
  fj_trap_detect       = 0
  fj_trap_remove       = 0
  fj_trap_active       = 0
  fj_trap_status       = 0
  fj_alt_x             = 0
  fj_alt_y             = 0

  // spawns
  fj_spawn_num         = 0
  fj_difficulty        = 0
  fj_delay             = 10
  fj_method            = 0
  fj_duration          = 1000
  fj_wander_dist_spawn = 1000
  fj_mvmt_dist_spawn   = 1000
  fj_max_num           = 0
  fj_enable            = 1
  fj_day_prob          = 100
  fj_night_prob        = 100

  // containers
  fj_lock_diff         = 100
  fj_trap_remove_diff  = 100
  fj_trap_loc_x        = 0
  fj_trap_loc_y        = 0
  fj_lockpick_strref   = ` 0

  // items
  fj_con_itm_idx       = ` 0
  fj_itm_expiry        = 0
  fj_charge0           = 0
  fj_charge1           = 0
  fj_charge2           = 0

  // ambients
  fj_radius            = 500
  fj_loc_z             = 0
  fj_volume            = 80
  fj_sound_num         = 0
  fj_delay             = 0
  fj_variation         = 0

  // variables
  fj_variable_value    = 0

  // doors
  fj_open_box_left     = 0
  fj_open_box_top      = 0
  fj_open_box_right    = 0
  fj_open_box_bottom   = 0
  fj_closed_box_left   = 0
  fj_closed_box_top    = 0
  fj_closed_box_right  = 0
  fj_closed_box_bottom = 0
  fj_detect_diff       = 0
  fj_locked_diff       = 0
  fj_open_loc_x        = 0
  fj_open_loc_y        = 0
  fj_closed_loc_x      = 0
  fj_closed_loc_y      = 0
  fj_dlg_strref        = ` 0

  // animations
  fj_bam_seq           = 0
  fj_bam_frame         = 0
  fj_transparent       = 0
  fj_init_frame        = 0
  fj_loop_chance       = 0
  fj_skip_cycles       = 0

  // songs
  fj_song_day          = 0
  fj_song_night        = 0
  fj_song_victory      = 0
  fj_song_battle       = 0
  fj_song_defeat       = 0
  fj_song_day_vol      = 100
  fj_song_night_vol    = 100
  fj_song_reverb       = 0

  // rest interrupts
  fj_cre_strref0       = ` 0
  fj_cre_strref1       = ` 0
  fj_cre_strref2       = ` 0
  fj_cre_strref3       = ` 0
  fj_cre_strref4       = ` 0
  fj_cre_strref5       = ` 0
  fj_cre_strref6       = ` 0
  fj_cre_strref7       = ` 0
  fj_cre_strref8       = ` 0
  fj_cre_strref9       = ` 0

  // map notes
  fj_note_strref       = ` 0
  fj_strref_loc        = 1
  fj_color             = 0
  fj_note_id           = 0

  // embedded projectiles
  fj_missile_num       = ` 0
  fj_frequency         = 0
  fj_target            = 0

  STR_VAR

  // variables
  fj_structure_type    = ~~
  fj_name              = ~~

  // actors
  fj_dlg_resref        = ~~
  fj_bcs_override      = ~~
  fj_bcs_general       = ~~
  fj_bcs_class         = ~~
  fj_bcs_race          = ~~
  fj_bcs_default       = ~~
  fj_bcs_specific      = ~~
  fj_cre_resref        = ~~
  fj_cre_embedded      = ~~

  // regions
  fj_destination_area  = ~~
  fj_destination_name  = ~~
  fj_key_resref        = ~~
  fj_reg_script        = ~~

  // spawns
  fj_cre_resref0       = ~~
  fj_cre_resref1       = ~~
  fj_cre_resref2       = ~~
  fj_cre_resref3       = ~~
  fj_cre_resref4       = ~~
  fj_cre_resref5       = ~~
  fj_cre_resref6       = ~~
  fj_cre_resref7       = ~~
  fj_cre_resref8       = ~~
  fj_cre_resref9       = ~~

  // containers
  fj_trap_script       = ~~

  // ambients
  fj_wav_resref0       = ~~
  fj_wav_resref1       = ~~
  fj_wav_resref2       = ~~
  fj_wav_resref3       = ~~
  fj_wav_resref4       = ~~
  fj_wav_resref5       = ~~
  fj_wav_resref6       = ~~
  fj_wav_resref7       = ~~
  fj_wav_resref8       = ~~
  fj_wav_resref9       = ~~

  // doors
  fj_door_wed_id       = ~~
  fj_door_open_wav     = ~~
  fj_door_close_wav    = ~~
  fj_door_script       = ~~
  fj_travel_trigger    = ~~

  // animations
  fj_bam_resref        = ~~
  fj_bmp_resref        = ~~

  //bitmask
  fj_bitmask           = ~~

  // songs
  fj_song_day0         = ~~
  fj_song_day1         = ~~
  fj_song_night0       = ~~
  fj_song_night1       = ~~

  // map notes
  fj_note_text         = ~~ // only for PST

  RET
  fj_return_offset

BEGIN

// we must set $num(0) == num_0 when using function input
// otherwise WeiDU won't recognize that they're synonymous
PATCH_FOR_EACH value IN
  vertex door_open_vert door_closed_vert cell_open_vert cell_closed_vert
BEGIN
  FOR( num = 0 ; VARIABLE_IS_SET EVAL ~fj_%value%_%num%~ ; ++num )BEGIN
    SET $EVAL ~fj_%value%~(~%num%~) = EVAL ~fj_%value%_%num%~
  END
END
FOR( num = 0 ; VARIABLE_IS_SET EVAL ~fj_embedded_eff_%num%~ ; ++num )BEGIN
  TEXT_SPRINT $fj_embedded_eff(~%num%~) EVAL ~%fj_embedded_eff_%num%%~
END

// php over this array rather than an explicit list to reduce code length and typos
CLEAR_ARRAY struct
TEXT_SPRINT $struct(0x54 0x58 0x02 0x110) actor
TEXT_SPRINT $struct(0x5c 0x5a 0x02 0x0c4) region
TEXT_SPRINT $struct(0x60 0x64 0x04 0x0c8) spawn
TEXT_SPRINT $struct(0x68 0x6c 0x04 0x068) entrance
TEXT_SPRINT $struct(0x70 0x74 0x02 0x0c0) container
TEXT_SPRINT $struct(0x78 0x76 0x02 0x014) itm
TEXT_SPRINT $struct(0x84 0x82 0x02 0x0d4) ambient
TEXT_SPRINT $struct(0x88 0x8c 0x02 0x054) variable
TEXT_SPRINT $struct(0xa8 0xa4 0x04 0x0c8) door
TEXT_SPRINT $struct(0xb8 0xb4 0x04 0x06c) tiled
TEXT_SPRINT $struct(0x7c 0x80 0x02 0x004) vertex
TEXT_SPRINT $struct(0xb0 0xac 0x04 0x04c) animation
TEXT_SPRINT $struct(0xa0 0x9c 0x04 0x000) bitmask
TEXT_SPRINT $struct(0xbc 0x00 0x00 0x090) songs
TEXT_SPRINT $struct(0xc0 0x00 0x00 0x0e4) interrupts
PATCH_IF is_pst BEGIN
  TEXT_SPRINT $struct(0xc8 0xcc 0x04 0x214) note
END ELSE BEGIN
  TEXT_SPRINT $struct(0xc4 0xc8 0x04 0x034) note
END
TEXT_SPRINT $struct(0xcc 0xd0 0x02 0x01c) projectile
PHP_EACH struct AS key => value BEGIN
  PATCH_IF ~%value%~ STRING_EQUAL_CASE ~%fj_structure_type%~ BEGIN
    SET fj_structure_type = key_0
  END
END

// Icewind Dale II decided to be uselessly special
PATCH_IF is_id2 BEGIN
  READ_ASCII   0x54 id2_header (0x10)
  DELETE_BYTES 0x54 0x10
  PATCH_FOR_EACH off IN
    0x54 0x5c 0x60 0x68 0x70 0x78 0x7c 0x84 0x88 0xa0 0xa8 0xb0 0xb8 0xbc 0xc0
  BEGIN
    PATCH_IF LONG_AT off BEGIN
      WRITE_LONG off THIS - 0x10
    END
  END
END

PATCH_IF fj_unzero_header_off BEGIN

  // a small courtesy to fix areas missing obligatory structures
  PATCH_IF fj_delete_mode == ` 0 BEGIN
    PATCH_IF !LONG_AT 0xbc && fj_structure_type != 0xbc BEGIN
      PATCH_IF fj_debug BEGIN PATCH_PRINT ~Offset to songlist points to 0! Adding empty songlist.~ END
      WRITE_LONG 0xbc BUFFER_LENGTH
      INSERT_BYTES BUFFER_LENGTH 0x90
    END
    PATCH_IF !LONG_AT 0xc0 && fj_structure_type != 0xc0 BEGIN
      PATCH_IF fj_debug BEGIN PATCH_PRINT ~Offset to rest interrupts points to 0! Adding empty rest interrupt table.~ END
      WRITE_LONG 0xc0 BUFFER_LENGTH
      INSERT_BYTES BUFFER_LENGTH 0xe4
    END
  END

  // offsets to valid structures should not point to 0
  PATCH_FOR_EACH off IN
    0x54 0x5c 0x60 0x68 0x70 0x78 0x7c 0x84 0x88 0xa0 0xa8 0xb0 0xb8
  BEGIN
    PATCH_IF !LONG_AT off BEGIN
      PATCH_IF fj_debug BEGIN PATCH_PRINT ~Header offset %off% points to 0, setting to 0x11c.~ END
      WRITE_LONG off 0x11c
    END
  END
  PATCH_IF is_pst BEGIN
    PATCH_IF !LONG_AT 0xc8 BEGIN
      PATCH_IF fj_debug BEGIN PATCH_PRINT ~Header offset 0xc8 points to 0, setting to 0x11c.~ END
      WRITE_LONG 0xc8 0x11c
    END
  END ELSE PATCH_IF is_bg2 BEGIN
    PATCH_FOR_EACH off IN 0xc4 0xcc BEGIN
      PATCH_IF !LONG_AT off BEGIN
        PATCH_IF fj_debug BEGIN PATCH_PRINT ~Header offset %off% points to 0, setting to 0x11c.~ END
        WRITE_LONG off 0x11c
      END
    END
  END

END

// long block to read all the existing data
PATCH_IF fj_debug BEGIN PATCH_PRINT ~Beginning unmarshalling.~ END
PHP_EACH struct AS key => value BEGIN
  PATCH_IF( LONG_AT key_0 )BEGIN // skip it if the header offset points at 0
    CLEAR_ARRAY EVAL ~%value%~
    GET_OFFSET_ARRAY EVAL ~%value%~ key_0 0x04 key_1 key_2 0x00 0x00 key_3 // e.g. $region
    PHP_EACH ~%value%~ AS num => off BEGIN
      CLEAR_ARRAY array

      PATCH_IF( key_0 == 0x54 )BEGIN
        PATCH_IF fj_debug BEGIN PATCH_PRINT ~Reading actor %num%.~ END
        PATCH_IF!( LONG_AT (off + 0x28) & 0x01 )BEGIN
          PATCH_IF fj_debug BEGIN PATCH_PRINT ~  Associating embedded creature.~ END
          READ_ASCII LONG_AT (off + 0x88) $are_embedded_cre(~%num%~) (LONG_AT (off + 0x8c))
        END
        WRITE_LONG off + 0x88 0
        READ_ASCII off $EVAL ~are_%value%~(~%num%~) (key_3)
      END ELSE

      PATCH_IF( key_0 == 0x5c )BEGIN
        PATCH_IF fj_debug BEGIN PATCH_PRINT ~Reading region %num%.~ END
        PATCH_IF( fj_debug && SHORT_AT ( off + 0x2a ) )BEGIN PATCH_PRINT ~  Associating vertices.~ END
        GET_OFFSET_ARRAY array 0x7c 0x04 (off + 0x2a) 0x02 (off + 0x2c) 0x04 0x04
        PHP_EACH array AS num1 => off1 BEGIN
          READ_LONG off1 $EVAL ~are_region_%num%_vertex~(~%num1%~)
        END
        CLEAR_ARRAY array
        WRITE_LONG off + 0x2c 0x00
        READ_ASCII off $EVAL ~are_%value%~(~%num%~) (key_3)
      END ELSE

      PATCH_IF( key_0 == 0x60 )BEGIN
        PATCH_IF fj_debug BEGIN PATCH_PRINT ~Reading spawn %num%~ END
        READ_ASCII off $EVAL ~are_%value%~(~%num%~) (key_3)
      END ELSE

      PATCH_IF( key_0 == 0x68 )BEGIN
        PATCH_IF fj_debug BEGIN PATCH_PRINT ~Reading entrance %num%~ END
        READ_ASCII off $EVAL ~are_%value%~(~%num%~) (key_3)
      END ELSE

      PATCH_IF( key_0 == 0x70 )BEGIN
        PATCH_IF fj_debug BEGIN PATCH_PRINT ~Reading container %num%.~ END

        // load container vertices
        GET_OFFSET_ARRAY array 0x7c 0x04 (off + 0x54) 0x04 (off + 0x50) 0x04 0x04
        PATCH_IF( fj_debug && LONG_AT 0x54 )BEGIN PATCH_PRINT ~  Associating vertices.~ END
        PHP_EACH array AS num1 => off1 BEGIN
          READ_LONG off1 $EVAL ~are_container_%num%_vertex~(~%num1%~)
        END
        CLEAR_ARRAY array

        // load container items
        GET_OFFSET_ARRAY array 0x78 0x04 (off + 0x44) 0x04 (off + 0x40) 0x04 0x14
        PATCH_IF( fj_debug && LONG_AT 0x44 )BEGIN PATCH_PRINT ~  Associating items.~ END
        PHP_EACH array AS num1 => off1 BEGIN
          READ_ASCII off1 $EVAL ~are_container_%num%_itm~(~%num1%~) (0x14)
        END
        CLEAR_ARRAY array

        // read container structure
        WRITE_LONG off + 0x40 0x00 // wipe item index
        WRITE_LONG off + 0x44 0x00 // wipe item count
        WRITE_LONG off + 0x50 0x00 // wipe vertex index
        READ_ASCII off $EVAL ~are_%value%~(~%num%~) (key_3)
      END ELSE

      // items are read off with their associated containers
      PATCH_IF( key_0 == 0x78 )BEGIN
      END ELSE

      PATCH_IF( key_0 == 0x84 )BEGIN
        PATCH_IF fj_debug BEGIN PATCH_PRINT ~Reading ambient %num%~ END
        READ_ASCII off $EVAL ~are_%value%~(~%num%~) (key_3)
      END ELSE

      PATCH_IF( key_0 == 0x88 )BEGIN
        PATCH_IF fj_debug BEGIN PATCH_PRINT ~Reading variable %num%~ END
        READ_ASCII off $EVAL ~are_%value%~(~%num%~) (key_3)
      END ELSE

      PATCH_IF( key_0 == 0xa8 )BEGIN
        PATCH_IF fj_debug BEGIN PATCH_PRINT ~Reading door %num% and associated vertices.~ END
        // load door open vertices
        GET_OFFSET_ARRAY array 0x7c 0x04 (off + 0x30) 0x02 (off + 0x2c) 0x04 0x04
        PHP_EACH array AS num1 => off1 BEGIN
          READ_LONG off1 $EVAL ~are_door_open_%num%_vertex~(~%num1%~)
        END
        CLEAR_ARRAY array
        WRITE_LONG off + 0x2c 0x00
        // load door closed vertices
        GET_OFFSET_ARRAY array 0x7c 0x04 (off + 0x32) 0x02 (off + 0x34) 0x04 0x04
        PHP_EACH array AS num1 => off1 BEGIN
          READ_LONG off1 $EVAL ~are_door_closed_%num%_vertex~(~%num1%~)
        END
        CLEAR_ARRAY array
        WRITE_LONG off + 0x34 0x00
        // load cell open vertices
        GET_OFFSET_ARRAY array 0x7c 0x04 (off + 0x4c) 0x02 (off + 0x48) 0x04 0x04
        PHP_EACH array AS num1 => off1 BEGIN
          READ_LONG off1 $EVAL ~are_cell_open_%num%_vertex~(~%num1%~)
        END
        CLEAR_ARRAY array
        WRITE_LONG off + 0x48 0x00
        // load cell closed vertices
        GET_OFFSET_ARRAY array 0x7c 0x04 (off + 0x4e) 0x02 (off + 0x50) 0x04 0x04
        PHP_EACH array AS num1 => off1 BEGIN
          READ_LONG off1 $EVAL ~are_cell_closed_%num%_vertex~(~%num1%~)
        END
        CLEAR_ARRAY array
        WRITE_LONG off + 0x50 0x00
        // read the door structure itself
        READ_ASCII off $EVAL ~are_%value%~(~%num%~) (key_3)
      END ELSE

      PATCH_IF( key_0 == 0xb8 )BEGIN
        PATCH_IF fj_debug BEGIN PATCH_PRINT ~Reading tiled object %num% (something is probably very wrong).~ END
        READ_ASCII off $EVAL ~are_%value%~(~%num%~) (key_3)
      END ELSE

      // vertices, these are read off with their associated regions/containers/doors
      PATCH_IF( key_0 == 0x78 )BEGIN
      END ELSE

      PATCH_IF( key_0 == 0xb0 )BEGIN
        PATCH_IF fj_debug BEGIN PATCH_PRINT ~Reading animation %num%.~ END
        READ_ASCII off $EVAL ~are_%value%~(~%num%~) (key_3)
      END ELSE

      PATCH_IF(
        ( key_0 == 0xc4 && is_bg2 ) ||
        ( key_0 == 0xc8 && is_pst)
      )BEGIN //
        PATCH_IF fj_debug BEGIN PATCH_PRINT ~Reading map note %num%.~ END
        READ_ASCII off $EVAL ~are_%value%~(~%num%~) (key_3)
      END ELSE

      PATCH_IF( key_0 == 0xcc && is_bg2 )BEGIN
        PATCH_IF fj_debug BEGIN PATCH_PRINT ~Reading projectile %num%.~ END
        READ_ASCII off $are_projectile(~%num%~) (key_3)
        PATCH_IF SHORT_AT (off + 0x0c) BEGIN
          PATCH_IF( fj_debug )BEGIN PATCH_PRINT ~  Associating v2 embedded effects.~ END
          READ_ASCII LONG_AT (off + 0x08) $are_embedded_eff(~%num%~) (SHORT_AT (off + 0x0c))
        END
      END

    END // php_each ~%value%~
    CLEAR_ARRAY array
    CLEAR_ARRAY EVAL ~%value%~

    // single structures

    // bitmask
    PATCH_IF( key_0 == 0xa0 )BEGIN
      PATCH_IF fj_debug BEGIN PATCH_PRINT ~Reading bitmask (should only exist in saved game areas).~ END
      READ_ASCII LONG_AT 0xa0 $are_bitmask(0) (LONG_AT 0x9c)
    END ELSE

    // songs
    PATCH_IF( key_0 == 0xbc )BEGIN
      PATCH_IF fj_debug BEGIN PATCH_PRINT ~Reading songs (obligatory structure).~ END
      READ_ASCII LONG_AT 0xbc $are_songs(0) (0x90)
    END ELSE

    // rest interrupts
    PATCH_IF( key_0 == 0xc0 )BEGIN
      PATCH_IF fj_debug BEGIN PATCH_PRINT ~Reading rest interrupt table (obligatory structure).~ END
      READ_ASCII LONG_AT 0xc0 $are_interrupts(0) (0xe4)
    END

  END // skip if key_0 points to 0
END // end php_each $structure: all extended structures now loaded in buffer

PATCH_IF fj_debug BEGIN PATCH_PRINT ~Trimming %SOURCE_FILE% down to the header.~ END
DELETE_BYTES 0x11c BUFFER_LENGTH - 0x11c
PHP_EACH struct AS key => value BEGIN
  PATCH_IF( key_2 == 0x02 )BEGIN
    WRITE_SHORT key_1 0x00
  END ELSE
  PATCH_IF( key_2 == 0x04 )BEGIN
    WRITE_LONG  key_1 0x00
  END
END

PATCH_IF fj_debug BEGIN PATCH_PRINT ~Reassembling %SOURCE_FILE%.~ END
PHP_EACH struct AS key => value BEGIN
  WRITE_LONG key_0 fj_position
  PHP_EACH ~are_%value%~ AS key1 => value1 BEGIN
    PATCH_IF( key_0 != 0xa0 && key_0 != 0xbc && key_0 != 0xc0 )BEGIN
      PATCH_IF( key1 != fj_delete_mode || fj_structure_type != key_0 )BEGIN
        PATCH_IF fj_debug BEGIN PATCH_PRINT ~Reinserting %value% number %key1%.~ END
        PATCH_IF( key_2 == 0x02 )BEGIN
          WRITE_SHORT key_1 THIS + 0x01
        END ELSE
        PATCH_IF( key_2 == 0x04 )BEGIN
          WRITE_LONG  key_1 THIS + 0x01
        END
        INSERT_BYTES fj_position key_3
        WRITE_ASCIIE fj_position ~%value1%~
        SET fj_position += key_3
      END
    END ELSE
    PATCH_IF( key_0 == 0xa0 && fj_structure_type != key_0 )BEGIN
      PATCH_IF fj_debug BEGIN PATCH_PRINT ~Reinserting %value% number %key1%.~ END
      TEXT_SPRINT  value1      $are_bitmask(0)
      WRITE_LONG   0x9c        STRING_LENGTH EVAL ~%value1%~
      INSERT_BYTES fj_position LONG_AT 0x9c
      WRITE_ASCIIE fj_position ~%value1%~
      SET fj_position += LONG_AT 0x9c
    END ELSE
    PATCH_IF( key_0 == 0xbc && fj_structure_type != key_0 )BEGIN
      PATCH_IF fj_debug BEGIN PATCH_PRINT ~Reinserting %value% number %key1%.~ END
      INSERT_BYTES fj_position key_3
      WRITE_ASCIIE fj_position ~%value1%~
      SET fj_position += key_3
    END ELSE
    PATCH_IF( key_0 == 0xc0 && fj_structure_type != key_0 )BEGIN
      PATCH_IF fj_debug BEGIN PATCH_PRINT ~Reinserting %value% number %key1%.~ END
      INSERT_BYTES fj_position key_3
      WRITE_ASCIIE fj_position ~%value1%~
      SET fj_position += key_3
    END
  END // PHP_EACH $EVAL ~are_%value%~

  // add new structure
  PATCH_IF( key_0 == fj_structure_type && fj_delete_mode == ` 0 && key_0 != 0x78 )BEGIN
    PATCH_IF fj_debug BEGIN PATCH_PRINT ~Adding new %value% structure.~ END
    PATCH_IF( key_2 == 0x02 )BEGIN
      WRITE_SHORT key_1 THIS + 0x01
    END ELSE PATCH_IF( key_2 == 0x04 )BEGIN
      WRITE_LONG  key_1 THIS + 0x01
    END
    SET fj_return_offset = fj_position
    INSERT_BYTES fj_position key_3
    SET fj_position += key_3

    // actor
    PATCH_IF( fj_structure_type == 0x54 )BEGIN
      WRITE_ASCIIE fj_return_offset + 0x00 ~%fj_name%~
      WRITE_SHORT  fj_return_offset + 0x20 fj_loc_x
      WRITE_SHORT  fj_return_offset + 0x22 fj_loc_y
      WRITE_SHORT  fj_return_offset + 0x24 fj_dest_x
      WRITE_SHORT  fj_return_offset + 0x26 fj_dest_y
      WRITE_LONG   fj_return_offset + 0x28 fj_loading
      WRITE_LONG   fj_return_offset + 0x2c fj_spawned
      WRITE_LONG   fj_return_offset + 0x30 fj_animation
      WRITE_LONG   fj_return_offset + 0x34 fj_orientation
      WRITE_LONG   fj_return_offset + 0x38 fj_expiry
      WRITE_SHORT  fj_return_offset + 0x3c fj_wander_dist_actor
      WRITE_SHORT  fj_return_offset + 0x3e fj_mvmt_dist_actor
      WRITE_LONG   fj_return_offset + 0x40 fj_schedule
      WRITE_LONG   fj_return_offset + 0x44 fj_num_talked
      WRITE_ASCIIE fj_return_offset + 0x48 ~%fj_dlg_resref%~
      WRITE_ASCIIE fj_return_offset + 0x50 ~%fj_bcs_override%~
      WRITE_ASCIIE fj_return_offset + 0x58 ~%fj_bcs_general%~
      WRITE_ASCIIE fj_return_offset + 0x60 ~%fj_bcs_class%~
      WRITE_ASCIIE fj_return_offset + 0x68 ~%fj_bcs_race%~
      WRITE_ASCIIE fj_return_offset + 0x70 ~%fj_bcs_default%~
      WRITE_ASCIIE fj_return_offset + 0x78 ~%fj_bcs_specific%~
      WRITE_ASCIIE fj_return_offset + 0x80 ~%fj_cre_resref%~
    END ELSE

    // region
    PATCH_IF( fj_structure_type == 0x5c )BEGIN
      WRITE_ASCIIE fj_return_offset + 0x00 ~%fj_name%~ #32
      WRITE_SHORT  fj_return_offset + 0x20 fj_type
      WRITE_SHORT  fj_return_offset + 0x22 fj_box_left
      WRITE_SHORT  fj_return_offset + 0x24 fj_box_top
      WRITE_SHORT  fj_return_offset + 0x26 fj_box_right
      WRITE_SHORT  fj_return_offset + 0x28 fj_box_bottom
      WRITE_LONG   fj_return_offset + 0x34 fj_cursor_idx
      WRITE_ASCIIE fj_return_offset + 0x38 ~%fj_destination_area%~ #8
      WRITE_ASCIIE fj_return_offset + 0x40 ~%fj_destination_name%~ #32
      WRITE_LONG   fj_return_offset + 0x60 fj_flags
      WRITE_LONG   fj_return_offset + 0x64 fj_info_point_strref
      WRITE_SHORT  fj_return_offset + 0x68 fj_trap_detect
      WRITE_SHORT  fj_return_offset + 0x6a fj_trap_remove
      WRITE_SHORT  fj_return_offset + 0x6c fj_trap_active
      WRITE_SHORT  fj_return_offset + 0x6e fj_trap_status
      WRITE_SHORT  fj_return_offset + 0x70 fj_loc_x
      WRITE_SHORT  fj_return_offset + 0x72 fj_loc_y
      WRITE_ASCIIE fj_return_offset + 0x74 ~%fj_key_resref%~ #8
      WRITE_ASCIIE fj_return_offset + 0x7c ~%fj_reg_script%~ #8
      WRITE_SHORT  fj_return_offset + 0x84 fj_alt_x
      WRITE_SHORT  fj_return_offset + 0x86 fj_alt_y
      PHP_EACH fj_vertex AS key1 => value1 BEGIN
        WRITE_SHORT fj_return_offset + 0x2a THIS + 0x01
      END
    END ELSE

    // spawn
    PATCH_IF( fj_structure_type == 0x60 )BEGIN
      WRITE_ASCIIE fj_return_offset + 0x00 ~%fj_name%~ #32
      WRITE_SHORT  fj_return_offset + 0x20 fj_loc_x
      WRITE_SHORT  fj_return_offset + 0x22 fj_loc_y
      WRITE_ASCIIE fj_return_offset + 0x24 ~%fj_cre_resref0%~ #8
      WRITE_ASCIIE fj_return_offset + 0x2c ~%fj_cre_resref1%~ #8
      WRITE_ASCIIE fj_return_offset + 0x34 ~%fj_cre_resref2%~ #8
      WRITE_ASCIIE fj_return_offset + 0x3c ~%fj_cre_resref3%~ #8
      WRITE_ASCIIE fj_return_offset + 0x44 ~%fj_cre_resref4%~ #8
      WRITE_ASCIIE fj_return_offset + 0x4c ~%fj_cre_resref5%~ #8
      WRITE_ASCIIE fj_return_offset + 0x54 ~%fj_cre_resref6%~ #8
      WRITE_ASCIIE fj_return_offset + 0x5c ~%fj_cre_resref7%~ #8
      WRITE_ASCIIE fj_return_offset + 0x64 ~%fj_cre_resref8%~ #8
      WRITE_ASCIIE fj_return_offset + 0x6c ~%fj_cre_resref9%~ #8
      WRITE_SHORT  fj_return_offset + 0x74 fj_spawn_num
      WRITE_SHORT  fj_return_offset + 0x76 fj_difficulty
      WRITE_SHORT  fj_return_offset + 0x78 fj_delay
      WRITE_SHORT  fj_return_offset + 0x7a fj_method
      WRITE_LONG   fj_return_offset + 0x7c fj_duration
      WRITE_SHORT  fj_return_offset + 0x80 fj_wander_distance
      WRITE_SHORT  fj_return_offset + 0x82 fj_mvmt_distance
      WRITE_SHORT  fj_return_offset + 0x84 fj_max_num
      WRITE_SHORT  fj_return_offset + 0x86 fj_enable
      WRITE_LONG   fj_return_offset + 0x88 fj_schedule
      WRITE_SHORT  fj_return_offset + 0x8c fj_day_prob
      WRITE_SHORT  fj_return_offset + 0x8e fj_night_prob
    END ELSE

    // entrance
    PATCH_IF( fj_structure_type == 0x68 )BEGIN
      WRITE_ASCIIE fj_return_offset + 0x00 ~%fj_name%~ #32
      WRITE_SHORT  fj_return_offset + 0x20 fj_loc_x
      WRITE_SHORT  fj_return_offset + 0x22 fj_loc_y
      WRITE_SHORT  fj_return_offset + 0x24 fj_orientation
    END ELSE

    // container
    PATCH_IF( fj_structure_type == 0x70 )BEGIN
      WRITE_ASCIIE fj_return_offset + 0x00 ~%fj_name%~ #32
      WRITE_SHORT  fj_return_offset + 0x20 fj_loc_x
      WRITE_SHORT  fj_return_offset + 0x22 fj_loc_y
      WRITE_SHORT  fj_return_offset + 0x24 fj_type
      WRITE_SHORT  fj_return_offset + 0x26 fj_lock_diff
      WRITE_LONG   fj_return_offset + 0x28 fj_flags
      WRITE_SHORT  fj_return_offset + 0x2c fj_trap_detect
      WRITE_SHORT  fj_return_offset + 0x2e fj_trap_remove_diff
      WRITE_SHORT  fj_return_offset + 0x30 fj_trap_active
      WRITE_SHORT  fj_return_offset + 0x32 fj_trap_status
      WRITE_SHORT  fj_return_offset + 0x34 fj_trap_loc_x
      WRITE_SHORT  fj_return_offset + 0x36 fj_trap_loc_y
      WRITE_SHORT  fj_return_offset + 0x38 fj_box_left
      WRITE_SHORT  fj_return_offset + 0x3a fj_box_top
      WRITE_SHORT  fj_return_offset + 0x3c fj_box_right
      WRITE_SHORT  fj_return_offset + 0x3e fj_box_bottom
      WRITE_ASCIIE fj_return_offset + 0x48 ~%fj_trap_script%~ #8
      WRITE_ASCIIE fj_return_offset + 0x78 ~%fj_key_resref%~ #8
      WRITE_LONG   fj_return_offset + 0x84 fj_lockpick_strref
      PHP_EACH fj_vertex AS key1 => value1 BEGIN
        WRITE_LONG fj_return_offset + 0x54 THIS + 0x01
      END
    END ELSE

    // ambient
    PATCH_IF( fj_structure_type == 0x84 )BEGIN
      WRITE_ASCIIE fj_return_offset + 0x00 ~%fj_name%~ #32
      WRITE_SHORT  fj_return_offset + 0x20 fj_loc_x
      WRITE_SHORT  fj_return_offset + 0x22 fj_loc_y
      WRITE_SHORT  fj_return_offset + 0x24 fj_radius
      WRITE_SHORT  fj_return_offset + 0x26 fj_loc_z
      WRITE_SHORT  fj_return_offset + 0x2e fj_volume
      WRITE_ASCIIE fj_return_offset + 0x30 ~%fj_wav_resref0%~ #8
      WRITE_ASCIIE fj_return_offset + 0x38 ~%fj_wav_resref1%~ #8
      WRITE_ASCIIE fj_return_offset + 0x40 ~%fj_wav_resref2%~ #8
      WRITE_ASCIIE fj_return_offset + 0x48 ~%fj_wav_resref3%~ #8
      WRITE_ASCIIE fj_return_offset + 0x50 ~%fj_wav_resref4%~ #8
      WRITE_ASCIIE fj_return_offset + 0x58 ~%fj_wav_resref5%~ #8
      WRITE_ASCIIE fj_return_offset + 0x60 ~%fj_wav_resref6%~ #8
      WRITE_ASCIIE fj_return_offset + 0x68 ~%fj_wav_resref7%~ #8
      WRITE_ASCIIE fj_return_offset + 0x70 ~%fj_wav_resref8%~ #8
      WRITE_ASCIIE fj_return_offset + 0x78 ~%fj_wav_resref9%~ #8
      WRITE_SHORT  fj_return_offset + 0x80 fj_sound_num
      WRITE_LONG   fj_return_offset + 0x84 fj_delay
      WRITE_LONG   fj_return_offset + 0x88 fj_variation
      WRITE_LONG   fj_return_offset + 0x8c fj_schedule
      WRITE_LONG   fj_return_offset + 0x90 fj_flags
    END ELSE

    // variable
    PATCH_IF( fj_structure_type == 0x88 )BEGIN
      WRITE_ASCIIE fj_return_offset + 0x00 ~%fj_name%~ #32
      WRITE_LONG   fj_return_offset + 0x28 fj_variable_value
    END ELSE

    // door
    PATCH_IF( fj_structure_type == 0xa8 )BEGIN
      WRITE_ASCIIE fj_return_offset + 0x00 ~%fj_name%~ #32
      WRITE_ASCIIE fj_return_offset + 0x20 ~%fj_door_wed_id%~
      WRITE_LONG   fj_return_offset + 0x28 fj_flags
      WRITE_SHORT  fj_return_offset + 0x38 fj_open_box_left
      WRITE_SHORT  fj_return_offset + 0x3a fj_open_box_top
      WRITE_SHORT  fj_return_offset + 0x3c fj_open_box_right
      WRITE_SHORT  fj_return_offset + 0x3e fj_open_box_bottom
      WRITE_SHORT  fj_return_offset + 0x40 fj_closed_box_left
      WRITE_SHORT  fj_return_offset + 0x42 fj_closed_box_top
      WRITE_SHORT  fj_return_offset + 0x44 fj_closed_box_right
      WRITE_SHORT  fj_return_offset + 0x46 fj_closed_box_bottom
      WRITE_ASCIIE fj_return_offset + 0x58 ~%fj_door_open_wav%~
      WRITE_ASCIIE fj_return_offset + 0x60 ~%fj_door_close_wav%~
      WRITE_LONG   fj_return_offset + 0x68 fj_cursor_idx
      WRITE_SHORT  fj_return_offset + 0x6c fj_trap_detect
      WRITE_SHORT  fj_return_offset + 0x6e fj_trap_remove
      WRITE_SHORT  fj_return_offset + 0x70 fj_trap_active
      WRITE_SHORT  fj_return_offset + 0x72 fj_trap_status
      WRITE_SHORT  fj_return_offset + 0x74 fj_trap_loc_x
      WRITE_SHORT  fj_return_offset + 0x76 fj_trap_loc_y
      WRITE_ASCIIE fj_return_offset + 0x78 ~%fj_key_resref%~
      WRITE_ASCIIE fj_return_offset + 0x80 ~%fj_door_script%~
      WRITE_LONG   fj_return_offset + 0x88 fj_detect_diff
      WRITE_LONG   fj_return_offset + 0x8c fj_locked_diff
      WRITE_SHORT  fj_return_offset + 0x90 fj_open_loc_x
      WRITE_SHORT  fj_return_offset + 0x92 fj_open_loc_y
      WRITE_SHORT  fj_return_offset + 0x94 fj_closed_loc_x
      WRITE_SHORT  fj_return_offset + 0x96 fj_closed_loc_y
      WRITE_LONG   fj_return_offset + 0x98 fj_lockpick_strref
      WRITE_ASCIIE fj_return_offset + 0x9c ~%fj_travel_trigger%~ #24
      WRITE_LONG   fj_return_offset + 0xb4 fj_dlg_strref
      WRITE_ASCIIE fj_return_offset + 0xb8 ~%fj_dlg_resref%~
      PHP_EACH fj_door_open_vert   AS key1 => value1 BEGIN
        WRITE_SHORT fj_return_offset + 0x30 THIS + 0x01
      END
      PHP_EACH fj_door_closed_vert AS key1 => value1 BEGIN
        WRITE_SHORT fj_return_offset + 0x32 THIS + 0x01
      END
      PHP_EACH fj_cell_open_vert   AS key1 => value1 BEGIN
        WRITE_SHORT fj_return_offset + 0x4c THIS + 0x01
      END
      PHP_EACH fj_cell_closed_vert AS key1 => value1 BEGIN
        WRITE_SHORT fj_return_offset + 0x4e THIS + 0x01
      END
    END ELSE

    // animation
    PATCH_IF( fj_structure_type == 0xb0 )BEGIN
      WRITE_ASCIIE fj_return_offset + 0x00 ~%fj_name%~ #32
      WRITE_SHORT  fj_return_offset + 0x20 fj_loc_x
      WRITE_SHORT  fj_return_offset + 0x22 fj_loc_y
      WRITE_LONG   fj_return_offset + 0x24 fj_schedule
      WRITE_ASCIIE fj_return_offset + 0x28 ~%fj_bam_resref%~ #8
      WRITE_SHORT  fj_return_offset + 0x30 fj_bam_seq
      WRITE_SHORT  fj_return_offset + 0x32 fj_bam_frame
      WRITE_LONG   fj_return_offset + 0x34 fj_flags
      WRITE_SHORT  fj_return_offset + 0x38 fj_loc_z
      WRITE_SHORT  fj_return_offset + 0x3a fj_transparent
      WRITE_SHORT  fj_return_offset + 0x3c fj_init_frame
      WRITE_BYTE   fj_return_offset + 0x3e fj_loop_chance
      WRITE_BYTE   fj_return_offset + 0x3f fj_skip_cycles
      WRITE_ASCIIE fj_return_offset + 0x40 ~%fj_bmp_resref%~ #8
    END ELSE

    // bitmask
    PATCH_IF( fj_structure_type == 0xa0 )BEGIN
      PATCH_IF( FILE_EXISTS ~%fj_bitmask%~ )BEGIN
        SET key1 = BUFFER_LENGTH
        APPEND_FILE_EVALUATE ~%fj_bitmask%~
        WRITE_LONG 0x9c BUFFER_LENGTH - key1
      END ELSE BEGIN
        WRITE_LONG 0x9c 0x00
      END
      SET fj_position += LONG_AT 0x9c
    END ELSE

    // songs
    PATCH_IF( fj_structure_type == 0xbc )BEGIN
      WRITE_LONG   fj_return_offset + 0x00 fj_song_day
      WRITE_LONG   fj_return_offset + 0x04 fj_song_night
      WRITE_LONG   fj_return_offset + 0x08 fj_song_victory
      WRITE_LONG   fj_return_offset + 0x0c fj_song_battle
      WRITE_LONG   fj_return_offset + 0x10 fj_song_defeat
      WRITE_LONG   fj_return_offset + 0x14 0xffffffff
      WRITE_LONG   fj_return_offset + 0x18 0xffffffff
      WRITE_LONG   fj_return_offset + 0x1c 0xffffffff
      WRITE_LONG   fj_return_offset + 0x20 0xffffffff
      WRITE_LONG   fj_return_offset + 0x24 0xffffffff
      WRITE_ASCIIE fj_return_offset + 0x28 ~%fj_song_day0%~ #8
      WRITE_ASCIIE fj_return_offset + 0x30 ~%fj_song_day1%~ #8
      WRITE_LONG   fj_return_offset + 0x38 fj_song_day_vol
      WRITE_ASCIIE fj_return_offset + 0x3c ~%fj_song_night0%~ #8
      WRITE_ASCIIE fj_return_offset + 0x44 ~%fj_song_night1%~ #8
      WRITE_LONG   fj_return_offset + 0x4c fj_song_night_vol
      WRITE_LONG   fj_return_offset + 0x50 fj_song_reverb
    END ELSE

    // rest interrupts
    PATCH_IF( fj_structure_type == 0xc0 )BEGIN
      WRITE_ASCIIE fj_return_offset + 0x00 ~%fj_name%~ #32
      WRITE_LONG   fj_return_offset + 0x20 fj_cre_strref0
      WRITE_LONG   fj_return_offset + 0x24 fj_cre_strref1
      WRITE_LONG   fj_return_offset + 0x28 fj_cre_strref2
      WRITE_LONG   fj_return_offset + 0x2c fj_cre_strref3
      WRITE_LONG   fj_return_offset + 0x30 fj_cre_strref4
      WRITE_LONG   fj_return_offset + 0x34 fj_cre_strref5
      WRITE_LONG   fj_return_offset + 0x38 fj_cre_strref6
      WRITE_LONG   fj_return_offset + 0x3c fj_cre_strref7
      WRITE_LONG   fj_return_offset + 0x40 fj_cre_strref8
      WRITE_LONG   fj_return_offset + 0x44 fj_cre_strref9
      WRITE_ASCIIE fj_return_offset + 0x48 ~%fj_cre_resref0%~ #8
      WRITE_ASCIIE fj_return_offset + 0x50 ~%fj_cre_resref1%~ #8
      WRITE_ASCIIE fj_return_offset + 0x58 ~%fj_cre_resref2%~ #8
      WRITE_ASCIIE fj_return_offset + 0x60 ~%fj_cre_resref3%~ #8
      WRITE_ASCIIE fj_return_offset + 0x68 ~%fj_cre_resref4%~ #8
      WRITE_ASCIIE fj_return_offset + 0x70 ~%fj_cre_resref5%~ #8
      WRITE_ASCIIE fj_return_offset + 0x78 ~%fj_cre_resref6%~ #8
      WRITE_ASCIIE fj_return_offset + 0x80 ~%fj_cre_resref7%~ #8
      WRITE_ASCIIE fj_return_offset + 0x88 ~%fj_cre_resref8%~ #8
      WRITE_ASCIIE fj_return_offset + 0x90 ~%fj_cre_resref9%~ #8
      WRITE_SHORT  fj_return_offset + 0x98 fj_spawn_num
      WRITE_SHORT  fj_return_offset + 0x9a fj_difficulty
      WRITE_LONG   fj_return_offset + 0x9c fj_duration
      WRITE_SHORT  fj_return_offset + 0xa0 fj_wander_distance
      WRITE_SHORT  fj_return_offset + 0xa2 fj_mvmt_distance
      WRITE_SHORT  fj_return_offset + 0xa4 fj_max_num
      WRITE_SHORT  fj_return_offset + 0xa6 fj_enable
      WRITE_SHORT  fj_return_offset + 0xa8 fj_day_prob
      WRITE_SHORT  fj_return_offset + 0xaa fj_night_prob
    END ELSE

    // map note (BGII)
    PATCH_IF( fj_structure_type == 0xc4 )BEGIN
      WRITE_SHORT  fj_return_offset + 0x00 fj_loc_x
      WRITE_SHORT  fj_return_offset + 0x02 fj_loc_y
      WRITE_LONG   fj_return_offset + 0x04 fj_note_strref
      WRITE_SHORT  fj_return_offset + 0x08 fj_strref_loc
      WRITE_SHORT  fj_return_offset + 0x0a fj_color
      WRITE_LONG   fj_return_offset + 0x0c fj_note_id
    END ELSE

    // map note (PST)
    PATCH_IF( fj_structure_type == 0xc8 )BEGIN
      WRITE_LONG   fj_return_offset + 0x000 fj_loc_x
      WRITE_LONG   fj_return_offset + 0x004 fj_loc_y
      WRITE_ASCIIE fj_return_offset + 0x008 ~%fj_note_text%~
      WRITE_LONG   fj_return_offset + 0x1fc fj_color
    END ELSE

    // embedded projectile
    PATCH_IF( fj_structure_type == 0xcc )BEGIN
      PATCH_IF(  fj_missile_num == ` 0 )BEGIN
        SET fj_missile_num = IDS_OF_SYMBOL ( projectl ~%fj_name%~ )
        PATCH_IF( fj_missile_num > ` 0 )BEGIN
          SET fj_missile_num -= 0x01
        END
      END
      WRITE_ASCIIE fj_return_offset + 0x00 ~%fj_name%~ #8
      WRITE_SHORT  fj_return_offset + 0x0e fj_missile_num
      WRITE_SHORT  fj_return_offset + 0x10 fj_frequency
      WRITE_SHORT  fj_return_offset + 0x12 fj_duration
      WRITE_SHORT  fj_return_offset + 0x14 fj_loc_x
      WRITE_SHORT  fj_return_offset + 0x16 fj_loc_y
      WRITE_SHORT  fj_return_offset + 0x18 fj_loc_z
      WRITE_SHORT  fj_return_offset + 0x1a fj_target
    END

  END

  // add items and index to their containers
  PATCH_IF( key_0 == 0x78 )BEGIN
    PHP_EACH are_container AS num => structure BEGIN
      PATCH_IF( fj_structure_type == 0x70 && num == fj_delete_mode && fj_deleted == 0x00 )BEGIN
        SET fj_deleted = 0x01
      END ELSE BEGIN
        WRITE_LONG LONG_AT 0x70 + 0xc0 * ( num - fj_deleted ) + 0x40 fj_itm_idx
        PHP_EACH ~are_container_%num%_itm~ AS num1 => value1 BEGIN
          PATCH_IF(
            ( fj_structure_type != 0x78 ) ||
            ( fj_delete_mode != num1 + LONG_AT ( LONG_AT 0x70 + 0xc0 * ( num - fj_deleted ) + 0x40 ) )
          )BEGIN
            PATCH_IF fj_debug BEGIN PATCH_PRINT ~Reassociating item %num1% to container %num%.~ END
            WRITE_LONG LONG_AT 0x70 + 0xc0 * ( num - fj_deleted ) + 0x44 THIS + 0x01
            INSERT_BYTES fj_position 0x14
            WRITE_ASCIIE fj_position ~%value1%~
            WRITE_SHORT  0x76 THIS + 0x01
            SET ++ fj_itm_idx
            SET fj_position += key_3
          END
        END
      END
      PATCH_IF( fj_con_itm_idx == num && fj_structure_type == 0x78 )BEGIN
        READ_LONG LONG_AT 0x70 + 0xc0 * num + 0x44 cnt
        PATCH_IF fj_debug BEGIN PATCH_PRINT ~Adding new item to container %num%.~ END 
        WRITE_LONG LONG_AT 0x70 + 0xc0 * num + 0x44 THIS + 0x01
        WRITE_SHORT  0x76 THIS + 0x01
        INSERT_BYTES fj_position key_3
        WRITE_ASCIIE fj_position + 0x00 ~%fj_name%~ #8
        WRITE_SHORT  fj_position + 0x08 fj_itm_expiry
        WRITE_SHORT  fj_position + 0x0a fj_charge0
        WRITE_SHORT  fj_position + 0x0c fj_charge1
        WRITE_SHORT  fj_position + 0x0e fj_charge2
        WRITE_LONG   fj_position + 0x10 fj_flags
        SET ++ fj_itm_idx
        SET fj_position  += key_3
      END
    END // php $are_container
    SET fj_deleted = 0x00
    PHP_EACH are_container AS key => value BEGIN
      CLEAR_ARRAY EVAL ~are_container_%key%_itm~
    END
  END ELSE

  // add vertices
  PATCH_IF( key_0 == 0x7c )BEGIN

    // vertices associated with regions
    PHP_EACH are_region    AS num => structure BEGIN
      PATCH_IF( fj_structure_type == 0x5c && num == fj_delete_mode && fj_deleted == 0x00 )BEGIN
        SET fj_deleted = 0x01
      END ELSE BEGIN
        PATCH_IF fj_debug BEGIN PATCH_PRINT ~Reassociating vertices to region %num%.~ END
        WRITE_LONG LONG_AT 0x5c + 0xc4 * ( num - fj_deleted ) + 0x2c fj_vertex_idx
        PHP_EACH ~are_region_%num%_vertex~ AS num1 => value1 BEGIN
          INSERT_BYTES fj_position 0x04
          WRITE_LONG   fj_position value1
          WRITE_SHORT  0x80        THIS + 0x01
          SET ++fj_vertex_idx
          SET fj_position += key_3
        END
      END
    END
    SET fj_deleted = 0x00
    PATCH_IF( fj_structure_type == 0x5c && fj_delete_mode == ` 0 )BEGIN
      PATCH_IF fj_debug BEGIN PATCH_PRINT ~Adding vertices to new region.~ END
      WRITE_LONG fj_return_offset + 0x2c fj_vertex_idx
      PHP_EACH fj_vertex AS num => off BEGIN
        INSERT_BYTES fj_position 0x04
        WRITE_SHORT  0x80        THIS + 0x01
        SET ++fj_vertex_idx
      END
      PHP_EACH fj_vertex AS num => off BEGIN
        WRITE_LONG fj_position off
        SET fj_position += 0x04
      END
    END
    PHP_EACH are_region    AS num => structure BEGIN
      CLEAR_ARRAY EVAL ~are_region_%num%_vertex~
    END

    // vertices associated with containers
    PHP_EACH are_container AS num => structure BEGIN
      PATCH_IF( fj_structure_type == 0x70 && num == fj_delete_mode && fj_deleted == 0x00 )BEGIN
        SET fj_deleted = 0x01
      END ELSE BEGIN
        PATCH_IF fj_debug BEGIN PATCH_PRINT ~Reassociating vertices to container %num%.~ END
        WRITE_LONG LONG_AT 0x70 + 0xc0 * ( num - fj_deleted ) + 0x50 fj_vertex_idx
        PHP_EACH ~are_container_%num%_vertex~ AS num1 => value1 BEGIN
          INSERT_BYTES fj_position 0x04
          WRITE_LONG   fj_position value1
          WRITE_SHORT  0x80        THIS + 0x01
          SET ++fj_vertex_idx
          SET fj_position += 0x04
        END
      END
    END
    SET fj_deleted = 0x00
    PATCH_IF fj_structure_type == 0x70 && fj_delete_mode == ` 0 BEGIN
      PATCH_IF fj_debug BEGIN PATCH_PRINT ~Adding vertices to new container.~ END
      WRITE_LONG fj_return_offset + 0x50 fj_vertex_idx
      PHP_EACH fj_vertex AS num => off BEGIN
        SET ++fj_vertex_idx
        INSERT_BYTES fj_position 0x04
        WRITE_SHORT  0x80 THIS + 0x01
      END
      PHP_EACH fj_vertex AS num => off BEGIN
        WRITE_LONG fj_position off
        SET fj_position += 0x04
      END
    END
    PHP_EACH are_container AS num => structure BEGIN
      CLEAR_ARRAY EVAL ~are_container_%num%_vertex~
    END

    // vertices associated with doors
    PHP_EACH are_door      AS num => structure BEGIN
      PATCH_IF( fj_structure_type == 0xa8 && num == fj_delete_mode && fj_deleted == 0x00 )BEGIN
        SET fj_deleted = 0x01
      END ELSE BEGIN
        PATCH_IF fj_debug BEGIN PATCH_PRINT ~Reassociating vertices to door %num%.~ END
        WRITE_LONG LONG_AT 0xa8 + 0xc8 * ( num - fj_deleted ) + 0x2c fj_vertex_idx
        PHP_EACH ~are_door_open_%num%_vertex~ AS num1 => value1 BEGIN
          INSERT_BYTES fj_position 0x04
          WRITE_LONG   fj_position value1
          SET ++fj_vertex_idx
          SET fj_position += 0x04
          WRITE_SHORT  0x80 THIS + 0x01
        END
        WRITE_LONG LONG_AT 0xa8 + 0xc8 * ( num - fj_deleted ) + 0x34 fj_vertex_idx
        PHP_EACH ~are_door_closed_%num%_vertex~ AS num1 => value1 BEGIN
          INSERT_BYTES fj_position 0x04
          WRITE_LONG   fj_position value1
          SET ++fj_vertex_idx
          SET fj_position += 0x04
          WRITE_SHORT  0x80 THIS + 0x01
        END
        WRITE_LONG LONG_AT 0xa8 + 0xc8 * ( num - fj_deleted ) + 0x48 fj_vertex_idx
        PHP_EACH ~are_cell_open_%num%_vertex~ AS num1 => value1 BEGIN
          INSERT_BYTES fj_position 0x04
          WRITE_LONG   fj_position value1
          SET ++fj_vertex_idx
          SET fj_position += 0x04
          WRITE_SHORT  0x80 THIS + 0x01
        END
        WRITE_LONG LONG_AT 0xa8 + 0xc8 * ( num - fj_deleted ) + 0x50 fj_vertex_idx
        PHP_EACH ~are_cell_closed_%num%_vertex~ AS num1 => value1 BEGIN
          INSERT_BYTES fj_position 0x04
          WRITE_LONG   fj_position value1
          SET ++fj_vertex_idx
          SET fj_position += 0x04
          WRITE_SHORT  0x80 THIS + 0x01
        END
      END
    END
    SET fj_deleted = 0x00
    PATCH_FOR_EACH value1 IN
      door_open door_closed cell_open cell_closed
    BEGIN
      CLEAR_ARRAY EVAL ~are_%value1%_%num%_vertex~
    END
    PATCH_IF( fj_structure_type == 0xa8 && fj_delete_mode == ` 0 )BEGIN
      PATCH_IF fj_debug BEGIN PATCH_PRINT ~Adding vertices to new door.~ END
      WRITE_LONG fj_return_offset + 0x2c fj_vertex_idx
      WRITE_LONG fj_return_offset + 0x34
        LONG_AT (fj_return_offset + 0x2c) + SHORT_AT (fj_return_offset + 0x30)
      WRITE_LONG fj_return_offset + 0x48
        LONG_AT (fj_return_offset + 0x34) + SHORT_AT (fj_return_offset + 0x32)
      WRITE_LONG fj_return_offset + 0x50
        LONG_AT (fj_return_offset + 0x48) + SHORT_AT (fj_return_offset + 0x4c)
      PATCH_FOR_EACH vertex_type IN
        door_open door_closed cell_open cell_closed
      BEGIN
        PHP_EACH ~fj_%vertex_type%_vert~ AS num => off BEGIN
          INSERT_BYTES fj_position 0x04
          WRITE_SHORT  0x80 THIS + 0x01
        END
        PHP_EACH ~fj_%vertex_type%_vert~ AS num => off BEGIN
          WRITE_LONG fj_position off
          SET fj_position += 0x04
        END
        CLEAR_ARRAY EVAL ~fj_%vertex_type%_vert~
      END
    END

  END // adding vertices

  // reinsert embedded creatures
  PATCH_IF( key_0 == 0x54 )BEGIN
    PHP_EACH are_embedded_cre AS num => value1 BEGIN
      PATCH_IF( fj_structure_type == 0x54 && num == fj_delete_mode && fj_deleted == 0x00 )BEGIN
        SET fj_deleted = 0x01
      END ELSE BEGIN
        PATCH_IF fj_debug BEGIN PATCH_PRINT ~Reassociating embedded creature to actor %num%.~ END
        WRITE_LONG   LONG_AT 0x54 + ( num - fj_deleted ) * 0x110 + 0x88 fj_position
        INSERT_BYTES fj_position LONG_AT ( LONG_AT 0x54 + ( num - fj_deleted ) * 0x110 + 0x8c )
        WRITE_ASCIIE fj_position ~%value1%~
        SET fj_position += LONG_AT (LONG_AT 0x54 + ( num - fj_deleted ) * 0x110 + 0x8c)
      END
    END
    CLEAR_ARRAY are_embedded_cre
    SET fj_deleted = 0x00
    PATCH_IF( fj_structure_type == 0x54 && fj_delete_mode == ` 0 && !( fj_loading & 0x01 ) )BEGIN
      PATCH_IF( FILE_EXISTS ~%fj_cre_embedded%~ )BEGIN
        SET off = BUFFER_LENGTH // we do a stupid dance here to avoid INNER_ACTION
        APPEND_FILE_EVALUATE ~%fj_cre_embedded%~
        READ_ASCII   off fj_cre_embedded ( BUFFER_LENGTH - off )
        DELETE_BYTES off STRING_LENGTH EVAL ~%fj_cre_embedded%~
      END ELSE PATCH_IF( FILE_EXISTS_IN_GAME ~%fj_cre_resref%.cre~ ) BEGIN
        INNER_PATCH_FILE ~%fj_cre_resref%.cre~ BEGIN
          READ_ASCII 0x00 fj_cre_embedded ( BUFFER_LENGTH )
        END
      END
      PATCH_IF( ~%fj_cre_embedded%~ STR_CMP ~~ )BEGIN
        PATCH_IF fj_debug BEGIN PATCH_PRINT ~Embedding creature to new actor.~ END
        WRITE_LONG   fj_return_offset + 0x88 fj_position
        WRITE_LONG   fj_return_offset + 0x8c STRING_LENGTH EVAL ~%fj_cre_embedded%~
        INSERT_BYTES fj_position             LONG_AT (fj_return_offset + 0x8c)
        WRITE_ASCIIE fj_position             ~%fj_cre_embedded%~
        SET fj_position += LONG_AT ( fj_return_offset + 0x8c )
      END ELSE BEGIN
        WRITE_LONG   fj_return_offset + 0x28 THIS | 0x01 // if we didn't find a .cre, mark it unembedded
      END
    END
  END ELSE

  // reinsert embedded projectile effects
  PATCH_IF( key_0 == 0xcc )BEGIN
    PHP_EACH are_embedded_eff AS num => value1 BEGIN
      PATCH_IF( fj_structure_type == 0xcc && fj_delete_mode == num && fj_deleted == 0x00 )BEGIN
        SET fj_deleted = 0x01
      END ELSE BEGIN
        PATCH_IF fj_debug BEGIN PATCH_PRINT ~Reassociating embedded effects to projectile %num%.~ END
        WRITE_LONG   LONG_AT 0xcc + ( num - fj_deleted ) * 0x1c + 0x08 fj_position
        INSERT_BYTES fj_position SHORT_AT (LONG_AT 0xcc + ( num - fj_deleted ) * 0x1c + 0x0c)
        WRITE_ASCIIE fj_position ~%value1%~
        SET fj_position += SHORT_AT (LONG_AT 0xcc + ( num - fj_deleted ) * 0x1c + 0x0c)
      END
    END
    SET fj_deleted = 0x00
    CLEAR_ARRAY are_embedded_eff
    PATCH_IF( fj_structure_type == 0xcc && fj_delete_mode == ` 0 )BEGIN
      WRITE_LONG fj_return_offset + 0x08 fj_position
      PHP_EACH fj_embedded_eff AS num => value1 BEGIN
        PATCH_IF( FILE_EXISTS ~%value1%~ )BEGIN
          SET off = BUFFER_LENGTH
          APPEND_FILE_EVALUATE ~%value1%~
          READ_ASCII   off + 0x08 value1 (0x108)
          DELETE_BYTES off 0x110
        END ELSE PATCH_IF( FILE_EXISTS_IN_GAME ~%value1%.eff~ )BEGIN
          INNER_PATCH_FILE ~%value1%.eff~ BEGIN
            READ_ASCII 0x08 value1 (0x108)
          END
        END ELSE BEGIN
          TEXT_SPRINT value1 ~~
        END
        PATCH_IF( ~%value1%~ STR_CMP ~~ )BEGIN
          PATCH_IF fj_debug BEGIN PATCH_PRINT ~Adding effect %num% to new embedded projectile.~ END
          WRITE_SHORT  fj_return_offset + 0x0c THIS + 0x108
          INSERT_BYTES fj_position 0x108
          WRITE_ASCIIE fj_position ~%value1%~
          SET fj_position += 0x108
        END
      END
    END
    CLEAR_ARRAY fj_embedded_eff
  END

END // php $struct: everything added

// restoring Icewind Dale II's special snowflakiness
PATCH_IF is_id2 BEGIN
  PATCH_FOR_EACH off IN
    0x54 0x5c 0x60 0x68 0x70 0x78 0x7c 0x84
    0x88 0xa0 0xa8 0xb0 0xb8 0xbc 0xc0
  BEGIN
    PATCH_IF LONG_AT off BEGIN
      WRITE_LONG off THIS + 0x10
    END
  END
  INSERT_BYTES 0x54 0x10
  WRITE_ASCIIE 0x54 ~%id2_header%~
  SET fj_return_offset += 0x10
  GET_OFFSET_ARRAY fj_id_actor 0x64 0x04 0x58 0x02 0 0 0x110
  PHP_EACH fj_id_actor AS key => value BEGIN
    PATCH_IF( 
      LONG_AT( value + 0x88 ) > 0x00 &&
      LONG_AT( value + 0x28 ) & 0x01 == 0x00 
    )BEGIN
      WRITE_LONG value + 0x88 THIS + 0x10
    END
  END
END

END

// EOF
