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
#include "Fight.h"
#include "Questing.h"

using namespace std;



#ifndef Mainmenu
#define Mainmenu
int choiceForTutQ = 0;
int throwaway;
int options = 0;
int options2 = 0;
int kit = 0;
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

    consoleTalking();
	printf("\nWould you like to skip the tutorial?\n");
	printf("1: Yes\n");
	printf("2: No. Play the tutorial.\n");
	printf("[hit the number you'd like to select, then enter]\n>");
	scanf("%d", &tutorial);

	system("cls");


	if(tutorial == 1) {
		printf("Enter a username:");
		printf("\n>");
		cin >> charname;
		system("cls");

		printf("Welcome, ");
		lenCharname = charname.size();
		for(i=0; i<lenCharname; i++) {
			printf("%c", charname[i]);
		}
		printf("\n");
		Sleep(1500);
		system("cls");
		goto skiptutorial;
	}

/*
*           *
*  TUTORIAL *
*           *
*/

	if(tutorial != 1) {
        consoleTalking();
		gTyper("You awaken in a dark room, your body cold and sore.\n", 40);
        playerTalking();
        gTyper("'Where am I?' ", 40);
        consoleTalking();
        gTyper("you think to yourself.\nYou start trying to get up, but suddenly you hear shouting\n\n", 40);
		allyTalking();
		gTyper("???:\n   I don't know! When the hell can we kick them out the lab?!\n   We don't even know their name and their snoring is so loud and annoying!\n\n", 40);
        playerTalking();
		gTyper("That's right, who am I?", 40);
        gTyper("...", 330);
        gTyper("I remember nothing.\nBut what should I call myself until then?\n\n", 40);
        consoleTalking();
		printf("Give yourself a name:");
		printf("\n>");
		cin >> charname;
		system("cls");
        playerTalking();
		gTyper("\nYea, ", 40);
		lenCharname = charname.size();
		for(i=0; i<lenCharname; i++) {
			printf("%c", charname[i]);
			Sleep(40);
		}
		gTyper(" will do.\n\n", 40);
        consoleTalking();
		gTyper("The door slams open.\n\n", 40);
		allyTalking();
		gTyper("???:\n   You awake yet?\n", 50);
		Sleep(100);
		consoleTalking();
		printf("\nChoose an option to answer with:\n");
		Sleep(100);
		printf("\n1: Huh. Oh, hi.");
		Sleep(100);
		printf("\n2: Who the hell are you, and where am I?");
		Sleep(100);
		printf("\n3: Eh? ughh five more minutes...");
		Sleep(100);
		printf("\n4: Yea, call me '");
		lenCharname = charname.size();
		for(i=0; i<lenCharname; i++) {
			printf("%c", charname[i]);
		}
		printf("' by the way.\n");
		printf("\nType the number of your choice and hit enter.\n>");

		cin >> choiceForTutQ;
		system("cls");
		if(choiceForTutQ == 1) {
            playerTalking();
			gTyper("You:\n   Huh. Oh, hi.\n\n", 40);
            allyTalking();
			gTyper("Sir Petterson:\n   Hi. I'm Sir Petterson, but you can call me 'Sir Petterson the 3rd great   and almighty Knight of Luxgrave's proud military group' for long.\n", 40);
			gTyper("\nSir Pet:\n   Or Sir Pet for short.", 40);
		}
		if(choiceForTutQ == 2) {
            playerTalking();
			gTyper("You:\n   Who the hell are you, and where am I?\n\n", 40);
            allyTalking();
			gTyper("Sir Pet:\n   I'm Sir Petterson. Call me Sir Pet for short.", 40);

		}
		if(choiceForTutQ == 3) {
            playerTalking();
			gTyper("You:\n   Eh? ughh five more minutes...\n\n", 40);
            allyTalking();
			gTyper("???:\n   Ok.. I guess...", 40);
			consoleTalking();
			gTyper("\n\nYou fall into a sleep, and reawaken to the same figure sitting next to you.\n", 40);
			Sleep(2000);
			allyTalking();
			gTyper("Sir Pet:\n   I guess that's enough sleep?\nSir Petterson:\nI'm Sir Petterson. Call me Sir Pet for short", 40);

		}
		if(choiceForTutQ == 4) {
            playerTalking();
			gTyper("\nYou: Yea, call me '", 40);
			lenCharname = charname.size();
			for(i=0; i<lenCharname; i++) {
				printf("%c", charname[i]);
				Sleep(40);
			}
			gTyper("' by the way.\n\n", 40);
            allyTalking();
			gTyper("Sir Pet:\n   I'm Sir Petterson. Call me Sir Pet for short.", 40);
		}





		if(choiceForTutQ != 1 && choiceForTutQ != 2 && choiceForTutQ != 3 && choiceForTutQ != 4) {
			allyTalking();
			gTyper("???:\n   You're so incompetent you can't even give me an answer?\n   Wow.", 40);
			gTyper("\nSir Pet:\n   Anyways.. I'm Sir Petterson. Call me Sir Pet for short.", 40);
		}
qAboutLux:
        allyTalking();
		gTyper("\n\n   So how much do you know about Luxgrave?", 40);
        consoleTalking();
		gTyper("\n1: Uh, nothing Sir.", 40);
		gTyper("\n2: I know I'm alive?", 40);
		gTyper("\n3: Absolutely everything.\n>", 40);
		cin >> choiceForTutQ;
		system("cls");
		allyTalking();
		switch(choiceForTutQ) {
		case 1:
            gTyper("Sir Pet:", 40);
            gTyper("\n   Well, I'll fill you in on the situation then.", 40);
            break;
		case 2:
            gTyper("Sir Pet:", 40);
            gTyper("\n   Well, I'll fill you in on the situation then.", 40);
            break;
		case 3:
            gTyper("Sir Pet:", 40);
            gTyper("\n   I can smell that bull from a mile away. I'll tell you anyways.", 40);
            break;
        default:
            system("cls");
            goto qAboutLux;
		}

        allyTalking();
        gTyper("\n\n   Luxgrave is the world we inhabit [[add info]]\n", 40);      //ADD INFO IN HERE
        Sleep(1000);
		gTyper("\nSir Pet:", 40);
		gTyper("\n   Enough of the chit-chat. Welcome to the world of Luxglaive.", 40);
		gTyper("\n   Heroes of this realm come and go. I work at the Heroes Recruitment Agency", 40);
		gTyper("\n   You don't have the best potential. However, would you like to join us anyway?", 40);

        consoleTalking();
		printf("\n1: Yes\n");
		printf("2: No\n>");
		scanf("%d", &options);
		system("cls");
		if(options == 1) {
skiptutorial:
            allyTalking();
			gTyper("Sir Pet:", 40);
			gTyper("\n   Good. Now heroes in this world are organized into Guilds.\n   These guilds teach different abilities. There's\n", 40);
			gTyper("\n\n Dark Knights.  Who have medium damage, low HP, medium armour and absorb \n                  enemy's souls to improve HP and Damage, at the loss of Armor.", 40);
			gTyper("\n\n Thieves.       Who do damage as a % of enemy's HP, they have medium HP\n                  and low armour.", 40);
			gTyper("\n\n Priests.       Priests have low damage and health, and medium armour. \n                  However each round they heal (x)hp a turn based on maxHP", 40);
			gTyper("\n\n Tanks.         These people are the front line. They have low damage but make                   up for that with high HP and high Armour.", 40);
			gTyper("\n\n   Want to know some more? Such as some basic abilities?\n", 40);
			printf("1: Yes\n2: No\n>");

		} else {
		    allyTalking();
			gTyper("Sir Pet:", 40);
			gTyper("\n   Oh. Come back to us when you're ready...", 40);
			Sleep(1750);
			while(1) {
                consoleTalking();
				printf("Game Over");
				Sleep(5000);
				system("cls");
				printf("Restart the .exe to play again...");
			}

		}

		int kitQ;
		scanf("%d", &kitQ);
		system("cls");
		allyTalking();
		switch(kitQ) {
		case 1:
		    gTyper("Dark knight:\n", 40);
		    gTyper("Passive: Each kill adds a soul. 1 Soul = +3hp, +1dmg\n", 40);
		    gTyper("Mastery: Successful attacks restore a % of MaxHP\n\n", 40);

		    gTyper("Thief:\n", 40);
			gTyper("Passive: Attack deal dmg as % of enemy HP [Respects armour]\n", 40);
			gTyper("Mastery: Can attack twice per turn\n\n", 40);

			gTyper("Priest:\n", 40);
			gTyper("Passive: heals each turn, scales inversely with armour.\n", 40);
			gTyper("Mastery: When enemies attack they take dmg\n\n", 40);

			gTyper("Tank:\n", 40);
			gTyper("Passive: Damage scales with armour\n", 40);
			gTyper("Mastery: Tank ignores weapon miss chance\n\n", 40);

			break;
        case 2:
            printf(" ");
            goto classSelect;
            break;
        default:
            goto skiptutorial;
		}
classSelect:
        allyTalking();
        gTyper("So, who will you join?\n\n", 40);
        consoleTalking();
        printf("1: Dark Knights,\n");
        printf("2: Thieves,\n");
        printf("3: Priests,\n");
        printf("4: Tanks.\n");
        printf("5: [Go back to class info]\n>");

		scanf("%d", &kit);
		consoleTalking();
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
				goto classSelect;
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
				goto classSelect;
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
				goto classSelect;
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
				goto classSelect;
				break;
			}
		default:
			system("cls");
			goto skiptutorial;
			break;
		}
kitselected:

		Sleep(500);
		Sleep(500);
		system("cls");
		allyTalking();
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
	}

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

#endif
