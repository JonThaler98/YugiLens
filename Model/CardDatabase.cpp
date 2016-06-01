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
    AddCard(m);

    Magic* trap = new Magic(Trap, "Trap Hole",
        "When opponent Normal or Flip Summons 1 monster with 1000 or more ATK: Target that monster; destroy that target.");
    AddCard(trap);

    Magic* spell = new Magic(Spell, "Monster Reborn",
        "Target 1 monster in either player's Graveyard; Special Summon it.");
    AddCard(spell);
}

CardDatabase::~CardDatabase()
{
    for (auto card : m_Cards) {
        delete card;
    }
}

void CardDatabase::AddCard(Card* card)
{
    auto it = std::find(m_Cards.begin(), m_Cards.end(), card);
    ASSERT(it == m_Cards.end());

    m_Cards.push_back(card);
}