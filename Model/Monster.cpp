#include "pch.h"
#pragma hdrstop
#include "Monster.h"

Monster::Monster(MonsterAttribute attribute, MonsterType type, std::string name, std::string effect, GamePhase effectPhase)
    : Card(name, effect, effectPhase)
    , m_Level(0)
    , m_Attack(0)
    , m_Defense(0)
    , m_Attribute(attribute)
    , m_Type(type)
{
}

Monster::~Monster()
{
}

void Monster::SetLevel(int value)
{
    ASSERT(m_Level == 0);
    m_Level = value;
}

void Monster::SetAttack(int value)
{
    ASSERT(m_Attack == 0);
    m_Attack = value;
}

void Monster::SetDefense(int value)
{
    ASSERT(m_Defense == 0);
    m_Defense = value;
}