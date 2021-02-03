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
#include <array>
#include <ctime> // для time()
#include <cstdlib> // для rand() и srand()

 
/*
 
void printDeck(const std::array<Card, 52> deck)
{
	for (const auto &card : deck)
	{
		printCard(card);
		std::cout << ' ';
	}
 
	std::cout << '\n';
}
 
void swapCard(Card &a, Card &b)
{
	Card temp = a;
	a = b;
	b = temp;
}
 
// Генерируем случайное число между min и max (включительно).
// Предполагается, что srand() уже был вызван
int getRandomNumber(int min, int max)
{
	static const double fraction = 1.0 / (static_cast<double>(RAND_MAX) + 1.0); // используем static, так как это значение нужно вычислить единожды
 	// Равномерно распределяем вычисление значения из нашего диапазона
	return static_cast<int>(rand() * fraction * (max - min + 1) + min);
}
 
void shuffleDeck(std::array<Card, 52> &deck)
{
	// Перебираем каждую карту в колоде
	for (int index = 0; index < 52; ++index)
	{
		// Выбираем любую случайную карту
		int swapIndex = getRandomNumber(0, 51);
		// Меняем местами с нашей текущей картой
		swapCard(deck[index], deck[swapIndex]);
	}
}
 

char getPlayerChoice()
{
	std::cout << "(h) to hit, or (s) to stand: ";
	char choice;
	do
	{
		std::cin >> choice;
	} while (choice != 'h' && choice != 's');
	
	return choice;
}
 
bool playBlackjack(const std::array<Card, 52> deck)
{
	const Card *cardPtr = &deck[0];
 
	int playerTotal = 0;
	int dealerTotal = 0;
 
	// Дилер получает одну карту
	dealerTotal += getCardValue(*cardPtr++);
	std::cout << "The dealer is showing: " << dealerTotal << '\n';
 
	// Игрок получает две карты
	playerTotal += getCardValue(*cardPtr++);
	playerTotal += getCardValue(*cardPtr++);
 
	// Игрок начинает
	while (1)
	{
		std::cout << "You have: " << playerTotal << '\n';
		char choice = getPlayerChoice();
		if (choice == 's')
			break;
 
		playerTotal += getCardValue(*cardPtr++);
		
		// Смотрим, не проиграл ли игрок
		if (playerTotal > 21)
			return false;
	}
 
	// Если игрок не проиграл (у него не больше 21 очка), тогда дилер получает карты до тех пор, пока у него в сумме будет не меньше 17 очков
	while (dealerTotal < 17)
	{
		dealerTotal += getCardValue(*cardPtr++);
		std::cout << "The dealer now has: " << dealerTotal << '\n';
	}
 
	// Если у дилера больше 21, то он проиграл, а игрок выиграл
	if (dealerTotal > 21)
		return true;
 
	return (playerTotal > dealerTotal);
}
 
int main()
{
	srand(static_cast<unsigned int>(time(0))); // используем системные часы в качестве стартового значения
	rand(); // пользователям Visual Studio: делаем сброс первого случайного числа
 
	std::array<Card, 52> deck;
	
	// Конечно, можно было бы инициализировать каждую карту отдельно, но зачем? Ведь есть циклы!
	int card = 0;
	for (int suit = 0; suit < MAX_SUITS; ++suit)
	for (int rank = 0; rank < MAX_RANKS; ++rank)
	{
		deck[card].suit = static_cast<CardSuit>(suit);
		deck[card].rank = static_cast<CardRank>(rank);
		++card;
	}
	
	shuffleDeck(deck);
 
	if (playBlackjack(deck))
		std::cout << "You win!\n";
	else
		std::cout << "You lose!\n";
 
	return 0;
}
//*/      
/**************************************************************************  //*/

class Card
{

public:
    enum CardSuit
    {
        SUIT_CLUB,
        SUIT_DIAMOND,
        SUIT_HEART,
        SUIT_SPADE,
        MAX_SUITS
    };
     
    enum CardRank
    {
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
        RANK_ACE,
        MAX_RANKS
    };
    
private:
    CardRank m_rank;
    CardSuit m_suit;
    
    
public:
    Card(CardRank rank, CardSuit suit): m_rank(rank), m_suit(suit)
    {}
    
    const void printCard()
    {
        switch (m_rank)
        {
            case RANK_2:		std::cout << '2'; break;
            case RANK_3:		std::cout << '3'; break;
            case RANK_4:		std::cout << '4'; break;
            case RANK_5:		std::cout << '5'; break;
            case RANK_6:		std::cout << '6'; break;
            case RANK_7:		std::cout << '7'; break;
            case RANK_8:		std::cout << '8'; break;
            case RANK_9:		std::cout << '9'; break;
            case RANK_10:		std::cout << 'T'; break;
            case RANK_JACK:		std::cout << 'J'; break;
            case RANK_QUEEN:	std::cout << 'Q'; break;
            case RANK_KING:		std::cout << 'K'; break;
            case RANK_ACE:		std::cout << 'A'; break;
        }
     
        switch (m_suit)
        {
            case SUIT_CLUB:		std::cout << 'C'; break;
            case SUIT_DIAMOND:	std::cout << 'D'; break;
            case SUIT_HEART:	std::cout << 'H'; break;
            case SUIT_SPADE:	std::cout << 'S'; break;
        }
    }
    
    const int getCardValue()
    {
        switch (m_rank)
        {
        case RANK_2:		return 2;
        case RANK_3:		return 3;
        case RANK_4:		return 4;
        case RANK_5:		return 5;
        case RANK_6:		return 6;
        case RANK_7:		return 7;
        case RANK_8:		return 8;
        case RANK_9:		return 9;
        case RANK_10:		return 10;
        case RANK_JACK:		return 10;
        case RANK_QUEEN:	return 10;
        case RANK_KING:		return 10;
        case RANK_ACE:		return 11;
        }
        
        return 0;
    }
 
};

class Desk
{
    
private:
    std::array<Card, 52> m_desk;
    
public:
    Desk()
    {
        int currentCard = 0;
        for (int suit = 0; suit < Card::MAX_SUITS; ++suit)
            for (int rank = 0; rank < Card::MAX_RANKS; ++rank)
            {
                
                m_desk.at(currentCard) =  Card(static_cast<Card::CardRank>(rank),static_cast<Card::CardSuit>(suit));
                //deck[currentCard].suit = static_cast<CardSuit>(suit);
                //deck[currentCard].rank = static_cast<CardRank>(rank);
                ++currentCard;
            }
    }
};

     
int main()
{
    Card cardQueenHearts(Card::RANK_QUEEN, Card::SUIT_HEART);
    cardQueenHearts.printCard();
    std::cout << " has the value " << cardQueenHearts.getCardValue() << '\n';
 
  
    return 0;
}
