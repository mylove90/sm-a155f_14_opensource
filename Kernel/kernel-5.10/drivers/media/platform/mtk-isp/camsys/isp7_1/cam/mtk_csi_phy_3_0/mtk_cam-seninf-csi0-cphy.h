/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Copyright (c) 2020 MediaTek Inc.
 */

#ifndef __CSI0_CPHY_TOP_H__
#define __CSI0_CPHY_TOP_H__

#define CPHY_RX_CTRL 0x0000
#define CPHY_RX_TR0_LPRX_EN_SHIFT 0
#define CPHY_RX_TR0_LPRX_EN_MASK (0x1 << 0)
#define CPHY_RX_TR1_LPRX_EN_SHIFT 1
#define CPHY_RX_TR1_LPRX_EN_MASK (0x1 << 1)
#define CPHY_RX_TR2_LPRX_EN_SHIFT 2
#define CPHY_RX_TR2_LPRX_EN_MASK (0x1 << 2)
#define CPHY_RX_TR3_LPRX_EN_SHIFT 3
#define CPHY_RX_TR3_LPRX_EN_MASK (0x1 << 3)
#define CPHY_RX_TR0_HSRX_EN_SHIFT 4
#define CPHY_RX_TR0_HSRX_EN_MASK (0x1 << 4)
#define CPHY_RX_TR1_HSRX_EN_SHIFT 5
#define CPHY_RX_TR1_HSRX_EN_MASK (0x1 << 5)
#define CPHY_RX_TR2_HSRX_EN_SHIFT 6
#define CPHY_RX_TR2_HSRX_EN_MASK (0x1 << 6)
#define CPHY_RX_TR3_HSRX_EN_SHIFT 7
#define CPHY_RX_TR3_HSRX_EN_MASK (0x1 << 7)
#define CPHY_RX_TR0_BIST_EN_SHIFT 16
#define CPHY_RX_TR0_BIST_EN_MASK (0x1 << 16)
#define CPHY_RX_TR1_BIST_EN_SHIFT 17
#define CPHY_RX_TR1_BIST_EN_MASK (0x1 << 17)
#define CPHY_RX_TR2_BIST_EN_SHIFT 18
#define CPHY_RX_TR2_BIST_EN_MASK (0x1 << 18)
#define CPHY_RX_TR3_BIST_EN_SHIFT 19
#define CPHY_RX_TR3_BIST_EN_MASK (0x1 << 19)

#define CPHY_RX_OPT 0x0008
#define RG_CPHY_RX_PRBS_GEN_DATA_DELAY_EN_SHIFT 0
#define RG_CPHY_RX_PRBS_GEN_DATA_DELAY_EN_MASK (0x1 << 0)
#define RG_CPHY_RX_LP_MODE_SHIFT 1
#define RG_CPHY_RX_LP_MODE_MASK (0x1 << 1)
#define RG_CPHY_RX_SYNC_DETECT_OPT_SHIFT 4
#define RG_CPHY_RX_SYNC_DETECT_OPT_MASK (0x7 << 4)
#define RG_CPHY_RX_TR0_INIT_WIRE_STATE_SHIFT 16
#define RG_CPHY_RX_TR0_INIT_WIRE_STATE_MASK (0x7 << 16)
#define RG_CPHY_RX_TR1_INIT_WIRE_STATE_SHIFT 20
#define RG_CPHY_RX_TR1_INIT_WIRE_STATE_MASK (0x7 << 20)
#define RG_CPHY_RX_TR2_INIT_WIRE_STATE_SHIFT 24
#define RG_CPHY_RX_TR2_INIT_WIRE_STATE_MASK (0x7 << 24)
#define RG_CPHY_RX_TR3_INIT_WIRE_STATE_SHIFT 28
#define RG_CPHY_RX_TR3_INIT_WIRE_STATE_MASK (0x7 << 28)

#define CPHY_RX_DETECT_CTRL_SYNC 0x0010
#define RG_CPHY_RX_DETECT_7S_DIS_SYNC_SHIFT 0
#define RG_CPHY_RX_DETECT_7S_DIS_SYNC_MASK (0x1 << 0)
#define RG_CPHY_RX_DETECT_7S_MASK_SYNC_SHIFT 1
#define RG_CPHY_RX_DETECT_7S_MASK_SYNC_MASK (0x7f << 1)
#define RG_CPHY_RX_DETECT_7S_WORD_SYNC_SHIFT 8
#define RG_CPHY_RX_DETECT_7S_WORD_SYNC_MASK (0x1fffff << 8)

#define CPHY_RX_DETECT_CTRL_ESCAPE 0x0014
#define RG_CPHY_RX_DETECT_7S_DIS_ESCAPE_SHIFT 0
#define RG_CPHY_RX_DETECT_7S_DIS_ESCAPE_MASK (0x1 << 0)
#define RG_CPHY_RX_DETECT_7S_MASK_ESCAPE_SHIFT 1
#define RG_CPHY_RX_DETECT_7S_MASK_ESCAPE_MASK (0x7f << 1)
#define RG_CPHY_RX_DETECT_7S_WORD_ESCAPE_SHIFT 8
#define RG_CPHY_RX_DETECT_7S_WORD_ESCAPE_MASK (0x1fffff << 8)

#define CPHY_RX_DETECT_CTRL_POST 0x0018
#define RG_CPHY_RX_DETECT_7S_DIS_POST_SHIFT 0
#define RG_CPHY_RX_DETECT_7S_DIS_POST_MASK (0x1 << 0)
#define RG_CPHY_RX_DATA_VALID_POST_EN_SHIFT 4
#define RG_CPHY_RX_DATA_VALID_POST_EN_MASK (0x1 << 4)
#define RG_CPHY_RX_DETECT_7S_WORD_POST_SHIFT 8
#define RG_CPHY_RX_DETECT_7S_WORD_POST_MASK (0x1fffff << 8)

#define CPHY_RX_TRIO0_DEBUG_0 0x0020
#define RO_CPHY_RX_TR0_SYMBOL_STREAM_0_SHIFT 0
#define RO_CPHY_RX_TR0_SYMBOL_STREAM_0_MASK (0xffffffff << 0)

#define CPHY_RX_TRIO0_DEBUG_1 0x0024
#define RO_CPHY_RX_TR0_SYMBOL_STREAM_1_SHIFT 0
#define RO_CPHY_RX_TR0_SYMBOL_STREAM_1_MASK (0x3ff << 0)
#define RO_CPHY_RX_TR0_SYMBOL_STRAM_VALID_SHIFT 12
#define RO_CPHY_RX_TR0_SYMBOL_STRAM_VALID_MASK (0x1 << 12)
#define RO_CPHY_RX_TR0_DETECT_POST_SHIFT 15
#define RO_CPHY_RX_TR0_DETECT_POST_MASK (0x1 << 15)
#define RO_CPHY_RX_TR0_POSITION_SYNC_SHIFT 16
#define RO_CPHY_RX_TR0_POSITION_SYNC_MASK (0x1f << 16)
#define RO_CPHY_RX_TR0_DETECT_SYNC_SHIFT 23
#define RO_CPHY_RX_TR0_DETECT_SYNC_MASK (0x1 << 23)
#define RO_CPHY_RX_TR0_POSITION_ESCAPE_SHIFT 24
#define RO_CPHY_RX_TR0_POSITION_ESCAPE_MASK (0x1f << 24)
#define RO_CPHY_RX_TR0_DETECT_ESCAPE_SHIFT 31
#define RO_CPHY_RX_TR0_DETECT_ESCAPE_MASK (0x1 << 31)

