/*
This is the c configuration file for the keymap

Copyright 2012 Jun Wako <wakojun@gmail.com>
Copyright 2015 Jack Humbert

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/
#pragma once
#include <stdint.h>
#include QMK_KEYBOARD_H
#include "keymap_brazilian_abnt2.h"

#define EE_HANDS

#define LEADER_TIMEOUT 250

#define DVORAK_LAYER 0
#define SERTAIN_LAYER 1
#define QWERTY_LAYER 2

#define SYMBOLS_LAYER 3
#define NUMBER_LAYER 4
#define NAV_LAYER 5
#define NUMROW_LAYER 6

#define FN_LAYER 7
#define SOUND_LAYER 8
#define MOUSE_LAYER 9
#define DESK_LAYER 10
#define PT_LAYER 11

#define SFT_ESC SFT_T(KC_ESC)
#define CTL_BSPC CTL_T(KC_BSPC)
#define ALT_SPC ALT_T(KC_SPC)
#define SFT_ENT SFT_T(KC_ENT)

#define KC_ML KC_MS_LEFT
#define KC_MR KC_MS_RIGHT
#define KC_MU KC_MS_UP
#define KC_MD KC_MS_DOWN
#define KC_MB1 KC_MS_BTN1
#define KC_MB2 KC_MS_BTN1

#define KC_NONE

#define RAISE MO(INSERT_LAYER)
#define LOWER MO(NUMBER_LAYER)

int get_base_layer(void);

void set_base_layer(int layer);

#include "custom_keys.h"
