//Deck class
//  -- from C++ for Lazy Programmers

#include "stdafx.h"
#include <cstdlib> //for rand
#include "deck.h"

using namespace std;

namespace Cards
{
	Deck::Deck()
	{
		for (int s = HEARTS; s <= SPADES; ++s)
			for (int r = ACE; r <= KING; ++r)
				addCard(Card(Rank(r), Suit(s)));
	}

	void Deck::shuffle()
	{
		/* WSB: give an explanation -- or omit!*/

		for (int j = size() - 1; j > 0; --j)
		{
			int newLoc = rand() % (j + 1);
			swap((*this)[j], (*this)[newLoc]);
		}
	}
}

