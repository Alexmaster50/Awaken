// reading a text file
#include <iostream>
#include <string>
#include <fstream>
#include <windows.h>

using namespace std;

int level = 50;
int gold = 500;
int xps = 5000;

int input = 0;
string line;

void getnums() {
	fstream myfile ("storageslot.txt");
	if (myfile.is_open()) {
		myfile << "Char 1 level:\n" << level << "\nChar 1 Gold: \n" << gold << "\nChar 1 XP: \n"  << xps;
		myfile >> level >> gold >> xps;

		printf("Lev: %d \nGol: %d \nExp: %d \n", level, gold, xps);
		myfile.close();
	} else cout << "Unable to open file";




}

int option = 0;
int increase = 0;

int main () {

rerunnums:
	getnums();

	printf("\n What do you want to increase?");
	printf("\n1: Lev \n2: Gol\n3: Exp\n");
	scanf("%d", &option);

	switch(option) {
	case 1:
		printf("How much to increase 'Lev' By?\n");
		option = 0;
		scanf("%d", &input);
		level = level + input;
		break;
	case 2:
		printf("How much to increase 'Gol' By?\n");
		option = 0;
		scanf("%d", &input);
		gold = gold + input;
		break;
	case 3:
		printf("How much to increase 'Exp' By?\n");
		option = 0;
		scanf("%d", &input);
		xps = xps + input;
		break;
	default:
		goto rerunnums;
		break;
	}
	system("cls");
	goto rerunnums;
	getchar();
	getchar();
	getchar();
	return 0;
}
