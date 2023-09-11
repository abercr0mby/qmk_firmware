/* Copyright 2022 splitkb.com <support@splitkb.com>
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

#pragma once

// Not yet available in `info.json`
#ifdef OLED_ENABLE
#   define OLED_FONT_H "keyboards/splitkb/aurora/corne/glcdfont.c"
#endif


#define TAPPING_TOGGLE 1
#define COMBO_ONLY_FROM_LAYER 4


#define TAPPING_TERM 200
#define TAPPING_TERM_PER_KEY
#define QUICK_TAP_TERM_PER_KEY
#define RETRO_TAPPING_PER_KEY
//#define HOLD_ON_OTHER_KEY_PRESS_PER_KEY
