#include "level.h"
#include "player.h"
#include "monster.h"
#include <stdlib.h>
#include <random>

int randomFight = (rand() %50) +20;
int userfightInt = 0;
void level1(string userInt, player& player, monster& mon)
{
    cout << "You're walking in the woods.  There's no one around and your phone is dead.  Out of the corner of your eye, you spot him:" << endl;
    cout << "SHIA LEBEOUF" << endl:
    cout << "He looks into your eyes, you can see theres blood on your face.  My God, theres blood everywhere!" << endl;
    cout << "Do you run or fight? << endl;
    cout << "------------------------------ " << endl;
    cout << "\t\t\tWelcome To Level 1" << endl:
    cout << "------------------------------" << endl;
    cout << "Which direction would you want to take?" << endl;
    cin >> userInt;
    system("cls");
    switch(userInt)
    {
        case "Right":
        case "right":
            cout << "You've initiated to fight " << monster.getName() << endl;
            do
            {
                cout << "------------------------------ \n" << endl;
                cout <<" Your Health : " << player.health << endl;
                cout << "Monster Health : " << monster.health <<  "\n" << endl;
                cout << "------------------------------ \n" << endl;

                cout << "\t\tYou're Turn" << endl;
                cout << "------------------------------ " << endl;
                cout << "\t\t1. Attack \t2.Dodge" << endl;
                cout << "\t\t\t3.Heal" << endl;
                cout << "------------------------------ " << endl;
                cin >> userfightInt;
                switch(userfightInt)
                {
                    case 1:
                        monster.sethealth((monster.health)-player.attack)
                        break;
                    case 2:
                        cout << "You've Dodge the attack" << endl;
                    case 3:
                        if(player.health + 10 >= 100)
                        {
                            cout << "You'v regained some health " << endl;
                            player.setHealth(100);
                            cout << "You're Current health is : " << player.getHealth() << endl;
                        }
                        else
                        {
                            cout << "You've regained some health " << endl;
                            player.setHealth(player.health+10);
                            cout << "You're Current health is : " << player.getHealth() << endl;
                        }

                }

            }
            while(monster.health < 0; || player.health < 0)
        case "Left":
        case "left":
            cout << "You've Encountered " << monster.getName() << endl;
            cout << ""






    }




}
