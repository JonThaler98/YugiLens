#include "pch.h"
#pragma hdrstop
#include "Deck.h"

Deck::Deck()
{
}

// Create a draw deck from a master deck.
Deck::Deck(Deck* masterDeck)
{
    // Copy all the cards into the new deck.
    int count = masterDeck->GetCardCount();
    for (int i = 0; i < count; i++) {
        AddCard(masterDeck->GetNthCard(i));
    }
    Shuffle();
}

Deck::~Deck()
{
}

void Deck::AddCard(Card* card)
{
    m_Cards.push_back(card);
}

void Deck::Shuffle()
{
    std::deque<Card*> temp;
    while (!m_Cards.empty()) {
        int n = (rand() >> 1) % m_Cards.size();
        auto it = m_Cards.begin() + n;
        Card* card = *it;
        temp.push_back(card);
        m_Cards.erase(it);
    }
    m_Cards.swap(temp);
}

void Deck::TransferCardTo(Card* card, Deck* otherDeck)
{
    auto it = std::find(m_Cards.begin(), m_Cards.end(), card);
    m_Cards.erase(it);
    otherDeck->AddCard(*it);
}