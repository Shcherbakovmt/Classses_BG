#pragma once
#include "Classes.hpp"
#include <iostream>
using namespace std;


class Bard : public Character
{
protected:
    int inspiration = 4;
public:
    Bard()
    {
        strength = 8;
        agility = 15;
        stamina = 13;
        intelligence = 12;
        wisdom = 10;
        charisma = 17;
        armor_class = 12; // значение по умолчанию

        hp = 8 + int((stamina - 10) / 2);
        abilities = new string[100];
        abilities[0] = "Test of agility";
        abilities[1] = "Test of charisma";
        abilities[2] = "Light armor";
        abilities[3] = "Simple weapon";
        abilities[4] = "One-handed crossbows";
        abilities[5] = "Long swords";
        abilities[6] = "Rapiers";
        abilities[7] = "Short swords";
        number_of_abilities = 8;

    }
    virtual ~Bard() { delete[] abilities; }
};

class Bard_CollegeOfKnowledge : public Bard, public Caster
{
public:
    Bard_CollegeOfKnowledge()
    {
        SpellCells = 4;
        inspiration = 4;
    }
    void CastInspiration()
    {
        hp += 5;
        inspiration -= 1;
        cout << "CastInspiration: You have used a charge of inspiration. Hp increased to " << hp << ". You have " << inspiration << " more insp charges" << endl;
    }
};

class BardCollege_of_Valor : public Bard
{
public:
    BardCollege_of_Valor()
    {
        abilities[8] = "Middle armor";
        abilities[9] = "Shields";
        abilities[10] = "Combat weapons";
        number_of_abilities = 11;
    }
    void CombatInspiration()
    {
        inspiration -= 1;
        cout << "Combat Inspiration: Now you have +1 to the next attack roll" << endl;
    }
};

class BardCollege_of_Swords : public Bard
{
public:
    BardCollege_of_Swords()
    {

        abilities[8] = "Middle armor";
        abilities[9] = "Scimitars";
        number_of_abilities = 10;
    }
    void TheCuttingStroke()
    {
        inspiration -= 1;
        cout << "The Cutting Stroke: In this turn, you attack two opponents at once" << endl;
    }
};
