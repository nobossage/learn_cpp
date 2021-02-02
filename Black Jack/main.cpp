/*
 * main.cpp
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


enum CardSuid
{
    SUID_HEARTS,
    SUID_DIAMONDS,
    SUID_CLUBS,
    SUID_SPADES,
    MAX_SUID
};

enum CardRank
{
    RANK_ACE,
    RANK_2,
    RANK_3,
    RANK_4,
    RANK_5,
    RANK_6,
    RANK_7,
    RANK_8,
    RANK_9,
    RANK_10,
    RANK_JACK,
    RANK_QUEEN,
    RANK_KING,
    MAX_RANK
};

struct Card
{
    CardSuid mast;
    CardRank rank;
};

void printCard(const *Card card)
{
    char mast = 0;
    switch (card.mast)
    {
        case SUID_HEARTS:
        mast = 'H';
        break;
        case SUID_DIAMONDS:
        mast = 'D';
        break;
        case SUID_CLUBS:
        mast = 'C';
        break;
        case SUID_SPADES:
        mast = 'S';
        break;
    }
    
    char rank = 0;
    switch (card.rank)
    {
        case RANK_ACE:
            rank = 'A';
            break;
        case RANK_2:
            rank = '2';
            break;
        case RANK_3:
            rank = '3';
            break;
        case RANK_4:
            rank = '4';
            break;
        case RANK_5:
            rank = '5';
            break;
        case RANK_6:
            rank = '6';
            break;
        case RANK_7:
            rank = '7';
            break;
        case RANK_8:
            rank = '8';
            break;
        case RANK_9:
            rank = '9';
            break;
        case RANK_10:
            rank = 'D';
            break;
        case RANK_JACK:
            rank = 'J';
            break;
        case RANK_QUEEN:
            rank = 'Q';
            break;
        case RANK_KING:
            rank = 'K';
            break;
    }
    std::cout << mast << rank;
}
int main(int argc, char **argv)
{
	
	return 0;
}

