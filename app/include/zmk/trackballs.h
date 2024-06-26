/*
 * Copyright (c) 2020 The ZMK Contributors
 *
 * SPDX-License-Identifier: MIT
 */

#pragma once

#define ZMK_KEYMAP_TRACKBALLS_NODE DT_INST(0, zmk_keymap_trackballs)
#define ZMK_KEYMAP_HAS_TRACKBALLS DT_NODE_HAS_STATUS(ZMK_KEYMAP_TRACKBALLS_NODE, okay)
#define ZMK_KEYMAP_TRACKBALLS_LEN DT_PROP_LEN(ZMK_KEYMAP_TRACKBALLS_NODE, trackballs)
#define ZMK_KEYMAP_TRACKBALLS_BY_IDX(idx) DT_PHANDLE_BY_IDX(ZMK_KEYMAP_TRACKBALLS_NODE, trackballs, idx)
