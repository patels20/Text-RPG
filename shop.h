#include "player.h"

using namespace std;

void shop(player player1)
{
	char userBuy;
	
	while(1)
	{
		cout << "------------------------------------------------------------------------------------------------------------------------\n" << endl;
		cout << "\t\t\t\t\t\t\tShop" << endl;
		cout << "------------------------------------------------------------------------------------------------------------------------\n" << endl;
		cout << "Availible Items:" << endl;
		cout << "(G) Gas: 10BTC \t (H) Health: 10BTC \t (D) Instant Damage: 20BTC \t (R) RED BULL: 1,000 BTC" << endl;

		cin << userBuy;
		system("cls");
		
		switch(userBuy)
		{
			case "G"
			if(player1.cash >= 10)
			{
				player.inventory 
			}
			else
			{
				cout << "Not enough money..." << endl;
			}
			
			
		}
	}
}