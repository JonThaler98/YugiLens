#pragma once
#include "Card.h"

class Deck
{
public:
    Deck();
    Deck(Deck* masterDeck);
    virtual ~Deck();

    void AddCard(Card* card);
    int GetCardCount() const { return m_Cards.size(); }
    Card* GetNthCard(int n) { return m_Cards[n]; }
    Card* GetTopCard() { return m_Cards[m_Cards.size() - 1]; }
    void Shuffle();
    bool IsPlayable() { return (m_Cards.size() >= 40) && (m_Cards.size() <= 60); }
    void TransferCardTo(Card* card, Deck* otherDeck);

private:
    std::deque<Card*> m_Cards;
};

