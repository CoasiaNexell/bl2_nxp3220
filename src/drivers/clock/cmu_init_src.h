/* Copyright (C) 2018  Nexell Co., Ltd.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *  * Redistributions of source code must retain the above copyright notice,
 *    this list of conditions and the following disclaimer.
 *  * Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 *  * Neither the name of the Nexell nor the names of its contributors
 *    may be used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY <COPYRIGHT HOLDER> ''AS IS'' AND ANY
 * EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL <COPYRIGHT HOLDER> BE LIABLE FOR ANY
 * DIRECT, INDIRECT, INCIDENTAL,SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
 * ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */
#ifndef __CMU_INIT_SRC_H__
#define __CMU_INIT_SRC_H__

struct nx_clk_priv cmu_src[] = {
	CMU_INIT(SRC_SYS_0_AXI_CLK,			0, CMU_TYPE_MAINDIV,  (void*)(PHY_BASEADDR_CMU_SRC_MODULE +  0x200), 0, -1,  0),
	CMU_INIT(SRC_SYS_0_HSIF_AXI_CLK,		0, CMU_TYPE_MAINDIV,  (void*)(PHY_BASEADDR_CMU_SRC_MODULE +  0x400), 0, -1,  1),
	CMU_INIT(SRC_CPU_BACKUP_0_CLK,			0, CMU_TYPE_MAINDIV,  (void*)(PHY_BASEADDR_CMU_SRC_MODULE +  0x600), 0, -1,  2),
	CMU_INIT(SRC_CSSYS_0_HCLK_CLK,			0, CMU_TYPE_MAINDIV,  (void*)(PHY_BASEADDR_CMU_SRC_MODULE +  0x800), 0, -1,  3),
	CMU_INIT(SRC_CSSYS_0_SCAN_CLK,			0, CMU_TYPE_MAINDIV,  (void*)(PHY_BASEADDR_CMU_SRC_MODULE +  0xA00), 0, -1,  4),
	CMU_INIT(SRC_BLK_CMU_0_APB_CLK,			0, CMU_TYPE_MAINDIV,  (void*)(PHY_BASEADDR_CMU_SRC_MODULE +  0xC00), 0, -1,  5),
	CMU_INIT(SRC_VIP_PADPLACE_0_SCAN_CLK,		0, CMU_TYPE_MAINDIV,  (void*)(PHY_BASEADDR_CMU_SRC_MODULE +  0xE00), 0, -1,  6),
	CMU_INIT(SRC_PADOUT_0_AXI_CLK,			0, CMU_TYPE_MAINDIV,  (void*)(PHY_BASEADDR_CMU_SRC_MODULE + 0x1000), 0, -1,  7),
	CMU_INIT(SRC_PADOUT_1_AXI_CLK,			0, CMU_TYPE_MAINDIV,  (void*)(PHY_BASEADDR_CMU_SRC_MODULE + 0x1200), 0, -1,  8),
	CMU_INIT(SRC_PADOUT_2_AXI_CLK,			0, CMU_TYPE_MAINDIV,  (void*)(PHY_BASEADDR_CMU_SRC_MODULE + 0x1400), 0, -1,  9),
	CMU_INIT(SRC_PADOUT_3_AXI_CLK,			0, CMU_TYPE_MAINDIV,  (void*)(PHY_BASEADDR_CMU_SRC_MODULE + 0x1600), 0, -1, 10),
	CMU_INIT(SRC_PADOUT_4_AXI_CLK,			0, CMU_TYPE_MAINDIV,  (void*)(PHY_BASEADDR_CMU_SRC_MODULE + 0x1800), 0, -1, 11),
	CMU_INIT(SRC_HPM_SYS_0_HPM_CLK,			0, CMU_TYPE_MAINDIV,  (void*)(PHY_BASEADDR_CMU_SRC_MODULE + 0x1A00), 0, -1, 12),
	CMU_INIT(SRC_UART_0_CORE_CLK,			0, CMU_TYPE_MAINDIV,  (void*)(PHY_BASEADDR_CMU_SRC_MODULE + 0x1C00), 0, -1, 13),
	CMU_INIT(SRC_UART_0_APB_CLK,			0, CMU_TYPE_MAINDIV,  (void*)(PHY_BASEADDR_CMU_SRC_MODULE + 0x1E00), 0, -1, 14),
	CMU_INIT(SRC_I2S_0_SCAN_CLK,			0, CMU_TYPE_MAINDIV,  (void*)(PHY_BASEADDR_CMU_SRC_MODULE + 0x2000), 0, -1, 15),
	CMU_INIT(SRC_I2S_0_CORE_CLK,			0, CMU_TYPE_MAINDIV,  (void*)(PHY_BASEADDR_CMU_SRC_MODULE + 0x2200), 0, -1, 16),
	CMU_INIT(SRC_I2S_1_CORE_CLK,			0, CMU_TYPE_MAINDIV,  (void*)(PHY_BASEADDR_CMU_SRC_MODULE + 0x2400), 0, -1, 17),
	CMU_INIT(SRC_I2S_2_CORE_CLK,			0, CMU_TYPE_MAINDIV,  (void*)(PHY_BASEADDR_CMU_SRC_MODULE + 0x2600), 0, -1, 18),
	CMU_INIT(SRC_I2S_3_CORE_CLK,			0, CMU_TYPE_MAINDIV,  (void*)(PHY_BASEADDR_CMU_SRC_MODULE + 0x2800), 0, -1, 19),
	CMU_INIT(SRC_I2C_0_APB_CLK,			0, CMU_TYPE_MAINDIV,  (void*)(PHY_BASEADDR_CMU_SRC_MODULE + 0x2A00), 0, -1, 20),
	CMU_INIT(SRC_MP2TSI_0_SCAN_CLK,			0, CMU_TYPE_MAINDIV,  (void*)(PHY_BASEADDR_CMU_SRC_MODULE + 0x2C00), 0, -1, 21),
	CMU_INIT(SRC_SDMMC_0_SCAN_CLK,			0, CMU_TYPE_MAINDIV,  (void*)(PHY_BASEADDR_CMU_SRC_MODULE + 0x2E00), 0, -1, 22),
	CMU_INIT(SRC_SDMMC_0_CORE_CLK,			0, CMU_TYPE_MAINDIV,  (void*)(PHY_BASEADDR_CMU_SRC_MODULE + 0x3000), 0, -1, 23),
	CMU_INIT(SRC_SDMMC_1_CORE_CLK,			0, CMU_TYPE_MAINDIV,  (void*)(PHY_BASEADDR_CMU_SRC_MODULE + 0x3200), 0, -1, 24),
	CMU_INIT(SRC_SDMMC_2_CORE_CLK,			0, CMU_TYPE_MAINDIV,  (void*)(PHY_BASEADDR_CMU_SRC_MODULE + 0x3400), 0, -1, 25),
	CMU_INIT(SRC_SPI_0_APB_CLK,			0, CMU_TYPE_MAINDIV,  (void*)(PHY_BASEADDR_CMU_SRC_MODULE + 0x3600), 0, -1, 26),
	CMU_INIT(SRC_SPI_0_CORE_CLK,			0, CMU_TYPE_MAINDIV,  (void*)(PHY_BASEADDR_CMU_SRC_MODULE + 0x3800), 0, -1, 27),
	CMU_INIT(SRC_PDM_0_AXI_CLK,			0, CMU_TYPE_MAINDIV,  (void*)(PHY_BASEADDR_CMU_SRC_MODULE + 0x3A00), 0, -1, 28),
	CMU_INIT(SRC_PDM_0_CORE_CLK,			0, CMU_TYPE_MAINDIV,  (void*)(PHY_BASEADDR_CMU_SRC_MODULE + 0x3C00), 0, -1, 29),
	CMU_INIT(SRC_PWM_0_APB_CLK,			0, CMU_TYPE_MAINDIV,  (void*)(PHY_BASEADDR_CMU_SRC_MODULE + 0x3E00), 0, -1, 30),
	CMU_INIT(SRC_PWM_0_TCLK0_CLK,			0, CMU_TYPE_MAINDIV,  (void*)(PHY_BASEADDR_CMU_SRC_MODULE + 0x4000), 0, -1, 31),
	CMU_INIT(SRC_PWM_0_TCLK1_CLK,			0, CMU_TYPE_MAINDIV,  (void*)(PHY_BASEADDR_CMU_SRC_MODULE + 0x4200), 0, -1, 32),
	CMU_INIT(SRC_PWM_0_TCLK2_CLK,			0, CMU_TYPE_MAINDIV,  (void*)(PHY_BASEADDR_CMU_SRC_MODULE + 0x4400), 0, -1, 33),
	CMU_INIT(SRC_PWM_0_TCLK3_CLK,			0, CMU_TYPE_MAINDIV,  (void*)(PHY_BASEADDR_CMU_SRC_MODULE + 0x4600), 0, -1, 34),
	CMU_INIT(SRC_CAN_0_CORE_CLK,			0, CMU_TYPE_MAINDIV,  (void*)(PHY_BASEADDR_CMU_SRC_MODULE + 0x4800), 0, -1, 35),
	CMU_INIT(SRC_CAN_1_CORE_CLK,			0, CMU_TYPE_MAINDIV,  (void*)(PHY_BASEADDR_CMU_SRC_MODULE + 0x4A00), 0, -1, 36),
	CMU_INIT(SRC_TIMER_0_APB_CLK,			0, CMU_TYPE_MAINDIV,  (void*)(PHY_BASEADDR_CMU_SRC_MODULE + 0x4C00), 0, -1, 37),
	CMU_INIT(SRC_TIMER_0_TCLK0_CLK,			0, CMU_TYPE_MAINDIV,  (void*)(PHY_BASEADDR_CMU_SRC_MODULE + 0x4E00), 0, -1, 38),
	CMU_INIT(SRC_TIMER_0_TCLK1_CLK,			0, CMU_TYPE_MAINDIV,  (void*)(PHY_BASEADDR_CMU_SRC_MODULE + 0x5000), 0, -1, 39),
	CMU_INIT(SRC_TIMER_0_TCLK2_CLK,			0, CMU_TYPE_MAINDIV,  (void*)(PHY_BASEADDR_CMU_SRC_MODULE + 0x5200), 0, -1, 40),
	CMU_INIT(SRC_TIMER_0_TCLK3_CLK,			0, CMU_TYPE_MAINDIV,  (void*)(PHY_BASEADDR_CMU_SRC_MODULE + 0x5400), 0, -1, 41),
	CMU_INIT(SRC_SECURE_TIMER_0_APB_CLK,		0, CMU_TYPE_MAINDIV,  (void*)(PHY_BASEADDR_CMU_SRC_MODULE + 0x5600), 0, -1, 42),
	CMU_INIT(SRC_SECURE_TIMER_0_TCLK0_CLK,		0, CMU_TYPE_MAINDIV,  (void*)(PHY_BASEADDR_CMU_SRC_MODULE + 0x5800), 0, -1, 43),
	CMU_INIT(SRC_SECURE_TIMER_0_TCLK1_CLK,		0, CMU_TYPE_MAINDIV,  (void*)(PHY_BASEADDR_CMU_SRC_MODULE + 0x5A00), 0, -1, 44),
	CMU_INIT(SRC_SECURE_TIMER_0_TCLK2_CLK,		0, CMU_TYPE_MAINDIV,  (void*)(PHY_BASEADDR_CMU_SRC_MODULE + 0x5C00), 0, -1, 45),
	CMU_INIT(SRC_SECURE_TIMER_0_TCLK3_CLK,		0, CMU_TYPE_MAINDIV,  (void*)(PHY_BASEADDR_CMU_SRC_MODULE + 0x5E00), 0, -1, 46),
	CMU_INIT(SRC_SMC_0_AXI_CLK,			0, CMU_TYPE_MAINDIV,  (void*)(PHY_BASEADDR_CMU_SRC_MODULE + 0x6000), 0, -1, 47),
	CMU_INIT(SRC_SPDIFTX_0_CORE_CLK,		0, CMU_TYPE_MAINDIV,  (void*)(PHY_BASEADDR_CMU_SRC_MODULE + 0x6200), 0, -1, 48),
	CMU_INIT(SRC_GMAC_RGMII_0_TX_CLK_CLK,		0, CMU_TYPE_MAINDIV,  (void*)(PHY_BASEADDR_CMU_SRC_MODULE + 0x6400), 0, -1, 49),
	CMU_INIT(SRC_GMAC_RGMII_0_PTP_REF_CLK,		0, CMU_TYPE_MAINDIV,  (void*)(PHY_BASEADDR_CMU_SRC_MODULE + 0x6600), 0, -1, 50),
	CMU_INIT(SRC_GMAC_RGMII_0_SCAN_CLK,		0, CMU_TYPE_MAINDIV,  (void*)(PHY_BASEADDR_CMU_SRC_MODULE + 0x6800), 0, -1, 51),
	CMU_INIT(SRC_GMAC_RMII_0_PTP_REF_CLK,		0, CMU_TYPE_MAINDIV,  (void*)(PHY_BASEADDR_CMU_SRC_MODULE + 0x6A00), 0, -1, 52),
	CMU_INIT(SRC_GMAC_RMII_0_SCAN_RMII_CLK,		0, CMU_TYPE_MAINDIV,  (void*)(PHY_BASEADDR_CMU_SRC_MODULE + 0x6C00), 0, -1, 53),
	CMU_INIT(SRC_NANDC_0_AXI_CLK,			0, CMU_TYPE_MAINDIV,  (void*)(PHY_BASEADDR_CMU_SRC_MODULE + 0x6E00), 0, -1, 54),
	CMU_INIT(SRC_MM_0_AXI_CLK,			0, CMU_TYPE_MAINDIV,  (void*)(PHY_BASEADDR_CMU_SRC_MODULE + 0x7000), 0, -1, 55),
	CMU_INIT(SRC_VIP_0_PADOUT0_CLK,			0, CMU_TYPE_MAINDIV,  (void*)(PHY_BASEADDR_CMU_SRC_MODULE + 0x7200), 0, -1, 56),
	CMU_INIT(SRC_VIP_0_PADOUT1_CLK,			0, CMU_TYPE_MAINDIV,  (void*)(PHY_BASEADDR_CMU_SRC_MODULE + 0x7400), 0, -1, 57),
	CMU_INIT(SRC_DPC_0_X2_CLK,			0, CMU_TYPE_MAINDIV,  (void*)(PHY_BASEADDR_CMU_SRC_MODULE + 0x7600), 0, -1, 58),
	CMU_INIT(SRC_LVDS_0_VCLK_CLK,			0, CMU_TYPE_MAINDIV,  (void*)(PHY_BASEADDR_CMU_SRC_MODULE + 0x7800), 0, -1, 59),
	CMU_INIT(SRC_CODA960_0_CORE_CLK,		0, CMU_TYPE_MAINDIV,  (void*)(PHY_BASEADDR_CMU_SRC_MODULE + 0x7A00), 0, -1, 60),
	CMU_INIT(SRC_USB_0_AHB_CLK,			0, CMU_TYPE_MAINDIV,  (void*)(PHY_BASEADDR_CMU_SRC_MODULE + 0x7C00), 0, -1, 61),
};

#endif // #ifndef __CMU_INIT_SRC_H__
