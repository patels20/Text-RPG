#include "player.h"
#include "wizard.h"
#include "archer.h"
#include "warrior.h"
#include "monster.h"

using namespace std;

int userfightInt = 0;

//Success Equations
void fight(player player1, monster mon)
{

    bool won = false;
    int playerAttack1 = player1.getAttack() - mon.getDefense();
    int monsterAttack1 = mon.getAttack() - player1.getDefense();
    do
    {
        do
            {

                int random = rand() % 100;
                int random2 = rand() % 100;
                cout << "------------------------------------------------------------------------------------------------------------------------\n" << endl;
                cout << "\t\t\t"<<player1.getName()<<" Status \t\t\t\t "<<mon.getName()<<" Status" << endl;
                cout << "\t\t\tHealth :" << player1.getHealth() << "\t\t\t\t Health : " << mon.getHealth() << endl;
                cout << "\t\t\tAttack :" << player1.getAttack() << "\t\t\t\t Attack : " << mon.getAttack() << endl;
                cout << "\t\t\tDefense :" << player1.getDefense() << "\t\t\t\t Defense : " << mon.getDefense() << endl;
                cout << "------------------------------------------------------------------------------------------------------------------------\n" << endl;
                cout << "\t\t\t\t\t\t\tYou're Turn" << endl;
                cout << "------------------------------------------------------------------------------------------------------------------------\n" << endl;
                cout << "\t\t\t\t\t1. Attack \t2.Dodge\t\t3.Heal"<< endl;
                cout << "------------------------------------------------------------------------------------------------------------------------\n" << endl;
                cin >> userfightInt;
                system("cls");
                a:
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
                                if(random2 <= 35)
                                {
                                    cout <<mon.getName() << " has successfully landed a hit." << endl;
                                    cout << "You've taken " << monsterAttack1 << endl;
                                    player1.setHealth((player1.getHealth()-monsterAttack1));
                                }
                                else
                                {
                                    cout << mon.getName()<<" has missed an attack" << endl;
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
                                 if(random2 <= 35)
                                {
                                    cout <<mon.getName() << " has successfully landed a hit." << endl;
                                    cout << "You've taken " << monsterAttack1 << endl;
                                    player1.setHealth((player1.getHealth()-monsterAttack1));
                                }
                                else
                                {
                                    cout << mon.getName()<<"has missed an attack" << endl;
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
                                cout << mon.getName()<<" has missed his/her attack" << endl;
                            system("pause");
                            system("cls");
                            }
                            break;
                        case 3:
                            if((player1.getHealth() != 0))
                            {
                                cout << "You've regained " << 10 << " health!" << endl;
                                player1.setHealth(player1.health+10);
                                cout << "Current Health :" << player1.getHealth() << endl;
                                system("pause");
                                system("cls");
                                if(random2 <= 35)
                                {
                                    cout <<mon.getName() << " has successfully landed a hit." << endl;
                                    cout << "You've taken " << monsterAttack1 << endl;
                                    player1.setHealth((player1.getHealth()-monsterAttack1));
                                }
                                else
                                {
                                    cout << mon.getName()<<" has missed an attack" << endl;
                                }
                            }
                            system("pause");
                            system("cls");
                            break;
                        default:
                            cout << "Invalid Fight Option" << endl;
                            goto a;
                            system("pause");
                            system("cls");
                            break;
                    }
            }
            while(!(mon.health <= 0) && !(player1.health <= 0));   // 33 <= 0 or 44 <= 0
            if(mon.health <= 0)
            {
                won = true;
                player1.progression+=1;
            }
            else
            {
                cout << " You've Failed " << endl;
                system("cls");
                system("pause");
                exit(1);
            }
    }
    while(!(won) && !(player1.health <= 0));
    if(player1.health > mon.health)
    {
        system("cls");
        cout <<"**************************************************************************************************************************\n" << endl;
         cout <<"\t\t\t\t\t\t  Congratulation you've won!" << endl;
         cout <<"\t\t\t\t\t\t     You've beaten " << mon.getName() << endl;
         cout <<"\t\t\t\t\t\tYou've Advanced to the next level \n" << endl;
         cout <<"**************************************************************************************************************************\n" << endl;
        system("pause");
    }
}
