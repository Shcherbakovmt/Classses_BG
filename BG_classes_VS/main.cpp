#include <iostream>
#include "Classes.hpp"

class Bard : public Character
{
protected:
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
        abilities = new string[8];
        abilities[0] = "Test of agility";
        abilities[1] = "Test of charisma";
        abilities[2] = "Light armor";
        abilities[3] = "Simple weapon";
        abilities[4] = "One-handed crossbows";
        abilities[5] = "Long swords";
        abilities[6] = "Rapiers";
        abilities[7] = "Short swords";

    }
    ~Bard() { delete[] abilities; }
};

class Bard_CollegeOfKnowledge : public Bard, public Caster
{
protected:
    int inspiration;
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
        cout << "You have used a charge of inspiration. Hp increased to " << hp << ". You have " << inspiration << " more insp charges" << endl;
    }
};

int main()
{
    Bard_CollegeOfKnowledge b;
    cout << "You have " << b.getSpellCells() << " spell cells" << endl;
    b.CastFireball();
    cout << "You have " << b.getHP() << " hp" << endl;
    b.CastInspiration();

}