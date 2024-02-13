/*
 * Freescale PRE Register Definitions
 *
 * Copyright 2014-2015 Freescale Semiconductor, Inc. All Rights Reserved.
 *
 * The code contained herein is licensed under the GNU General Public
 * License. You may obtain a copy of the GNU General Public License
 * Version 2 or later at the following locations:
 *
 * http://www.opensource.org/licenses/gpl-license.html
 * http://www.gnu.org/copyleft/gpl.html
 */

#ifndef __ARCH_ARM___PRE_H
#define __ARCH_ARM___PRE_H


#define HW_PRE_CTRL	(0x00000000)
#define HW_PRE_CTRL_SET	(0x00000004)
#define HW_PRE_CTRL_CLR	(0x00000008)
#define HW_PRE_CTRL_TOG	(0x0000000c)

#define BM_PRE_CTRL_SFTRST 0x80000000
#define BF_PRE_CTRL_SFTRST(v) \
	(((v) << 31) & BM_PRE_CTRL_SFTRST)
#define BM_PRE_CTRL_CLKGATE 0x40000000
#define BF_PRE_CTRL_CLKGATE(v)  \
	(((v) << 30) & BM_PRE_CTRL_CLKGATE)
#define BM_PRE_CTRL_TPR_RESET_SEL 0x20000000
#define BF_PRE_CTRL_TPR_RESET_SEL(v)  \
	(((v) << 29) & BM_PRE_CTRL_TPR_RESET_SEL)
#define BM_PRE_CTRL_EN_REPEAT 0x10000000
#define BF_PRE_CTRL_EN_REPEAT(v)  \
	(((v) << 28) & BM_PRE_CTRL_EN_REPEAT)
#define BP_PRE_CTRL_RSVD2      16
#define BM_PRE_CTRL_RSVD2 0x0FFF0000
#define BF_PRE_CTRL_RSVD2(v)  \
	(((v) << 16) & BM_PRE_CTRL_RSVD2)
#define BP_PRE_CTRL_RSVD1      12
#define BM_PRE_CTRL_RSVD1 0x0000F000
#define BF_PRE_CTRL_RSVD1(v)  \
	(((v) << 12) & BM_PRE_CTRL_RSVD1)
#define BM_PRE_CTRL_HANDSHAKE_ABORT_SKIP_EN 0x00000800
#define BF_PRE_CTRL_HANDSHAKE_ABORT_SKIP_EN(v)  \
	(((v) << 11) & BM_PRE_CTRL_HANDSHAKE_ABORT_SKIP_EN)
#define BV_PRE_CTRL_HANDSHAKE_ABORT_SKIP_EN__0 0x0
#define BV_PRE_CTRL_HANDSHAKE_ABORT_SKIP_EN__1 0x1
#define BP_PRE_CTRL_HANDSHAKE_LINE_NUM      9
#define BM_PRE_CTRL_HANDSHAKE_LINE_NUM 0x00000600
#define BF_PRE_CTRL_HANDSHAKE_LINE_NUM(v)  \
	(((v) << 9) & BM_PRE_CTRL_HANDSHAKE_LINE_NUM)
#define BV_PRE_CTRL_HANDSHAKE_LINE_NUM__0 0x0
#define BV_PRE_CTRL_HANDSHAKE_LINE_NUM__1 0x1
#define BV_PRE_CTRL_HANDSHAKE_LINE_NUM__2 0x2
#define BM_PRE_CTRL_HANDSHAKE_EN 0x00000100
#define BF_PRE_CTRL_HANDSHAKE_EN(v)  \
	(((v) << 8) & BM_PRE_CTRL_HANDSHAKE_EN)
#define BV_PRE_CTRL_HANDSHAKE_EN__0 0x0
#define BV_PRE_CTRL_HANDSHAKE_EN__1 0x1
#define BM_PRE_CTRL_INTERLACED_FIELD 0x00000080
#define BF_PRE_CTRL_INTERLACED_FIELD(v)  \
	(((v) << 7) & BM_PRE_CTRL_INTERLACED_FIELD)
#define BM_PRE_CTRL_SO 0x00000040
#define BF_PRE_CTRL_SO(v)  \
	(((v) << 6) & BM_PRE_CTRL_SO)
#define BM_PRE_CTRL_VFLIP 0x00000020
#define BF_PRE_CTRL_VFLIP(v)  \
	(((v) << 5) & BM_PRE_CTRL_VFLIP)
#define BM_PRE_CTRL_SDW_UPDATE 0x00000010
#define BF_PRE_CTRL_SDW_UPDATE(v)  \
	(((v) << 4) & BM_PRE_CTRL_SDW_UPDATE)
#define BM_PRE_CTRL_RSVD0 0x00000008
#define BF_PRE_CTRL_RSVD0(v)  \
	(((v) << 3) & BM_PRE_CTRL_RSVD0)
#define BM_PRE_CTRL_BLOCK_16 0x00000004
#define BF_PRE_CTRL_BLOCK_16(v)  \
	(((v) << 2) & BM_PRE_CTRL_BLOCK_16)
#define BV_PRE_CTRL_BLOCK_16__32x4 0x0
#define BV_PRE_CTRL_BLOCK_16__16x4 0x1
#define BM_PRE_CTRL_BLOCK_EN 0x00000002
#define BF_PRE_CTRL_BLOCK_EN(v)  \
	(((v) << 1) & BM_PRE_CTRL_BLOCK_EN)
