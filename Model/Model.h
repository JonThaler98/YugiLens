#pragma once

typedef enum {
    DrawPhase,
    StandbyPhase,
    Main1Phase,
    BattlePhase,
    Main2Phase,
    EndPhase,

    // Card effect phase combinations.
    NoPhases,
    MainPhases,
    AllPhases,
} GamePhase;

typedef enum {
    Dark = 0,
    Earth,
    Fire,
    Light,
    Water,
    Wind,
} MonsterAttribute;

typedef enum {
    Beast,
    Dragon,
    SeaSerpent,
    Spellcaster,
    Warrior,
    Zombie,
} MonsterType;

typedef enum {
    Spell = 0,
    Trap,
} MagicType;

typedef enum {
    Normal = 0,
    Continuous,
    Counter,
    Equip,
    Field,
    QuickPlay,
    Ritual,
} MagicIcon;