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

// Try to draw a card, and return false if we could not.
bool Player::TryDrawCard()
{
    if (m_DrawDeck->GetCardCount() == 0) {
        return false;
    }

    Card* card = m_DrawDeck->GetTopCard();
    m_DrawDeck->TransferCardTo(card, &m_Hand);

    return true;
}
