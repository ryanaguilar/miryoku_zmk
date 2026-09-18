// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

// One-handed left draft-writing config (no home-row mods):
// Thumbs (outer → inner):
//   Outer:  tap = Backspace, hold = Escape
//   Middle: tap = Enter, hold = Sym (nums / nav / hyphen)
//   Inner:  tap = Space, hold = Mirror
// ASDF chord → BT; Q/W/E/R = BT 0–3, T = USB/BT toggle

#pragma once

#define MIRYOKU_ALPHAS_QWERTY
#define MIRYOKU_TAP_QWERTY

#define U_LT_SYM_HP(LAYER, TAP) &u_lt_sym_hp LAYER TAP

#define MIRYOKU_LAYER_LIST \
MIRYOKU_X(BASE,   "Base") \
MIRYOKU_X(EXTRA,  "Extra") \
MIRYOKU_X(TAP,    "Tap") \
MIRYOKU_X(BUTTON, "Button") \
MIRYOKU_X(NAV,    "Nav") \
MIRYOKU_X(MOUSE,  "Mirror") \
MIRYOKU_X(MEDIA,  "BT") \
MIRYOKU_X(NUM,    "Num") \
MIRYOKU_X(SYM,    "Sym") \
MIRYOKU_X(FUN,    "Fun")

#define U_BASE   0
#define U_EXTRA  1
#define U_TAP    2
#define U_BUTTON 3
#define U_NAV    4
#define U_MOUSE  5
#define U_MEDIA  6
#define U_NUM    7
#define U_SYM    8
#define U_FUN    9

#define MIRYOKU_LAYER_BASE \
&kp Q,             &kp W,             &kp E,             &kp R,             &kp T,             &kp Y,             &kp U,             &kp I,             &kp O,             &kp P,             \
&kp A,             &kp S,             &kp D,             &kp F,             &kp G,             &kp H,             &kp J,             &kp K,             &kp L,             &kp SQT,           \
&kp Z,             &kp X,             &kp C,             &kp V,             &kp B,             &kp N,             &kp M,             &kp COMMA,         &kp DOT,           &kp SLASH,         \
U_NP,              U_NP,              U_MT(ESC, RET), U_LT_SYM_HP(U_SYM, BSPC), U_LT(U_MOUSE, SPACE), U_NA, U_NA, U_NA, U_NP, U_NP

// Mirror: right-hand QWERTY onto left
#define MIRYOKU_LAYER_MOUSE \
&kp P,             &kp O,             &kp I,             &kp U,             &kp Y,             U_NA,              U_NA,              U_NA,              U_NA,              U_NA,              \
&kp SQT,           &kp L,             &kp K,             &kp J,             &kp H,             U_NA,              U_NA,              U_NA,              U_NA,              U_NA,              \
&kp SLASH,         &kp DOT,           &kp COMMA,         &kp M,             &kp N,             U_NA,              U_NA,              U_NA,              U_NA,              U_NA,              \
U_NP,              U_NP,              &kp BSPC,          U_NA,              U_NA,              U_NA,              U_NA,              U_NA,              U_NP,              U_NP

// Sym: numbers, arrows, hyphen
#define MIRYOKU_LAYER_SYM \
&kp N1,            &kp N2,            &kp N3,            &kp N4,            &kp N5,            U_NA,              U_NA,              U_NA,              U_NA,              U_NA,              \
&kp LEFT,          &kp DOWN,          &kp UP,            &kp RIGHT,         &kp MINUS,         U_NA,              U_NA,              U_NA,              U_NA,              U_NA,              \
&kp N6,            &kp N7,            &kp N8,            &kp N9,            &kp N0,            U_NA,              U_NA,              U_NA,              U_NA,              U_NA,              \
U_NP,              U_NP,              &kp BSPC,          U_NA,              U_NA,              U_NA,              U_NA,              U_NA,              U_NP,              U_NP

// BT: QWER = profiles 0–3, T = USB/BT toggle
#define MIRYOKU_LAYER_MEDIA \
&u_bt_sel_0,       &u_bt_sel_1,       &u_bt_sel_2,       &u_bt_sel_3,       &u_out_tog,        U_NA,              U_NA,              U_NA,              U_NA,              U_NA,              \
U_NA,              U_NA,              U_NA,              U_NA,              U_NA,              U_NA,              U_NA,              U_NA,              U_NA,              U_NA,              \
U_NA,              U_NA,              U_NA,              U_NA,              U_NA,              U_NA,              U_NA,              U_NA,              U_NA,              U_NA,              \
U_NP,              U_NP,              &kp BSPC,          U_NA,              U_NA,              U_NA,              U_NA,              U_NA,              U_NP,              U_NP

#if __has_include("custom_config.dtsi")
  #include "custom_config.dtsi"
#endif
