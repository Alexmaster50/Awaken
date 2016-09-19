#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <iostream>
#include <cstdlib>
#include <windows.h>
#include <time.h>
#include <cstdlib>
#include <math.h>
#include <string>
#include "Healthbars.h"
#include "Levelbars.h"
#include "Questing.h"
#include "Fight.h"
#include "Shop.h"
using namespace std;


#ifndef Mainmenu
#define Mainmenu
int choiceForTutQ = 0;
int throwaway;
int options = 0;
int options2 = 0;
int kit = 0;
//string charname = "o";
//int lenCharname;
int tutorial = 0;


void firstboot() {
	Colorworks();
	color = 255;
	SetConsoleTextAttribute(hConsole, color);
	system("cls");
	color = 244;
	SetConsoleTextAttribute(hConsole, color);

	printf("\n\n\n\n\n\n\n\n\n");
	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	color = 242;
	SetConsoleTextAttribute(hConsole, color);
	printf("                                                  ___\n");
	printf("                     /\\   \\        /   /\\   | _  |     |\\  |\n");
	printf("                    /__\\   \\  /\\  /   /__\\  |/   |---  | \\ |\n");
	printf("                   /    \\   \\/  \\/   /    \\ |\\_  |___  |  \\|\n\n");
	color = 244;
	SetConsoleTextAttribute(hConsole, color);
	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	Sleep(10);
	printf("                                     loading\n");
	printf("                                   ");
	for(i=0; i<11; i++) {
		Sleep(300);
		printf(".");
	}
	printf("\n");
	xps=0;
	system("Cls");
//ask player for char name
	printf("Enter a username:");
	printf("\n");
	cin >> charname;
	system("cls");

	printf("Welcome, ");
	lenCharname = charname.size();
	for(i=0; i<lenCharname; i++) {
		printf("%c", charname[i]);
	}

	printf(". \nWould you like to skip the tutorial?\n");
	printf("1: Yes\n");
	printf("2: No. Play the tutorial.\n");
	printf("[hit the number you'd like to select, then enter]\n");
	scanf("%d", &tutorial);

	system("cls");


	if(tutorial == 1) {
		goto skiptutorial;
	}

	if(tutorial != 1) {
		printf("Hello? Are you awake yet, ");


		for(i=0; i<lenCharname; i++) {
			printf("%c", charname[i]);
		}
		printf("?");
		printf("\nChoose an option to answer with:\n");
		printf("\n1: Huh. Oh, hi.");
		printf("\n2: Who the hell are you, and where am I?");
		printf("\n3: Eh? ughh five more minutes...");
		printf("\nType the number of your choice and hit enter.\n");

		cin >> choiceForTutQ;
		system("cls");
		if(choiceForTutQ == 1) {
			printf("You:\n   Huh. Oh, hi.\n\n");
			printf("Sir Petterson:\n   Hi. I'm Sir Petterson, but you can call me 'Sir Pettersonial the 3rd great   and almighty Knight of Luxgrave's proud military group organization of crime    stopping badassery' for long.\n");
			printf("\nSir Pet:\n   Or Sir Pet for short.\n");
		}
		if(choiceForTutQ == 2) {
			printf("You:\n   Who the hell are you, and where am I?\n\n");
			printf("Sir Petterson:\n   I'm Sir Petterson. Call me Sir Pet for short.");

		}
		if(choiceForTutQ == 3) {
			printf("You:\n   Eh? ughh five more minutes...\n\n");
			printf("???:\n   Ok.. I guess...");
			printf("\n\nYou fall into a sleep, and reawaken to the same figure sitting next to you.");
			Sleep(2000);
			printf("???:\n   I guess that's enough sleep?\nSir Petterson:\nI'm Sir Petterson. Call me Sir Pet for short");

		}
		if(choiceForTutQ != 1 && choiceForTutQ != 2 && choiceForTutQ != 3) {
			printf("???:\n   You're so incompetent you can't even type an existing button?\n   Wow.");
			printf("\nSir Petterson:\n   Anyways.. I'm Sir Petterson. Call me Sir Pet for short.");


		}
		Sleep(500);
//ask player for class
		printf("[...] \n\n([...] means type 1 and enter to continue.)\n");
		scanf("%d", &throwaway);
		system("cls");
		printf("\nSir Pet:");
		printf("\n   Enough of the chit-chat. Welcome to the world of Luxglaive.");
		printf("\n   Heroes of this realm come and go. I work at the Heroes Recruitment Agency");
		printf("\n   You have great potential. So, would you like to join us?");

		printf("\n1: Yes\n");
		printf("2: No\n");
		scanf("%d", &options);
		system("cls");
kitselect:
		if(options == 1) {
skiptutorial:
			printf("Sir Pet:");
			printf("\n   Good. Now heroes in this world are organized.\n   We organize ourselves into different skillsets. There's\n");
			printf("\n\n1: Dark Knights.  Who have medium damage, low HP, medium armour and absorb \n                  enemy's souls to improve HP and Damage, at the loss of Armor.");
			printf("\n\n2: Thieves.       Who do damage as a %% of enemy's HP, they have medium HP\n                  and low armour.");
			printf("\n\n3: Priests.       Priests have low damage and health, and medium armour. \n                  However each round they heal (x)hp a turn based on maxHP");
			printf("\n\n4: and Tanks.     These people are the front line. They have low damage but make                  up for that with high HP and high Armour.\n\n");

		} else {
			printf("Sir Pet:");
			printf("\n   Oh. Come back to us when you're ready...");
			Sleep(1750);
			while(1) {
				printf("Game Over");
				Sleep(500);
				system("cls");
			}

		}
		scanf("%d", &kit);
		switch(kit) {
		case 1:
			printf("You selected to be a 'Dark Knight'. Are you sure?\n1: Yes\n2: No. Choose another.\n");
			scanf("%d", &options);
			switch(options) {
			case 1:
				kit = 1;
				printf("\nYou've become, a Dark Knight!");
				goto kitselected;
				break;
			case 2:
				options = 1;
				system("cls");
				goto kitselect;
				break;
			}
		case 2:
			printf("You selected to be a 'Thief'. Are you sure?\n1: Yes\n2: No. Choose another.\n");
			scanf("%d", &options);
			switch(options) {
			case 1:
				kit = 1;
				printf("\nYou've become, a Thief!");
				goto kitselected;
				break;
			case 2:
				options = 1;
				system("cls");
				goto kitselect;
				break;
			}
		case 3:
			printf("You selected to be a 'Priest'. Are you sure?\n1: Yes\n2: No. Choose another.\n");
			scanf("%d", &options);
			switch(options) {
			case 1:
				kit = 1;
				printf("\nYou've become, a Priest!");
				goto kitselected;
				break;
			case 2:
				options = 1;
				system("cls");
				goto kitselect;
				break;
			}
		case 4:
			printf("You selected to be a 'Tank'. Are you sure?\n1: Yes\n2: No. Choose another.\n");
			scanf("%d", &options);
			switch(options) {
			case 1:
				kit = 1;
				printf("\nYou've become, a Tank!");
				goto kitselected;
				break;
			case 2:
				options = 1;
				system("cls");
				goto kitselect;
				break;
			}
		default:
		    system("cls");
			goto skiptutorial;
			break;
		}
kitselected:
//ask if ready to start journey?
		Sleep(500);
		Sleep(500);
		system("cls");
		string petlastline = "Congratulations. Now, get out of my house!";
		int lenpetlastline = petlastline.size();
		for(i=0; i<lenpetlastline; i++) {
			printf("%c", petlastline[i]);
			Sleep(25);
		}
		color = 240;
		SetConsoleTextAttribute(hConsole, color);
		Sleep(2500);
	}
}

