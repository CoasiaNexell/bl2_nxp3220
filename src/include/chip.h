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
#ifndef __CHIP_H__
#define __CHIP_H__

/* CPU Base Address */
#define PHY_BASEADDR_AXIM_CPU_MODULE		0x22080000

/* Power Management Unit Base Address */
#define PHY_BASEADDR_CLKPWR			0x20080000
#define PHY_BASEADDR_ALIVE			(PHY_BASEADDR_CLKPWR + 0xD000)
#define PHY_BASEADDR_PMU			(PHY_BASEADDR_CLKPWR + 0xC400)
#define PHY_BASEADDR_VDDPWR			(PHY_BASEADDR_CLKPWR + 0xC800)

/* PLL Base Address PLL 0,1, CPU, DDR 0,1 */
#define PHY_BASEADDR_PLL0			0x27020000
#define PHY_BASEADDR_PLL1			0x27030000
#define PHY_BASEADDR_PLL_CPU			0x22070000
#define PHY_BASEADDR_PLL_DDR0			0x23070000
#define PHY_BASEADDR_PLL_DDR1			0x23080000

/* CMU Base Address SRC, SYS, DDR */
#define PHY_BASEADDR_CMU_SRC_MODULE		0x27000000
#define PHY_BASEADDR_CMU_SYS_MODULE		0x27010000
#define PHY_BASEADDR_CMU_CPU_MODULE		0x22000000
#define PHY_BASEADDR_CMU_DDR_MODULE		0x23000000

#define PHY_BASEADDR_CMU_USB_MODULE		0x24000000
#define PHY_BASEADDR_CMU_MM_MODULE		0x25000000
#define PHY_BASEADDR_CMU_HSIF_MODULE		0x26000000

/* SYS Base Address */
#define PHY_BASEADDR_SYS_MODULE			0x20030000

/* MM Base Address */
#define PHY_BASEADDR_SYSREG_MM_MODULE		0x25030000
#define PHY_BASEADDR_SYSREG_MM_MODULE_APB	0x25030000
#define PHY_BASEADDR_SYSREG_MM_MODULE_SECURE	0x25040000

/* TZC400 Base Address */
#define PHY_BASEADDR_TZC400			0x230C0000

#define TZC400_GATE_KEEPER			(PHY_BASEADDR_TZC400 + 0x0008)
#define TZC400_REGION_ATTRIBUTE_0		(PHY_BASEADDR_TZC400 + 0x0110)

#define TZC400_REGION_BASE_LOW_0		(PHY_BASEADDR_TZC400 + 0x0100)
#define TZC400_REGION_BASE_HIGH_0		(PHY_BASEADDR_TZC400 + 0x0104)
#define TZC400_REGION_TOP_LOW_0			(PHY_BASEADDR_TZC400 + 0x0108)
#define TZC400_REGION_TOP_HIGH_0		(PHY_BASEADDR_TZC400 + 0x010C)
#define TZC400_REGION_ATTRIBUTES_0		(PHY_BASEADDR_TZC400 + 0x0110)
#define TZC400_REGION_ID_ACCESS_0		(PHY_BASEADDR_TZC400 + 0x0114)

/* HSIF Base Address */
#define PHY_BASEADDR_SYSREG_HSIF_MODULE		0x26030000
#define PHY_BASEADDR_SYSREG_HSIF_MODULE_APB	0x26030000
#define PHY_BASEADDR_SYSREG_HSIF0_MODULE_SECURE	0x26040000

/* USB Base Address */
#define PHY_BASEADDR_USBOTG20_MODULE		0x240C0000

#define PHY_BASEADDR_SYSREG_USB_MODULE		0x24030000
#define PHY_BASEADDR_SYSREG_USB_MODULE_APB	0x24030000
#define PHY_BASEADDR_SYSREG_USB_MODULE_SECURE	0x24040000


/* GPIO Base Address */
#define PHY_BASEADDR_GPIOA_NONSECURE_MODULE	0x20180000
#define PHY_BASEADDR_GPIOB_NONSECURE_MODULE	0x20190000
#define PHY_BASEADDR_GPIOC_NONSECURE_MODULE	0x201A0000
#define PHY_BASEADDR_GPIOD_NONSECURE_MODULE	0x201B0000
#define PHY_BASEADDR_GPIOE_NONSECURE_MODULE	0x201C0000
#define PHY_BASEADDR_GPIOF_NONSECURE_MODULE	0x201D0000
#define PHY_BASEADDR_GPIOA_SECURE_MODULE	0x20200000
#define PHY_BASEADDR_GPIOB_SECURE_MODULE	0x20210000
#define PHY_BASEADDR_GPIOC_SECURE_MODULE	0x20220000
#define PHY_BASEADDR_GPIOD_SECURE_MODULE	0x20230000
#define PHY_BASEADDR_GPIOE_SECURE_MODULE	0x20240000
#define PHY_BASEADDR_GPIOF_SECURE_MODULE	0x20250000

/* SDMMC Base Address */
#define PHY_BASEADDR_SDMMC0_MODULE		0x26080000
#define PHY_BASEADDR_SDMMC1_MODULE		0x26090000
#define PHY_BASEADDR_SDMMC2_MODULE		0x260A0000

/* SPI Base Address */
#define PHY_BASEADDR_SPI0_MODULE		0x30000000
#define PHY_BASEADDR_SPI1_MODULE		0x20A90000
#define PHY_BASEADDR_SPI2_MODULE		0x20AA0000

/* NAND Base Addres */
#define PHY_BASEADDR_NANDC_MODULE		0x26180000

/* UART Base Address Channel 0 ~ 7 */
#define PHY_BASEADDR_UART_CH0			0x20400000
#define PHY_BASEADDR_UART_CH1			0x20410000
#define PHY_BASEADDR_UART_CH2			0x20420000
#define PHY_BASEADDR_UART_CH3			0x20430000
#define PHY_BASEADDR_UART_CH4			0x20440000
#define PHY_BASEADDR_UART_CH5			0x20450000
#define PHY_BASEADDR_UART_CH6			0x20460000
#define PHY_BASEADDR_UART_CH7			0x20470000

/* EFuse Base Address */
#define PHY_BASEADDR_ECID_SECURE_MODULE		0x20070000

#endif // __CHIP_H__