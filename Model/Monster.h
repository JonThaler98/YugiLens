#pragma once
#include "card.h"
class Monster :
    public Card
{
public:
    Monster(MonsterAttribute attribute, MonsterType type, std::string name, std::string effect = "", GamePhase effectPhase = NoPhases);
    ~Monster();
    MonsterAttribute GetAttribute() { return m_Attribute; }
    MonsterType GetType() { return m_Type; }
    int GetLevel() { return m_Level; }
    void SetLevel(int value);
    int GetAttack() { return m_Attack; }
    void SetAttack(int value);
    int GetDefense() { return m_Defense; }
    void SetDefense(int value);

private:
    MonsterType m_Type;
    MonsterAttribute m_Attribute;
    int m_Level;
    int m_Attack;
    int m_Defense;
};
