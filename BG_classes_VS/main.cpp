#include <iostream>
#include "Classes.hpp"
#include "Bard.hpp"
#include "Barbarian.hpp"
#include "Warrior.hpp"

int main()
{
    cout << "Check Bard:" << endl;
    cout << "====================" << endl;
    cout << "Check Bard of knowledge" << endl;
    Bard_CollegeOfKnowledge b;
    cout << "You have " << b.getSpellCells() << " spell cells" << endl;
    b.CastFireball();
    cout << "You have " << b.getHP() << " hp" << endl;
    b.CastInspiration();
    cout << endl;

    cout << "Check Bard of swords" << endl;
    cout << "Bard_swords abilities: " << endl;
    BardCollege_of_Swords Bard_swords;
    for (int i = 0; i < Bard_swords.getNumberOfAbilities(); i++)
    {
        cout << Bard_swords.getAbilities()[i] << endl;
    }

    cout << "====================" << endl;
    cout << "Check Barbarian:" << endl;
    Barbarian_Berserc bers;
    Barbarian_WildHeart wild_heart;
    Barbarian_WildMagic wild_mag;
    bers.Check();
    wild_heart.Check();
    wild_mag.Check();
    cout << "====================" << endl;
    cout << "Check Warrior:" << endl;
    WarriorMasterOfBattle Master_of_battle;
    WarriorOtherWorldlyKnight OtherWorld;
    WarriorChampion Champion;
    Master_of_battle.Check();
    OtherWorld.Check();
    Champion.Check();
    cout << "====================" << endl;

    

}