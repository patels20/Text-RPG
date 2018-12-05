#include "level.h"
#include "player.h"
#include "monster.h"
#include <stdlib.h>
#include <random>

using namespace std;


int randomFight = (rand() %50) +20;
int userfightInt = 0;
void level1(char userInt, player player1, monster mon)
{
    cout << "You're walking in the woods.  There's no one around and your phone is dead.  Out of the corner of your eye, you spot him:" << endl;
    cout << "SHIA LEBEOUF" << endl;
    cout << "He looks into your eyes, you can see theres blood on your face.  My God, theres blood everywhere!" << endl;
    cout << "Do you run or fight? "<< endl;
    cout << "------------------------------ " << endl;
    cout << "\t\t\tWelcome To Level 1" << endl;
    cout << "------------------------------" << endl;
    cout << "Which direction would you want to take?" << endl;
    cin >> userInt;
    system("cls");
    switch(userInt)
    {
        case 'R':
        case 'r':
            // cout << "You've initiated to fight " << mon.getName() << endl;
            do
            {
                cout << "------------------------------ \n" << endl;
                cout <<" Your Health : " << player1.health << endl;
                cout << "Monster Health : " << mon.health <<  "\n" << endl;
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
                        mon.setHealth((mon.health)-player1.attack);
                        break;
                    case 2:
                        cout << "You've Dodge the attack" << endl;
                    case 3:
                        if((player1.health + 10) >= 100)
                        {
                            cout << "You'v regained some health " << endl;
                            player1.setHealth(100);
                       //     cout << "You're Current health is : " << player1.getHealth() << endl;
                        }
                        else
                        {
                            cout << "You've regained some health " << endl;
                            player1.setHealth(player1.health+10);
                    //        cout << "You're Current health is : " << player1.getHealth() << endl;
                        }

                }

            }
            while((mon.health < 0) || (player1.health < 0));
        case 'L':
        case 'l':
      //      cout << "You've Encountered " << mon.getName() << endl;
            cout << "" << endl;






    }


}
