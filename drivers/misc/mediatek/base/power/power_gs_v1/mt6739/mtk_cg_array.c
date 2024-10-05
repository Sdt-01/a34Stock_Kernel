/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Copyright (c) 2019 MediaTek Inc.
*/

/* This file is generated by GenLP_setting.pl v1.5.7 */

#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>

const unsigned int AP_CG_Golden_Setting_tcl_gs_dpidle_data[] = {
 /* Address     Mask        Golden Setting Value */
	0x10001074, 0x00000004, 0x00000000,/* PERI_BUS_DCM_CTRL */
	0x10001080, 0x9BFFFF6F, 0x9BFFFF60,/* MODULE_SW_CG_0_SET */
	0x10001084, 0x9BFFFF6F, 0x00100220,/* MODULE_SW_CG_0_CLR */
	0x10001088, 0x9F9F7FD6, 0x1B9F0BD6,/* MODULE_SW_CG_1_SET */
	0x1000108C, 0x1D9F7FD6, 0x01180B80,/* MODULE_SW_CG_1_CLR */
	0x100010A4, 0x0FFC07DD, 0x0FFC07DD,/* MODULE_SW_CG_2_SET */
	0x100010A8, 0x0FFC07DD, 0x00000000,/* MODULE_SW_CG_2_CLR */
	0x100010C0, 0x00000FFF, 0x00000FFF,/* MODULE_SW_CG_3_SET */
	0x100010C4, 0x00000FFF, 0x00000000,/* MODULE_SW_CG_3_CLR */
	0x1000320C, 0x80000000, 0x00000000,/* PERIAXI_SI0_CTL */
	0x1000C00C, 0x007E666F, 0x007C4440,/* AP_PLL_CON3 */
	0x1000C010, 0x00003406, 0x00002404,/* AP_PLL_CON4 */
	0x1000C020, 0x00036BF0, 0x000022A0,/* AP_PLL_CON8 */
	0x1000C200, 0x01000001, 0x01000001,/* ARMPLL_LL_CON0 */
	0x1000C20C, 0x00000003, 0x00000001,/* ARMPLL_LL_PWR_CON0 */
	0x1000C220, 0x01000001, 0x00000000,/* MAINPLL_CON0 */
	0x1000C22C, 0x00000003, 0x00000002,/* MAINPLL_PWR_CON0 */
	0x1000C230, 0x01000001, 0x00000000,/* UNIVPLL_CON0 */
	0x1000C23C, 0x00000003, 0x00000002,/* UNIVPLL_PWR_CON0 */
	0x1000C240, 0x00000001, 0x00000000,/* MFGPLL_CON0 */
	0x1000C24C, 0x00000003, 0x00000002,/* MFGPLL_PWR_CON0 */
	0x1000C250, 0x00000001, 0x00000000,/* MSDCPLL_CON0 */
	0x1000C25C, 0x00000003, 0x00000002,/* MSDCPLL_PWR_CON0 */
	0x1000C270, 0x00000001, 0x00000000,/* MMPLL_CON0 */
	0x1000C27C, 0x00000003, 0x00000002,/* MMPLL_PWR_CON0 */
	0x1000C2A0, 0x00000001, 0x00000000,/* APLL1_CON0 */
	0x1000C2B0, 0x00000003, 0x00000002,/* APLL1_PWR_CON0 */
	0x10200068, 0x0000000F, 0x00000000,/* MP0_CA7L_DBG_PWR_CTRL */
	0x102280F0, 0xFFFF0000, 0xFFFF0000,/* GCE_CTL_INT0 */
	0x11220000, 0x0F080104, 0x0F080104,/* AUDIO_TOP_CON0 */
	0x11220004, 0x000000F0, 0x000000F0,/* AUDIO_TOP_CON1 */
	0x14000100, 0xFFFFFFFF, 0xFFFFFFFF,/* MMSYS_CG_CON0 */
	0x15000000, 0x00000FE1, 0x00000FE1,/* IMG_CG_CON */
	0x17000000, 0x00001111, 0x00000000,/* VCODECSYS_CG_CON */
	0x17000004, 0x00001111, 0x00000000,/* VCODECSYS_CG_SET */
	0x17000008, 0x00001111, 0x00001111 /* VCODECSYS_CG_CLR */
};

const unsigned int *AP_CG_Golden_Setting_tcl_gs_dpidle = AP_CG_Golden_Setting_tcl_gs_dpidle_data;

unsigned int AP_CG_Golden_Setting_tcl_gs_dpidle_len = 108;

