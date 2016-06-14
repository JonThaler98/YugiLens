#pragma once
#include "Player.h"

class Game
{
public:
    Game();
    ~Game();
    void Play();

private:
    Player m_Player[2];
    int m_CurrentPlayerIndex;
    GamePhase m_CurrentPhase;
};