#define CPHY_RX_TRIO1_DEBUG_0 0x0030
#define RO_CPHY_RX_TR1_SYMBOL_STREAM_0_SHIFT 0
#define RO_CPHY_RX_TR1_SYMBOL_STREAM_0_MASK (0xffffffff << 0)

#define CPHY_RX_TRIO1_DEBUG_1 0x0034
#define RO_CPHY_RX_TR1_SYMBOL_STREAM_1_SHIFT 0
#define RO_CPHY_RX_TR1_SYMBOL_STREAM_1_MASK (0x3ff << 0)
#define RO_CPHY_RX_TR1_SYMBOL_STRAM_VALID_SHIFT 12
#define RO_CPHY_RX_TR1_SYMBOL_STRAM_VALID_MASK (0x1 << 12)
#define RO_CPHY_RX_TR1_DETECT_POST_SHIFT 15
#define RO_CPHY_RX_TR1_DETECT_POST_MASK (0x1 << 15)
#define RO_CPHY_RX_TR1_POSITION_SYNC_SHIFT 16
#define RO_CPHY_RX_TR1_POSITION_SYNC_MASK (0x1f << 16)
#define RO_CPHY_RX_TR1_DETECT_SYNC_SHIFT 23
#define RO_CPHY_RX_TR1_DETECT_SYNC_MASK (0x1 << 23)
#define RO_CPHY_RX_TR1_POSITION_ESCAPE_SHIFT 24
#define RO_CPHY_RX_TR1_POSITION_ESCAPE_MASK (0x1f << 24)
#define RO_CPHY_RX_TR1_DETECT_ESCAPE_SHIFT 31
#define RO_CPHY_RX_TR1_DETECT_ESCAPE_MASK (0x1 << 31)

#define CPHY_RX_TRIO2_DEBUG_0 0x0040
#define RO_CPHY_RX_TR2_SYMBOL_STREAM_0_SHIFT 0
#define RO_CPHY_RX_TR2_SYMBOL_STREAM_0_MASK (0xffffffff << 0)

#define CPHY_RX_TRIO2_DEBUG_1 0x0044
#define RO_CPHY_RX_TR2_SYMBOL_STREAM_1_SHIFT 0
#define RO_CPHY_RX_TR2_SYMBOL_STREAM_1_MASK (0x3ff << 0)
#define RO_CPHY_RX_TR2_SYMBOL_STRAM_VALID_SHIFT 12
#define RO_CPHY_RX_TR2_SYMBOL_STRAM_VALID_MASK (0x1 << 12)
#define RO_CPHY_RX_TR2_DETECT_POST_SHIFT 15
#define RO_CPHY_RX_TR2_DETECT_POST_MASK (0x1 << 15)
#define RO_CPHY_RX_TR2_POSITION_SYNC_SHIFT 16
#define RO_CPHY_RX_TR2_POSITION_SYNC_MASK (0x1f << 16)
#define RO_CPHY_RX_TR2_DETECT_SYNC_SHIFT 23
#define RO_CPHY_RX_TR2_DETECT_SYNC_MASK (0x1 << 23)
#define RO_CPHY_RX_TR2_POSITION_ESCAPE_SHIFT 24
#define RO_CPHY_RX_TR2_POSITION_ESCAPE_MASK (0x1f << 24)
#define RO_CPHY_RX_TR2_DETECT_ESCAPE_SHIFT 31
#define RO_CPHY_RX_TR2_DETECT_ESCAPE_MASK (0x1 << 31)

#define CPHY_RX_TRIO3_DEBUG_0 0x0050
#define RO_CPHY_RX_TR3_SYMBOL_STREAM_0_SHIFT 0
#define RO_CPHY_RX_TR3_SYMBOL_STREAM_0_MASK (0xffffffff << 0)

#define CPHY_RX_TRIO3_DEBUG_1 0x0054
#define RO_CPHY_RX_TR3_SYMBOL_STREAM_1_SHIFT 0
#define RO_CPHY_RX_TR3_SYMBOL_STREAM_1_MASK (0x3ff << 0)
#define RO_CPHY_RX_TR3_SYMBOL_STRAM_VALID_SHIFT 12
#define RO_CPHY_RX_TR3_SYMBOL_STRAM_VALID_MASK (0x1 << 12)
#define RO_CPHY_RX_TR3_DETECT_POST_SHIFT 15
#define RO_CPHY_RX_TR3_DETECT_POST_MASK (0x1 << 15)
#define RO_CPHY_RX_TR3_POSITION_SYNC_SHIFT 16
#define RO_CPHY_RX_TR3_POSITION_SYNC_MASK (0x1f << 16)
#define RO_CPHY_RX_TR3_DETECT_SYNC_SHIFT 23
#define RO_CPHY_RX_TR3_DETECT_SYNC_MASK (0x1 << 23)
#define RO_CPHY_RX_TR3_POSITION_ESCAPE_SHIFT 24
#define RO_CPHY_RX_TR3_POSITION_ESCAPE_MASK (0x1f << 24)
#define RO_CPHY_RX_TR3_DETECT_ESCAPE_SHIFT 31
#define RO_CPHY_RX_TR3_DETECT_ESCAPE_MASK (0x1 << 31)

#define CPHY_RX_BIST_TRIO0_PROGSEQ_0 0x0060
#define RG_CPHY_RX_TR0_BIST_PROGSEQ_S0_SHIFT 0
#define RG_CPHY_RX_TR0_BIST_PROGSEQ_S0_MASK (0x7 << 0)
#define RG_CPHY_RX_TR0_BIST_PROGSEQ_S1_SHIFT 4
#define RG_CPHY_RX_TR0_BIST_PROGSEQ_S1_MASK (0x7 << 4)
#define RG_CPHY_RX_TR0_BIST_PROGSEQ_S2_SHIFT 8
#define RG_CPHY_RX_TR0_BIST_PROGSEQ_S2_MASK (0x7 << 8)
#define RG_CPHY_RX_TR0_BIST_PROGSEQ_S3_SHIFT 12
#define RG_CPHY_RX_TR0_BIST_PROGSEQ_S3_MASK (0x7 << 12)
#define RG_CPHY_RX_TR0_BIST_PROGSEQ_S4_SHIFT 16
#define RG_CPHY_RX_TR0_BIST_PROGSEQ_S4_MASK (0x7 << 16)
#define RG_CPHY_RX_TR0_BIST_PROGSEQ_S5_SHIFT 20
#define RG_CPHY_RX_TR0_BIST_PROGSEQ_S5_MASK (0x7 << 20)
#define RG_CPHY_RX_TR0_BIST_PROGSEQ_S6_SHIFT 24
#define RG_CPHY_RX_TR0_BIST_PROGSEQ_S6_MASK (0x7 << 24)
#define RG_CPHY_RX_TR0_BIST_PROGSEQ_S7_SHIFT 28
#define RG_CPHY_RX_TR0_BIST_PROGSEQ_S7_MASK (0x7 << 28)