#define BV_PRE_CTRL_BLOCK_EN__0 0x0
#define BV_PRE_CTRL_BLOCK_EN__1 0x1
#define BM_PRE_CTRL_ENABLE 0x00000001
#define BF_PRE_CTRL_ENABLE(v)  \
	(((v) << 0) & BM_PRE_CTRL_ENABLE)

#define HW_PRE_IRQ_MASK	(0x00000010)
#define HW_PRE_IRQ_MASK_SET	(0x00000014)
#define HW_PRE_IRQ_MASK_CLR	(0x00000018)
#define HW_PRE_IRQ_MASK_TOG	(0x0000001c)

#define BP_PRE_IRQ_MASK_RSVD1      4
#define BM_PRE_IRQ_MASK_RSVD1 0xFFFFFFF0
#define BF_PRE_IRQ_MASK_RSVD1(v) \
	(((v) << 4) & BM_PRE_IRQ_MASK_RSVD1)
#define BM_PRE_IRQ_MASK_TPR_RD_NUM_BYTES_OVFL_IRQ_EN 0x00000008
#define BF_PRE_IRQ_MASK_TPR_RD_NUM_BYTES_OVFL_IRQ_EN(v)  \
	(((v) << 3) & BM_PRE_IRQ_MASK_TPR_RD_NUM_BYTES_OVFL_IRQ_EN)
#define BM_PRE_IRQ_MASK_HANDSHAKE_ABORT_IRQ_EN 0x00000004
#define BF_PRE_IRQ_MASK_HANDSHAKE_ABORT_IRQ_EN(v)  \
	(((v) << 2) & BM_PRE_IRQ_MASK_HANDSHAKE_ABORT_IRQ_EN)
#define BM_PRE_IRQ_MASK_STORE_IRQ_EN 0x00000002
#define BF_PRE_IRQ_MASK_STORE_IRQ_EN(v)  \
	(((v) << 1) & BM_PRE_IRQ_MASK_STORE_IRQ_EN)
#define BM_PRE_IRQ_MASK_PREFETCH_IRQ_EN 0x00000001
#define BF_PRE_IRQ_MASK_PREFETCH_IRQ_EN(v)  \
	(((v) << 0) & BM_PRE_IRQ_MASK_PREFETCH_IRQ_EN)

#define HW_PRE_IRQ	(0x00000020)
#define HW_PRE_IRQ_SET	(0x00000024)
#define HW_PRE_IRQ_CLR	(0x00000028)
#define HW_PRE_IRQ_TOG	(0x0000002c)

#define BP_PRE_IRQ_RSVD1      14
#define BM_PRE_IRQ_RSVD1 0xFFFFC000
#define BF_PRE_IRQ_RSVD1(v) \
	(((v) << 14) & BM_PRE_IRQ_RSVD1)
#define BP_PRE_IRQ_AXI_ERROR_ID      10
#define BM_PRE_IRQ_AXI_ERROR_ID 0x00003C00
#define BF_PRE_IRQ_AXI_ERROR_ID(v)  \
	(((v) << 10) & BM_PRE_IRQ_AXI_ERROR_ID)
#define BM_PRE_IRQ_AXI_READ_ERROR 0x00000200
#define BF_PRE_IRQ_AXI_READ_ERROR(v)  \
	(((v) << 9) & BM_PRE_IRQ_AXI_READ_ERROR)
#define BM_PRE_IRQ_AXI_WRITE_ERROR 0x00000100
#define BF_PRE_IRQ_AXI_WRITE_ERROR(v)  \
	(((v) << 8) & BM_PRE_IRQ_AXI_WRITE_ERROR)
#define BP_PRE_IRQ_RSVD0      5
#define BM_PRE_IRQ_RSVD0 0x000000E0
#define BF_PRE_IRQ_RSVD0(v)  \
	(((v) << 5) & BM_PRE_IRQ_RSVD0)
#define BM_PRE_IRQ_HANDSHAKE_ERROR_IRQ 0x00000010
#define BF_PRE_IRQ_HANDSHAKE_ERROR_IRQ(v)  \
	(((v) << 4) & BM_PRE_IRQ_HANDSHAKE_ERROR_IRQ)
#define BM_PRE_IRQ_TPR_RD_NUM_BYTES_OVFL_IRQ 0x00000008
#define BF_PRE_IRQ_TPR_RD_NUM_BYTES_OVFL_IRQ(v)  \
	(((v) << 3) & BM_PRE_IRQ_TPR_RD_NUM_BYTES_OVFL_IRQ)
#define BM_PRE_IRQ_HANDSHAKE_ABORT_IRQ 0x00000004
#define BF_PRE_IRQ_HANDSHAKE_ABORT_IRQ(v)  \
	(((v) << 2) & BM_PRE_IRQ_HANDSHAKE_ABORT_IRQ)
#define BM_PRE_IRQ_STORE_IRQ 0x00000002
#define BF_PRE_IRQ_STORE_IRQ(v)  \
	(((v) << 1) & BM_PRE_IRQ_STORE_IRQ)
#define BM_PRE_IRQ_PREFETCH_IRQ 0x00000001
#define BF_PRE_IRQ_PREFETCH_IRQ(v)  \
	(((v) << 0) & BM_PRE_IRQ_PREFETCH_IRQ)

#define HW_PRE_CUR_BUF	(0x00000030)

