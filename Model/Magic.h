#pragma once
#include "card.h"

class Magic :
    public Card
{
public:
    Magic(MagicType type, std::string name, std::string effect, GamePhase effectPhase = NoPhases, MagicIcon = Normal);
    ~Magic();
    MagicType GetType() { return m_Type; }
    MagicIcon GetIcon() { return m_Icon; }

private:
    MagicType m_Type;
    MagicIcon m_Icon;
};