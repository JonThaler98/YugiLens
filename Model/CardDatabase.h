#pragma once
#include "Card.h"

class CardDatabase
{
public:
    CardDatabase();
    ~CardDatabase();

private:
    std::vector<Card*> m_Cards;
};