#define BP_PRE_CUR_BUF_ADDR      0
#define BM_PRE_CUR_BUF_ADDR 0xFFFFFFFF
#define BF_PRE_CUR_BUF_ADDR(v)   (v)

#define HW_PRE_NEXT_BUF	(0x00000040)

#define BP_PRE_NEXT_BUF_ADDR      0
#define BM_PRE_NEXT_BUF_ADDR 0xFFFFFFFF
#define BF_PRE_NEXT_BUF_ADDR(v)   (v)

#define HW_PRE_U_BUF_OFFSET	(0x00000050)

#define BP_PRE_U_BUF_OFFSET_RSVD0      25
#define BM_PRE_U_BUF_OFFSET_RSVD0 0xFE000000
#define BF_PRE_U_BUF_OFFSET_RSVD0(v) \
	(((v) << 25) & BM_PRE_U_BUF_OFFSET_RSVD0)
#define BP_PRE_U_BUF_OFFSET_UBO      0
#define BM_PRE_U_BUF_OFFSET_UBO 0x01FFFFFF
#define BF_PRE_U_BUF_OFFSET_UBO(v)  \
	(((v) << 0) & BM_PRE_U_BUF_OFFSET_UBO)

#define HW_PRE_V_BUF_OFFSET	(0x00000060)

#define BP_PRE_V_BUF_OFFSET_RSVD0      25
#define BM_PRE_V_BUF_OFFSET_RSVD0 0xFE000000
#define BF_PRE_V_BUF_OFFSET_RSVD0(v) \
	(((v) << 25) & BM_PRE_V_BUF_OFFSET_RSVD0)
#define BP_PRE_V_BUF_OFFSET_VBO      0
#define BM_PRE_V_BUF_OFFSET_VBO 0x01FFFFFF
#define BF_PRE_V_BUF_OFFSET_VBO(v)  \
	(((v) << 0) & BM_PRE_V_BUF_OFFSET_VBO)

#define HW_PRE_TPR_CTRL	(0x00000070)
#define HW_PRE_TPR_CTRL_SET	(0x00000074)
#define HW_PRE_TPR_CTRL_CLR	(0x00000078)
#define HW_PRE_TPR_CTRL_TOG	(0x0000007c)

#define BP_PRE_TPR_CTRL_RSVD      8
#define BM_PRE_TPR_CTRL_RSVD 0xFFFFFF00
#define BF_PRE_TPR_CTRL_RSVD(v) \
	(((v) << 8) & BM_PRE_TPR_CTRL_RSVD)
#define BP_PRE_TPR_CTRL_TILE_FORMAT      0
#define BM_PRE_TPR_CTRL_TILE_FORMAT 0x000000FF
#define BF_PRE_TPR_CTRL_TILE_FORMAT(v)  \
	(((v) << 0) & BM_PRE_TPR_CTRL_TILE_FORMAT)
#define BV_PRE_TPR_CTRL_TILE_FORMAT__BYPASS       0x00
#define BV_PRE_TPR_CTRL_TILE_FORMAT__GPU32_SB_ST  0x10
#define BV_PRE_TPR_CTRL_TILE_FORMAT__GPU32_SB_SRT 0x50
#define BV_PRE_TPR_CTRL_TILE_FORMAT__GPU32_ST     0x20
#define BV_PRE_TPR_CTRL_TILE_FORMAT__GPU32_SRT    0x60
#define BV_PRE_TPR_CTRL_TILE_FORMAT__GPU32_MST    0xA0
#define BV_PRE_TPR_CTRL_TILE_FORMAT__GPU32_MSRT   0xE0
#define BV_PRE_TPR_CTRL_TILE_FORMAT__GPU16_SB_ST  0x11
#define BV_PRE_TPR_CTRL_TILE_FORMAT__GPU16_SB_SRT 0x51
#define BV_PRE_TPR_CTRL_TILE_FORMAT__GPU16_ST     0x21
#define BV_PRE_TPR_CTRL_TILE_FORMAT__GPU16_SRT    0x61
#define BV_PRE_TPR_CTRL_TILE_FORMAT__GPU16_MST    0xA1
#define BV_PRE_TPR_CTRL_TILE_FORMAT__GPU16_MSRT   0xE1
#define BV_PRE_TPR_CTRL_TILE_FORMAT__VPU8_PRO     0x22
#define BV_PRE_TPR_CTRL_TILE_FORMAT__VPU8_SB_INT  0x13

#define HW_PRE_PREFETCH_ENGINE_CTRL	(0x00000080)
#define HW_PRE_PREFETCH_ENGINE_CTRL_SET	(0x00000084)
#define HW_PRE_PREFETCH_ENGINE_CTRL_CLR	(0x00000088)
#define HW_PRE_PREFETCH_ENGINE_CTRL_TOG	(0x0000008c)

#define BP_PRE_PREFETCH_ENGINE_CTRL_RSVD1      16
#define BM_PRE_PREFETCH_ENGINE_CTRL_RSVD1 0xFFFF0000
#define BF_PRE_PREFETCH_ENGINE_CTRL_RSVD1(v) \
	(((v) << 16) & BM_PRE_PREFETCH_ENGINE_CTRL_RSVD1)
