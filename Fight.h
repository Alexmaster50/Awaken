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

#include "Levels.h"
#include "Levelbars.h"
#include "Healthbars.h"
#include "Questing.h"
#include "Shop.h"


#ifndef Fight
#define Fight

int fighthandle = 0;




void enemywins() {
	system("cls");
	printf("You blacked out!");
	color = 1;
	SetConsoleTextAttribute(hConsole, color);
	for(i=0; i<32; i++) {
		printf("\n");
		Sleep(5);
	}
	color = 244;
	SetConsoleTextAttribute(hConsole, color);
	system("cls");
	gTyper("Welcome to Luxglaive's finest hospital: 'Liastrin Hospital\n", 40);
	gTyper("We recommend training more or buying more gear before fighting there again!\n", 40);
	Sleep(2300);
}

void charwins() {

	system("cls");
	color = 244;
	SetConsoleTextAttribute(hConsole, color);
	refresh();
	printf("You won!\n");
	xps = (xps + XPWon);
	printf("You gained %d XP!\n", XPWon);
	shards = (shards + shardsWon);
	printf("You gained %d Shards!\n", shardsWon);
	Sleep(2000);
}

void inRegularFight() {
	currentcharhealth = charmaxhealth;
	currentenemyhealth = enemymaxhealth;

	fighthandle = 1;
	HPbars();
	printlevels();
	color = 244;
	SetConsoleTextAttribute(hConsole, color);
	printf("\nDEBUG: \nCD %d, ED %d, \nCH %1.f, EH %1.f, \nCMH %1.f, EMH %1.f\n", chardamage, enemydamage, currentcharhealth, currentenemyhealth, charmaxhealth, enemymaxhealth);

	printf("\nChars HP: %1.f                  vs                  ", currentcharhealth);

	printf("Enemy HP: %1.f", currentenemyhealth);
	currentcharhealth = currentcharhealth - enemydamage;
	currentenemyhealth = currentenemyhealth - chardamage;

	Sleep(1000);
	system("cls");
	while(fighthandle == 1) {
		HPbars();
		printlevels();
		color = 244;
		SetConsoleTextAttribute(hConsole, color);
		printf("\nDEBUG: \nCD %d, ED %d, \nCH %1.f, EH %1.f, \nCMH %1.f, EMH %1.f\n", chardamage, enemydamage, currentcharhealth, currentenemyhealth, charmaxhealth, enemymaxhealth);

		printf("\nChars HP: %1.f                  vs                  ", currentcharhealth);

		printf("Enemy HP: %1.f", currentenemyhealth);
		currentcharhealth = currentcharhealth - enemydamage;
		currentenemyhealth = currentenemyhealth - chardamage;
		Sleep(2000);
		if(currentenemyhealth < 1) {
			fighthandle = 0;
			charwins();
			goto skiploss;
		}
		if(currentcharhealth < 1) {
			fighthandle = 0;
			enemywins();
		}
skiploss:
		Sleep(500);
		system("cls");
	}
	printf("\n");
	Sleep(500);

}






#endif
