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
#ifndef _MEMORY_H__
#define _MEMORY_H__

/* External Function */
extern void enter_self_refresh(void);
extern void exit_self_refresh(void);

/* Function Define */
 int memory_initialize(int is_resume);

#endif // #ifndef _MEMORY_H__