#define CPHY_RX_BIST_TRIO0_PROGSEQ_1 0x0064
#define RG_CPHY_RX_TR0_BIST_PROGSEQ_S8_SHIFT 0
#define RG_CPHY_RX_TR0_BIST_PROGSEQ_S8_MASK (0x7 << 0)
#define RG_CPHY_RX_TR0_BIST_PROGSEQ_S9_SHIFT 4
#define RG_CPHY_RX_TR0_BIST_PROGSEQ_S9_MASK (0x7 << 4)
#define RG_CPHY_RX_TR0_BIST_PROGSEQ_S10_SHIFT 8
#define RG_CPHY_RX_TR0_BIST_PROGSEQ_S10_MASK (0x7 << 8)
#define RG_CPHY_RX_TR0_BIST_PROGSEQ_S11_SHIFT 12
#define RG_CPHY_RX_TR0_BIST_PROGSEQ_S11_MASK (0x7 << 12)
#define RG_CPHY_RX_TR0_BIST_PROGSEQ_S12_SHIFT 16
#define RG_CPHY_RX_TR0_BIST_PROGSEQ_S12_MASK (0x7 << 16)
#define RG_CPHY_RX_TR0_BIST_PROGSEQ_S13_SHIFT 20
#define RG_CPHY_RX_TR0_BIST_PROGSEQ_S13_MASK (0x7 << 20)

#define CPHY_RX_BIST_TRIO1_PROGSEQ_0 0x0068
#define RG_CPHY_RX_TR1_BIST_PROGSEQ_S0_SHIFT 0
#define RG_CPHY_RX_TR1_BIST_PROGSEQ_S0_MASK (0x7 << 0)
#define RG_CPHY_RX_TR1_BIST_PROGSEQ_S1_SHIFT 4
#define RG_CPHY_RX_TR1_BIST_PROGSEQ_S1_MASK (0x7 << 4)
#define RG_CPHY_RX_TR1_BIST_PROGSEQ_S2_SHIFT 8
#define RG_CPHY_RX_TR1_BIST_PROGSEQ_S2_MASK (0x7 << 8)
#define RG_CPHY_RX_TR1_BIST_PROGSEQ_S3_SHIFT 12
#define RG_CPHY_RX_TR1_BIST_PROGSEQ_S3_MASK (0x7 << 12)
#define RG_CPHY_RX_TR1_BIST_PROGSEQ_S4_SHIFT 16
#define RG_CPHY_RX_TR1_BIST_PROGSEQ_S4_MASK (0x7 << 16)
#define RG_CPHY_RX_TR1_BIST_PROGSEQ_S5_SHIFT 20
#define RG_CPHY_RX_TR1_BIST_PROGSEQ_S5_MASK (0x7 << 20)
#define RG_CPHY_RX_TR1_BIST_PROGSEQ_S6_SHIFT 24
#define RG_CPHY_RX_TR1_BIST_PROGSEQ_S6_MASK (0x7 << 24)
#define RG_CPHY_RX_TR1_BIST_PROGSEQ_S7_SHIFT 28
#define RG_CPHY_RX_TR1_BIST_PROGSEQ_S7_MASK (0x7 << 28)

#define CPHY_RX_BIST_TRIO1_PROGSEQ_1 0x006c
#define RG_CPHY_RX_TR1_BIST_PROGSEQ_S8_SHIFT 0
#define RG_CPHY_RX_TR1_BIST_PROGSEQ_S8_MASK (0x7 << 0)
#define RG_CPHY_RX_TR1_BIST_PROGSEQ_S9_SHIFT 4
#define RG_CPHY_RX_TR1_BIST_PROGSEQ_S9_MASK (0x7 << 4)
#define RG_CPHY_RX_TR1_BIST_PROGSEQ_S10_SHIFT 8
#define RG_CPHY_RX_TR1_BIST_PROGSEQ_S10_MASK (0x7 << 8)
#define RG_CPHY_RX_TR1_BIST_PROGSEQ_S11_SHIFT 12
#define RG_CPHY_RX_TR1_BIST_PROGSEQ_S11_MASK (0x7 << 12)
#define RG_CPHY_RX_TR1_BIST_PROGSEQ_S12_SHIFT 16
#define RG_CPHY_RX_TR1_BIST_PROGSEQ_S12_MASK (0x7 << 16)
#define RG_CPHY_RX_TR1_BIST_PROGSEQ_S13_SHIFT 20
#define RG_CPHY_RX_TR1_BIST_PROGSEQ_S13_MASK (0x7 << 20)

#define CPHY_RX_BIST_TRIO2_PROGSEQ_0 0x0070
#define RG_CPHY_RX_TR2_BIST_PROGSEQ_S0_SHIFT 0
#define RG_CPHY_RX_TR2_BIST_PROGSEQ_S0_MASK (0x7 << 0)
#define RG_CPHY_RX_TR2_BIST_PROGSEQ_S1_SHIFT 4
#define RG_CPHY_RX_TR2_BIST_PROGSEQ_S1_MASK (0x7 << 4)
#define RG_CPHY_RX_TR2_BIST_PROGSEQ_S2_SHIFT 8
#define RG_CPHY_RX_TR2_BIST_PROGSEQ_S2_MASK (0x7 << 8)
#define RG_CPHY_RX_TR2_BIST_PROGSEQ_S3_SHIFT 12
#define RG_CPHY_RX_TR2_BIST_PROGSEQ_S3_MASK (0x7 << 12)
#define RG_CPHY_RX_TR2_BIST_PROGSEQ_S4_SHIFT 16
#define RG_CPHY_RX_TR2_BIST_PROGSEQ_S4_MASK (0x7 << 16)
#define RG_CPHY_RX_TR2_BIST_PROGSEQ_S5_SHIFT 20
#define RG_CPHY_RX_TR2_BIST_PROGSEQ_S5_MASK (0x7 << 20)
#define RG_CPHY_RX_TR2_BIST_PROGSEQ_S6_SHIFT 24
#define RG_CPHY_RX_TR2_BIST_PROGSEQ_S6_MASK (0x7 << 24)
#define RG_CPHY_RX_TR2_BIST_PROGSEQ_S7_SHIFT 28
#define RG_CPHY_RX_TR2_BIST_PROGSEQ_S7_MASK (0x7 << 28)