#define BM_PRE_PREFETCH_ENGINE_CTRL_TPR_COOR_OFFSET_EN 0x00008000
#define BF_PRE_PREFETCH_ENGINE_CTRL_TPR_COOR_OFFSET_EN(v)  \
	(((v) << 15) & BM_PRE_PREFETCH_ENGINE_CTRL_TPR_COOR_OFFSET_EN)
#define BM_PRE_PREFETCH_ENGINE_CTRL_PARTIAL_UV_SWAP 0x00004000
#define BF_PRE_PREFETCH_ENGINE_CTRL_PARTIAL_UV_SWAP(v)  \
	(((v) << 14) & BM_PRE_PREFETCH_ENGINE_CTRL_PARTIAL_UV_SWAP)
#define BM_PRE_PREFETCH_ENGINE_CTRL_CROP_EN 0x00002000
#define BF_PRE_PREFETCH_ENGINE_CTRL_CROP_EN(v)  \
	(((v) << 13) & BM_PRE_PREFETCH_ENGINE_CTRL_CROP_EN)
#define BV_PRE_PREFETCH_ENGINE_CTRL_CROP_EN__0 0x0
#define BV_PRE_PREFETCH_ENGINE_CTRL_CROP_EN__1 0x1
#define BM_PRE_PREFETCH_ENGINE_CTRL_FIELD_INVERSE 0x00001000
#define BF_PRE_PREFETCH_ENGINE_CTRL_FIELD_INVERSE(v)  \
	(((v) << 12) & BM_PRE_PREFETCH_ENGINE_CTRL_FIELD_INVERSE)
#define BV_PRE_PREFETCH_ENGINE_CTRL_FIELD_INVERSE__0 0x0
#define BV_PRE_PREFETCH_ENGINE_CTRL_FIELD_INVERSE__1 0x1
#define BM_PRE_PREFETCH_ENGINE_CTRL_SHIFT_BYPASS 0x00000800
#define BF_PRE_PREFETCH_ENGINE_CTRL_SHIFT_BYPASS(v)  \
	(((v) << 11) & BM_PRE_PREFETCH_ENGINE_CTRL_SHIFT_BYPASS)
#define BV_PRE_PREFETCH_ENGINE_CTRL_SHIFT_BYPASS__0 0x0
#define BV_PRE_PREFETCH_ENGINE_CTRL_SHIFT_BYPASS__1 0x1
#define BP_PRE_PREFETCH_ENGINE_CTRL_INPUT_PIXEL_FORMAT      8
#define BM_PRE_PREFETCH_ENGINE_CTRL_INPUT_PIXEL_FORMAT 0x00000700
#define BF_PRE_PREFETCH_ENGINE_CTRL_INPUT_PIXEL_FORMAT(v)  \
	(((v) << 8) & BM_PRE_PREFETCH_ENGINE_CTRL_INPUT_PIXEL_FORMAT)
#define BV_PRE_PREFETCH_ENGINE_CTRL_INPUT_PIXEL_FORMAT__0 0x0
#define BV_PRE_PREFETCH_ENGINE_CTRL_INPUT_PIXEL_FORMAT__1 0x1
#define BV_PRE_PREFETCH_ENGINE_CTRL_INPUT_PIXEL_FORMAT__2 0x2
#define BV_PRE_PREFETCH_ENGINE_CTRL_INPUT_PIXEL_FORMAT__3 0x3
#define BV_PRE_PREFETCH_ENGINE_CTRL_INPUT_PIXEL_FORMAT__4 0x4
#define BV_PRE_PREFETCH_ENGINE_CTRL_INPUT_PIXEL_FORMAT__5 0x5
#define BP_PRE_PREFETCH_ENGINE_CTRL_RSVD0      6
#define BM_PRE_PREFETCH_ENGINE_CTRL_RSVD0 0x000000C0
#define BF_PRE_PREFETCH_ENGINE_CTRL_RSVD0(v)  \
	(((v) << 6) & BM_PRE_PREFETCH_ENGINE_CTRL_RSVD0)
#define BP_PRE_PREFETCH_ENGINE_CTRL_INPUT_ACTIVE_BPP      4
#define BM_PRE_PREFETCH_ENGINE_CTRL_INPUT_ACTIVE_BPP 0x00000030
#define BF_PRE_PREFETCH_ENGINE_CTRL_INPUT_ACTIVE_BPP(v)  \
	(((v) << 4) & BM_PRE_PREFETCH_ENGINE_CTRL_INPUT_ACTIVE_BPP)
#define BV_PRE_PREFETCH_ENGINE_CTRL_INPUT_ACTIVE_BPP__0 0x0
#define BV_PRE_PREFETCH_ENGINE_CTRL_INPUT_ACTIVE_BPP__1 0x1
#define BV_PRE_PREFETCH_ENGINE_CTRL_INPUT_ACTIVE_BPP__2 0x2
#define BV_PRE_PREFETCH_ENGINE_CTRL_INPUT_ACTIVE_BPP__3 0x3
#define BP_PRE_PREFETCH_ENGINE_CTRL_RD_NUM_BYTES      1
#define BM_PRE_PREFETCH_ENGINE_CTRL_RD_NUM_BYTES 0x0000000E
#define BF_PRE_PREFETCH_ENGINE_CTRL_RD_NUM_BYTES(v)  \
	(((v) << 1) & BM_PRE_PREFETCH_ENGINE_CTRL_RD_NUM_BYTES)
