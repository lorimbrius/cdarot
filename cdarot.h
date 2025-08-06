/*-
 * SPDX-License-Identifier: Unlicense
 *
 * (K) Kopyleft 2025 Lord Imbrius the Despondent (darthferrett@gmail.com)
 * All rites reversed
 * 
 * This is free and unencumbered software released into the public domain.
 *
 * Anyone is free to copy, modify, publish, use, compile, sell, or
 * distribute this software, either in source code form or as a compiled
 * binary, for any purpose, commercial or non-commercial, and by any
 * means.
 * 
 * In jurisdictions that recognize copyright laws, the author or authors
 * of this software dedicate any and all copyright interest in the
 * software to the public domain. We make this dedication for the benefit
 * of the public at large and to the detriment of our heirs and
 * successors. We intend this dedication to be an overt act of
 * relinquishment in perpetuity of all present and future rights to this
 * software under copyright law.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
 * IN NO EVENT SHALL THE AUTHORS BE LIABLE FOR ANY CLAIM, DAMAGES OR
 * OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE,
 * ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
 * OTHER DEALINGS IN THE SOFTWARE.
 * 
 * For more information, please refer to <https://unlicense.org>
 */

#ifndef _CDAROT_H
#define _CDAROT_H

#include "deck.h"

/*
 * The string to be printed when usage() is called.
 */
static char *usage_string = "Usage:\n"
                            "dtarot [-m]\n"
                            "Prints your (or someone else's) super-helpful Discordian Tarot reading.\n"
                            "Adding the -m argument also provides putative meanings for the cards, for\n"
                            "those unfamiliar with this deck. Of course, you're free to add whatever \n"
                            "meaning you'd like; all things are true|false|meaningless anyway.\n"
                            "\n" 
                            "For further enlightenment, consult your pineal gland.\n";

static void usage(void);                  /* prints usage information */
struct card *draw_spread(int _draw_size); /* draws the spread         */
void        print_draw(struct card _draw[], int _draw_size, int _print_meanings_flag);

#endif /* !_CDAROT_H */