#pragma once
#include "Classes.hpp"
class Barbarian : public Character
{
protected:
    int rage_cells = 2;
public:
    Barbarian()
    {
        strength = 17;
        agility = 13;
        stamina = 15;
        intelligence = 8;
        wisdom = 12;
        charisma = 10;
        armor_class = 10 + int((agility-10)/2) + int((stamina-10)/2); // значение по умолчанию

        hp = 10 + int((stamina - 10) / 2);
        abilities = new string[100];
        abilities[0] = "Test of strength";
        abilities[1] = "Test of stamina";
        abilities[2] = "Light armor";
        abilities[3] = "Shield";
        abilities[4] = "Simple weapon";
        abilities[5] = "Combat weapon";
        number_of_abilities = 6;

    }
    virtual void RageMode()
    {
        rage_cells -= 1;
        cout << "You have resistance to physical damage" << endl;
    }
    virtual void Check() {}
    virtual ~Barbarian() { delete[] abilities; }
};

class Barbarian_Berserc : public Barbarian
{
public:
    void RageMode()
    {
        rage_cells -= 1;
        cout << "RageMode: You have resistance to physical damage and additive 2 phys damage" << endl;
    }
    void Check()
    {
        cout << "Check Berserk" << endl;
        RageMode();
        cout << endl;
    }
};


class Barbarian_WildMagic : public Barbarian, Caster
{
public:
    void RageMode()
    {
        rage_cells -= 1;
        cout << "RageMode: You fly into a rage, unleashing all the magic bubbling inside. It causes a random magical effect." << endl;
    }
    void Check()
    {
        cout << "Check WildMagic" << endl;
        RageMode();
        cout << endl;
    }
};

class Barbarian_WildHeart : public Barbarian
{
public:
    void RageTheHeartOftheBear()
    {
        rage_cells -= 1;
        cout << "Rage The Heart Of the Bear: You are restoring 3-10 HP" << endl;
    }
    void RageTigerHeart()
    {
        rage_cells -= 1;
        cout << "Rage Tiger Heart: Rush at three enemies at once, bleeding them for 2 turns if successful." << endl;
    }
    void Check()
    {
        cout << "Check WildHeart" << endl;
        RageTheHeartOftheBear();
        RageTigerHeart();
        cout << endl;
    }
};