int locationchoice;
void mainmenu() {
openingMM:
	color = 244;
	SetConsoleTextAttribute(hConsole, color);
	system("cls");
	printf("Welcome back to the tavern, ");
	for(i=0; i<lenCharname; i++) {
		printf("%c", charname[i]);
	}



	XPinFight();
	printf("\nLv: %d ", level);
	printf("[%1.f%%], ", XPinP);
	printf("XP: ");
	printf("[%1.f], ", XPinlevel);
	printf("Shards: %d\n ", shards);


	printf("\n\n\n1: Depart on an adventure.\n");
	printf("   NOTE: ALL THE FOLLOWING DO NOT WORK YET.\n");
	printf("2: Depart on a kill quest [HIGH LEVEL RECOMMENDED]\n");
	printf("3: Shop at the market\n");
	printf("4: Place-holder. Inactive\n");

	int mainmenuselect = 0;
	scanf("%d", &mainmenuselect);
	switch(mainmenuselect) {
	case 1:
		system("cls");
		printf("Welcome back to the tavern, ");
		for(i=0; i<lenCharname; i++) {
			printf("%c", charname[i]);
		}
		XPinFight();
		printf("\nLv: %d ", level);
		printf("[%1.f%%], ", XPinP);
		printf("XP: ");
		printf("[%1.f], ", XPinlevel);
		printf("Shards: %d\n ", shards);

		printf("\n");
		printf("Choose an area to travel to:\n");

		printf("0:  Cancel \n");
		if(level >= 0) {
			printf("1:  Xeal ruins\n");
		}
		if(level >= 3) {
			printf("2:  Xeal city\n");
		}
		if(level >= 10) {
			printf("3:  Livias river\n");
		}
		if(level >= 15) {
			printf("4:  Kauls springs\n");
		}
		if(level >= 20) {
			printf("5:  Woen Waterfalls\n");
		}
		if(level >= 30) {
			printf("6:  12 Grebro road\n");
		}
		if(level >= 33) {
			printf("7:  Daisolei route\n");
		}
		if(level >= 35) {
			printf("8:  South Banell\n");
		}
		if(level >= 40) {
			printf("9:  Banell desert\n");
		}
		if(level >= 45) {
			printf("10: Banell capital\n");
		}
		if(level >= 50) {
			printf("11: Bryant Mesa\n");
		}
		if(level >= 55) {
			printf("12: Las Girufa Canyon\n");
		}
		if(level >= 60) {
			printf("13: Las Girufa ghost town\n");
		}
		if(level >= 65) {
			printf("14: Rengal Rocky Roads\n");
		}
		if(level >= 75) {
			printf("15: Rengal Metropolis\n");
		}
		printf("\n");
		scanf("%d", &locationchoice);
		switch(locationchoice) {
		case 0:
			goto openingMM;
			break;
			//EXAMPLE OF WORKING//

			//Ln 2: Travelling to {Area name}
			//Ln 3: Calls rewardsCalc to calculate enemy's stats based on location.
			//Ln 4: Sleeps while Traveling is displayed.
			//Cuts to fight

		case 1:
			system("cls");
			printf("Travelling to Xeal Ruins");
			rewardsCalc(1);
			Sleep(1252);
			system("cls");
			break;
		case 2:
			system("cls");
			printf("Travelling to Xeal City");
			rewardsCalc(3);
			Sleep(1252);
			system("cls");
			break;
		case 3:
			system("cls");
			printf("Travelling to Livias River");
			rewardsCalc(10);
			Sleep(1252);
			system("cls");
			break;
		case 4:
			system("cls");
			printf("Travelling to Kauls Spring");
			rewardsCalc(15);
			Sleep(1252);
			system("cls");
			break;
		case 5:
			system("cls");
			printf("Travelling to Woen Waterfalls");
			rewardsCalc(20);
			Sleep(1252);
			system("cls");
			break;
		case 6:
			system("cls");
			printf("Travelling to 12 Grebro Road");
			rewardsCalc(30);
			Sleep(1252);
			system("cls");
			break;
		case 7:
			system("cls");
			printf("Travelling to Daisolei Route");
			rewardsCalc(33);
			Sleep(1252);
			system("cls");
			break;
		case 8:
			system("cls");
			printf("Travelling to South Banell");
			rewardsCalc(35);
			Sleep(1252);
			system("cls");
			break;
		case 9:
			system("cls");
			printf("Travelling to Banell Desert");
			rewardsCalc(40);
			Sleep(1252);
			system("cls");
			break;
		case 10:
			system("cls");
			printf("Travelling to Banell Capital");
			rewardsCalc(45);
			Sleep(1252);
			system("cls");
			break;
		case 11:
			system("cls");
			printf("Travelling to Bryant Mesa");
			rewardsCalc(50);
			Sleep(1252);
			system("cls");
			break;
		case 12:
			system("cls");
			printf("Travelling to Las Girufa Canyon");
			rewardsCalc(55);
			system("cls");
			Sleep(1252);
			break;
		case 13:
			system("cls");
			printf("Travelling to Las Girufa Ghost Town");
			rewardsCalc(60);
			Sleep(1252);
			system("cls");
			break;
		case 14:
			system("cls");
			printf("Travelling to Rengal Rocky Roads");
			rewardsCalc(65);
			Sleep(1252);
			system("cls");
			break;
		case 15:
			system("cls");
			printf("Travelling to Rengal Metropolis");
			rewardsCalc(75);
			Sleep(1252);
			system("cls");
			break;
		}
		if(locationchoice >= 16) {
			goto openingMM;
		}
		inRegularFight();
		break;
	case 2:
		system("cls");
		printf("Welcome back to the tavern, ");
		for(i=0; i<lenCharname; i++) {
			printf("%c", charname[i]);
		}
		XPinFight();
		printf("\nLv: %d ", level);
		printf("[%1.f%%], ", XPinP);
		printf("XP: ");
		printf("[%1.f], ", XPinlevel);
		printf("Shards: %d\n\n", shards);
		printf(" _________________________________________________ \n");
		printf("/                 BULLETIN BOARD                  \\ \n");
		printf("|-------------------------------------------------|\n");
		printf("|  __________                         ___________ |\n");
		printf("| |  lvl 15  |                       /  lvl 53  / |\n");
		printf("| |    [1]   |  __________          /    [3]   /  |\n");
		printf("| |__________| |  lvl 32  |        /__________/   |\n");
		printf("|              |    [2]   |                       |\n");
		printf("|              |__________|                       |\n");
		printf("|                                                 |\n");
		printf("|                                 __________      |\n");
		printf("|                                /  lvl 71  \\     |\n");
		printf("|                                |    [4]   |     |\n");
		printf("|                                \\__________/     |\n");
		printf("|                                                 |\n");
		printf("\\_________________________________________________/\n");
		getchar();
		getchar();
		getchar();

		break;
	case 3:
		shopFrontEnd();
		break;
	case 4:
		goto openingMM;
		break;
	case 1510:
		color = 42;
		SetConsoleTextAttribute(hConsole, color);
		system("cls");
		printf("\n\n\n\n\n\n\n\n\n");
		printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
//      printf("                                       C\n");
		printf("                         ___         __        _____\n");
		printf("                        /     |  |  |      /\\    |\n");
		printf("                        |     |--|  |--   /__\\   | \n");
		printf("                        \\___  |  |  |__  /    \\  |\n");
		printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
		Sleep(10);
		printf("                                     loading\n");
		printf("                                   ");
		for(i=0; i<11; i++) {
			Sleep(100);
			printf(".");
		}
		system("cls");
openingCM:
		printf("_______________________________________________________________________________\n");
		printf("_________________________________________________________________________[-][x]\n\n\n");
		printf("0:  Close Cheatmode\n");
		printf("1:  Edit Level\n");
		printf("2:  Set Shards\n");

		printf("\n Choose a command from the list provided. \n");
		int cheatChoice;
		int cheatNewValue;
		scanf("%d", &cheatChoice);
		system("cls");
		switch(cheatChoice) {

		case 0:
			goto openingMM;
			break;

		case 1:
			printf("_______________________________________________________________________________\n");
			printf("_________________________________________________________________________[-][x]\n\n\n");
			printf("Enter your new level:\n");
			scanf("%d", &cheatNewValue);
			xps = xpneeded[cheatNewValue-1];
			XPinFight();
			system("cls");
			printf("_______________________________________________________________________________\n");
			printf("_________________________________________________________________________[-][x]\n\n\n");
			printf("Your level is now %d!", level);
			Sleep(1000);
			system("cls");
			goto openingCM;
			break;

		case 2:
			printf("_______________________________________________________________________________\n");
			printf("_________________________________________________________________________[-][x]\n\n\n");
			printf("Enter your new shard amount:\n");
			scanf("%d", &cheatNewValue);
			shards = cheatNewValue;
			system("cls");
			printf("_______________________________________________________________________________\n");
			printf("_________________________________________________________________________[-][x]\n\n\n");
			printf("Your shard amount is now %d!", shards);
			Sleep(1000);
			system("cls");
			goto openingCM;
			break;

		default:
			system("cls");
			goto openingCM;
			break;
		}

		//   ___         __        _____
		//  /     |  |  |      /\\    |
		//  |     |--|  |--   /__\\   |
		//  \\___  |  |  |__  /    \\  |
		getchar();
		getchar();
		break;
	default:
		system("cls");
		goto openingMM;
		break;


//01        Xeal ruins              min:    00  [EXP]
//02        Xeal city               min:    02  [EE: kill 10 in ruins]
//03        Livias river            min:    10  [EXP]
//04        Kauls springs           min:    15  [SHA]
//05        Woen Waterfalls         min:    20  [EXP]
//06        12 Grebro road          min:    30  [EXP]
//07        Daisolei route          min:    33  [SHA]
//08        Near Banell             min:    35  [EXP]
//09        Banell desert           min:    40  [EXP]
//10        Banell capital          min:    45  [SHA]
//11        Bryant Mesa             min:    50  [EXP]
//12        Las Girufa Canyon       min:    55  [EXP]
//13        Las Girufa ghost town   min:    60  [SHA]
//14        Rengal Rocky Roads      min:    65  [EXP]
//15        Rengal Metropolis       min:    75  [SHA]
//16





	}
}
#endif