const unsigned int AP_CG_Golden_Setting_tcl_gs_suspend_data[] = {
 /* Address     Mask        Golden Setting Value */
	0x10001074, 0x00000004, 0x00000000,/* PERI_BUS_DCM_CTRL */
	0x10001080, 0x9BFFFF6F, 0x9BFFFF60,/* MODULE_SW_CG_0_SET */
	0x10001084, 0x9BFFFF6F, 0x00100220,/* MODULE_SW_CG_0_CLR */
	0x10001088, 0x9F9F7FD6, 0x1B9F0BD6,/* MODULE_SW_CG_1_SET */
	0x1000108C, 0x1D9F7FD6, 0x01180B80,/* MODULE_SW_CG_1_CLR */
	0x100010A4, 0x0FFC07DD, 0x0FFC07DD,/* MODULE_SW_CG_2_SET */
	0x100010A8, 0x0FFC07DD, 0x00000000,/* MODULE_SW_CG_2_CLR */
	0x100010C0, 0x00000FFF, 0x00000FFF,/* MODULE_SW_CG_3_SET */
	0x100010C4, 0x00000FFF, 0x00000000,/* MODULE_SW_CG_3_CLR */
	0x1000320C, 0x80000000, 0x00000000,/* PERIAXI_SI0_CTL */
	0x1000C00C, 0x007E666F, 0x007C4440,/* AP_PLL_CON3 */
	0x1000C010, 0x00003406, 0x00002404,/* AP_PLL_CON4 */
	0x1000C020, 0x00036BF0, 0x000020A0,/* AP_PLL_CON8 */
	0x1000C200, 0x01000001, 0x01000001,/* ARMPLL_LL_CON0 */
	0x1000C20C, 0x00000003, 0x00000001,/* ARMPLL_LL_PWR_CON0 */
	0x1000C220, 0x01000001, 0x00000000,/* MAINPLL_CON0 */
	0x1000C22C, 0x00000003, 0x00000002,/* MAINPLL_PWR_CON0 */
	0x1000C230, 0x01000001, 0x00000000,/* UNIVPLL_CON0 */
	0x1000C23C, 0x00000003, 0x00000002,/* UNIVPLL_PWR_CON0 */
	0x1000C240, 0x00000001, 0x00000000,/* MFGPLL_CON0 */
	0x1000C24C, 0x00000003, 0x00000002,/* MFGPLL_PWR_CON0 */
	0x1000C250, 0x00000001, 0x00000000,/* MSDCPLL_CON0 */
	0x1000C25C, 0x00000003, 0x00000002,/* MSDCPLL_PWR_CON0 */
	0x1000C270, 0x00000001, 0x00000000,/* MMPLL_CON0 */
	0x1000C27C, 0x00000003, 0x00000002,/* MMPLL_PWR_CON0 */
	0x1000C2A0, 0x00000001, 0x00000000,/* APLL1_CON0 */
	0x1000C2B0, 0x00000003, 0x00000002,/* APLL1_PWR_CON0 */
	0x10200068, 0x0000000F, 0x00000000,/* MP0_CA7L_DBG_PWR_CTRL */
	0x102280F0, 0xFFFF0000, 0xFFFF0000,/* GCE_CTL_INT0 */
	0x11220000, 0x0F080104, 0x0F080104,/* AUDIO_TOP_CON0 */
	0x11220004, 0x000000F0, 0x000000F0,/* AUDIO_TOP_CON1 */
	0x14000100, 0xFFFFFFFF, 0xFFFFFFFF,/* MMSYS_CG_CON0 */
	0x15000000, 0x00000FE1, 0x00000FE1,/* IMG_CG_CON */
	0x17000000, 0x00001111, 0x00000000,/* VCODECSYS_CG_CON */
	0x17000004, 0x00001111, 0x00000000,/* VCODECSYS_CG_SET */
	0x17000008, 0x00001111, 0x00001111 /* VCODECSYS_CG_CLR */
};

const unsigned int *AP_CG_Golden_Setting_tcl_gs_suspend = AP_CG_Golden_Setting_tcl_gs_suspend_data;

unsigned int AP_CG_Golden_Setting_tcl_gs_suspend_len = 108;

const unsigned int AP_CG_Golden_Setting_tcl_gs_vp_mjc_data[] = {
 /* Address     Mask        Golden Setting Value */
	0x14000100, 0xFFFFFFFF, 0x00000000,/* MMSYS_CG_CON0 */
};

const unsigned int *AP_CG_Golden_Setting_tcl_gs_vp_mjc = AP_CG_Golden_Setting_tcl_gs_vp_mjc_data;

unsigned int AP_CG_Golden_Setting_tcl_gs_vp_mjc_len = 3;

const unsigned int AP_CG_Golden_Setting_tcl_gs_topck_name_data[] = {
 /* Address     Mask        Golden Setting Value */
	0x10001080, 0x03FF782F, 0x00000000,/* MODULE_SW_CG_0_SET */
	0x10001084, 0x03FF782F, 0x00000000,/* MODULE_SW_CG_0_CLR */
	0x10001088, 0x800344C2, 0x00000000,/* MODULE_SW_CG_1_SET */
	0x1000108C, 0x800344C2, 0x00000000,/* MODULE_SW_CG_1_CLR */
	0x100010A4, 0x07FC07D5, 0x00000000,/* MODULE_SW_CG_2_SET */
	0x100010A8, 0x07FC07D4, 0x00000000,/* MODULE_SW_CG_2_CLR */
	0x100010C0, 0x00000FFF, 0x00000000,/* MODULE_SW_CG_3_SET */
	0x100010C4, 0x00000FFF, 0x00000000,/* MODULE_SW_CG_3_CLR */
	0x10200068, 0x0000000F, 0x00000000,/* MP0_CA7L_DBG_PWR_CTRL */
	0x11220000, 0x0F080104, 0x00000000,/* AUDIO_TOP_CON0 */
	0x11220004, 0x000000F0, 0x00000000,/* AUDIO_TOP_CON1 */
	0x14000100, 0xFFFFFFFF, 0x00000000,/* MMSYS_CG_CON0 */
	0x15000000, 0x00000FE1, 0x00000000,/* IMG_CG_CON */
	0x17000000, 0x00001111, 0x00000000,/* VCODECSYS_CG_CON */
	0x17000004, 0x00001111, 0x00000000,/* VCODECSYS_CG_SET */
	0x17000008, 0x00001111, 0x00000000 /* VCODECSYS_CG_CLR */
};

const unsigned int *AP_CG_Golden_Setting_tcl_gs_topck_name = AP_CG_Golden_Setting_tcl_gs_topck_name_data;

unsigned int AP_CG_Golden_Setting_tcl_gs_topck_name_len = 48;

