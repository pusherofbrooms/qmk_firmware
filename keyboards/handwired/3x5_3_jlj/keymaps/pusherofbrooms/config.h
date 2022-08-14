#pragma once

// handedness in eeprom:
// make handwired/3x5_3_jlj:default:avrdude-split-right
// and
// make handwired/3x5_3_jlj:default:avrdude-split-left
#define EE_HANDS

// We use home row mods
#define IGNORE_MOD_TAP_INTERUPT

// modifier after character on same key.
// vi users may not like this
#define TAPPING_FORCE_HOLD

// default tapping term is 200ms
// #define TAPPING_TERM 200