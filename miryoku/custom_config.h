// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

// Custom configuration for hold-preferred on left pinkie bottom row (position 20)
// and right thumb SYM key (position 35)

#pragma once

// Helper macro to use the hold-preferred behavior for specific position
#define U_LT_HP(LAYER, TAP) &u_lt_hp20 LAYER TAP
// Helper macro to use the hold-preferred behavior for U_LT_SYM at position 35
#define U_LT_SYM_HP(LAYER, TAP) &u_lt_sym_hp35 LAYER TAP

#define HML(LAYER, TAP) &hml LAYER TAP
#define HMR(LAYER, TAP) &hmr LAYER TAP

// Override QWERTY base layer to use hold-preferred for:
// - Left pinkie bottom row (Z key at position 20) uses U_LT_HP instead of U_LT
// - Right thumb SYM key (RET at position 35) uses U_LT_SYM_HP instead of U_LT_SYM
#define MIRYOKU_ALTERNATIVES_BASE_QWERTY \
&kp Q,             &kp W,             &kp E,             &kp R,             &kp T,             &kp Y,             &kp U,             &kp I,             &kp O,             &kp P,             \
HML(LGUI, A),     HML(LALT, S),     HML(LCTRL, D),    HMR(LSHFT, F),    &kp G,             &kp H,             HMR(LSHFT, J),    HMR(LCTRL, K),    HMR(LALT, L),     HMR(LGUI, SQT),   \
U_LT_HP(U_BUTTON, Z), U_MT(RALT, X),     &kp C,             &kp V,             &kp B,             &kp N,             &kp M,             &kp COMMA,         U_MT(RALT, DOT),   U_LT(U_BUTTON, SLASH),\
U_NP,              U_NP,              U_LT(U_MEDIA, ESC),U_LT(U_NAV, SPACE),U_LT(U_MOUSE, TAB),U_LT_SYM_HP(U_SYM, RET),  U_LT(U_NUM, BSPC), U_LT(U_FUN, DEL),  U_NP,              U_NP

#if __has_include("custom_config.dtsi")
  #include "custom_config.dtsi"
#endif