#define CPHY_RX_BIST_TRIO2_PROGSEQ_1 0x0074
#define RG_CPHY_RX_TR2_BIST_PROGSEQ_S8_SHIFT 0
#define RG_CPHY_RX_TR2_BIST_PROGSEQ_S8_MASK (0x7 << 0)
#define RG_CPHY_RX_TR2_BIST_PROGSEQ_S9_SHIFT 4
#define RG_CPHY_RX_TR2_BIST_PROGSEQ_S9_MASK (0x7 << 4)
#define RG_CPHY_RX_TR2_BIST_PROGSEQ_S10_SHIFT 8
#define RG_CPHY_RX_TR2_BIST_PROGSEQ_S10_MASK (0x7 << 8)
#define RG_CPHY_RX_TR2_BIST_PROGSEQ_S11_SHIFT 12
#define RG_CPHY_RX_TR2_BIST_PROGSEQ_S11_MASK (0x7 << 12)
#define RG_CPHY_RX_TR2_BIST_PROGSEQ_S12_SHIFT 16
#define RG_CPHY_RX_TR2_BIST_PROGSEQ_S12_MASK (0x7 << 16)
#define RG_CPHY_RX_TR2_BIST_PROGSEQ_S13_SHIFT 20
#define RG_CPHY_RX_TR2_BIST_PROGSEQ_S13_MASK (0x7 << 20)

#define CPHY_RX_BIST_TRIO3_PROGSEQ_0 0x0078
#define RG_CPHY_RX_TR3_BIST_PROGSEQ_S0_SHIFT 0
#define RG_CPHY_RX_TR3_BIST_PROGSEQ_S0_MASK (0x7 << 0)
#define RG_CPHY_RX_TR3_BIST_PROGSEQ_S1_SHIFT 4
#define RG_CPHY_RX_TR3_BIST_PROGSEQ_S1_MASK (0x7 << 4)
#define RG_CPHY_RX_TR3_BIST_PROGSEQ_S2_SHIFT 8
#define RG_CPHY_RX_TR3_BIST_PROGSEQ_S2_MASK (0x7 << 8)
#define RG_CPHY_RX_TR3_BIST_PROGSEQ_S3_SHIFT 12
#define RG_CPHY_RX_TR3_BIST_PROGSEQ_S3_MASK (0x7 << 12)
#define RG_CPHY_RX_TR3_BIST_PROGSEQ_S4_SHIFT 16
#define RG_CPHY_RX_TR3_BIST_PROGSEQ_S4_MASK (0x7 << 16)
#define RG_CPHY_RX_TR3_BIST_PROGSEQ_S5_SHIFT 20
#define RG_CPHY_RX_TR3_BIST_PROGSEQ_S5_MASK (0x7 << 20)
#define RG_CPHY_RX_TR3_BIST_PROGSEQ_S6_SHIFT 24
#define RG_CPHY_RX_TR3_BIST_PROGSEQ_S6_MASK (0x7 << 24)
#define RG_CPHY_RX_TR3_BIST_PROGSEQ_S7_SHIFT 28
#define RG_CPHY_RX_TR3_BIST_PROGSEQ_S7_MASK (0x7 << 28)

#define CPHY_RX_BIST_TRIO3_PROGSEQ_1 0x007c
#define RG_CPHY_RX_TR3_BIST_PROGSEQ_S8_SHIFT 0
#define RG_CPHY_RX_TR3_BIST_PROGSEQ_S8_MASK (0x7 << 0)
#define RG_CPHY_RX_TR3_BIST_PROGSEQ_S9_SHIFT 4
#define RG_CPHY_RX_TR3_BIST_PROGSEQ_S9_MASK (0x7 << 4)
#define RG_CPHY_RX_TR3_BIST_PROGSEQ_S10_SHIFT 8
#define RG_CPHY_RX_TR3_BIST_PROGSEQ_S10_MASK (0x7 << 8)
#define RG_CPHY_RX_TR3_BIST_PROGSEQ_S11_SHIFT 12
#define RG_CPHY_RX_TR3_BIST_PROGSEQ_S11_MASK (0x7 << 12)
#define RG_CPHY_RX_TR3_BIST_PROGSEQ_S12_SHIFT 16
#define RG_CPHY_RX_TR3_BIST_PROGSEQ_S12_MASK (0x7 << 16)
#define RG_CPHY_RX_TR3_BIST_PROGSEQ_S13_SHIFT 20
#define RG_CPHY_RX_TR3_BIST_PROGSEQ_S13_MASK (0x7 << 20)

#define CPHY_RX_BIST_TRIO0_CTRL 0x0080
#define RG_CPHY_RX_TR0_PRBS_SEED_0_SHIFT 0
#define RG_CPHY_RX_TR0_PRBS_SEED_0_MASK (0xff << 0)
#define RG_CPHY_RX_TR0_PRBS_SEED_1_SHIFT 8
#define RG_CPHY_RX_TR0_PRBS_SEED_1_MASK (0xff << 8)
#define RG_CPHY_RX_TR0_BIST_COMP_MODE_SHIFT 20
#define RG_CPHY_RX_TR0_BIST_COMP_MODE_MASK (0x1 << 20)
#define RG_CPHY_RX_TR0_FIX_POINT_RST_MODE_SHIFT 21
#define RG_CPHY_RX_TR0_FIX_POINT_RST_MODE_MASK (0x1 << 21)
#define CPHY_RX_TR0_FIX_POINT_RST_SHIFT 22
#define CPHY_RX_TR0_FIX_POINT_RST_MASK (0x1 << 22)
#define RG_CPHY_RX_TR0_PRBS_PAT_SEL_SHIFT 24
#define RG_CPHY_RX_TR0_PRBS_PAT_SEL_MASK (0x7 << 24)

#define CPHY_RX_BIST_TRIO1_CTRL 0x0084
#define RG_CPHY_RX_TR1_PRBS_SEED_0_SHIFT 0
#define RG_CPHY_RX_TR1_PRBS_SEED_0_MASK (0xff << 0)
#define RG_CPHY_RX_TR1_PRBS_SEED_1_SHIFT 8
#define RG_CPHY_RX_TR1_PRBS_SEED_1_MASK (0xff << 8)
#define RG_CPHY_RX_TR1_BIST_COMP_MODE_SHIFT 20
#define RG_CPHY_RX_TR1_BIST_COMP_MODE_MASK (0x1 << 20)
#define RG_CPHY_RX_TR1_FIX_POINT_RST_MODE_SHIFT 21
#define RG_CPHY_RX_TR1_FIX_POINT_RST_MODE_MASK (0x1 << 21)
#define CPHY_RX_TR1_FIX_POINT_RST_SHIFT 22
#define CPHY_RX_TR1_FIX_POINT_RST_MASK (0x1 << 22)
#define RG_CPHY_RX_TR1_PRBS_PAT_SEL_SHIFT 24
#define RG_CPHY_RX_TR1_PRBS_PAT_SEL_MASK (0x7 << 24)

