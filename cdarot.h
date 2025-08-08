/*-
 * SPDX-License-Identifier: CC0-1.0
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

static void usage(void);                                      
void        draw_spread(struct card _draw[], int _draw_size);
void        print_draw(struct card _draw[], int _draw_size, int _print_meanings_flag);

#endif /* !_CDAROT_H */