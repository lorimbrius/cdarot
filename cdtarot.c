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

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>
#include <string.h>

#include "cdarot.h"

#define DRAW_SIZE 5
#define DECK_SIZE 73

extern int optind; /* getopt() index */

/*
 * Prints usage information.
 */
static void
usage() {
   puts(usage_string); 
}

/*
 * Draws the spread.
 */
struct card
*draw_spread(int draw_size) {
    struct card draw[draw_size]; /* holds the draw           */
    struct card drawn_card;      /* card that was just drawn */
    int         i, idx;          /* index of drawn card      */

    srandom(time(NULL));         /* seed RNG                 */

    /* initialize draw to zeroes */
    memset(draw, 0, sizeof(struct card) * draw_size);

    i = 0;

    while (i < draw_size) {
        idx        = random() % DECK_SIZE;
        drawn_card = DECK[idx];
        
        /* redraw duplicates */
        for (int j = 0; j < draw_size; j++) {
            if (strncmp(draw[j].name, drawn_card.name, strlen(drawn_card.name)) == 0)
                continue;
        }

        /* put card in draw and increment index */
        memcpy(&draw[i++], &drawn_card, sizeof(struct card));
    }

    return draw;
}

/*
 * Prints the draw, with meanings if the flag is set
 */
void
print_draw(struct card draw[], int draw_size) {
    /* We know how to handle a draw size of 5. Anything else, just print the index. */
    if (draw_size != 5) {

    }
}

/*
 * Discordian Tarot program
 * Prints out a reading from the Discordian tarot deck as created by
 * Max Flax Beeblewax and (boing!) Cnoocy Mosque O'Witz (marc@suberic.net).
 * 
 * Usage:
 * dtarot [-m]
 * Prints your (or someone else's) super-helpful Discordian Tarot reading.
 * Adding the -m argument also provides putative meanings for the cards, for 
 * those unfamiliar with this deck. Of course, you're free to add whatever 
 * meaning you'd like; all things are true|false|meaningless anyway.
 * 
 * For further enlightenment, consult your pineal gland.
 */
int
main(int argc, char *argv[])
{
    int print_meanings_flag, print_usage_flag, ch;
   
    /* parse command line arguments */
    print_meanings_flag = 0;
    print_usage_flag = 0;

    while ((ch = getopt(argc, argv, "hm")) != -1) {
        switch (ch) {
            case 'm':
                print_meanings_flag = 1;   
                break;

            case '?':
            default:
                usage();
                exit(0);
        }
    }

    argc -= optind;
    argv += optind;


}