#define BV_PRE_PREFETCH_ENGINE_CTRL_RD_NUM_BYTES__8_bytes   0x0
#define BV_PRE_PREFETCH_ENGINE_CTRL_RD_NUM_BYTES__16_bytes  0x1
#define BV_PRE_PREFETCH_ENGINE_CTRL_RD_NUM_BYTES__32_bytes  0x2
#define BV_PRE_PREFETCH_ENGINE_CTRL_RD_NUM_BYTES__64_bytes  0x3
#define BV_PRE_PREFETCH_ENGINE_CTRL_RD_NUM_BYTES__128_bytes 0x4
#define BM_PRE_PREFETCH_ENGINE_CTRL_PREFETCH_EN 0x00000001
#define BF_PRE_PREFETCH_ENGINE_CTRL_PREFETCH_EN(v)  \
	(((v) << 0) & BM_PRE_PREFETCH_ENGINE_CTRL_PREFETCH_EN)
#define BV_PRE_PREFETCH_ENGINE_CTRL_PREFETCH_EN__0 0x0
#define BV_PRE_PREFETCH_ENGINE_CTRL_PREFETCH_EN__1 0x1

#define HW_PRE_PREFETCH_ENGINE_STATUS	(0x00000090)

#define BP_PRE_PREFETCH_ENGINE_STATUS_PREFETCH_BLOCK_Y      16
#define BM_PRE_PREFETCH_ENGINE_STATUS_PREFETCH_BLOCK_Y 0x3FFF0000
#define BF_PRE_PREFETCH_ENGINE_STATUS_PREFETCH_BLOCK_Y(v) \
	(((v) << 16) & BM_PRE_PREFETCH_ENGINE_STATUS_PREFETCH_BLOCK_Y)
#define BP_PRE_PREFETCH_ENGINE_STATUS_PREFETCH_BLOCK_X      0
#define BM_PRE_PREFETCH_ENGINE_STATUS_PREFETCH_BLOCK_X 0x0000FFFF
#define BF_PRE_PREFETCH_ENGINE_STATUS_PREFETCH_BLOCK_X(v)  \
	(((v) << 0) & BM_PRE_PREFETCH_ENGINE_STATUS_PREFETCH_BLOCK_X)

#define HW_PRE_PREFETCH_ENGINE_INPUT_SIZE	(0x000000a0)

#define BP_PRE_PREFETCH_ENGINE_INPUT_SIZE_INPUT_HEIGHT      16
#define BM_PRE_PREFETCH_ENGINE_INPUT_SIZE_INPUT_HEIGHT 0xFFFF0000
#define BF_PRE_PREFETCH_ENGINE_INPUT_SIZE_INPUT_HEIGHT(v) \
	(((v) << 16) & BM_PRE_PREFETCH_ENGINE_INPUT_SIZE_INPUT_HEIGHT)
#define BP_PRE_PREFETCH_ENGINE_INPUT_SIZE_INPUT_WIDTH      0
#define BM_PRE_PREFETCH_ENGINE_INPUT_SIZE_INPUT_WIDTH 0x0000FFFF
#define BF_PRE_PREFETCH_ENGINE_INPUT_SIZE_INPUT_WIDTH(v)  \
	(((v) << 0) & BM_PRE_PREFETCH_ENGINE_INPUT_SIZE_INPUT_WIDTH)

#define HW_PRE_PREFETCH_ENGINE_OUTPUT_SIZE_ULC	(0x000000b0)

#define BP_PRE_PREFETCH_ENGINE_OUTPUT_SIZE_ULC_OUTPUT_SIZE_ULC_Y      16
#define BM_PRE_PREFETCH_ENGINE_OUTPUT_SIZE_ULC_OUTPUT_SIZE_ULC_Y 0xFFFF0000
#define BF_PRE_PREFETCH_ENGINE_OUTPUT_SIZE_ULC_OUTPUT_SIZE_ULC_Y(v) \
	(((v) << 16) & BM_PRE_PREFETCH_ENGINE_OUTPUT_SIZE_ULC_OUTPUT_SIZE_ULC_Y)
#define BP_PRE_PREFETCH_ENGINE_OUTPUT_SIZE_ULC_OUTPUT_SIZE_ULC_X      0
#define BM_PRE_PREFETCH_ENGINE_OUTPUT_SIZE_ULC_OUTPUT_SIZE_ULC_X 0x0000FFFF
#define BF_PRE_PREFETCH_ENGINE_OUTPUT_SIZE_ULC_OUTPUT_SIZE_ULC_X(v)  \
	(((v) << 0) & BM_PRE_PREFETCH_ENGINE_OUTPUT_SIZE_ULC_OUTPUT_SIZE_ULC_X)

#define HW_PRE_PREFETCH_ENGINE_OUTPUT_SIZE_LRC	(0x000000c0)

#define BP_PRE_PREFETCH_ENGINE_OUTPUT_SIZE_LRC_OUTPUT_SIZE_LRC_Y      16
#define BM_PRE_PREFETCH_ENGINE_OUTPUT_SIZE_LRC_OUTPUT_SIZE_LRC_Y 0xFFFF0000
#define BF_PRE_PREFETCH_ENGINE_OUTPUT_SIZE_LRC_OUTPUT_SIZE_LRC_Y(v) \
	(((v) << 16) & BM_PRE_PREFETCH_ENGINE_OUTPUT_SIZE_LRC_OUTPUT_SIZE_LRC_Y)
