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
		cout << "(G) Gas: 10 BTC \t (H) Health: 10 BTC \t (R) RED BULL: 1,000 BTC" << endl;

		cin << userBuy;
		system("cls");
		
		switch(userBuy)
		{
			case "G":
			case "g":
			if(player1.cash >= 10)
			{
				player1.gas++;
				player1.cash -= 10;
			}
			else
			{
				cout << "Not enough money..." << endl;
			}
			break;
			
			case "H":
			case "h":
			if(player1.cash >= 10)
			{
				player1.healthpack++;
				player1.cash -= 10;
			}
			else
			{
				cout << "Not enough money..." << endl;
			}
			
			case "R":
			case "r":
			if(player1.cash >= 1000)
			{
				player1.redbull++;
				player1.cash -= 1000;
			}
			else
			{
				cout << "Not enough money..." << endl;
			}
		}
	}
}