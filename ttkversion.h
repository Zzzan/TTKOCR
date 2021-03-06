#ifndef OCRVERSION_H
#define OCRVERSION_H

/**
 * C
 *
 * opyright (c) 2016 - 2017 Greedysky Studio <greedysky@163.com>
 *
 * TTKOCR, based on Qt for windows. 
 */

/** \mainpage
 *
 * \section encoding Attention
 * 
 *
 */
 
/* =================================================
 * This file is part of the TTK OCR project
 * Copyright (C) 2015 - 2017 Greedysky Studio

 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.

 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.

 * You should have received a copy of the GNU General Public License along
 * with this program; If not, see <http://www.gnu.org/licenses/>.
 ================================================= */

//update time 2019.04.15
#define OCR_VERSION_STR    "2.0.0.0"
#define OCR_VERSION_WSTR   L"2.0.0.0"
#define OCR_VER_TIME_STR   "(2019/04/15)"

#define OCR_MAJOR_VERSION 2
#define OCR_MIDLE_VERSION 0
#define OCR_MINOR_VERSION 0
#define OCR_PATCH_VERSION 0

#define OCR_VERSION 0x02000

#define OCR_VERSION_CHECK(major, middle, minor, patch) ((major<<12)|(middle<<8)|(minor<<4)|(patch))


#endif // OCRVERSION_H
