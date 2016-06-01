#pragma once
#include "Card.h"

class CardDatabase
{
public:
    CardDatabase();
    ~CardDatabase();

private:
    void AddCard(Card* card);

    std::vector<Card*> m_Cards;
};