#define CPHY_RX_BIST_TRIO2_CTRL 0x0088
#define RG_CPHY_RX_TR2_PRBS_SEED_0_SHIFT 0
#define RG_CPHY_RX_TR2_PRBS_SEED_0_MASK (0xff << 0)
#define RG_CPHY_RX_TR2_PRBS_SEED_1_SHIFT 8
#define RG_CPHY_RX_TR2_PRBS_SEED_1_MASK (0xff << 8)
#define RG_CPHY_RX_TR2_BIST_COMP_MODE_SHIFT 20
#define RG_CPHY_RX_TR2_BIST_COMP_MODE_MASK (0x1 << 20)
#define RG_CPHY_RX_TR2_FIX_POINT_RST_MODE_SHIFT 21
#define RG_CPHY_RX_TR2_FIX_POINT_RST_MODE_MASK (0x1 << 21)
#define CPHY_RX_TR2_FIX_POINT_RST_SHIFT 22
#define CPHY_RX_TR2_FIX_POINT_RST_MASK (0x1 << 22)
#define RG_CPHY_RX_TR2_PRBS_PAT_SEL_SHIFT 24
#define RG_CPHY_RX_TR2_PRBS_PAT_SEL_MASK (0x7 << 24)

#define CPHY_RX_BIST_TRIO3_CTRL 0x008c
#define RG_CPHY_RX_TR3_PRBS_SEED_0_SHIFT 0
#define RG_CPHY_RX_TR3_PRBS_SEED_0_MASK (0xff << 0)
#define RG_CPHY_RX_TR3_PRBS_SEED_1_SHIFT 8
#define RG_CPHY_RX_TR3_PRBS_SEED_1_MASK (0xff << 8)
#define RG_CPHY_RX_TR3_BIST_COMP_MODE_SHIFT 20
#define RG_CPHY_RX_TR3_BIST_COMP_MODE_MASK (0x1 << 20)
#define RG_CPHY_RX_TR3_FIX_POINT_RST_MODE_SHIFT 21
#define RG_CPHY_RX_TR3_FIX_POINT_RST_MODE_MASK (0x1 << 21)
#define CPHY_RX_TR3_FIX_POINT_RST_SHIFT 22
#define CPHY_RX_TR3_FIX_POINT_RST_MASK (0x1 << 22)
#define RG_CPHY_RX_TR3_PRBS_PAT_SEL_SHIFT 24
#define RG_CPHY_RX_TR3_PRBS_PAT_SEL_MASK (0x7 << 24)

#define CPHY_RX_BIST_DBG_STATUS 0x0090
#define RO_CPHY_RX_TR0_BIST_LP_HS_LP_DONE_SHIFT 0
#define RO_CPHY_RX_TR0_BIST_LP_HS_LP_DONE_MASK (0x1 << 0)
#define RO_CPHY_RX_TR1_BIST_LP_HS_LP_DONE_SHIFT 1
#define RO_CPHY_RX_TR1_BIST_LP_HS_LP_DONE_MASK (0x1 << 1)
#define RO_CPHY_RX_TR2_BIST_LP_HS_LP_DONE_SHIFT 2
#define RO_CPHY_RX_TR2_BIST_LP_HS_LP_DONE_MASK (0x1 << 2)
#define RO_CPHY_RX_TR3_BIST_LP_HS_LP_DONE_SHIFT 3
#define RO_CPHY_RX_TR3_BIST_LP_HS_LP_DONE_MASK (0x1 << 3)

#define CPHY_RX_BIST_PRBS_SEED2 0x0094
#define RG_CPHY_RX_TR0_PRBS_SEED_2_SHIFT 0
#define RG_CPHY_RX_TR0_PRBS_SEED_2_MASK (0xff << 0)
#define RG_CPHY_RX_TR1_PRBS_SEED_2_SHIFT 8
#define RG_CPHY_RX_TR1_PRBS_SEED_2_MASK (0xff << 8)
#define RG_CPHY_RX_TR2_PRBS_SEED_2_SHIFT 16
#define RG_CPHY_RX_TR2_PRBS_SEED_2_MASK (0xff << 16)
#define RG_CPHY_RX_TR3_PRBS_SEED_2_SHIFT 24
#define RG_CPHY_RX_TR3_PRBS_SEED_2_MASK (0xff << 24)

#define CPHY_RX_BIST_PRBS_SEED3 0x0098
#define RG_CPHY_RX_TR0_PRBS_SEED_3_SHIFT 0
#define RG_CPHY_RX_TR0_PRBS_SEED_3_MASK (0xff << 0)
#define RG_CPHY_RX_TR1_PRBS_SEED_3_SHIFT 8
#define RG_CPHY_RX_TR1_PRBS_SEED_3_MASK (0xff << 8)
#define RG_CPHY_RX_TR2_PRBS_SEED_3_SHIFT 16
#define RG_CPHY_RX_TR2_PRBS_SEED_3_MASK (0xff << 16)
#define RG_CPHY_RX_TR3_PRBS_SEED_3_SHIFT 24
#define RG_CPHY_RX_TR3_PRBS_SEED_3_MASK (0xff << 24)

#define CPHY_RX_BIST_TRIO0_STATUS_0 0x00a0
#define RO_CPHY_RX_TR0_BIST_WORD_CNT_0_SHIFT 0
#define RO_CPHY_RX_TR0_BIST_WORD_CNT_0_MASK (0xffffffff << 0)

#define CPHY_RX_BIST_TRIO0_STATUS_1 0x00a4
#define RO_CPHY_RX_TR0_BIST_WORD_CNT_1_SHIFT 0
#define RO_CPHY_RX_TR0_BIST_WORD_CNT_1_MASK (0xffff << 0)
#define RO_CPHY_RX_TR0_BIST_ERR_CNT_SHIFT 16
#define RO_CPHY_RX_TR0_BIST_ERR_CNT_MASK (0x7fff << 16)
#define RO_CPHY_RX_TR0_BIST_WORD_CNT_OVERFLOW_SHIFT 31
#define RO_CPHY_RX_TR0_BIST_WORD_CNT_OVERFLOW_MASK (0x1 << 31)

#define CPHY_RX_BIST_TRIO0_STATUS_2 0x00a8
#define RO_CPHY_RX_TR0_BIST_ERR_RECORD_0_SHIFT 0
#define RO_CPHY_RX_TR0_BIST_ERR_RECORD_0_MASK (0xffffffff << 0)

