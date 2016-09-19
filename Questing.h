#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <iostream>
#include <cstdlib>
#include <windows.h>
#include <time.h>
#include <cstdlib>
#include <math.h>
#include "Healthbars.h"

#ifndef Questing
#define Questing


int shardsWon = 0;
int XPWon = 0;
int questlevel;
int enemydamage;
int chardamage;


void refresh()
{
    questlevel = questlevel;
}

void rewardsCalc (int questlevel)
{
    XPWon = (questlevel) * 20;
    shardsWon = questlevel * 16;
    currentenemyhealth = (7*(questlevel*questlevel))+6;
    enemymaxhealth = (7*(questlevel*questlevel))+1;
    enemydamage = 2*(questlevel*questlevel);
    chardamage = (2*(level*(level-1)))+3;
    charmaxhealth = (7*(level*(level-1)))+6;
}



#endif
