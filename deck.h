/*-
 * SPDX-License-Identifier: CC0-1.0
 */

#ifndef _DECK_H
#define _DECK_H

/*
 * A card from the Discordian Tarot Deck consists of the name and the meaning.
 */
struct card
{
    char name[31];    /* card name    */
    char meaning[95]; /* card meaning */
};

const struct card DECK[] = {
    /* TRUMPS */
    {"I The Sacred Cow", "a sacred cow"},
    {"II A Pope", "querent, or anybody"},
    {"III The Initiate", "one who does not know and seeks knowledge"},
    {"IV The Illuminate", "one who knows or pretends to and dispenses knowledge"},
    {"V The Believer", "one who accepts ideas"},
    {"VI The Skeptic", "one who rejects ideas"},
    {"VII The Flower", "sex, drugs, hedonism"},
    {"VIII The Trout", "silliness, humor, laughter"},
    {"IX Conspiracy", "there\"s a plot behind coincidences"},
    {"X Joker", "wild card, could mean anything"},
    {"XI Net of Synchronicity", "there\"s a cosmic force behind coincidences"},
    {"XII Discordian Deck", "this deck or self-referentialism"},
    {"XIII The Big Bang", "eristic creation"},
    {"XIV The Great Pyramid", "aneristic creation"},
    {"XV Radioactivity", "aneristic destruction"},
    {"XVI The Tower of Babel", "eristic destruction"},
    {"XVII The Discordian Society", "an eristic group or groups"},
    {"XVIII The Bavarian Illuminati", "an aneristic group or groups"},
    {"XIX Greyface", "someone on the all-order trip"},
    {"XX Eris", "someone on the all-disorder trip"},
    {"XXI The Golden Apple", "eristic forces"},
    {"XXII The Pentagon", "aneristic forces"},
    {"XXIII The Sacred Chao", "all things in balance"},
    /* SWEETS */
    {"Zip of Sweets", "a lack of taste, water, pleasure"},
    {"Ace of Sweets", "a good amount of taste, water, pleasure"},
    {"Deuce of Sweets", "shared or balanced taste, water, pleasure"},
    {"Trey of Sweets", "imbalance of taste, water, pleasure"},
    {"4 of Sweets", "excess taste, water, pleasure"},
    {"O of Sweets", "a moment of taste, water, pleasure"},
    {"Sweetmorn", "a physical morning or the happy beginning of something"},
    {"Chaos", "no illusions"},
    {"Cow of Sweets", "someone in the midst of, but unaffected by, taste, water, pleasure"},
    {"Hung Mung", "someone who embodies taste, water, pleasure"},
    /* BOOMS */
    {"Zip of Booms", "a lack of hearing, air, action"},
    {"Ace of Booms", "a good amount of hearing, air, action"},
    {"Deuce of Booms", "shared or balanced hearing air, action"},
    {"Trey of Booms", "imbalance of hearing, air, action"},
    {"4 of Booms", "excess hearing, air, action"},
    {"O of Booms", "a moment of hearing, air, action"},
    {"Boomtime", "a hectic morning or progress toward something"},
    {"Discord", "eristic illusions"},
    {"Cow of Booms", "someone in the midst of, but unaffected by, hearing, air, action"},
    {"Dr. Van Van Mojo", "someone who embodies hearing, air, action"},
    /* PUNGENTS */
    {"Zip of Pungents", "a lack of smell, aether, intensity"},
    {"Ace of Pungents", "a good amount of smell, aether, intensity"},
    {"Deuce of Pungents", "shared or balanced smell, aether, intensity"},
    {"Trey of Pungents", "imbalance of smell, aether, intensity"},
    {"4 of Pungents", "excess smell, aether, intensity"},
    {"O of Pungents", "a moment of smell, aether, intensity"},
    {"Pungenday", "the noon meditation or the midpoint of something"},
    {"Confusion", "conflicting illusions"},
    {"Cow of Pungents", "someone in the midst of, but unaffected by, smell, aether, intensity"},
    {"St. Gulik", "someone who embodies smell, aether, intensity"},
    /* PRICKLES */
    {"Zip of Prickles", "a lack of touch, earth, conformity"},
    {"Ace of Prickles", "a good amount of touch, earth, conformity"},
    {"Deuce of Prickles", "shared or balanced touch, earth, conformity"},
    {"Trey of Prickles", "imbalance of touch, earth, conformity"},
    {"4 of Prickles", "excess touch, earth, conformity"},
    {"O of Prickles", "a moment of touch, earth, conformity"},
    {"Prickle-Prickle", "a physical afternoon or a break from something"},
    {"Bureaucracy", "aneristic illusions"},
    {"Cow of Prickles", "someone in the midst of, but unaffected by, touch, earth, conformity"},
    {"Zarathud", "someone who embodies touch, earth, conformity"},
    /* ORANGES */ 
    {"Zip of Oranges", "a lack of sight, fire, bizarreness"},
    {"Ace of Oranges", "a good amount of sight, fire, bizarreness"},
    {"Deuce of Oranges", "shared or balanced sight, fire, bizarreness"},
    {"Trey of Oranges", "imbalance of sight, fire, bizarreness"},
    {"4 of Oranges", "excess of sight, fire, bizarreness"},
    {"O of Oranges", "a moment of sight, fire, bizarreness"},
    {"Setting Orange", "a physical evening or the celebration at the end of something"},
    {"The Aftermath", "playing with illusions"},
    {"Cow of Oranges", "someone in the midst of, but unaffected by, sight, fire, bizarreness"},
    {"The Elder Malaclypse", "someone who embodies sight, fire, bizarreness"}
};

#endif /* !_DECK_H */