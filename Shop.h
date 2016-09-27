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


using namespace std;

#ifndef Shop
#define Shop


string charname = "o";
int lenCharname;

int shards = 100;



void shopFrontEnd() {
	system("cls");
	printf("Welcome back to the store, ");
	for(i=0; i<lenCharname; i++) {
		printf("%c", charname[i]);
	}

	XPinFight();
	printf("\nLv: %d ", level);
	printf("[%1.f%%], ", XPinP);
	printf("XP: ");
	printf("[%1.f], ", XPinlevel);
	printf("Shards: %d\n ", shards);
	printf("\n\n");
	printf("Welcome to my Shop! Choose any weapon from my selection!\n\n");
	int sectionChoice;
	printf("1:  Light weapons [Thief]\n");
	printf("2:  Broad swords [Dark knight]\n");
	printf("3:  Heavy weapons [Tank]\n");
	printf("4:  Wands / Staves [Priest]\n");
	scanf("%d", &sectionChoice);
	system("cls");
	printf("Welcome back to the store, ");
	for(i=0; i<lenCharname; i++) {
		printf("%c", charname[i]);
	}
	XPinFight();
	printf("\nLv: %d ", level);
	printf("[%1.f%%], ", XPinP);
	printf("XP: ");
	printf("[%1.f], ", XPinlevel);
	printf("Shards: %d\n ", shards);
	printf("\n\n");

	/*
	--Info about char

	--1:
	--Weapon display
	--Cost
	--Damage
	--Extra stats(?)


	*/

	switch(sectionChoice) {
	case 1:
		// LIGHT WEAPONS//
		/*
		   ______
		<==\____/




		     ___________
		o===<__________/
		shortsword
		*/


		printf("   ______\n");
		printf("<==\\____/");
		printf("\nClawing Cleaver");
		printf("\nPrice: 1000 shards");
		printf("\n\n");


		printf("     ___________\n");
		printf("o===<__________/");
		printf("\n Slicing short-sword");
		printf("\nPrice: 1850 Shards");
        printf("\n\n");


		printf("o\\---/)========>");
		printf("\nPiercing Rapier");
		printf("\nPrice: 2750 Shards\n\n");

		printf("So, what'll it be?");
		getchar();
		getchar();
		getchar();
		system("cls");
		break;

	case 2:
		// BROAD SWORDS //
		/*

		         _
		 _      / |___________________
		|_>====<* |__________________/
		        \_|
		Katana
		*/
		printf("                ___\n");
		printf("      _________/  /\n");
		printf("<>===<___________/\n");
		printf("Sharpened Scimitar\n");
		printf("Price: 1575 Shards");
        printf("\n\n");











        getchar();
        getchar();
        getchar();
        system("cls");
		break;

	case 3:
		//HEAVY WEAPONS //
		/*
		              _
		  _  _       / |___________________________________
		 / \/ \_____/  |___________________________________\
		 | <>  _____<* |                                   /
		 \_/\_/     \  |__________________________________/
		             \_|

		*/



		break;
	case 4:
		//WANDS // STAVES//
		/*
		  ______
		 /______\
		 |o____o|
		 | o__o |
		 \__oo__/
		    ||
		    ||
		    ||
		    ||
		    ||
		    ||
		    ||
		    ||
		    ||
		    ||
		    ||
		   /  \
		  / __ \
		  ||__||
		  \____/
		*/







		break;
	}


}
#endif