#define CPHY_RX_BIST_TRIO0_STATUS_3 0x00ac
#define RO_CPHY_RX_TR0_BIST_ERR_RECORD_1_SHIFT 0
#define RO_CPHY_RX_TR0_BIST_ERR_RECORD_1_MASK (0xffff << 0)

#define CPHY_RX_BIST_TRIO1_STATUS_0 0x00b0
#define RO_CPHY_RX_TR1_BIST_WORD_CNT_0_SHIFT 0
#define RO_CPHY_RX_TR1_BIST_WORD_CNT_0_MASK (0xffffffff << 0)

#define CPHY_RX_BIST_TRIO1_STATUS_1 0x00b4
#define RO_CPHY_RX_TR1_BIST_WORD_CNT_1_SHIFT 0
#define RO_CPHY_RX_TR1_BIST_WORD_CNT_1_MASK (0xffff << 0)
#define RO_CPHY_RX_TR1_BIST_ERR_CNT_SHIFT 16
#define RO_CPHY_RX_TR1_BIST_ERR_CNT_MASK (0x7fff << 16)
#define RO_CPHY_RX_TR1_BIST_WORD_CNT_OVERFLOW_SHIFT 31
#define RO_CPHY_RX_TR1_BIST_WORD_CNT_OVERFLOW_MASK (0x1 << 31)

#define CPHY_RX_BIST_TRIO1_STATUS_2 0x00b8
#define RO_CPHY_RX_TR1_BIST_ERR_RECORD_0_SHIFT 0
#define RO_CPHY_RX_TR1_BIST_ERR_RECORD_0_MASK (0xffffffff << 0)

#define CPHY_RX_BIST_TRIO1_STATUS_3 0x00bc
#define RO_CPHY_RX_TR1_BIST_ERR_RECORD_1_SHIFT 0
#define RO_CPHY_RX_TR1_BIST_ERR_RECORD_1_MASK (0xffff << 0)

#define CPHY_RX_BIST_TRIO2_STATUS_0 0x00c0
#define RO_CPHY_RX_TR2_BIST_WORD_CNT_0_SHIFT 0
#define RO_CPHY_RX_TR2_BIST_WORD_CNT_0_MASK (0xffffffff << 0)

#define CPHY_RX_BIST_TRIO2_STATUS_1 0x00c4
#define RO_CPHY_RX_TR2_BIST_WORD_CNT_1_SHIFT 0
#define RO_CPHY_RX_TR2_BIST_WORD_CNT_1_MASK (0xffff << 0)
#define RO_CPHY_RX_TR2_BIST_ERR_CNT_SHIFT 16
#define RO_CPHY_RX_TR2_BIST_ERR_CNT_MASK (0x7fff << 16)
#define RO_CPHY_RX_TR2_BIST_WORD_CNT_OVERFLOW_SHIFT 31
#define RO_CPHY_RX_TR2_BIST_WORD_CNT_OVERFLOW_MASK (0x1 << 31)

#define CPHY_RX_BIST_TRIO2_STATUS_2 0x00c8
#define RO_CPHY_RX_TR2_BIST_ERR_RECORD_0_SHIFT 0
#define RO_CPHY_RX_TR2_BIST_ERR_RECORD_0_MASK (0xffffffff << 0)

#define CPHY_RX_BIST_TRIO2_STATUS_3 0x00cc
#define RO_CPHY_RX_TR2_BIST_ERR_RECORD_1_SHIFT 0
#define RO_CPHY_RX_TR2_BIST_ERR_RECORD_1_MASK (0xffff << 0)

#define CPHY_RX_BIST_TRIO3_STATUS_0 0x00d0
#define RO_CPHY_RX_TR3_BIST_WORD_CNT_0_SHIFT 0
#define RO_CPHY_RX_TR3_BIST_WORD_CNT_0_MASK (0xffffffff << 0)

#define CPHY_RX_BIST_TRIO3_STATUS_1 0x00d4
#define RO_CPHY_RX_TR3_BIST_WORD_CNT_1_SHIFT 0
#define RO_CPHY_RX_TR3_BIST_WORD_CNT_1_MASK (0xffff << 0)
#define RO_CPHY_RX_TR3_BIST_ERR_CNT_SHIFT 16
#define RO_CPHY_RX_TR3_BIST_ERR_CNT_MASK (0x7fff << 16)
#define RO_CPHY_RX_TR3_BIST_WORD_CNT_OVERFLOW_SHIFT 31
#define RO_CPHY_RX_TR3_BIST_WORD_CNT_OVERFLOW_MASK (0x1 << 31)

#define CPHY_RX_BIST_TRIO3_STATUS_2 0x00d8
#define RO_CPHY_RX_TR3_BIST_ERR_RECORD_0_SHIFT 0
#define RO_CPHY_RX_TR3_BIST_ERR_RECORD_0_MASK (0xffffffff << 0)

#define CPHY_RX_BIST_TRIO3_STATUS_3 0x00dc
#define RO_CPHY_RX_TR3_BIST_ERR_RECORD_1_SHIFT 0
#define RO_CPHY_RX_TR3_BIST_ERR_RECORD_1_MASK (0xffff << 0)

#define CPHY_RX_LOOPBACK_OPT 0x00e0
#define CPHY_RX_LB_TRIGGER_SYNC_INIT_SHIFT 0
#define CPHY_RX_LB_TRIGGER_SYNC_INIT_MASK (0x1 << 0)
#define CPHY_RX_LB_RELEASE_SYNC_INIT_SHIFT 1
#define CPHY_RX_LB_RELEASE_SYNC_INIT_MASK (0x1 << 1)
#define RG_PHYD2MAC_CPHY_GEN_EN_SHIFT 8
#define RG_PHYD2MAC_CPHY_GEN_EN_MASK (0x1 << 8)
#define RG_PHYD2MAC_CPHY_GEN_MODE_SHIFT 9
#define RG_PHYD2MAC_CPHY_GEN_MODE_MASK (0x1 << 9)
#define RG_PHYD2MAC_CPHY_GEN_SEL_SHIFT 10
#define RG_PHYD2MAC_CPHY_GEN_SEL_MASK (0x1 << 10)

#define CPHY_RX_FSM_STATUS 0x00e4
#define RO_CPHY_RX_TR0_FSM_SHIFT 0
#define RO_CPHY_RX_TR0_FSM_MASK (0xff << 0)
#define RO_CPHY_RX_TR1_FSM_SHIFT 8
#define RO_CPHY_RX_TR1_FSM_MASK (0xff << 8)
#define RO_CPHY_RX_TR2_FSM_SHIFT 16
#define RO_CPHY_RX_TR2_FSM_MASK (0xff << 16)
#define RO_CPHY_RX_TR3_FSM_SHIFT 24
#define RO_CPHY_RX_TR3_FSM_MASK (0xff << 24)

#define CPHY_RX_BIST_PRBS_LENGTH0 0x00e8
#define RG_CPHY_RX_TRX_PRBS_LENGTH_31_0_SHIFT 0
#define RG_CPHY_RX_TRX_PRBS_LENGTH_31_0_MASK (0xffffffff << 0)