#define BP_PRE_PREFETCH_ENGINE_OUTPUT_SIZE_LRC_OUTPUT_SIZE_LRC_X      0
#define BM_PRE_PREFETCH_ENGINE_OUTPUT_SIZE_LRC_OUTPUT_SIZE_LRC_X 0x0000FFFF
#define BF_PRE_PREFETCH_ENGINE_OUTPUT_SIZE_LRC_OUTPUT_SIZE_LRC_X(v)  \
	(((v) << 0) & BM_PRE_PREFETCH_ENGINE_OUTPUT_SIZE_LRC_OUTPUT_SIZE_LRC_X)

#define HW_PRE_PREFETCH_ENGINE_PITCH	(0x000000d0)

#define BP_PRE_PREFETCH_ENGINE_PITCH_INPUT_UV_PITCH      16
#define BM_PRE_PREFETCH_ENGINE_PITCH_INPUT_UV_PITCH 0xFFFF0000
#define BF_PRE_PREFETCH_ENGINE_PITCH_INPUT_UV_PITCH(v) \
	(((v) << 16) & BM_PRE_PREFETCH_ENGINE_PITCH_INPUT_UV_PITCH)
#define BP_PRE_PREFETCH_ENGINE_PITCH_INPUT_Y_PITCH      0
#define BM_PRE_PREFETCH_ENGINE_PITCH_INPUT_Y_PITCH 0x0000FFFF
#define BF_PRE_PREFETCH_ENGINE_PITCH_INPUT_Y_PITCH(v)  \
	(((v) << 0) & BM_PRE_PREFETCH_ENGINE_PITCH_INPUT_Y_PITCH)

#define HW_PRE_PREFETCH_ENGINE_SHIFT_OFFSET	(0x000000e0)
#define HW_PRE_PREFETCH_ENGINE_SHIFT_OFFSET_SET	(0x000000e4)
#define HW_PRE_PREFETCH_ENGINE_SHIFT_OFFSET_CLR	(0x000000e8)
#define HW_PRE_PREFETCH_ENGINE_SHIFT_OFFSET_TOG	(0x000000ec)

#define BP_PRE_PREFETCH_ENGINE_SHIFT_OFFSET_RSVD0      29
#define BM_PRE_PREFETCH_ENGINE_SHIFT_OFFSET_RSVD0 0xE0000000
#define BF_PRE_PREFETCH_ENGINE_SHIFT_OFFSET_RSVD0(v) \
	(((v) << 29) & BM_PRE_PREFETCH_ENGINE_SHIFT_OFFSET_RSVD0)
#define BP_PRE_PREFETCH_ENGINE_SHIFT_OFFSET_OFFSET3      24
#define BM_PRE_PREFETCH_ENGINE_SHIFT_OFFSET_OFFSET3 0x1F000000
#define BF_PRE_PREFETCH_ENGINE_SHIFT_OFFSET_OFFSET3(v)  \
	(((v) << 24) & BM_PRE_PREFETCH_ENGINE_SHIFT_OFFSET_OFFSET3)
#define BP_PRE_PREFETCH_ENGINE_SHIFT_OFFSET_RSVD1      21
#define BM_PRE_PREFETCH_ENGINE_SHIFT_OFFSET_RSVD1 0x00E00000
#define BF_PRE_PREFETCH_ENGINE_SHIFT_OFFSET_RSVD1(v)  \
	(((v) << 21) & BM_PRE_PREFETCH_ENGINE_SHIFT_OFFSET_RSVD1)
#define BP_PRE_PREFETCH_ENGINE_SHIFT_OFFSET_OFFSET2      16
#define BM_PRE_PREFETCH_ENGINE_SHIFT_OFFSET_OFFSET2 0x001F0000
#define BF_PRE_PREFETCH_ENGINE_SHIFT_OFFSET_OFFSET2(v)  \
	(((v) << 16) & BM_PRE_PREFETCH_ENGINE_SHIFT_OFFSET_OFFSET2)
#define BP_PRE_PREFETCH_ENGINE_SHIFT_OFFSET_RSVD2      13
#define BM_PRE_PREFETCH_ENGINE_SHIFT_OFFSET_RSVD2 0x0000E000
#define BF_PRE_PREFETCH_ENGINE_SHIFT_OFFSET_RSVD2(v)  \
	(((v) << 13) & BM_PRE_PREFETCH_ENGINE_SHIFT_OFFSET_RSVD2)
#define BP_PRE_PREFETCH_ENGINE_SHIFT_OFFSET_OFFSET1      8
#define BM_PRE_PREFETCH_ENGINE_SHIFT_OFFSET_OFFSET1 0x00001F00
#define BF_PRE_PREFETCH_ENGINE_SHIFT_OFFSET_OFFSET1(v)  \
	(((v) << 8) & BM_PRE_PREFETCH_ENGINE_SHIFT_OFFSET_OFFSET1)
#define BP_PRE_PREFETCH_ENGINE_SHIFT_OFFSET_RSVD3      5
#define BM_PRE_PREFETCH_ENGINE_SHIFT_OFFSET_RSVD3 0x000000E0
#define BF_PRE_PREFETCH_ENGINE_SHIFT_OFFSET_RSVD3(v)  \
	(((v) << 5) & BM_PRE_PREFETCH_ENGINE_SHIFT_OFFSET_RSVD3)
