/*
 * Copyright (C) 2018  Nexell Co., Ltd.
 * Author: deoks <truevirtue@nexell.co.kr>
 *
 * Nexell informs that this code and information is provided "as Is" base
 * and without warranty of any kind, either expressed or implied, including,
 * but not limited to the implied warranties of merchantabulity and/or
 * fitness for a aparticular purpose.
 *
 * This program is copyrighted by Nexcel and does not allow modification or
 * distribution. In addition to the author (person in charge), the modifier
 * is responsible for the modification.
 */
#include <sysheader.h>
#include <i2c_gpio.h>
#include <asv.h>
#include <sm5011.h>

#define SM5011_I2C_GPIO_GRP 			1
#define SM5011_I2C_SCL 				28
#define SM5011_I2C_SDA 				27
#define SM5011_I2C_SCL_ALT 			0
#define SM5011_I2C_SDA_ALT 			0

/************************************************
  * XXX Board (PMIC: )  - Reference 201X.XX.XX
  * ARM		: 1.XXV
  * CORE	: 1.XV
  * DDR		: 1.5V
  * DDR_IO	: 1.5V
  ************************************************/
void pmic_board_init(void)
{
	int mVol = 0;

	mVol = mVol;
	I2C_INIT(SM5011_I2C_GPIO_GRP, SM5011_I2C_SCL, SM5011_I2C_SDA,
			SM5011_I2C_SCL_ALT, SM5011_I2C_SDA_ALT);

	/* ARM Voltage (Default: 1.00)	*/
//	mVol = sm5011_get_buck_vol(asv_get_arm_vol());
//	sm5011_sboot_output_cntl(BUCK_2_CNTL_REG_1_ADDR, OUTPUT_ON,
//					mVol, 0xFF);
//					BUCK_V_1000mV, 0xFF);
	/* Core Voltage (Default: 1.xV) */
//	mVol = sm5011_get_buck_vol(asv_get_core_vol());
//	sm5011_sboot_output_cntl(BUCK_5_CNTL_REG_1_ADDR, OUTPUT_ON,
//					mVol, 0xFF);
//					BUCK_V_1000mV, 0xFF);

	/* DDRC Voltage (Default: 1.0V) */
	sm5011_sboot_output_cntl(BUCK_4_CNTL_REG_1_ADDR, OUTPUT_ON,
					BUCK_V_1000mV, 0xFF);

	/* DDR I/O Voltage (Default: 1.5V) */
	sm5011_sboot_output_cntl(BUCK_3_CNTL_REG_1_ADDR, OUTPUT_ON,
					BUCK_V_1500mV, 0xFF);

	/* DDR Device Voltage (Default: 1.5V) */
	sm5011_sboot_output_cntl(BUCK_6_CNTL_REG_1_ADDR, OUTPUT_ON,
					BUCK_V_1500mV, 0xFF);
	/* DDRC PLL Voltage (Default: 1.8V) */
	mVol = sm5011_get_ldo_vol(1800);
	sm5011_sboot_output_cntl(LDO_15_CNTL_REG_1_ADDR, OUTPUT_ON,
					mVol, 0xFF);
}