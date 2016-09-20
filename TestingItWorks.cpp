#include "Levelbars.h"
#include "Healthbars.h"
#include "Mainmenu.h"
#include "Questing.h"

int startinggame = 1;
int main() {
	SetConsoleTitle("Awaken");
	while(startinggame == 1) {
		Colorworks();
		firstboot();
		startinggame = 0;
		xps = 0;
	}
Core:
	mainmenu();
	system("cls");
	goto Core;
}
//Alexander Cranston 15/11/2015-20/09/2016
