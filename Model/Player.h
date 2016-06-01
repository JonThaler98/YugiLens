#pragma once
#include "Deck.h"

class Player
{
public:
    Player();
    ~Player();

    void SetUpGame();

private:
    Deck m_MasterDeck;
    Deck* m_DrawDeck;
    Deck m_Hand;
    Deck m_Graveyard;
    Deck m_MagicZone;
    Deck m_MonsterZone;
};