const unsigned int AP_CG_Golden_Setting_tcl_gs_paging_data[] = {
 /* Address     Mask        Golden Setting Value */
	0x10001074, 0x00000004, 0x00000000,/* PERI_BUS_DCM_CTRL */
	0x10001080, 0x9BFFFF6F, 0x9BFFFF6F,/* MODULE_SW_CG_0_SET */
	0x10001084, 0x9BFFFF6F, 0x00100220,/* MODULE_SW_CG_0_CLR */
	0x10001088, 0x9F9F7FD6, 0x1B9F0BD6,/* MODULE_SW_CG_1_SET */
	0x1000108C, 0x1D9F7FD6, 0x01180B80,/* MODULE_SW_CG_1_CLR */
	0x100010A4, 0x0FFC07DD, 0x0FFC07DD,/* MODULE_SW_CG_2_SET */
	0x100010A8, 0x0FFC07DD, 0x00000000,/* MODULE_SW_CG_2_CLR */
	0x100010C0, 0x00000FFF, 0x00000FFF,/* MODULE_SW_CG_3_SET */
	0x100010C4, 0x00000FFF, 0x00000000,/* MODULE_SW_CG_3_CLR */
	0x1000320C, 0x80000000, 0x00000000,/* PERIAXI_SI0_CTL */
	0x1000C020, 0x00000200, 0x00000200,/* AP_PLL_CON8 */
	0x10200068, 0x0000000F, 0x00000000,/* MP0_CA7L_DBG_PWR_CTRL */
	0x102280F0, 0xFFFF0000, 0xFFFF0000,/* GCE_CTL_INT0 */
	0x11220000, 0x0F080104, 0x0F080104,/* AUDIO_TOP_CON0 */
	0x11220004, 0x000000F0, 0x000000F0,/* AUDIO_TOP_CON1 */
	0x14000100, 0xFFFFFFFF, 0xFFFFFFFF,/* MMSYS_CG_CON0 */
	0x15000000, 0x00000FE1, 0x00000FE1,/* IMG_CG_CON */
	0x17000000, 0x00001111, 0x00000000,/* VCODECSYS_CG_CON */
	0x17000004, 0x00001111, 0x00000000,/* VCODECSYS_CG_SET */
	0x17000008, 0x00001111, 0x00001111 /* VCODECSYS_CG_CLR */
};

const unsigned int *AP_CG_Golden_Setting_tcl_gs_paging = AP_CG_Golden_Setting_tcl_gs_paging_data;

unsigned int AP_CG_Golden_Setting_tcl_gs_paging_len = 60;

const unsigned int AP_CG_Golden_Setting_tcl_gs_mp3_play_data[] = {
 /* Address     Mask        Golden Setting Value */
	0x10001074, 0x00000004, 0x00000000,/* PERI_BUS_DCM_CTRL */
	0x10001080, 0x9BFFFF6F, 0x9BFFFF6F,/* MODULE_SW_CG_0_SET */
	0x10001084, 0x9BFFFF6F, 0x00100220,/* MODULE_SW_CG_0_CLR */
	0x10001088, 0x9F9F7FD6, 0x1B9F0BD6,/* MODULE_SW_CG_1_SET */
	0x1000108C, 0x1D9F7FD6, 0x01180B80,/* MODULE_SW_CG_1_CLR */
	0x100010A4, 0x0FFC07DD, 0x0FFC07DD,/* MODULE_SW_CG_2_SET */
	0x100010A8, 0x0FFC07DD, 0x00000000,/* MODULE_SW_CG_2_CLR */
	0x100010C0, 0x00000FFF, 0x00000FFF,/* MODULE_SW_CG_3_SET */
	0x100010C4, 0x00000FFF, 0x00000000,/* MODULE_SW_CG_3_CLR */
	0x1000320C, 0x80000000, 0x00000000,/* PERIAXI_SI0_CTL */
	0x1000C020, 0x00000200, 0x00000200,/* AP_PLL_CON8 */
	0x10200068, 0x0000000F, 0x00000000,/* MP0_CA7L_DBG_PWR_CTRL */
	0x102280F0, 0xFFFF0000, 0xFFFF0000,/* GCE_CTL_INT0 */
	0x11220000, 0x0F080104, 0x09080100,/* AUDIO_TOP_CON0 */
	0x11220004, 0x000000F0, 0x000000F0,/* AUDIO_TOP_CON1 */
	0x14000100, 0xFFFFFFFF, 0xFFFFFFFF,/* MMSYS_CG_CON0 */
	0x15000000, 0x00000FE1, 0x00000FE1,/* IMG_CG_CON */
	0x17000000, 0x00001111, 0x00000000,/* VCODECSYS_CG_CON */
	0x17000004, 0x00001111, 0x00000000,/* VCODECSYS_CG_SET */
	0x17000008, 0x00001111, 0x00001111 /* VCODECSYS_CG_CLR */
};

const unsigned int *AP_CG_Golden_Setting_tcl_gs_mp3_play = AP_CG_Golden_Setting_tcl_gs_mp3_play_data;

unsigned int AP_CG_Golden_Setting_tcl_gs_mp3_play_len = 60;

