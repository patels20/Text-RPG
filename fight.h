#include "player.h"
#include "monster.h"
#include "level.h"


using namespace std;

int randomFight1 = (rand() %50) +20;
int randomFight2 = (rand()%20) + 20;
int userfightInt = 0;

//Success Equations
int myAttack1 = player1.
void fight(player player1, monster mon)
{
    bool won = false;

    do
    {
        do
            {
                cout << "------------------------------------------------------------------------------------------------------------------------\n" << endl;
                cout << "\t\t\t\t\t\t\tYour Health : " << player1.health << endl;
                cout << "\t\t\t\t\t\t\tMonster Health : " << mon.health <<  "\n" << endl;
                cout << "------------------------------------------------------------------------------------------------------------------------\n" << endl;
                cout << "\t\t\t\t\t\t\tYou're Turn" << endl;
                cout << "------------------------------------------------------------------------------------------------------------------------\n" << endl;
                cout << "\t\t\t\t\t\t1. Attack \t2.Dodge\t\t3.Heal" << endl;
                cout << "------------------------------------------------------------------------------------------------------------------------\n" << endl;
                cin >> userfightInt;
                system("cls");

                switch(userfightInt)
                {
                    case 1:
                        mon.setHealth((mon.health)-player1.attack);
                        break;
                    case 2:
                        cout << "You've Dodge the attack" << endl;
                        break;
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
            while(!(mon.health <= 0 || player1.health <= 0));   // 33 <= 0 or 44 <= 0
            if((mon.health <= 0) || (player1.health <= 0))
            {
                player1.curLevel+=1;
                won = true;
            }


    }
    while(!won);
}
