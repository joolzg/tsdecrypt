/*
 * Utility functions header
 * Copyright (C) 2011 Unix Solutions Ltd.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2
 * as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston MA 02110-1301, USA.
 */
#ifndef UTIL_H
#define UTIL_H

#include <inttypes.h>

unsigned long crc32(unsigned long crc, const uint8_t *buf, unsigned int len);
int32_t boundary(int32_t exp, int32_t n);
uint8_t *init_4b(uint32_t val, uint8_t *b);
uint8_t *init_4l(uint32_t val, uint8_t *b);
uint8_t *init_2b(uint32_t val, uint8_t *b);
void set_thread_name(char *thread_name);
int decode_hex_string(char *hex, uint8_t *bin, int asc_len);
int64_t get_time(void);

#endif