const unsigned int AP_CG_Golden_Setting_tcl_gs_clkon_data[] = {
 /* Address     Mask        Golden Setting Value */
	0x10001074, 0x00000004, 0x00000000,/* PERI_BUS_DCM_CTRL */
	0x10001080, 0x9BFFFF6F, 0x00000020,/* MODULE_SW_CG_0_SET */
	0x10001084, 0x9BFFFF6F, 0x9BEFFD6F,/* MODULE_SW_CG_0_CLR */
	0x10001088, 0x9F9F7FD6, 0x01000A00,/* MODULE_SW_CG_1_SET */
	0x1000108C, 0x9F9F7FD6, 0x9F9F3FD6,/* MODULE_SW_CG_1_CLR */
	0x100010A4, 0x0FFC07DD, 0x00000000,/* MODULE_SW_CG_2_SET */
	0x100010A8, 0x0FFC07DD, 0x0FFC07DD,/* MODULE_SW_CG_2_CLR */
	0x100010C0, 0x00000FFF, 0x00000000,/* MODULE_SW_CG_3_SET */
	0x100010C4, 0x00000FFF, 0x00000FFF,/* MODULE_SW_CG_3_CLR */
	0x1000320C, 0x80000000, 0x80000000,/* PERIAXI_SI0_CTL */
	0x1000C00C, 0x007E666F, 0x007E666F,/* AP_PLL_CON3 */
	0x1000C010, 0x00003606, 0x00002006,/* AP_PLL_CON4 */
	0x1000C020, 0x00036BF0, 0x00016BF0,/* AP_PLL_CON8 */
	0x1000C200, 0x01000001, 0x01000001,/* ARMPLL_LL_CON0 */
	0x1000C20C, 0x00000003, 0x00000001,/* ARMPLL_LL_PWR_CON0 */
	0x1000C220, 0x01000001, 0x01000001,/* MAINPLL_CON0 */
	0x1000C22C, 0x00000003, 0x00000001,/* MAINPLL_PWR_CON0 */
	0x1000C230, 0x01000001, 0x01000001,/* UNIVPLL_CON0 */
	0x1000C23C, 0x00000003, 0x00000001,/* UNIVPLL_PWR_CON0 */
	0x1000C240, 0x00000001, 0x00000001,/* MFGPLL_CON0 */
	0x1000C24C, 0x00000003, 0x00000001,/* MFGPLL_PWR_CON0 */
	0x1000C250, 0x00000001, 0x00000001,/* MSDCPLL_CON0 */
	0x1000C25C, 0x00000003, 0x00000001,/* MSDCPLL_PWR_CON0 */
	0x1000C270, 0x00000001, 0x00000001,/* MMPLL_CON0 */
	0x1000C27C, 0x00000003, 0x00000001,/* MMPLL_PWR_CON0 */
	0x1000C2A0, 0x00000001, 0x00000001,/* APLL1_CON0 */
	0x1000C2B0, 0x00000003, 0x00000001,/* APLL1_PWR_CON0 */
	0x10200068, 0x0000000F, 0x00000001,/* MP0_CA7L_DBG_PWR_CTRL */
	0x102280F0, 0xFFFF0000, 0x00000000,/* GCE_CTL_INT0 */
	0x11220000, 0x0F080104, 0x00000000,/* AUDIO_TOP_CON0 */
	0x11220004, 0x000000F0, 0x00000000,/* AUDIO_TOP_CON1 */
	0x14000100, 0xFFFFFFFF, 0x00000000,/* MMSYS_CG_CON0 */
	0x15000000, 0x00000FE1, 0x00000000,/* IMG_CG_CON */
	0x17000000, 0x00001111, 0x00001111,/* VCODECSYS_CG_CON */
	0x17000004, 0x00001111, 0x00001111,/* VCODECSYS_CG_SET */
	0x17000008, 0x00001111, 0x00000000 /* VCODECSYS_CG_CLR */
};

const unsigned int *AP_CG_Golden_Setting_tcl_gs_clkon = AP_CG_Golden_Setting_tcl_gs_clkon_data;

unsigned int AP_CG_Golden_Setting_tcl_gs_clkon_len = 108;

const unsigned int AP_CG_Golden_Setting_tcl_gs_dcm_off_data[] = {
 /* Address     Mask        Golden Setting Value */
	0x10001074, 0x00000004, 0x00000000,/* PERI_BUS_DCM_CTRL */
	0x10200068, 0x0000000F, 0x0000000F,/* MP0_CA7L_DBG_PWR_CTRL */
	0x102280F0, 0xFFFF0000, 0x00000000,/* GCE_CTL_INT0 */
	0x17000000, 0x00001111, 0x00001111,/* VCODECSYS_CG_CON */
	0x17000004, 0x00001111, 0x00001111,/* VCODECSYS_CG_SET */
	0x17000008, 0x00001111, 0x00000000 /* VCODECSYS_CG_CLR */
};

const unsigned int *AP_CG_Golden_Setting_tcl_gs_dcm_off = AP_CG_Golden_Setting_tcl_gs_dcm_off_data;

unsigned int AP_CG_Golden_Setting_tcl_gs_dcm_off_len = 18;

const unsigned int AP_CG_Golden_Setting_tcl_gs_vr_data[] = {
 /* Address     Mask        Golden Setting Value */
	0x10001074, 0x00000004, 0x00000000,/* PERI_BUS_DCM_CTRL */
	0x10001080, 0x9BFFFF6F, 0x9BFFFF6F,/* MODULE_SW_CG_0_SET */
	0x10001084, 0x9BFFFF6F, 0x00100220,/* MODULE_SW_CG_0_CLR */
	0x10001088, 0x9F9F7FD6, 0x1B9F0BD6,/* MODULE_SW_CG_1_SET */
	0x1000108C, 0x1D9F7FD6, 0x01180B80,/* MODULE_SW_CG_1_CLR */
	0x100010A4, 0x0FFC07DD, 0x0FFC07D9,/* MODULE_SW_CG_2_SET */
	0x100010A8, 0x0FFC07DD, 0x00000000,/* MODULE_SW_CG_2_CLR */
	0x100010C0, 0x00000FFF, 0x00000FFF,/* MODULE_SW_CG_3_SET */
	0x100010C4, 0x00000FFF, 0x00000000,/* MODULE_SW_CG_3_CLR */
	0x1000320C, 0x80000000, 0x00000000,/* PERIAXI_SI0_CTL */
	0x1000C020, 0x00000200, 0x00000200,/* AP_PLL_CON8 */
	0x10200068, 0x0000000F, 0x00000000,/* MP0_CA7L_DBG_PWR_CTRL */
	0x102280F0, 0xFFFF0000, 0x00000000,/* GCE_CTL_INT0 */
	0x11220000, 0x0F080104, 0x08080100,/* AUDIO_TOP_CON0 */
	0x11220004, 0x000000F0, 0x000000F0,/* AUDIO_TOP_CON1 */
	0x14000100, 0xFFFFFFFF, 0x00000000,/* MMSYS_CG_CON0 */
	0x15000000, 0x00000FE1, 0x00000000,/* IMG_CG_CON */
	0x17000000, 0x00001111, 0x00001111,/* VCODECSYS_CG_CON */
	0x17000004, 0x00001111, 0x00001111,/* VCODECSYS_CG_SET */
	0x17000008, 0x00001111, 0x00000000 /* VCODECSYS_CG_CLR */
};