#define CPHY_RX_BIST_PRBS_LENGTH1 0x00ec
#define RG_CPHY_RX_TRX_PRBS_LENGTH_47_32_SHIFT 0
#define RG_CPHY_RX_TRX_PRBS_LENGTH_47_32_MASK (0xffff << 0)

#define CPHY_RX_IRQ_EN 0x00f0
#define RG_CPHY_RX_TR0_ERR_SOT_SYNC_HS_IRQ_EN_SHIFT 0
#define RG_CPHY_RX_TR0_ERR_SOT_SYNC_HS_IRQ_EN_MASK (0x1 << 0)
#define RG_CPHY_RX_TR1_ERR_SOT_SYNC_HS_IRQ_EN_SHIFT 1
#define RG_CPHY_RX_TR1_ERR_SOT_SYNC_HS_IRQ_EN_MASK (0x1 << 1)
#define RG_CPHY_RX_TR2_ERR_SOT_SYNC_HS_IRQ_EN_SHIFT 2
#define RG_CPHY_RX_TR2_ERR_SOT_SYNC_HS_IRQ_EN_MASK (0x1 << 2)
#define RG_CPHY_RX_TR3_ERR_SOT_SYNC_HS_IRQ_EN_SHIFT 3
#define RG_CPHY_RX_TR3_ERR_SOT_SYNC_HS_IRQ_EN_MASK (0x1 << 3)
#define RG_CPHY_RX_TR0_DETECT_ESCAPE_PULSE_IRQ_EN_SHIFT 4
#define RG_CPHY_RX_TR0_DETECT_ESCAPE_PULSE_IRQ_EN_MASK (0x1 << 4)
#define RG_CPHY_RX_TR1_DETECT_ESCAPE_PULSE_IRQ_EN_SHIFT 5
#define RG_CPHY_RX_TR1_DETECT_ESCAPE_PULSE_IRQ_EN_MASK (0x1 << 5)
#define RG_CPHY_RX_TR2_DETECT_ESCAPE_PULSE_IRQ_EN_SHIFT 6
#define RG_CPHY_RX_TR2_DETECT_ESCAPE_PULSE_IRQ_EN_MASK (0x1 << 6)
#define RG_CPHY_RX_TR3_DETECT_ESCAPE_PULSE_IRQ_EN_SHIFT 7
#define RG_CPHY_RX_TR3_DETECT_ESCAPE_PULSE_IRQ_EN_MASK (0x1 << 7)
#define RG_CPHY_RX_IRQ_W1C_EN_SHIFT 31
#define RG_CPHY_RX_IRQ_W1C_EN_MASK (0x1 << 31)

#define CPHY_RX_IRQ_STATUS 0x00f4
#define CPHY_RX_TR0_ERR_SOT_SYNC_HS_IRQ_SHIFT 0
#define CPHY_RX_TR0_ERR_SOT_SYNC_HS_IRQ_MASK (0x1 << 0)
#define CPHY_RX_TR1_ERR_SOT_SYNC_HS_IRQ_SHIFT 1
#define CPHY_RX_TR1_ERR_SOT_SYNC_HS_IRQ_MASK (0x1 << 1)
#define CPHY_RX_TR2_ERR_SOT_SYNC_HS_IRQ_SHIFT 2
#define CPHY_RX_TR2_ERR_SOT_SYNC_HS_IRQ_MASK (0x1 << 2)
#define CPHY_RX_TR3_ERR_SOT_SYNC_HS_IRQ_SHIFT 3
#define CPHY_RX_TR3_ERR_SOT_SYNC_HS_IRQ_MASK (0x1 << 3)
#define CPHY_RX_TR0_DETECT_ESCAPE_PULSE_IRQ_SHIFT 4
#define CPHY_RX_TR0_DETECT_ESCAPE_PULSE_IRQ_MASK (0x1 << 4)
#define CPHY_RX_TR1_DETECT_ESCAPE_PULSE_IRQ_SHIFT 5
#define CPHY_RX_TR1_DETECT_ESCAPE_PULSE_IRQ_MASK (0x1 << 5)
#define CPHY_RX_TR2_DETECT_ESCAPE_PULSE_IRQ_SHIFT 6
#define CPHY_RX_TR2_DETECT_ESCAPE_PULSE_IRQ_MASK (0x1 << 6)
#define CPHY_RX_TR3_DETECT_ESCAPE_PULSE_IRQ_SHIFT 7
#define CPHY_RX_TR3_DETECT_ESCAPE_PULSE_IRQ_MASK (0x1 << 7)

#define CPHY_RX_STATE_CHK_EN 0x0100
#define CPHY_RX_STATE_CHK_EN_TRIO0_SHIFT 0
#define CPHY_RX_STATE_CHK_EN_TRIO0_MASK (0x1 << 0)
#define CPHY_RX_STATE_CHK_EN_TRIO1_SHIFT 1
#define CPHY_RX_STATE_CHK_EN_TRIO1_MASK (0x1 << 1)
#define CPHY_RX_STATE_CHK_EN_TRIO2_SHIFT 2
#define CPHY_RX_STATE_CHK_EN_TRIO2_MASK (0x1 << 2)
#define CPHY_RX_STATE_CHK_EN_TRIO3_SHIFT 3
#define CPHY_RX_STATE_CHK_EN_TRIO3_MASK (0x1 << 3)
#define RG_ALPOUT_MASK_SHIFT 16
#define RG_ALPOUT_MASK_MASK (0xff << 16)
#define RG_ALP_POS_DET_MASK_SHIFT 24
#define RG_ALP_POS_DET_MASK_MASK (0xff << 24)

#define CPHY_RX_STATE_CHK_TIMER 0x0104
#define RG_CPHY_RX_STATE_CHK_RX_TIMER_CNT_SHIFT 0
#define RG_CPHY_RX_STATE_CHK_RX_TIMER_CNT_MASK (0xffffffff << 0)

#define CPHY_RX_STATE_CHK_STATUS_TRIO0 0x0110
#define RO_CPHY_RX_STATE_CHK_ERR_TRIO0_SHIFT 0
#define RO_CPHY_RX_STATE_CHK_ERR_TRIO0_MASK (0x1 << 0)
#define RO_CPHY_RX_STATE_CHK_ERR_CNT_TRIO0_SHIFT 4
#define RO_CPHY_RX_STATE_CHK_ERR_CNT_TRIO0_MASK (0x7 << 4)
#define CPHY_RX_STATE_CHK_FAIL_SEQ0_TRIO0_SHIFT 16
#define CPHY_RX_STATE_CHK_FAIL_SEQ0_TRIO0_MASK (0xf << 16)
#define CPHY_RX_STATE_CHK_FAIL_SEQ1_TRIO0_SHIFT 20
#define CPHY_RX_STATE_CHK_FAIL_SEQ1_TRIO0_MASK (0xf << 20)
#define CPHY_RX_STATE_CHK_FAIL_SEQ2_TRIO0_SHIFT 24
#define CPHY_RX_STATE_CHK_FAIL_SEQ2_TRIO0_MASK (0xf << 24)
#define CPHY_RX_STATE_CHK_FAIL_SEQ3_TRIO0_SHIFT 28
#define CPHY_RX_STATE_CHK_FAIL_SEQ3_TRIO0_MASK (0xf << 28)

