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

#ifndef GlobalFuncs
#define GlobalFuncs

string gTyper(string textToSlowDown, int howSleepy) {
	int lengthOfSlowedString = textToSlowDown.size();
	for(i=0; i<lengthOfSlowedString; i++) {
		printf("%c", textToSlowDown[i]);
		Sleep(howSleepy);
	}
	return " ";
}

#endif
