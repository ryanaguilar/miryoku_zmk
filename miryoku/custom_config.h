// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

// Custom configuration for hold-preferred on left pinkie bottom row (position 20)

#pragma once

// Helper macro to use the hold-preferred behavior for specific position
#define U_LT_HP(LAYER, TAP) &u_lt_hp20 LAYER TAP

// Override QWERTY base layer to use hold-preferred for left pinkie bottom row
// Only the Z key (position 20) uses U_LT_HP instead of U_LT
#define MIRYOKU_ALTERNATIVES_BASE_QWERTY \
&kp Q,             &kp W,             &kp E,             &kp R,             &kp T,             &kp Y,             &kp U,             &kp I,             &kp O,             &kp P,             \
U_MT(LGUI, A),     U_MT(LALT, S),     U_MT(LCTRL, D),    U_MT(LSHFT, F),    &kp G,             &kp H,             U_MT(LSHFT, J),    U_MT(LCTRL, K),    U_MT(LALT, L),     U_MT(LGUI, SQT),   \
U_LT_HP(U_BUTTON, Z), U_MT(RALT, X),     &kp C,             &kp V,             &kp B,             &kp N,             &kp M,             &kp COMMA,         U_MT(RALT, DOT),   U_LT(U_BUTTON, SLASH),\
U_NP,              U_NP,              U_LT(U_MEDIA, ESC),U_LT(U_NAV, SPACE),U_LT(U_MOUSE, TAB),U_LT_SYM(U_SYM, RET),  U_LT(U_NUM, BSPC), U_LT(U_FUN, DEL),  U_NP,              U_NP

#if __has_include("custom_config.dtsi")
  #include "custom_config.dtsi"
#endif
