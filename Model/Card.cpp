#include "pch.h"
#pragma hdrstop
#include "Card.h"

Card::Card(std::string name, std::string effect, GamePhase effectPhase)
    : m_Name(name)
    , m_Effect(effect)
    , m_EffectPhase(effectPhase)
{
}


Card::~Card()
{
}
