#include "player.h"
#include "monster.h"
#include "level.h"

using namespace std;

int userfightInt = 0;

//Success Equations
void fight(player player1, monster mon)
{
    bool won = false;
    int playerAttack1 = player1.getAttack() - mon.getDefense();
    int monsterAttack1 = mon.getAttack() - player1.getDefense();
    int opac = 100 - player1.getDefense();

    do
    {
        do
            {
                int random = rand() % 100;
                int random2 = rand() % 100;

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
                            if(random <=50)
                            {
                            system("cls");
                            cout << "You've landed a successful attack" << endl;
                            cout << "Damage Dealt : " << playerAttack1 << endl;
                            mon.setHealth(mon.getHealth()-playerAttack1);
                                if(random2 <= 90)
                                {
                                    cout <<mon.getName() << " has successfully landed a hit." << endl;
                                    cout << "You've taken " << monsterAttack1 << endl;
                                    player1.setHealth((player1.getHealth()-monsterAttack1));
                                }
                                else
                                {
                                    cout << "Monster has missed an attack" << endl;
                                }
                            }
                            else if(random >50)
                            {
                                system("cls");
                                cout << "You've missed the attack" << endl;
                                 if(random2 <= 25)
                                {
                                    cout <<mon.getName() << " has successfully landed a hit." << endl;
                                    cout << "You've taken " << monsterAttack1 << endl;
                                    player1.setHealth((player1.getHealth()-monsterAttack1));
                                }
                                else
                                {
                                    cout << "Monster has missed an attack" << endl;
                                }
                            }


                       /* if(random2 <= 90)
                        {
                            system("cls");
                            player1.setHealth(monsterAttack1);
                        }*/
                            break;
                        case 2:
                            cout << "You've Dodge the attack" << endl;
                            if(random2 <= 101)
                            {
                                cout << "Monster has missed his/her attack" << endl;
                            }
                            break;
                        case 3:
                            if((player1.health + 10) >= 100)
                            {
                                cout << "You've regained some health " << endl;
                                player1.setHealth(100);
                            }
                            else
                            {
                                cout << "You've regained some health " << endl;
                                player1.setHealth(player1.health+10);
                            }
                            break;
                        default:
                            cout << "Invalid Fight Option" << endl;
                            break;
                    }


            }

            while(!(mon.health <= 0 || player1.health <= 0));   // 33 <= 0 or 44 <= 0
            if(mon.health <= 0)
            {
                player1.curLevel+=1;
                won = true;
                player1.progression+=1;
            }
    }
    while(!won);
    if(player1.health > mon.health)
    {
        cout << "Congratulation you won!" << endl;
    }
}
