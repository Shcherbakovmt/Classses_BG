#include <iostream>
using namespace std;
class Character
{
protected:
    int hp;
    int armor_class;
    int strength;
    int agility;
    int stamina;
    int intelligence;
    int wisdom;
    int charisma;
    string* abilities;
    int AddAction;
public:
    int getHP() { return hp; }
    int getArmorClass() { return armor_class; }
    int getStrength() { return strength; }
    int getAgility() { return agility; }
    int getStamina() { return stamina; }
    int getIntelligence() { return intelligence; }
    int getWisdom() { return wisdom; }
    int getCharisma() { return charisma; }
    string* getAbilities() { return abilities; }


};
class Caster
{
protected:
    int SpellCells;
public:
    int getSpellCells() { return SpellCells; }

    void CastFireball()
    {
        cout << "You casted fireball" << endl;
        SpellCells -= 1;
        cout << "You have " << SpellCells << " spell cells" << endl;

    }
};