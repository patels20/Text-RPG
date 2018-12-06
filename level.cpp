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
            player1.progression+=1;
            system("pause");
            system("cls");
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
            fight(player1,mon);

        break;
        case '1':
            cout << "You've Advanced to Level 3" << endl;
            player1.progression+=1;
            system("pause");
            system("cls");
            break;
        default:
            cout << "Invalid Input" << endl;
            break;
    }
}



void level3(player player1, monster mon)
{
    char userInt;
    system("cls");
    cout << "------------------------------------------------------------------------------------------------------------------------ " << endl;
    cout << "\t\t\t\t\t\tWelcome To Level 3" << endl;
    cout << "------------------------------------------------------------------------------------------------------------------------ " << endl;
    cout << "You have now killed the homeless guy and stolen his car. You think you are in the clear and start to drive home ever so enthusiastically.";
    cout << "Unfortunately for you life sucks and the car runs out of gas. But luckily for you, you end up at a gas station.";
	cout << "At this has station there is a clerk who tell you that you can buy the gas and upgrade your health for money. ";
    cout << "You have 2 options. (1) You can pay for the gas or (2) You fight the clerk and steal his gas and maybe steal a few bills out the register? "<< endl;
    cin >> userInt;
     switch(userInt)
    {
        case '2':
            fight(player1,mon);

        break;
        case '1':
            cout << "Since you are an outstanding citizen and you follow the rules,";
            cout << "You've Advanced to Level 4" << endl;
            player1.progression+=1;
            system("pause");
            system("cls");
            break;
        default:
            cout << "Invalid Input" << endl;
            break;
    }

}

void level4(player player1, monster mon){
    int x;
    char userInt;
    system("cls");
    cout << "------------------------------------------------------------------------------------------------------------------------ " << endl;
    cout << "\t\t\t\t\t\tWelcome To Level 4" << endl;
    cout << "------------------------------------------------------------------------------------------------------------------------ " << endl;
    cout << "You have now killed the sales clerk guy. At this point you think you are in the clear because you got away with two murders. Why wouldn't you think you could get away with anything.";
    cout << "Because you just cannot catch a break a cop pulls you over on your way home because the car you stole from the homeless guy is not registered.";
	cout << "At this point in time you have blood stains all over your shirt and you know that the cop will arrest you. ";
    cout << "You have 3 options. (1) You can let the cop arrest you and confess (2) You fight the cop because you have nothing to lose. (3) Bribe the cop."<< endl;
    cin >> userInt;
    system("cls");
      switch(userInt)
    {
        case '1':
            cout << "Why wouldn't you go down fighting";
        break;
        case '2':
            fight(player1,mon);
            break;
        case '3':
            cout << "Enter in a 1 or a 2 to see if you successfully bribed the cop or not";
            cin >> x;
            if(x == 1){
                cout << "Congrats you have moved onto level 5";
                 player1.progression+=1;
            }
            if(x ==2){
                cout << "You died of Smallpox because you are ill equipped for survival";
            }
        default:
            cout << "Invalid Input" << endl;
            break;
    }



}