#define BP_PRE_PREFETCH_ENGINE_SHIFT_OFFSET_OFFSET0      0
#define BM_PRE_PREFETCH_ENGINE_SHIFT_OFFSET_OFFSET0 0x0000001F
#define BF_PRE_PREFETCH_ENGINE_SHIFT_OFFSET_OFFSET0(v)  \
	(((v) << 0) & BM_PRE_PREFETCH_ENGINE_SHIFT_OFFSET_OFFSET0)

#define HW_PRE_PREFETCH_ENGINE_SHIFT_WIDTH	(0x000000f0)
#define HW_PRE_PREFETCH_ENGINE_SHIFT_WIDTH_SET	(0x000000f4)
#define HW_PRE_PREFETCH_ENGINE_SHIFT_WIDTH_CLR	(0x000000f8)
#define HW_PRE_PREFETCH_ENGINE_SHIFT_WIDTH_TOG	(0x000000fc)

#define BP_PRE_PREFETCH_ENGINE_SHIFT_WIDTH_RSVD0      16
#define BM_PRE_PREFETCH_ENGINE_SHIFT_WIDTH_RSVD0 0xFFFF0000
#define BF_PRE_PREFETCH_ENGINE_SHIFT_WIDTH_RSVD0(v) \
	(((v) << 16) & BM_PRE_PREFETCH_ENGINE_SHIFT_WIDTH_RSVD0)
#define BP_PRE_PREFETCH_ENGINE_SHIFT_WIDTH_WIDTH3      12
#define BM_PRE_PREFETCH_ENGINE_SHIFT_WIDTH_WIDTH3 0x0000F000
#define BF_PRE_PREFETCH_ENGINE_SHIFT_WIDTH_WIDTH3(v)  \
	(((v) << 12) & BM_PRE_PREFETCH_ENGINE_SHIFT_WIDTH_WIDTH3)
#define BP_PRE_PREFETCH_ENGINE_SHIFT_WIDTH_WIDTH2      8
#define BM_PRE_PREFETCH_ENGINE_SHIFT_WIDTH_WIDTH2 0x00000F00
#define BF_PRE_PREFETCH_ENGINE_SHIFT_WIDTH_WIDTH2(v)  \
	(((v) << 8) & BM_PRE_PREFETCH_ENGINE_SHIFT_WIDTH_WIDTH2)
#define BP_PRE_PREFETCH_ENGINE_SHIFT_WIDTH_WIDTH1      4
#define BM_PRE_PREFETCH_ENGINE_SHIFT_WIDTH_WIDTH1 0x000000F0
#define BF_PRE_PREFETCH_ENGINE_SHIFT_WIDTH_WIDTH1(v)  \
	(((v) << 4) & BM_PRE_PREFETCH_ENGINE_SHIFT_WIDTH_WIDTH1)
#define BP_PRE_PREFETCH_ENGINE_SHIFT_WIDTH_WIDTH0      0
#define BM_PRE_PREFETCH_ENGINE_SHIFT_WIDTH_WIDTH0 0x0000000F
#define BF_PRE_PREFETCH_ENGINE_SHIFT_WIDTH_WIDTH0(v)  \
	(((v) << 0) & BM_PRE_PREFETCH_ENGINE_SHIFT_WIDTH_WIDTH0)

#define HW_PRE_PREFETCH_ENGINE_INTERLACE_OFFSET	(0x00000100)

#define BP_PRE_PREFETCH_ENGINE_INTERLACE_OFFSET_RSVD0      23
#define BM_PRE_PREFETCH_ENGINE_INTERLACE_OFFSET_RSVD0 0xFF800000
#define BF_PRE_PREFETCH_ENGINE_INTERLACE_OFFSET_RSVD0(v) \
	(((v) << 23) & BM_PRE_PREFETCH_ENGINE_INTERLACE_OFFSET_RSVD0)
#define BP_PRE_PREFETCH_ENGINE_INTERLACE_OFFSET_INTERLACE_OFFSET      0
#define BM_PRE_PREFETCH_ENGINE_INTERLACE_OFFSET_INTERLACE_OFFSET 0xFFFFFFFF
#define BF_PRE_PREFETCH_ENGINE_INTERLACE_OFFSET_INTERLACE_OFFSET(v)  \
	(((v) << 0) & BM_PRE_PREFETCH_ENGINE_INTERLACE_OFFSET_INTERLACE_OFFSET)

#define HW_PRE_STORE_ENGINE_CTRL	(0x00000110)
#define HW_PRE_STORE_ENGINE_CTRL_SET	(0x00000114)
#define HW_PRE_STORE_ENGINE_CTRL_CLR	(0x00000118)
#define HW_PRE_STORE_ENGINE_CTRL_TOG	(0x0000011c)

#define BP_PRE_STORE_ENGINE_CTRL_RSVD0      6
#define BM_PRE_STORE_ENGINE_CTRL_RSVD0 0xFFFFFFC0
#define BF_PRE_STORE_ENGINE_CTRL_RSVD0(v) \
	(((v) << 6) & BM_PRE_STORE_ENGINE_CTRL_RSVD0)
#define BP_PRE_STORE_ENGINE_CTRL_OUTPUT_ACTIVE_BPP      4
#define BM_PRE_STORE_ENGINE_CTRL_OUTPUT_ACTIVE_BPP 0x00000030
#define BF_PRE_STORE_ENGINE_CTRL_OUTPUT_ACTIVE_BPP(v)  \
	(((v) << 4) & BM_PRE_STORE_ENGINE_CTRL_OUTPUT_ACTIVE_BPP)