#define CPHY_RX_STATE_CHK_STATUS_TRIO1 0x0114
#define RO_CPHY_RX_STATE_CHK_ERR_TRIO1_SHIFT 0
#define RO_CPHY_RX_STATE_CHK_ERR_TRIO1_MASK (0x1 << 0)
#define RO_CPHY_RX_STATE_CHK_ERR_CNT_TRIO1_SHIFT 4
#define RO_CPHY_RX_STATE_CHK_ERR_CNT_TRIO1_MASK (0x7 << 4)
#define CPHY_RX_STATE_CHK_FAIL_SEQ0_TRIO1_SHIFT 16
#define CPHY_RX_STATE_CHK_FAIL_SEQ0_TRIO1_MASK (0xf << 16)
#define CPHY_RX_STATE_CHK_FAIL_SEQ1_TRIO1_SHIFT 20
#define CPHY_RX_STATE_CHK_FAIL_SEQ1_TRIO1_MASK (0xf << 20)
#define CPHY_RX_STATE_CHK_FAIL_SEQ2_TRIO1_SHIFT 24
#define CPHY_RX_STATE_CHK_FAIL_SEQ2_TRIO1_MASK (0xf << 24)
#define CPHY_RX_STATE_CHK_FAIL_SEQ3_TRIO1_SHIFT 28
#define CPHY_RX_STATE_CHK_FAIL_SEQ3_TRIO1_MASK (0xf << 28)

#define CPHY_RX_STATE_CHK_STATUS_TRIO2 0x0118
#define RO_CPHY_RX_STATE_CHK_ERR_TRIO2_SHIFT 0
#define RO_CPHY_RX_STATE_CHK_ERR_TRIO2_MASK (0x1 << 0)
#define RO_CPHY_RX_STATE_CHK_ERR_CNT_TRIO2_SHIFT 4
#define RO_CPHY_RX_STATE_CHK_ERR_CNT_TRIO2_MASK (0x7 << 4)
#define CPHY_RX_STATE_CHK_FAIL_SEQ0_TRIO2_SHIFT 16
#define CPHY_RX_STATE_CHK_FAIL_SEQ0_TRIO2_MASK (0xf << 16)
#define CPHY_RX_STATE_CHK_FAIL_SEQ1_TRIO2_SHIFT 20
#define CPHY_RX_STATE_CHK_FAIL_SEQ1_TRIO2_MASK (0xf << 20)
#define CPHY_RX_STATE_CHK_FAIL_SEQ2_TRIO2_SHIFT 24
#define CPHY_RX_STATE_CHK_FAIL_SEQ2_TRIO2_MASK (0xf << 24)
#define CPHY_RX_STATE_CHK_FAIL_SEQ3_TRIO2_SHIFT 28
#define CPHY_RX_STATE_CHK_FAIL_SEQ3_TRIO2_MASK (0xf << 28)

#define CPHY_RX_STATE_CHK_STATUS_TRIO3 0x011c
#define RO_CPHY_RX_STATE_CHK_ERR_TRIO3_SHIFT 0
#define RO_CPHY_RX_STATE_CHK_ERR_TRIO3_MASK (0x1 << 0)
#define RO_CPHY_RX_STATE_CHK_ERR_CNT_TRIO3_SHIFT 4
#define RO_CPHY_RX_STATE_CHK_ERR_CNT_TRIO3_MASK (0x7 << 4)
#define CPHY_RX_STATE_CHK_FAIL_SEQ0_TRIO3_SHIFT 16
#define CPHY_RX_STATE_CHK_FAIL_SEQ0_TRIO3_MASK (0xf << 16)
#define CPHY_RX_STATE_CHK_FAIL_SEQ1_TRIO3_SHIFT 20
#define CPHY_RX_STATE_CHK_FAIL_SEQ1_TRIO3_MASK (0xf << 20)
#define CPHY_RX_STATE_CHK_FAIL_SEQ2_TRIO3_SHIFT 24
#define CPHY_RX_STATE_CHK_FAIL_SEQ2_TRIO3_MASK (0xf << 24)
#define CPHY_RX_STATE_CHK_FAIL_SEQ3_TRIO3_SHIFT 28
#define CPHY_RX_STATE_CHK_FAIL_SEQ3_TRIO3_MASK (0xf << 28)

#define CPHY_RX_CAL_ALP_CTRL 0x0130
#define RG_CPHY_CAL_EN_SHIFT 0
#define RG_CPHY_CAL_EN_MASK (0x1 << 0)
#define RG_CPHY_ALP_EN_SHIFT 1
#define RG_CPHY_ALP_EN_MASK (0x1 << 1)
#define RG_PREAMBLE_DET_SEL_SHIFT 2
#define RG_PREAMBLE_DET_SEL_MASK (0x1 << 2)
#define RG_POST_VALID_OPT_SHIFT 3
#define RG_POST_VALID_OPT_MASK (0x1 << 3)
#define RG_ALP_POS_DET_SEL_SHIFT 4
#define RG_ALP_POS_DET_SEL_MASK (0x1 << 4)
#define RG_ALP_STOP_DET_EN_SHIFT 5
#define RG_ALP_STOP_DET_EN_MASK (0x1 << 5)
#define RG_ALP_OUT_MASK_ALP_SHIFT 6
#define RG_ALP_OUT_MASK_ALP_MASK (0x1 << 6)
#define RG_ALPRX_EN_SEL_SHIFT 7
#define RG_ALPRX_EN_SEL_MASK (0x1 << 7)
#define RG_CPHY_SELCAL_PARAMETER_SHIFT 8
#define RG_CPHY_SELCAL_PARAMETER_MASK (0xff << 8)
#define RG_CPHY_ALP_SETTLE_PARAMETER_SHIFT 16
#define RG_CPHY_ALP_SETTLE_PARAMETER_MASK (0xff << 16)
#define RG_TR_PREAMBLE_DET_CNT_SHIFT 24
#define RG_TR_PREAMBLE_DET_CNT_MASK (0xff << 24)

#define CPHY_RX_INIT 0x0134
#define RG_CSI2_TINIT_CNT_SHIFT 0
#define RG_CSI2_TINIT_CNT_MASK (0xfffff << 0)
#define RG_CSI2_TINIT_CNT_EN_SHIFT 31
#define RG_CSI2_TINIT_CNT_EN_MASK (0x1 << 31)

#endif
