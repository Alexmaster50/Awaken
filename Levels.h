#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <time.h>
#include <math.h>


#ifndef Levels
#define Levels


int i = 0;

float XPinlevel = 0.000;

int level;
float xpneeded[26] = {0.00, 25.00, 60.00, 150.00, 250.00, 550.00, 900.00, 1300.00, 1750.00, 2250.00, 3050.00, 3950.00, 4950.00, 6050.00, 7250.00, 8750.00, 10500.00, 12500.00, 14750.00, 17250.00, 20250.00, 23583.00, 27249.00, 31249.00, 35582.00, 40582.00};
int xps = 0;
float XPinP = 0.0000;
int XPreqForNxtLvl = 0;



void XPinFight() {

	level = 0;
	for(i=0; xps>=xpneeded[i]; i++) {
		level++;
	}

	XPinlevel = xps - xpneeded[level-1];

	XPreqForNxtLvl = xpneeded[level] - xpneeded[level-1];

	XPinP = (XPinlevel / XPreqForNxtLvl) * 100;
}

#endif