const unsigned int *AP_CG_Golden_Setting_tcl_gs_vr = AP_CG_Golden_Setting_tcl_gs_vr_data;

unsigned int AP_CG_Golden_Setting_tcl_gs_vr_len = 60;

const unsigned int AP_CG_Golden_Setting_tcl_gs_vp_data[] = {
 /* Address     Mask        Golden Setting Value */
	0x10001074, 0x00000004, 0x00000000,/* PERI_BUS_DCM_CTRL */
	0x10001080, 0x9BFFFF6F, 0x9BFFFF6F,/* MODULE_SW_CG_0_SET */
	0x10001084, 0x9BFFFF6F, 0x00100220,/* MODULE_SW_CG_0_CLR */
	0x10001088, 0x9F9F7FD6, 0x1B9F0BD6,/* MODULE_SW_CG_1_SET */
	0x1000108C, 0x1D9F7FD6, 0x01180B80,/* MODULE_SW_CG_1_CLR */
	0x100010A4, 0x0FFC07DD, 0x0FFC07D9,/* MODULE_SW_CG_2_SET */
	0x100010A8, 0x0FFC07DD, 0x00000000,/* MODULE_SW_CG_2_CLR */
	0x100010C0, 0x00000FFF, 0x00000FFF,/* MODULE_SW_CG_3_SET */
	0x100010C4, 0x00000FFF, 0x00000000,/* MODULE_SW_CG_3_CLR */
	0x1000320C, 0x80000000, 0x00000000,/* PERIAXI_SI0_CTL */
	0x1000C020, 0x00000200, 0x00000200,/* AP_PLL_CON8 */
	0x10200068, 0x0000000F, 0x00000000,/* MP0_CA7L_DBG_PWR_CTRL */
	0x102280F0, 0xFFFF0000, 0x00000000,/* GCE_CTL_INT0 */
	0x11220000, 0x0F080104, 0x09080100,/* AUDIO_TOP_CON0 */
	0x11220004, 0x000000F0, 0x000000F0,/* AUDIO_TOP_CON1 */
	0x14000100, 0xFFFFFFFF, 0x00000000,/* MMSYS_CG_CON0 */
	0x15000000, 0x00000FE1, 0x00000FE1,/* IMG_CG_CON */
	0x17000000, 0x00001111, 0x00000000,/* VCODECSYS_CG_CON */
	0x17000004, 0x00001111, 0x00000000,/* VCODECSYS_CG_SET */
	0x17000008, 0x00001111, 0x00001111 /* VCODECSYS_CG_CLR */
};

const unsigned int *AP_CG_Golden_Setting_tcl_gs_vp = AP_CG_Golden_Setting_tcl_gs_vp_data;

unsigned int AP_CG_Golden_Setting_tcl_gs_vp_len = 60;

const unsigned int AP_CG_Golden_Setting_tcl_gs_access_data[] = {
 /* Address     Mask        Golden Setting Value */
	0x10001074, 0x00000000, 0x00000000,/* PERI_BUS_DCM_CTRL */
	0x10001080, 0x00000000, 0x00000000,/* MODULE_SW_CG_0_SET */
	0x10001084, 0x00000000, 0x00000000,/* MODULE_SW_CG_0_CLR */
	0x10001088, 0x00000000, 0x00000000,/* MODULE_SW_CG_1_SET */
	0x1000108C, 0x00000000, 0x00000000,/* MODULE_SW_CG_1_CLR */
	0x100010A4, 0x00000000, 0x00000000,/* MODULE_SW_CG_2_SET */
	0x100010A8, 0x00000000, 0x00000000,/* MODULE_SW_CG_2_CLR */
	0x100010C0, 0x00000000, 0x00000000,/* MODULE_SW_CG_3_SET */
	0x100010C4, 0x00000000, 0x00000000,/* MODULE_SW_CG_3_CLR */
	0x1000320C, 0x00000000, 0x00000000,/* PERIAXI_SI0_CTL */
	0x1000C00C, 0x00000000, 0x00000000,/* AP_PLL_CON3 */
	0x1000C010, 0x00000000, 0x00000000,/* AP_PLL_CON4 */
	0x1000C020, 0x00000000, 0x00000000,/* AP_PLL_CON8 */
	0x1000C200, 0x00000000, 0x00000000,/* ARMPLL_LL_CON0 */
	0x1000C20C, 0x00000000, 0x00000000,/* ARMPLL_LL_PWR_CON0 */
	0x1000C220, 0x00000000, 0x00000000,/* MAINPLL_CON0 */
	0x1000C22C, 0x00000000, 0x00000000,/* MAINPLL_PWR_CON0 */
	0x1000C230, 0x00000000, 0x00000000,/* UNIVPLL_CON0 */
	0x1000C23C, 0x00000000, 0x00000000,/* UNIVPLL_PWR_CON0 */
	0x1000C240, 0x00000000, 0x00000000,/* MFGPLL_CON0 */
	0x1000C24C, 0x00000000, 0x00000000,/* MFGPLL_PWR_CON0 */
	0x1000C250, 0x00000000, 0x00000000,/* MSDCPLL_CON0 */
	0x1000C25C, 0x00000000, 0x00000000,/* MSDCPLL_PWR_CON0 */
	0x1000C270, 0x00000000, 0x00000000,/* MMPLL_CON0 */
	0x1000C27C, 0x00000000, 0x00000000,/* MMPLL_PWR_CON0 */
	0x1000C2A0, 0x00000000, 0x00000000,/* APLL1_CON0 */
	0x1000C2B0, 0x00000000, 0x00000000,/* APLL1_PWR_CON0 */
	0x10200068, 0x00000000, 0x00000000,/* MP0_CA7L_DBG_PWR_CTRL */
	0x102280F0, 0x00000000, 0x00000000,/* GCE_CTL_INT0 */
	0x11220000, 0x00000000, 0x00000000,/* AUDIO_TOP_CON0 */
	0x11220004, 0x00000000, 0x00000000,/* AUDIO_TOP_CON1 */
	0x14000100, 0x00000000, 0x00000000,/* MMSYS_CG_CON0 */
	0x15000000, 0x00000000, 0x00000000,/* IMG_CG_CON */
	0x17000000, 0x00000000, 0x00000000,/* VCODECSYS_CG_CON */
	0x17000004, 0x00000000, 0x00000000,/* VCODECSYS_CG_SET */
	0x17000008, 0x00000000, 0x00000000 /* VCODECSYS_CG_CLR */
};

