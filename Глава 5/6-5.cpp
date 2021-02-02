/*
 * 75-2.cpp
 * 
 * Copyright 2021 noble <noble@terra>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */
#include <iostream> 
#include <array>

enum Suid
{
    SUID_HEARTS,
    SUID_DIAMONDS,
    SUID_CLUBS,
    SUID_SPADES,
    MAX_SUID
};

enum Cards
{
    CARDS_ACE,
    CARDS_2,
    CARDS_3,
    CARDS_4,
    CARDS_5,
    CARDS_6,
    CARDS_7,
    CARDS_8,
    CARDS_9,
    CARDS_10,
    CARDS_JACK,
    CARDS_QUEEN,
    CARDS_KING,
    MAX_CARDS
};

struct DescOfCards
{
    Suid mast;
    Cards card;
};

char getSuid(DescOfCards card)
{
    char *mast[] = " ";
    switch (card.mast)
    {
        case SUID_HEARTS:
        mast = "\u2665";
        break;
        case SUID_DIAMONDS:
        mast = "\u2666";
        break;
        case SUID_CLUBS:
        mast = "\u2663";
        break;
        case SUID_SPADES:
        mast = "\u2660";
        break;
    }
    return mast;
}

char getRank(DescOfCards card)
{
    char rank = ' ' ;
    switch (card.card)
    {
        case CARDS_ACE:
            rank = 'A';
            break;
        case CARDS_2:
            rank = '2';
            break;
        case CARDS_3:
            rank = '3';
            break;
        case CARDS_4:
            rank = '4';
            break;
        case CARDS_5:
            rank = '5';
            break;
        case CARDS_6:
            rank = '6';
            break;
        case CARDS_7:
            rank = '7';
            break;
        case CARDS_8:
            rank = '8';
            break;
        case CARDS_9:
            rank = '9';
            break;
        case CARDS_10:
            rank = 'D';
            break;
        case CARDS_JACK:
            rank = 'J';
            break;
        case CARDS_QUEEN:
            rank = 'Q';
            break;
        case CARDS_KING:
            rank = 'K';
            break;
    }
    return rank;
}

void PrintCard(DescOfCards card)
{
    char mast = getSuid(card);
    char rank = getRank(card);
    std::cout << mast << rank ;
}

void initDesk(std::array<std::array<DescOfCards,13>,4> &desk )
{
    DescOfCards card;
    for (int i = 0; i < (MAX_SUID); ++i)
    {
        for (int j = 0; j < MAX_CARDS; ++j)
        {
            card.mast = static_cast <Suid>(i);
            card.card = static_cast <Cards>(j);
            desk[i][j] = card;
        }

    }
}
//*/

int main()
{
    std::array<std::array<DescOfCards,13>,4> desk = {};
    initDesk(desk);
    for (int i = 0; i < MAX_SUID; ++i)
    {
        for (int j = 0; j < MAX_CARDS; ++j)
        {
            PrintCard(desk[i][j]);
            std::cout << " ";
        }
        std::cout << std::endl;
    }
    /*
    for (card : desk)
         PrintCard(*card);
    //*/
    return 0;
}
