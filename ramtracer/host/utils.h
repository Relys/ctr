/*
 * utils.h - Utility functions
 *
 * Copyright (C) 2012 neimod
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#ifndef __UTILS_H_
#define __UTILS_H_

#include <stdio.h>
#include <string.h>

#ifdef _WIN32
	struct timezone
	{
	  int  tz_minuteswest; /* minutes W of Greenwich */
	  int  tz_dsttime;     /* type of dst correction */
	};

	int gettimeofday(struct timeval *tv, struct timezone *tz);
#endif

/*
 * Public functions
 */
void mssleep(unsigned int millisecs);
int kbhit (void);
void changeterminal(int dir);
unsigned int buffer_readle32(unsigned char* buffer, unsigned int* bufferpos, unsigned int buffersize);
unsigned int buffer_readle16(unsigned char* buffer, unsigned int* bufferpos, unsigned int buffersize);
unsigned int buffer_readbyte(unsigned char* buffer, unsigned int* bufferpos, unsigned int buffersize);
unsigned char* buffer_readdata(unsigned char* buffer, unsigned int* bufferpos, unsigned int buffersize, unsigned int datasize);
void memdump(FILE* fout, const char* prefix, const unsigned char* data, unsigned int size);
void hexdump(const void *ptr, int buflen);
#endif // __UTILS_H_