const unsigned int *AP_CG_Golden_Setting_tcl_gs_access = AP_CG_Golden_Setting_tcl_gs_access_data;

unsigned int AP_CG_Golden_Setting_tcl_gs_access_len = 108;

const unsigned int AP_CG_Golden_Setting_tcl_gs_pdn_ao_data[] = {
 /* Address     Mask        Golden Setting Value */
	0x1000320C, 0x80000000, 0x00000000,/* PERIAXI_SI0_CTL */
	0x1000C00C, 0x007E666F, 0x00000000,/* AP_PLL_CON3 */
	0x1000C010, 0x00003606, 0x00000000,/* AP_PLL_CON4 */
	0x1000C020, 0x00036BF0, 0x00000000,/* AP_PLL_CON8 */
	0x1000C200, 0x01000001, 0x00000000,/* ARMPLL_LL_CON0 */
	0x1000C20C, 0x00000003, 0x00000000,/* ARMPLL_LL_PWR_CON0 */
	0x1000C220, 0x01000001, 0x00000000,/* MAINPLL_CON0 */
	0x1000C22C, 0x00000003, 0x00000000,/* MAINPLL_PWR_CON0 */
	0x1000C230, 0x01000001, 0x00000000,/* UNIVPLL_CON0 */
	0x1000C23C, 0x00000003, 0x00000000,/* UNIVPLL_PWR_CON0 */
	0x1000C240, 0x00000001, 0x00000000,/* MFGPLL_CON0 */
	0x1000C24C, 0x00000003, 0x00000000,/* MFGPLL_PWR_CON0 */
	0x1000C250, 0x00000001, 0x00000000,/* MSDCPLL_CON0 */
	0x1000C25C, 0x00000003, 0x00000000,/* MSDCPLL_PWR_CON0 */
	0x1000C270, 0x00000001, 0x00000000,/* MMPLL_CON0 */
	0x1000C27C, 0x00000003, 0x00000000,/* MMPLL_PWR_CON0 */
	0x1000C2A0, 0x00000001, 0x00000000,/* APLL1_CON0 */
	0x1000C2B0, 0x00000003, 0x00000000,/* APLL1_PWR_CON0 */
	0x14000100, 0xFFFFFFFF, 0x00000000,/* MMSYS_CG_CON0 */
};

const unsigned int *AP_CG_Golden_Setting_tcl_gs_pdn_ao = AP_CG_Golden_Setting_tcl_gs_pdn_ao_data;

unsigned int AP_CG_Golden_Setting_tcl_gs_pdn_ao_len = 57;

const unsigned int AP_CG_Golden_Setting_tcl_gs_idle_data[] = {
 /* Address     Mask        Golden Setting Value */
	0x10001074, 0x00000004, 0x00000000,/* PERI_BUS_DCM_CTRL */
	0x10001080, 0x9BFFFF6F, 0x9BFFFF60,/* MODULE_SW_CG_0_SET */
	0x10001084, 0x9BFFFF6F, 0x00100220,/* MODULE_SW_CG_0_CLR */
	0x10001088, 0x9F9F7FD6, 0x1B9F0BD6,/* MODULE_SW_CG_1_SET */
	0x1000108C, 0x1D9F7FD6, 0x01180B80,/* MODULE_SW_CG_1_CLR */
	0x100010A4, 0x0FFC07DD, 0x0FFC07DD,/* MODULE_SW_CG_2_SET */
	0x100010A8, 0x0FFC07DD, 0x00000000,/* MODULE_SW_CG_2_CLR */
	0x100010C0, 0x00000FFF, 0x00000FFF,/* MODULE_SW_CG_3_SET */
	0x100010C4, 0x00000FFF, 0x00000000,/* MODULE_SW_CG_3_CLR */
	0x1000320C, 0x80000000, 0x00000000,/* PERIAXI_SI0_CTL */
	0x1000C00C, 0x007E666F, 0x0006666F,/* AP_PLL_CON3 */
	0x1000C010, 0x00002406, 0x00000406,/* AP_PLL_CON4 */
	0x1000C020, 0x00036BF0, 0x000022A0,/* AP_PLL_CON8 */
	0x1000C200, 0x01000001, 0x01000001,/* ARMPLL_LL_CON0 */
	0x1000C20C, 0x00000003, 0x00000001,/* ARMPLL_LL_PWR_CON0 */
	0x1000C220, 0x01000001, 0x01000001,/* MAINPLL_CON0 */
	0x1000C22C, 0x00000003, 0x00000001,/* MAINPLL_PWR_CON0 */
	0x1000C230, 0x01000001, 0x00000000,/* UNIVPLL_CON0 */
	0x1000C23C, 0x00000003, 0x00000002,/* UNIVPLL_PWR_CON0 */
	0x1000C240, 0x00000001, 0x00000000,/* MFGPLL_CON0 */
	0x1000C24C, 0x00000003, 0x00000002,/* MFGPLL_PWR_CON0 */
	0x1000C250, 0x00000001, 0x00000000,/* MSDCPLL_CON0 */
	0x1000C25C, 0x00000003, 0x00000002,/* MSDCPLL_PWR_CON0 */
	0x1000C270, 0x00000001, 0x00000000,/* MMPLL_CON0 */
	0x1000C27C, 0x00000003, 0x00000002,/* MMPLL_PWR_CON0 */
	0x1000C2A0, 0x00000001, 0x00000000,/* APLL1_CON0 */
	0x1000C2B0, 0x00000003, 0x00000002,/* APLL1_PWR_CON0 */
	0x10200068, 0x0000000F, 0x00000000,/* MP0_CA7L_DBG_PWR_CTRL */
	0x102280F0, 0xFFFF0000, 0xFFFF0000,/* GCE_CTL_INT0 */
	0x11220000, 0x0F080104, 0x0F080104,/* AUDIO_TOP_CON0 */
	0x11220004, 0x000000F0, 0x000000F0,/* AUDIO_TOP_CON1 */
	0x14000100, 0xFFFFFFFF, 0xFFFFFFFF,/* MMSYS_CG_CON0 */
	0x15000000, 0x00000FE1, 0x00000FE1,/* IMG_CG_CON */
	0x17000000, 0x00001111, 0x00000000,/* VCODECSYS_CG_CON */
	0x17000004, 0x00001111, 0x00000000,/* VCODECSYS_CG_SET */
	0x17000008, 0x00001111, 0x00001111 /* VCODECSYS_CG_CLR */
};

