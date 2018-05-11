/* Copyright 2015-2017 Jack Humbert
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "contra.h"
#include "action_layer.h"

extern keymap_config_t keymap_config;

enum planck_layers {
  _MACROPAD,
};

enum planck_keycodes {
  MACROPAD
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_MACROPAD] = {
    {KC_NUMLOCK, KC_KP_SLASH, KC_KP_ASTERISK, KC_KP_MINUS},
    {KC_7,       KC_8,        KC_9,           KC_KP_PLUS},
    {KC_4,       KC_5,        KC_6,           KC_NO},
    {KC_1,       KC_2,        KC_3,           KC_KP_ENTER},
    {KC_KP_0,    KC_NO,       KC_KP_DOT,      KC_NO}
  }

};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case MACROPAD:
      if (record->event.pressed) {
        set_single_persistent_default_layer(_MACROPAD);
      }
  }
  return true;
}
