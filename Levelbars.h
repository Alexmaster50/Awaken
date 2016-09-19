#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <iostream>
#include <cstdlib>
#include <windows.h>
#include <time.h>
#include <cstdlib>
#include <math.h>

#include "Levels.h"
#include "Healthbars.h"

#ifndef Levelbars
#define Levelbars

using namespace std;


void printXP() {
	XPinFight();

	if(XPinP == 0) {
		color = 158;
		SetConsoleTextAttribute(hConsole, color);
		printf("          ");
	}
	if(XPinP<=10 && XPinP>0) {
		color = 190;
		SetConsoleTextAttribute(hConsole, color);
		printf(" ");
		color = 158;
		SetConsoleTextAttribute(hConsole, color);
		printf("         ");

	}
	if(XPinP<=20 && XPinP>10) {
		color = 190;
		SetConsoleTextAttribute(hConsole, color);
		printf("  ");
		color = 158;
		SetConsoleTextAttribute(hConsole, color);
		printf("        ");
	}
	if(XPinP<=30 && XPinP>20) {
		color = 190;
		SetConsoleTextAttribute(hConsole, color);
		printf("   ");
		color = 158;
		SetConsoleTextAttribute(hConsole, color);
		printf("       ");
	}
	if(XPinP<=40 && XPinP>30) {
		color = 190;
		SetConsoleTextAttribute(hConsole, color);
		printf("    ");
		color = 158;
		SetConsoleTextAttribute(hConsole, color);
		printf("      ");
	}
	if(XPinP<=50 && XPinP>40) {
		color = 190;
		SetConsoleTextAttribute(hConsole, color);
		printf("     ");
		color = 158;
		SetConsoleTextAttribute(hConsole, color);
		printf("     ");
	}
	if(XPinP<=60 && XPinP>50) {
		color = 190;
		SetConsoleTextAttribute(hConsole, color);
		printf("      ");
		color = 158;
		SetConsoleTextAttribute(hConsole, color);
		printf("    ");
	}
	if(XPinP<=70 && XPinP>60) {
		color = 190;
		SetConsoleTextAttribute(hConsole, color);
		printf("       ");
		color = 158;
		SetConsoleTextAttribute(hConsole, color);
		printf("   ");
	}
	if(XPinP<=80 && XPinP>70) {
		color = 190;
		SetConsoleTextAttribute(hConsole, color);
		printf("        ");
		color = 158;
		SetConsoleTextAttribute(hConsole, color);
		printf("  ");
	}
	if(XPinP<=90 && XPinP>80) {
		color = 190;
		SetConsoleTextAttribute(hConsole, color);
		printf("         ");
		color = 158;
		SetConsoleTextAttribute(hConsole, color);
		printf(" ");
	}
	if(XPinP<=100 && XPinP>90) {
		color = 190;
		SetConsoleTextAttribute(hConsole, color);
		printf("          ");
	}
}

//190
//158

void printlevels() {
	color = 242;
	SetConsoleTextAttribute(hConsole, color);
	printf("Your ");
	color = 253;
	SetConsoleTextAttribute(hConsole, color);
	printf("XP: ");
	color = 245;
	SetConsoleTextAttribute(hConsole, color);
	printf("[");

	printXP();

	color = 245;
	SetConsoleTextAttribute(hConsole, color);
	printf("]");
	color = 255;
	SetConsoleTextAttribute(hConsole, color);

	/*    color = 253;
	    SetConsoleTextAttribute(hConsole, color);
	    printf("[");
	    printf("%1.f%%]", XPinP);
	*/
}
#endif
