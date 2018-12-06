#include "level.cpp"
#include "player.h"
#include "monster.h"


using namespace std;


int main()
{
    string gameStarter = "";
    char game = 'S';
    cout <<"Enter you're name : " << endl;
    cin >> gameStarter;
    system("cls");
    cout << "------------------------------------------------------------------------------------------------------------------------ " << endl;
    cout <<"\t\t\t\t\t\tWelcome to the Adventures of " << gameStarter << endl;
    cout << "------------------------------------------------------------------------------------------------------------------------ " << endl;
    cout <<"S : Start Game \t\t C: Credits " << endl;
    cout <<"Q : Quit " << endl;
    cin >> game;
    switch(game)
    {
        case 'C':
        case 'c':
            system("cls");
            cout <<"Dungeon Adventures : Text Mania " << endl;
            Sleep(900);
            cout <<"Written By : Shail Patel , William Kelsey , Akshar Patel " << endl;
            Sleep(900);
            cout <<"Software Used : Code Blocks " << endl;
            Sleep(900);
            cout <<"Language : C++"<<endl;
            Sleep(900);
            cout <<"Published December 7th 2018" <<endl;
        break;
        case 'Q':
        case 'q':
            system("cls");
            cout <<"You're Leaving Dungeon Adventures " << endl;
            Sleep(900);
            system("cls");
            cout <<"Goodbye " << endl;
        break;
        case 'S':
        case 's':
            system("cls");
            int userInput = 0;
            cout << "Please pick one of the characters below:";
            cout << "\n\nWizard: Weapon: Staff" << endl;
            cout << "    \tHealth:      100"<<endl;
            cout << "       \tEnergy:      100"<<endl;
            cout << "   \tAttack:      30"<<endl;
            cout << "       \tDefense:     20"<<endl;
            cout << "    \tCash:        300"<<endl;
            cout << "    \tExperience:  0   "<<endl;
            cout << "\n\nArcher: Weapon: Bow and Arrow\n";
            cout << "    \tHealth:      100"<<endl;
            cout << "       \tEnergy:      100"<<endl;
            cout << "   \tAttack:      40"<<endl;
            cout << "       \tDefense:     10"<<endl;
            cout << "    \tCash:        100"<<endl;
            cout << "    \tExperience:  0   "<<endl;
            cout << "\n\nWarrior:Weapon: Shield and Sword\n";
            cout << "    \tHealth:      100"<<endl;
            cout << "       \tEnergy:      100"<<endl;
            cout << "   \tAttack:      25"<<endl;
            cout << "       \tDefense:     25"<<endl;
            cout << "    \tCash:        250"<<endl;
            cout << "    \tExperience:  0   "<<endl;
            Sleep(1000);
            cout <<"\nDecide :"<<endl;
            Sleep(900);
            cout <<"1: Wizard" << endl;
            Sleep(900);
            cout << "2: Archer"<< endl;
            Sleep(900);
            cout <<"3: Warrior" << endl;
            Sleep(900);
            cin >> userInput;
            for(int i = 1; i <= 5; i++){
            switch(userInput)
            {
                case 1:
                    {
                        player player1("Wizard",100,100,30,20,0,0);
                    //health,energy,attack,defense -Player
                    //health,attack,defense - Monster
                    if(player1.progression = 1)
                    {
                        level1(player1,monster("Shia",100,35,12));
                    }
                    if(player1.progression = 2)
                    {
                        level2(player1,monster("Homeless Guy",100,25,20));
                    }
                     if(player1.progression = 3)
                    {
                        level3(player1,monster("Clerk",100,30,5));
                    }
                     if(player1.progression = 4)
                    {
                        level4(player1,monster("Police Officer",100,50,40));
                    }
                    break;
                    }
                case 2:
                    {
                    player player1("Archer",100,100,40,10,0,0);
                    if(player1.progression = 1)
                    {
                        level1(player1,monster("Shia",100,20,12));
                    }
                    if(player1.progression = 2)
                    {
                        level2(player1,monster("Homeless Guy",100,15,20));
                    }
                     if(player1.progression = 3)
                    {
                        level3(player1,monster("Clerk",100,30,5));
                    }
                     if(player1.progression = 4)
                    {
                        level4(player1,monster("Police Officer",100,40,40));
                    }
                    break;
                    }
                case 3:
                    {
                        player player1("Warrior",100,100,25,25,0,0);

                    if(player1.progression = 1)
                    {
                        level1(player1,monster("Shia",100,20,12));
                    }
                    if(player1.progression = 2)
                    {
                        level2(player1,monster("Homeless Guy",100,15,20));
                    }
                     if(player1.progression = 3)
                    {
                        level3(player1,monster("Clerk",100,30,5));
                    }
                     if(player1.progression = 4)
                    {
                        level4(player1,monster("Police Officer",100,40,40));
                    }
                    break;
                    }
                default:
                    cout << " ok" << endl;

            }
            }
        break;
    }
    return 0;
}
