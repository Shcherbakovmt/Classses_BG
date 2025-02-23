#pragma once
#include "Classes.hpp"
class Warrior : public Character
{
protected:
    int rage_cells = 2;
public:
    Warrior()
    {
        strength = 17;
        agility = 13;
        stamina = 15;
        intelligence = 10;
        wisdom = 12;
        charisma = 8;
        armor_class = 10 + int((agility - 10) / 2); // значение по умолчанию

        hp = 10 + int((stamina - 10) / 2);
        abilities = new string[100];
        abilities[0] = "Test of strength";
        abilities[1] = "Test of stamina";
        abilities[2] = "Light armor";
        abilities[3] = "Medium armor";
        abilities[4] = "Heavy armor";
        abilities[5] = "Shield";
        abilities[6] = "Simple weapon";
        abilities[7] = "Combat weapon";
        number_of_abilities = 8;

    }
    virtual ~Warrior() { delete[] abilities; }
    virtual void Check() {} 
};

class WarriorMasterOfBattle : public Warrior
{
protected:
    int CubeExcellence = 4;
public:
    void PreciseAttack()
    {
        CubeExcellence -= 1;
        cout << "PreciseAttack: You can spend a Superiority Dice to add a score to your attack roll." << endl;
    }
    void Check()
    {
        cout << "Check MasterOfBattle" << endl;
        PreciseAttack();
        cout << endl;
    }
};

class WarriorOtherWorldlyKnight : public Warrior, Caster
{
protected:
public:
    WarriorOtherWorldlyKnight()
    {
        abilities[8] = "Improved Critical Hit";
        number_of_abilities = 9;
    }
    
    void FlamingHands()
    {
        SpellCells -= 1;
        cout << "Flaming Hands: Deals 3d6 fire damage within a 5 m radius." << endl;
    }
    void Check()
    {
        cout << "Check OtherWorldlyKnight" << endl;
        FlamingHands();
        cout << "Abilities:" << endl;
        for (int i = 0; i < number_of_abilities; i++)
        {
            cout << abilities[i] << endl;
        }
        cout << endl;
    }
};

class WarriorChampion : public Warrior
{
protected:
public:
    WarriorChampion()
    {
        abilities[8] = "Battle stile: Archery: +2 for remote weapon attacks";
        number_of_abilities = 9;
    }
    void Check()
    {
        cout << "Check Champion" << endl;
        cout << "Abilities:" << endl;
        for (int i = 0; i < number_of_abilities; i++)
        {
            cout << abilities[i] << endl;
        }
        cout << endl;
    }
};