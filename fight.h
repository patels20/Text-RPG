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
                            if(random <=(player1.getAttack()*2)-20)
                            {
                            system("cls");
                            cout << "You've landed a successful attack" << endl;
                            cout << "Damage Dealt : " << playerAttack1 << endl;
                            mon.setHealth(mon.getHealth()-playerAttack1);
                            system("pause");
                            system("cls");
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
                            system("pause");
                            system("cls");
                            }
                            else
                            {
                                system("cls");
                                cout << "You've missed the attack" << endl;
                                system("pause");
                                system("cls");
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
                                system("pause");
                                system("cls");
                            }
                            break;
                        case 2:
                            cout << "You've Dodge the attack" << endl;
                            system("pause");
                            system("cls");
                            if(random2 <= 101)
                            {
                                cout << "Monster has missed his/her attack" << endl;
                            system("pause");
                            system("cls");
                            }
                            break;
                        case 3:
                            if(player1.health == 100)
                            {
                                cout << "Healing won't do anything when you're at full!" << endl;
                            }
                            else if((player1.health + 10) > 100)
                            {
                                cout << "You've healed to max!" << endl;
                                player1.setHealth(100);
                            }
                            else
                            {
                                cout << "You've regained " << 10 << " health!" << endl;
                                player1.setHealth(player1.health+10);
                                cout << "Current Health :" << player1.getHealth() << endl;
                            }
                            system("pause");
                            system("cls");
                            break;
                        default:
                            cout << "Invalid Fight Option" << endl;
                            system("pause");
                            system("cls");
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
