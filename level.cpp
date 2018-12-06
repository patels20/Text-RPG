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
    cout << "What will you do? Run or Fight? "<< endl;
    cin >> userInt;
    system("cls");

    switch(userInt)
    {
        case 'Fight?':
        case 'fight':
            fight(player1,mon);

        break;
        case 'run':
        case 'Run':
            cout << "You've Advanced to Level 2" << endl;
            player1.setLevel(2);
            break;
        default:
            cout << "Invalid Input" << endl;
            break;
    }
}
void level2(player player1, monster mon1, monster mon2)
{



}
