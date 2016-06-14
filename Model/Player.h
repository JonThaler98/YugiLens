#pragma once
#include "Deck.h"

class Player
{
public:
    Player();
    ~Player();
    int GetLifePoints() const { return m_LifePoints; }
    void DealDamage(int delta) { m_LifePoints -= delta; }
    bool IsDead() const { return (m_LifePoints <= 0); }
    bool TryDrawCard();

    void SetUpGame();

private:
    Deck m_MasterDeck;
    Deck* m_DrawDeck;
    Deck m_Hand;
    Deck m_Graveyard;
    Deck m_MagicZone;
    Deck m_MonsterZone;
    int m_LifePoints;
};

