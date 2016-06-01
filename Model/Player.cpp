#include "pch.h"
#pragma hdrstop
#include "Player.h"

Player::Player()
    : m_DrawDeck(nullptr)
{
}

Player::~Player()
{
    if (m_DrawDeck != nullptr) {
        delete m_DrawDeck;
    }
}

void Player::SetUpGame()
{
    // Create a draw deck.
    if (m_DrawDeck != nullptr) {
        delete m_DrawDeck;
    }
    m_DrawDeck = new Deck(m_MasterDeck);

    // Draw 5 cards.
    for (int i = 0; i < 5; i++) {
        m_DrawDeck->TransferCardTo(m_DrawDeck->GetTopCard(), &m_Hand);
    }
}