#define BV_PRE_STORE_ENGINE_CTRL_OUTPUT_ACTIVE_BPP__8_bits  0x0
#define BV_PRE_STORE_ENGINE_CTRL_OUTPUT_ACTIVE_BPP__16_bits 0x1
#define BV_PRE_STORE_ENGINE_CTRL_OUTPUT_ACTIVE_BPP__32_bits 0x2
#define BV_PRE_STORE_ENGINE_CTRL_OUTPUT_ACTIVE_BPP__64_bits 0x3
#define BP_PRE_STORE_ENGINE_CTRL_WR_NUM_BYTES      1
#define BM_PRE_STORE_ENGINE_CTRL_WR_NUM_BYTES 0x0000000E
#define BF_PRE_STORE_ENGINE_CTRL_WR_NUM_BYTES(v)  \
	(((v) << 1) & BM_PRE_STORE_ENGINE_CTRL_WR_NUM_BYTES)
#define BV_PRE_STORE_ENGINE_CTRL_WR_NUM_BYTES__8_bytes   0x0
#define BV_PRE_STORE_ENGINE_CTRL_WR_NUM_BYTES__16_bytes  0x1
#define BV_PRE_STORE_ENGINE_CTRL_WR_NUM_BYTES__32_bytes  0x2
#define BV_PRE_STORE_ENGINE_CTRL_WR_NUM_BYTES__64_bytes  0x3
#define BV_PRE_STORE_ENGINE_CTRL_WR_NUM_BYTES__128_bytes 0x4
#define BM_PRE_STORE_ENGINE_CTRL_STORE_EN 0x00000001
#define BF_PRE_STORE_ENGINE_CTRL_STORE_EN(v)  \
	(((v) << 0) & BM_PRE_STORE_ENGINE_CTRL_STORE_EN)
#define BV_PRE_STORE_ENGINE_CTRL_STORE_EN__0 0x0
#define BV_PRE_STORE_ENGINE_CTRL_STORE_EN__1 0x1

#define HW_PRE_STORE_ENGINE_STATUS	(0x00000120)

#define BP_PRE_STORE_ENGINE_STATUS_STORE_BLOCK_Y      16
#define BM_PRE_STORE_ENGINE_STATUS_STORE_BLOCK_Y 0x3FFF0000
#define BF_PRE_STORE_ENGINE_STATUS_STORE_BLOCK_Y(v) \
	(((v) << 16) & BM_PRE_STORE_ENGINE_STATUS_STORE_BLOCK_Y)
#define BP_PRE_STORE_ENGINE_STATUS_STORE_BLOCK_X      0
#define BM_PRE_STORE_ENGINE_STATUS_STORE_BLOCK_X 0x0000FFFF
#define BF_PRE_STORE_ENGINE_STATUS_STORE_BLOCK_X(v)  \
	(((v) << 0) & BM_PRE_STORE_ENGINE_STATUS_STORE_BLOCK_X)

#define HW_PRE_STORE_ENGINE_SIZE	(0x00000130)

#define BP_PRE_STORE_ENGINE_SIZE_INPUT_TOTAL_HEIGHT      16
#define BM_PRE_STORE_ENGINE_SIZE_INPUT_TOTAL_HEIGHT 0xFFFF0000
#define BF_PRE_STORE_ENGINE_SIZE_INPUT_TOTAL_HEIGHT(v) \
	(((v) << 16) & BM_PRE_STORE_ENGINE_SIZE_INPUT_TOTAL_HEIGHT)
#define BP_PRE_STORE_ENGINE_SIZE_INPUT_TOTAL_WIDTH      0
#define BM_PRE_STORE_ENGINE_SIZE_INPUT_TOTAL_WIDTH 0x0000FFFF
#define BF_PRE_STORE_ENGINE_SIZE_INPUT_TOTAL_WIDTH(v)  \
	(((v) << 0) & BM_PRE_STORE_ENGINE_SIZE_INPUT_TOTAL_WIDTH)

#define HW_PRE_STORE_ENGINE_PITCH	(0x00000140)

#define BP_PRE_STORE_ENGINE_PITCH_RSVD0      16
#define BM_PRE_STORE_ENGINE_PITCH_RSVD0 0xFFFF0000
#define BF_PRE_STORE_ENGINE_PITCH_RSVD0(v) \
	(((v) << 16) & BM_PRE_STORE_ENGINE_PITCH_RSVD0)
#define BP_PRE_STORE_ENGINE_PITCH_OUT_PITCH      0
#define BM_PRE_STORE_ENGINE_PITCH_OUT_PITCH 0x0000FFFF
#define BF_PRE_STORE_ENGINE_PITCH_OUT_PITCH(v)  \
	(((v) << 0) & BM_PRE_STORE_ENGINE_PITCH_OUT_PITCH)

#define HW_PRE_STORE_ENGINE_ADDR	(0x00000150)

#define BP_PRE_STORE_ENGINE_ADDR_OUT_BASE_ADDR      0
#define BM_PRE_STORE_ENGINE_ADDR_OUT_BASE_ADDR 0xFFFFFFFF
#define BF_PRE_STORE_ENGINE_ADDR_OUT_BASE_ADDR(v)   (v)
#endif /* __ARCH_ARM___PRE_H */
