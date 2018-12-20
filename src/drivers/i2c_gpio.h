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
#ifndef __I2C_GPIO_H__
#define __I2C_GPIO_H__

/* Function Define  */
void i2c_gpio_init(unsigned char gpio_grp,
	unsigned char gpio_scl, unsigned char gpio_sda,
	unsigned int gpio_scl_alt, unsigned int gpio_sda_alt);

int i2c_gpio_read(char dev_addr, char reg_addr, char *pdata, int length);
int i2c_gpio_write(char dev_addr, char reg_addr, char *pdata, int length);
void i2c_gpio_deinit(void);

#define I2C_INIT(GRP, SCL, SDA, SCL_ALT, SDA_ALT)	i2c_gpio_init(GRP, SCL, SDA, SCL_ALT, SDA_ALT)
#define I2C_READ(DEV, REG, DATA, SIZE)			i2c_gpio_read(DEV, REG, DATA, SIZE)
#define I2C_WRITE(DEV, REG, DATA, SIZE)			i2c_gpio_write(DEV, REG, DATA, SIZE)
#define I2C_DEINIT					i2c_gpio_deinit

#endif /* __I2C_GPIO_H__ */
