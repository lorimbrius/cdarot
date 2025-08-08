/*-
 * SPDX-License-Identifier: CC0-1.0
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
 * Returns an array of size draw_size.
 */
void
draw_spread(struct card draw[], int draw_size) {
    struct card drawn_card;      /* card that was just drawn */
    int         i, idx;          /* index of drawn card      */

    srandom(time(NULL));         /* seed RNG                 */

    /* initialize draw to zeroes */
    memset(draw, 0, sizeof(struct card) * draw_size);

    i = 0;

    while (i < draw_size) {
redraw:
        idx        = random() % DECK_SIZE;
        drawn_card = DECK[idx];
        
        /* redraw duplicates */
        for (int j = 0; j < draw_size; j++) {
            if (strncmp(draw[j].name, drawn_card.name, strlen(drawn_card.name)) == 0)
                goto redraw;
        }

        /* put card in draw and increment index */
        memcpy(&draw[i++], &drawn_card, sizeof(struct card));
    }
}

/*
 * Prints the draw, with meanings if the flag is set
 */
void
print_draw(struct card draw[], int draw_size, int print_meanings_flag) {
    /* We know how to handle a draw size of 5. Anything else, just print the index. */
    if (draw_size == 5) {
        printf("True:\t\t%s", draw[0].name);

        if (print_meanings_flag)
            printf(" (%s)", draw[0].meaning);

        printf("\nFalse:\t\t%s", draw[1].name);

        if (print_meanings_flag)
            printf(" (%s)", draw[1].meaning);

        printf("\nMeaningless:\t%s", draw[2].name);
        
        if (print_meanings_flag)
            printf(" (%s)", draw[2].meaning);

        printf("\nSeek:\t\t%s", draw[3].name);
        
        if (print_meanings_flag)
            printf(" (%s)", draw[3].meaning);

        printf("\nAvoid:\t\t%s", draw[4].name);

        if (print_meanings_flag)
            printf(" (%s)", draw[4].meaning);

        putchar('\n');
    } else {
        for (int i = 0; i < draw_size; i++) {
            if (print_meanings_flag)
                printf("%s (%s)\n", draw[i].name, draw[i].meaning);
            else
                printf("%s\n", draw[i].name);
        }
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
    int         print_meanings_flag, ch;
    struct card draw[DRAW_SIZE];
   
    /* parse command line arguments */
    print_meanings_flag = 0;

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

        argc -= optind;
        argv += optind;
    }

    draw_spread(draw, DRAW_SIZE);
    print_draw(draw, DRAW_SIZE, print_meanings_flag);

    return 0;
}