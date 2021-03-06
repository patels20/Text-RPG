#include "level.cpp"
#include "player.h"
#include "monster.h"

#include <iostream>
#include <windows.h>

using namespace std;


int main()
{
    wizard player1("Wizard",100,25,15);  // instantiate new player objects
    archer player2("Archer",100,35,5);
    warrior player3("Warrior",100,30,10);
    int cash =0;

    string gameStarter = "";
    char game = 'S';
    cout <<"Enter your first name : " << endl;
    cin >> gameStarter;
    system("cls");
    a:
    cout << "------------------------------------------------------------------------------------------------------------------------ " << endl;
    cout <<"\t\t\t\t\t\tWelcome to the Adventures of " << gameStarter << endl;
    cout << "------------------------------------------------------------------------------------------------------------------------ " << endl;
    cout <<"S : Start Game \t\t C: Credits " << endl;
    cout <<"Q : Quit " << endl;
    cin >> game;
    switch(game)  //game mode switch
    {
        case 'C':
        case 'c':
            {		// credit menu
            system("cls");
            cout <<"Dungeon Adventures : Text Mania " << endl;
            Sleep(900);
            cout <<"Written By : Shail Patel , Will Kelsey , Akshar Patel " << endl;
            Sleep(900);
            cout <<"Software Used : Code Blocks, GitHub, GitKraken" << endl;
            Sleep(900);
            cout <<"Language : C++"<<endl;
            Sleep(900);
            cout <<"Published December 7th 2018" <<endl;
            system("cls");
            }
        break;
        case 'Q':
        case 'q':
            {		// quit menu
            system("cls");
            cout <<"You're Leaving Dungeon Adventures " << endl;
            Sleep(900);
            system("cls");
            cout <<"Goodbye " << endl;
            }
        break;
        case 'S':
        case 's':
            {		// game start
            system("cls");
            int userInput = 0;
            b:  // goto
            cout << "Please pick one of the characters below:";  	//display menu for player types
            cout << "\n\nWizard: Weapon: Staff" << endl;
            cout << "    \tHealth:      100"<<endl;
            cout << "   \tAttack:      25"<<endl;
            cout << "       \tDefense:     15"<<endl;
            cout << "\n\nArcher: Weapon: Bow and Arrow\n";
            cout << "    \tHealth:      100"<<endl;
            cout << "   \tAttack:      35"<<endl;
            cout << "       \tDefense:     5"<<endl;
            cout << "\n\nWarrior:Weapon: Shield and Sword\n";
            cout << "    \tHealth:      100"<<endl;
            cout << "   \tAttack:      30"<<endl;
            cout << "       \tDefense:     10"<<endl;
            Sleep(1000);
            cout <<"\nDecide :"<<endl;
            Sleep(500);
            cout <<"1: Wizard" << endl;
            Sleep(500);
            cout << "2: Archer"<< endl;
            Sleep(500);
            cout <<"3: Warrior" << endl;
            Sleep(900);
            cin >> userInput;
            switch(userInput)  	// user input case
            {
                case 1:  // game path for wizard
                    cout << "You've selected Wizard " << endl;
                    Sleep(900);
                    system("cls");

                    {
                    //health,energy,attack,defense -Player
                    //health,attack,defense - Monster
                   // player player1("Wizard",100,25,15,0);
                    if(player1.progression = 1)
                    {
                        level1(player1,monster("Shia",100,250,10));  //level creation VV
                    }
                    if(player1.progression = 2)
                    {
                        level2(player1,monster("Homeless Guy",100,30,10));
                    }
                     if(player1.progression = 3)
                    {

                        level3(player1,monster("Clerk",100,30,15));
                    }
                     if(player1.progression = 4)
                    {
                        level4(player1,monster("Police Officer",100,35,15));
                    }
                    if(player1.progression = 5)
                    {
                        level5(player1,monster("Thanos",1000,1000,1000));
                    }
                    break;
                    }
                case 2:  // game path for archer
                    cout << "You've selected Archer " << endl;
                    Sleep(900);
                    system("cls");
                    {
                    if(player2.progression = 1)
                    {
                        level1(player2,monster("Shia",100,25,10));
                    }
                    if(player2.progression = 2)
                    {
                        level2(player2,monster("Homeless Guy",100,30,10));
                    }
                     if(player2.progression = 3)
                    {
                        level3(player2,monster("Clerk",100,30,15));
                    }
                     if(player2.progression = 4)
                    {
                        level4(player2,monster("Police Officer",100,35,15));
                    }
                    if(player2.progression = 5)
                    {
                        level5(player2,monster("Thanos",1000,1000,1000));
                    }
                    break;
                    }
                case 3:  // game path for warrior
                    cout << "You've selected Warrior " << endl;
                    Sleep(900);
                    system("cls");
                    {

                    if(player3.progression = 1)
                    {
                        level1(player3,monster("Shia",100,25,10));
                    }
                    if(player3.progression = 2)
                    {
                        level2(player3,monster("Homeless Guy",100,30,10));
                    }
                     if(player3.progression = 3)
                    {
                        level3(player3,monster("Clerk",100,30,15));
                    }
                     if(player3.progression = 4)
                    {
                        level4(player3,monster("Police Officer",100,35,15));
                    }
                    if(player3.progression = 5)
                    {
                        level5(player3,monster("Thanos",1000,1000,1000));
                    }
                    break;
                    }
                case 666:  // test GOD mode.  you can beat thanos with this one
                    cout << "You've selected Satan " << endl;
                    Sleep(900);
                    system("cls");
                    {
                        player player4("SATAN",100,10000,25);
                    if(player1.progression = 1)
                    {
                        level1(player4,monster("Shia",100,20,12));
                    }
                    if(player1.progression = 2)
                    {
                        level2(player4,monster("Homeless Guy",100,15,20));
                    }
                     if(player1.progression = 3)
                    {
                        level3(player4,monster("Clerk",100,30,5));
                    }
                     if(player1.progression = 4)
                    {
                        level4(player4,monster("Police Officer",100,40,40));
                    }
                    if(player1.progression = 5)
                    {
                        level5(player4,monster("Thanos",1000,1000,1000));
                    }
                    break;
                    }
                default:
                    {
                    cout <<"Invalid Character Option "<< endl;
                    system("pause");
                    system("cls");
                    goto b;
                    break;
                    }
                }
            break;
            }
        default:
            {

                system("cls");
                cout <<"Invalid Option select proper option" << endl;
                system("pause");
                system("cls");
                goto a;
                break;
            }

    }
    return 0;
}

