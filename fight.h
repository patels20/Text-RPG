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
                            cout << "You've landed a successful attack" << endl;
                            cout << "Damage Dealt : " << playerAttack1 << endl;
                            mon.setHealth(mon.getHealth()-playerAttack1);
                            }
                            if(random2 <= 25)
                            {

                                player1.setHealth(monsterAttack1);
                            }
                          //  player1.setHealth((player1.getHealth()) - mon.getAttack()*2);
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
                        default:
                            cout << "Invalid Fight Option" << endl;
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
    if(player1.health > mon.health)
    {
        cout << "Congratulation you won!" << endl;
    }
}
