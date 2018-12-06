#include "level.h"

#include "player.h"

#include "monster.h"

#include "fight.h"

#include <stdlib.h>

#include <random>



using namespace std;



void level1(player player1, monster mon)

{

    char userInt;

    system("cls");

    cout << "------------------------------------------------------------------------------------------------------------------------ " << endl;

    cout << "\t\t\t\t\t\tWelcome To Level 1" << endl;

    cout << "------------------------------------------------------------------------------------------------------------------------ " << endl;

    cout << "You're walking in the woods.  There's no one around and your phone is dead.  Out of the corner of your eye, you spot him";

    cout << "It's SHIA LEBEOUF!";

    cout << "He looks into your eyes, you can see theres blood on your face.  My God, theres blood everywhere!" << endl;

    cout << "The choice is yours. Do you run or fight? "<< endl;

    cout << "Which direction would you want to take? (Enter either R,r,L,l)" << endl;

    cin >> userInt;

    system("cls");



    switch(userInt)

    {

        case 'R':

        case 'r':

            fight(player1,mon);



        break;

        case 'L':

        case 'l':

            cout << "You've Advanced to Level 2" << endl;

            player1.setLevel(2);

            break;

        default:

            cout << "Invalid Input" << endl;

            break;

    }

}

void level2(player player1, monster mon)

{

char userInt;
    system("cls");
    cout << "------------------------------------------------------------------------------------------------------------------------ " << endl;
    cout << "\t\t\t\t\t\tWelcome To Level 2" << endl;
    cout << "------------------------------------------------------------------------------------------------------------------------ " << endl;
    cout << "You have beaten Shia Lebeouf and are trying to find your way out of the woods. Shia dropped $30 and it is now yours";
    cout << "You start to find your way out of the woods when to your surprise you see a car. As you slowly approach the car the homeless man who owns it sees you." << endl;
	cout << "He point his knife at you and asks you for all your hard earned cash";
    cout << "The choice is yours. Do you give him your money or fight for your life? "<< endl;
    cout << "Type 1 to hand over your money or 2 to fight the homeless man. " << endl;
    cin >> userInt;
    system("cls");
    switch(userInt)
    {
        case '2':
            // cout << "You've initiated to fight " << mon.getName() << endl;
            do
            {

                do
                {
                    cout << "------------------------------------------------------------------------------------------------------------------------\n" << endl;
                    cout << "\t\t\t\t\t\t\tYour Health : " << player1.health << endl;
                    cout << "\t\t\t\t\t\t\tHomeless Man Health : " << mon.health <<  "\n" << endl;
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
                while((mon.health < 0) || (player1.health < 0));
            }
            while(player1.curLevel != 2);

        case '1':
      //      cout << "You've Encountered " << mon.getName() << endl;
            cout << "" << endl;






    }






}
