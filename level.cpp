#include "player.h"
#include "monster.h"
#include "fight.h"

using namespace std;

void level1(player player1, monster mon)
{
    char userInt;
    system("cls");
    cout << "------------------------------------------------------------------------------------------------------------------------ " << endl;
    cout << "\t\t\t\t\t\tWelcome To Level 1" << endl;
    cout << "------------------------------------------------------------------------------------------------------------------------ " << endl;
    Sleep(500);
    cout << "You're walking in the woods.  There's no one around and your phone is dead.  Out of the corner of your eye, you spot him"<< endl;
    Sleep(500);
    cout << "\t\t\t\t\t\t\tIt's SHIA LEBEOUF!" << endl;
    Sleep(500);
    cout << "\t\t\t\tHe looks into your eyes, you can see theres blood on your face." << endl;
    Sleep(500);
    cout << "\t\t\t\t\tMy God, theres blood everywhere!" << endl;
    Sleep(500);
    a:
    cout << "The choice is yours " << player1.getName()<< endl;
    Sleep(500);
    cout <<"R : Run " << endl;
    Sleep(500);
    cout <<"F : Fight " << endl;
    Sleep(500);
    cout <<"Q : Quit Simulation " << endl;
    cout <<"\nDecide : " << endl;
    cin >> userInt;
    system("cls");

    switch(userInt)
    {

            case 'F':
            case 'f':
                fight(player1,mon);
            break;
            case 'R':
            case 'r':
                cout << "Shia LeBeouf declared war on North Korea" << endl;
                Sleep(1000);
                cout << "Meaning the planet is nearing it's destruction" << endl;
                Sleep(1000);
                cout <<" Death is waiting" << endl;
                system("pause");
                exit(1);
                break;
            case 'q':
            case 'Q':
                exit(1);

            default:
                system("cls");
                cout << "Invalid Input" << endl;
                system("pause");
                goto a;
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
    Sleep(500);
    cout << "\t\t\tYou have beaten Shia Lebeouf and are trying to find your way out of the woods." << endl;
    Sleep(500);
    cout << "\t\t\t\t\t    Shia dropped $30 and it is now yours" << endl;
    Sleep(500);
    cout << "\t\t\tYou start to find your way out of the woods when to your surprise you see a car." << endl;
    Sleep(500);
    cout << "\t\t\t      As you slowly approach the car the homeless man who owns it sees you." << endl;
	Sleep(500);
	cout << "\t\t\t      He point his knife at you and asks you for all your hard earned cash" << endl;
    Sleep(500);
    cout << "\nDo you give him your money or fight for your life? "<< endl;
    Sleep(500);
    cout <<"The choice is yours : " << endl;
    Sleep(500);
    cout << "M : Give Money" << endl;
    Sleep(500);
    cout << "F : Fight " << endl;
    Sleep(500);
    cout <<"Q : Quit "<< endl;
    Sleep(500);
    cout <<"Decide : " ;
    cin >> userInt;
    system("cls");
    switch(userInt)
    {
        case 'F':
        case 'f':
            fight(player1,mon);

        break;
        case 'M':
        case 'm':
            cout << "The kind heart of yours has made a horrendous decision" << endl;
            Sleep(1000);
            cout <<" Shia lebeouf used nuke " << endl;
            Sleep(1000);
            system("cls");
            cout << "Game Over" << endl;
            system("pause");
            exit(1);
            break;
        case 'q':
        case 'Q':
            exit(1);

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
    Sleep(500);
    cout << "\t\t\tYou have now killed the homeless guy and stolen his car. "<< endl;
    Sleep(500);
    cout << "\t\tYou think you are in the clear and start to drive home ever so enthusiastically." << endl;
    Sleep(500);
    cout << "\t\t\t  Unfortunately for you life sucks and the car runs out of gas. "<< endl;
    Sleep(500);
    cout << "\t\t\t     But luckily for you, you end up at a gas station." << endl;
    Sleep(500);
	cout << "     At this has station there is a clerk who tell you that you can buy the gas and upgrade your health for money.\n\n " << endl;
	Sleep(500);
    cout << "\t\t\t\t\t\t You have 2 options. "<< endl;
    Sleep(500);
    cout <<"\t\tYou fight the clerk and steal his gas and maybe steal a few bills out the register? "<< endl;
    Sleep(500);
    cout << "\t\t\t\t\t\t\tor"<< endl;
    Sleep(500);
    cout <<"\t\t\t\t\t     You can pay for the gas "<< endl;
   Sleep(500);
    cout <<"P : Pay for gas"<<endl;
    Sleep(500);
    cout <<"F : Fight & Steal"<< endl;
    Sleep(500);
    cout <<"Decide : ";
    cin >> userInt;
    system("cls");
     switch(userInt)
    {
        case 'F':
        case 'f':
            fight(player1,mon);
            cout << "You've got a secret item!" << endl;
            player1.redbull = 1;

        break;
        case 'P':
        case 'p':
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
    cout << "------------------------------------------------------------------------------------------------------------------------ "<< endl;
    cout << "\t\t\t\t\t\tWelcome To Level 4" << endl;
    cout << "------------------------------------------------------------------------------------------------------------------------ " << endl;
    Sleep(500);
    cout << "\t\t\t\t\tYou have now killed the sales clerk guy."<<endl;
    Sleep(500);
    cout << "\t\t  At this point you think you are in the clear because you got away with two murders. " << endl;
    Sleep(500);
    cout << "\t\t\t\tWhy wouldn't you think you could get away with anything." << endl;
    Sleep(500);
    cout << "Because you just cannot catch a break a cop pulls you over on your way home because the car you stole from the homeless guy is not registered." << endl;
    Sleep(500);
	cout << "\t\tAt this point in time you have blood stains all over your shirt and you know that the cop will arrest you. \n" << endl;
	Sleep(500);
    cout << "\t\t\t\t\t\t You have 3 options. \n"<< endl;
    Sleep(500);
    cout <<"\t\t\t\t  You can let the cop arrest you and confess \n"<< endl;
    Sleep(500);
    cout <<"\t\t\t\t You fight the cop because you have nothing to lose. \n"<< endl;
    Sleep(500);
    cout <<"\t\t\t\t\t\t   Bribe the cop.\n"<< endl;
    Sleep(500);
    cout <<"A : Get Arrested & Confess " << endl;
    Sleep(500);
    cout <<"F : Fight the Cop" << endl;
    Sleep(500);
    cout <<"B : Bribe the Cop" << endl;
    Sleep(500);
    cout <<"Decide : ";
    cin >> userInt;
    system("cls");
      switch(userInt)
    {
        case 'A':
        case 'a':
            cout << "Why wouldn't you go down fighting";
        break;
        case 'F':
        case 'f':
            {
            fight(player1,mon);
            break;
            }
        case 'B':
        case 'b':
            {
            cout << "Enter in a 1 or a 2 to see if you successfully bribed the cop or not";
            cin >> x;
            if(x == 1){
                cout << "Congrats you have moved onto level 5";
                 player1.progression+=1;
            }
            if(x ==2){
                cout << "You died of Smallpox because you are ill equipped for survival";
            }
            }
        default:
            cout << "Invalid Input" << endl;
            break;
    }

}
void level5(player player1, monster mon)
{
    char userInt;
    system("cls");
    cout << "------------------------------------------------------------------------------------------------------------------------ " << endl;
    cout << "\t\t\t\t\t\tWelcome To Level 5" << endl;
    cout << "------------------------------------------------------------------------------------------------------------------------ " << endl;
    Sleep(500);
    cout << "\t\t\tYou have now made it all the to your home. "<< endl;
    Sleep(500);
    cout << "\t\tIt has been a long and bloody day, all you want to do is go to bed." << endl;
    Sleep(500);
    cout << "\t\t\tAs usual you can't catch a break because you have bad juju. "<< endl;
    Sleep(500);
    cout << "\t\t\t Upon entering your house you see Thanos, the mad Titan, and you both lock eyes." << endl;
    Sleep(500);
	cout << "   For some reason he chooses not to kill you instantly so he goes easy on you. Good luck fighting Thanos, whose biceps are bigger than your waist.\n\n " << endl;
	Sleep(500);
    cout << "\t\t\t\t\t\t You have 0 options. "<< endl;
    Sleep(500);
    cout <<"\t\tYou must fight the mad Titan? "<< endl;
    Sleep(500);
    cout << "\t\t\t\t\t\t\tor"<< endl;
    Sleep(500);
    Sleep(500);
    cout <<"F : Fight"<< endl;
    Sleep(500);
    cout <<"Decide : You do not have a choice" << endl;
	system("pause");
	system("clr");
	
	
	fight(player1,mon);
	
	
	exit(1);
}

