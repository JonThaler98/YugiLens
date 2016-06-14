#include "pch.h"
#pragma hdrstop
#include "Game.h"

Game::Game()
    : m_CurrentPhase(DrawPhase)
{
    m_CurrentPlayerIndex = (rand() >> 8) & 1;

    // TODO: Winner Chooses 1st or 2nd.
}

Game::~Game()
{
}

void Game::Play()
{
    bool gotCards = true;
    while (!m_Player[0].IsDead() && !m_Player[1].IsDead() && gotCards) {
        Player* currentPlayer = &m_Player[m_CurrentPlayerIndex];
        switch (m_CurrentPhase) {
        case DrawPhase:
            if (!currentPlayer->TryDrawCard()) {
                gotCards = false;
            }

            // TODO: handle active card DrawPhase effects.
            break;

        case StandbyPhase:
            break;
        case Main1Phase:
            break;
        case BattlePhase:
            break;
        case Main2Phase:
            break;
        case EndPhase:
            //...
            m_CurrentPlayerIndex = 1 - m_CurrentPlayerIndex;
            m_CurrentPhase = DrawPhase;
            continue;
        }
        m_CurrentPhase = (GamePhase)(m_CurrentPhase + 1);
    }
}