const unsigned int *AP_CG_Golden_Setting_tcl_gs_idle = AP_CG_Golden_Setting_tcl_gs_idle_data;

unsigned int AP_CG_Golden_Setting_tcl_gs_idle_len = 108;

const unsigned int AP_CG_Golden_Setting_tcl_gs_talk_data[] = {
 /* Address     Mask        Golden Setting Value */
	0x10001074, 0x00000004, 0x00000000,/* PERI_BUS_DCM_CTRL */
	0x10001080, 0x9BFFFF6F, 0x9BFFFF6F,/* MODULE_SW_CG_0_SET */
	0x10001084, 0x9BFFFF6F, 0x00100220,/* MODULE_SW_CG_0_CLR */
	0x10001088, 0x9F9F7FD6, 0x1B9F0BD6,/* MODULE_SW_CG_1_SET */
	0x1000108C, 0x1D9F7FD6, 0x01180B80,/* MODULE_SW_CG_1_CLR */
	0x100010A4, 0x0FFC07DD, 0x0FFC07DD,/* MODULE_SW_CG_2_SET */
	0x100010A8, 0x0FFC07DD, 0x00000000,/* MODULE_SW_CG_2_CLR */
	0x100010C0, 0x00000FFF, 0x00000FFF,/* MODULE_SW_CG_3_SET */
	0x100010C4, 0x00000FFF, 0x00000000,/* MODULE_SW_CG_3_CLR */
	0x1000320C, 0x80000000, 0x00000000,/* PERIAXI_SI0_CTL */
	0x1000C020, 0x00000200, 0x00000200,/* AP_PLL_CON8 */
	0x10200068, 0x0000000F, 0x00000000,/* MP0_CA7L_DBG_PWR_CTRL */
	0x102280F0, 0xFFFF0000, 0x00000000,/* GCE_CTL_INT0 */
	0x11220000, 0x0F080104, 0x08080100,/* AUDIO_TOP_CON0 */
	0x11220004, 0x000000F0, 0x000000F0,/* AUDIO_TOP_CON1 */
	0x14000100, 0xFFFFFFFF, 0xFFFFFFFF,/* MMSYS_CG_CON0 */
	0x15000000, 0x00000FE1, 0x00000FE1,/* IMG_CG_CON */
	0x17000000, 0x00001111, 0x00000000,/* VCODECSYS_CG_CON */
	0x17000004, 0x00001111, 0x00000000,/* VCODECSYS_CG_SET */
	0x17000008, 0x00001111, 0x00001111 /* VCODECSYS_CG_CLR */
};

const unsigned int *AP_CG_Golden_Setting_tcl_gs_talk = AP_CG_Golden_Setting_tcl_gs_talk_data;

unsigned int AP_CG_Golden_Setting_tcl_gs_talk_len = 60;

const unsigned int AP_CG_Golden_Setting_tcl_gs_connsys_data[] = {
 /* Address     Mask        Golden Setting Value */
	0x10001074, 0x00000004, 0x00000000,/* PERI_BUS_DCM_CTRL */
	0x10001080, 0x9BFFFF6F, 0x9BFFFF6F,/* MODULE_SW_CG_0_SET */
	0x10001084, 0x9BFFFF6F, 0x00100220,/* MODULE_SW_CG_0_CLR */
	0x10001088, 0x9F9F7FD6, 0x1B9F0BD6,/* MODULE_SW_CG_1_SET */
	0x1000108C, 0x1D9F7FD6, 0x01180B80,/* MODULE_SW_CG_1_CLR */
	0x100010A4, 0x0FFC07DD, 0x0FFC07DD,/* MODULE_SW_CG_2_SET */
	0x100010A8, 0x0FFC07DD, 0x00000000,/* MODULE_SW_CG_2_CLR */
	0x100010C0, 0x00000FFF, 0x00000FFF,/* MODULE_SW_CG_3_SET */
	0x100010C4, 0x00000FFF, 0x00000000,/* MODULE_SW_CG_3_CLR */
	0x1000320C, 0x80000000, 0x00000000,/* PERIAXI_SI0_CTL */
	0x1000C020, 0x00000200, 0x00000200,/* AP_PLL_CON8 */
	0x10200068, 0x0000000F, 0x00000000,/* MP0_CA7L_DBG_PWR_CTRL */
	0x102280F0, 0xFFFF0000, 0xFFFF0000,/* GCE_CTL_INT0 */
	0x11220000, 0x0F080104, 0x0F080104,/* AUDIO_TOP_CON0 */
	0x11220004, 0x000000F0, 0x000000F0,/* AUDIO_TOP_CON1 */
	0x14000100, 0xFFFFFFFF, 0xFFFFFFFF,/* MMSYS_CG_CON0 */
	0x15000000, 0x00000FE1, 0x00000FE1,/* IMG_CG_CON */
	0x17000000, 0x00001111, 0x00000000,/* VCODECSYS_CG_CON */
	0x17000004, 0x00001111, 0x00000000,/* VCODECSYS_CG_SET */
	0x17000008, 0x00001111, 0x00001111 /* VCODECSYS_CG_CLR */
};

