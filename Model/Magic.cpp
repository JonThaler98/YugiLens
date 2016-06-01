#include "pch.h"
#pragma hdrstop
#include "Magic.h"

Magic::Magic(MagicType type, std::string name, std::string effect, GamePhase effectPhase, MagicIcon icon)
    : Card(name, effect, effectPhase)
    , m_Type(type)
    , m_Icon(icon)
{
}


Magic::~Magic()
{
}
