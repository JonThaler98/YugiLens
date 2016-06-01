#pragma once
#include "Model.h"

class Card
{
public:
    Card(std::string name, std::string effect, GamePhase effectPhase = NoPhases);
    virtual ~Card();
    std::string GetName() { return m_Name; }
    std::string GetEffect() { return m_Effect; }
    GamePhase GetEffectPhase() { return m_EffectPhase; }

private:
    std::string m_Name;
    std::string m_Effect;
    GamePhase m_EffectPhase;
};