const unsigned int *AP_CG_Golden_Setting_tcl_gs_connsys = AP_CG_Golden_Setting_tcl_gs_connsys_data;

unsigned int AP_CG_Golden_Setting_tcl_gs_connsys_len = 60;

const unsigned int AP_CG_Golden_Setting_tcl_gs_sodi_data[] = {
 /* Address     Mask        Golden Setting Value */
	0x14000100, 0xFFFFFFFF, 0x00000000,/* MMSYS_CG_CON0 */
};

const unsigned int *AP_CG_Golden_Setting_tcl_gs_sodi = AP_CG_Golden_Setting_tcl_gs_sodi_data;

unsigned int AP_CG_Golden_Setting_tcl_gs_sodi_len = 3;

const unsigned int AP_CG_Golden_Setting_tcl_gs_datalink_data[] = {
 /* Address     Mask        Golden Setting Value */
	0x10001074, 0x00000004, 0x00000000,/* PERI_BUS_DCM_CTRL */
	0x10001080, 0x9BFFFF6F, 0x9BFFFF6F,/* MODULE_SW_CG_0_SET */
	0x10001084, 0x9BFFFF6F, 0x00100220,/* MODULE_SW_CG_0_CLR */
	0x10001088, 0x9F9F7FD6, 0x1B9F0BD6,/* MODULE_SW_CG_1_SET */
	0x1000108C, 0x1D9F7FD6, 0x01180B80,/* MODULE_SW_CG_1_CLR */
	0x100010A4, 0x0FFC07DD, 0x0FFC07DD,/* MODULE_SW_CG_2_SET */
	0x100010A8, 0x0FFC07DD, 0x00000000,/* MODULE_SW_CG_2_CLR */
	0x100010C0, 0x00000FFF, 0x00000FFF,/* MODULE_SW_CG_3_SET */
	0x100010C4, 0x00000FFF, 0x00000000,/* MODULE_SW_CG_3_CLR */
	0x1000320C, 0x80000000, 0x00000000,/* PERIAXI_SI0_CTL */
	0x1000C020, 0x00000200, 0x00000200,/* AP_PLL_CON8 */
	0x10200068, 0x0000000F, 0x00000000,/* MP0_CA7L_DBG_PWR_CTRL */
	0x102280F0, 0xFFFF0000, 0xFFFF0000,/* GCE_CTL_INT0 */
	0x11220000, 0x0F080104, 0x0F080104,/* AUDIO_TOP_CON0 */
	0x11220004, 0x000000F0, 0x000000F0,/* AUDIO_TOP_CON1 */
	0x14000100, 0xFFFFFFFF, 0xFFFFFFFF,/* MMSYS_CG_CON0 */
	0x15000000, 0x00000FE1, 0x00000FE1,/* IMG_CG_CON */
	0x17000000, 0x00001111, 0x00000000,/* VCODECSYS_CG_CON */
	0x17000004, 0x00001111, 0x00000000,/* VCODECSYS_CG_SET */
	0x17000008, 0x00001111, 0x00001111 /* VCODECSYS_CG_CLR */
};

const unsigned int *AP_CG_Golden_Setting_tcl_gs_datalink = AP_CG_Golden_Setting_tcl_gs_datalink_data;

unsigned int AP_CG_Golden_Setting_tcl_gs_datalink_len = 60;

const unsigned int AP_CG_Golden_Setting_tcl_gs_flight_data[] = {
 /* Address     Mask        Golden Setting Value */
	0x10001074, 0x00000004, 0x00000000,/* PERI_BUS_DCM_CTRL */
	0x10001080, 0x9BFFFF6F, 0x9BFFFF6F,/* MODULE_SW_CG_0_SET */
	0x10001084, 0x9BFFFF6F, 0x00100220,/* MODULE_SW_CG_0_CLR */
	0x10001088, 0x9F9F7FD6, 0x1B9F0BD6,/* MODULE_SW_CG_1_SET */
	0x1000108C, 0x1D9F7FD6, 0x01180B80,/* MODULE_SW_CG_1_CLR */
	0x100010A4, 0x0FFC07DD, 0x0FFC07DD,/* MODULE_SW_CG_2_SET */
	0x100010A8, 0x0FFC07DD, 0x00000000,/* MODULE_SW_CG_2_CLR */
	0x100010C0, 0x00000FFF, 0x00000FFF,/* MODULE_SW_CG_3_SET */
	0x100010C4, 0x00000FFF, 0x00000000,/* MODULE_SW_CG_3_CLR */
	0x1000320C, 0x80000000, 0x00000000,/* PERIAXI_SI0_CTL */
	0x1000C020, 0x00000200, 0x00000200,/* AP_PLL_CON8 */
	0x10200068, 0x0000000F, 0x00000000,/* MP0_CA7L_DBG_PWR_CTRL */
	0x102280F0, 0xFFFF0000, 0xFFFF0000,/* GCE_CTL_INT0 */
	0x11220000, 0x0F080104, 0x0F080104,/* AUDIO_TOP_CON0 */
	0x11220004, 0x000000F0, 0x000000F0,/* AUDIO_TOP_CON1 */
	0x14000100, 0xFFFFFFFF, 0xFFFFFFFF,/* MMSYS_CG_CON0 */
};

const unsigned int *AP_CG_Golden_Setting_tcl_gs_flight = AP_CG_Golden_Setting_tcl_gs_flight_data;

unsigned int AP_CG_Golden_Setting_tcl_gs_flight_len = 48;
