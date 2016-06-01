#include "pch.h"
#pragma hdrstop
#include "CardDatabase.h"
#include "Monster.h"
#include "Magic.h"

CardDatabase::CardDatabase()
{
    Monster* m = new Monster(Light, Dragon, "Blue-Eyes White Dragon");
    m->SetLevel(8);
    m->SetAttack(3000);
    m->SetDefense(2500);
    m_Cards.push_back(m);

    Magic* trap = new Magic(Trap, "Trap Hole",
        "When opponent Normal or Flip Summons 1 monster with 1000 or more ATK: Target that monster; destroy that target.");
    m_Cards.push_back(trap);

    Magic* spell = new Magic(Spell, "Monster Reborn",
        "Target 1 monster in either player's Graveyard; Special Summon it.");
    m_Cards.push_back(spell);
}


CardDatabase::~CardDatabase()
{
}
