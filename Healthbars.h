#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <iostream>
#include <cstdlib>
#include <windows.h>
#include <time.h>
#include <cstdlib>
#include <math.h>
#include "GlobalFuncs.h"


using namespace std;



#ifndef Healthbars
#define Healthbars



// Healths for MainChar
float currentcharhealth;
float charmaxhealth;
float charhealthP;

//Healths for Current enemy
float currentenemyhealth;
float enemymaxhealth;
float enemyhealthP;


HANDLE hConsole;
int color;


void Colorworks() {
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

	color = 15;
	SetConsoleTextAttribute(hConsole, color);
}

void consoleTalking(){
    color = 242;
	SetConsoleTextAttribute(hConsole, color);
}
void allyTalking(){
    color = 249;
	SetConsoleTextAttribute(hConsole, color);
}
void playerTalking(){
    color = 244;
	SetConsoleTextAttribute(hConsole, color);
}
void bossTalking(){
    color = 253;
	SetConsoleTextAttribute(hConsole, color);
}
void finalBossTalking(){
    color = 252;
	SetConsoleTextAttribute(hConsole, color);
}





void printenemydashes() {

	if(enemyhealthP == 0) {
		color = 206;
		SetConsoleTextAttribute(hConsole, color);
		printf("          ");
	}
	if(enemyhealthP<=10 && enemyhealthP>0) {
		color = 46;
		SetConsoleTextAttribute(hConsole, color);
		printf(" ");
		color = 206;
		SetConsoleTextAttribute(hConsole, color);
		printf("         ");

	}
	if(enemyhealthP<=20 && enemyhealthP>10) {
		color = 46;
		SetConsoleTextAttribute(hConsole, color);
		printf("  ");
		color = 206;
		SetConsoleTextAttribute(hConsole, color);
		printf("        ");
	}
	if(enemyhealthP<=30 && enemyhealthP>20) {
		color = 46;
		SetConsoleTextAttribute(hConsole, color);
		printf("   ");
		color = 206;
		SetConsoleTextAttribute(hConsole, color);
		printf("       ");
	}
	if(enemyhealthP<=40 && enemyhealthP>30) {
		color = 46;
		SetConsoleTextAttribute(hConsole, color);
		printf("    ");
		color = 206;
		SetConsoleTextAttribute(hConsole, color);
		printf("      ");
	}
	if(enemyhealthP<=50 && enemyhealthP>40) {
		color = 46;
		SetConsoleTextAttribute(hConsole, color);
		printf("     ");
		color = 206;
		SetConsoleTextAttribute(hConsole, color);
		printf("     ");
	}
	if(enemyhealthP<=60 && enemyhealthP>50) {
		color = 46;
		SetConsoleTextAttribute(hConsole, color);
		printf("      ");
		color = 206;
		SetConsoleTextAttribute(hConsole, color);
		printf("    ");
	}
	if(enemyhealthP<=70 && enemyhealthP>60) {
		color = 46;
		SetConsoleTextAttribute(hConsole, color);
		printf("       ");
		color = 206;
		SetConsoleTextAttribute(hConsole, color);
		printf("   ");
	}
	if(enemyhealthP<=80 && enemyhealthP>70) {
		color = 46;
		SetConsoleTextAttribute(hConsole, color);
		printf("        ");
		color = 206;
		SetConsoleTextAttribute(hConsole, color);
		printf("  ");
	}
	if(enemyhealthP<=90 && enemyhealthP>80) {
		color = 46;
		SetConsoleTextAttribute(hConsole, color);
		printf("         ");
		color = 206;
		SetConsoleTextAttribute(hConsole, color);
		printf(" ");
	}
	if(enemyhealthP<=100 && enemyhealthP>90) {
		color = 46;
		SetConsoleTextAttribute(hConsole, color);
		printf("          ");
	}
}



void printdashes() {
	if(charhealthP == 0) {
		color = 206;
		SetConsoleTextAttribute(hConsole, color);
		printf("          ");
	}
	if(charhealthP<=10 && charhealthP>0) {
		color = 46;
		SetConsoleTextAttribute(hConsole, color);
		printf(" ");
		color = 206;
		SetConsoleTextAttribute(hConsole, color);
		printf("         ");

	}
	if(charhealthP<=20 && charhealthP>10) {
		color = 46;
		SetConsoleTextAttribute(hConsole, color);
		printf("  ");
		color = 206;
		SetConsoleTextAttribute(hConsole, color);
		printf("        ");
	}
	if(charhealthP<=30 && charhealthP>20) {
		color = 46;
		SetConsoleTextAttribute(hConsole, color);
		printf("   ");
		color = 206;
		SetConsoleTextAttribute(hConsole, color);
		printf("       ");
	}
	if(charhealthP<=40 && charhealthP>30) {
		color = 46;
		SetConsoleTextAttribute(hConsole, color);
		printf("    ");
		color = 206;
		SetConsoleTextAttribute(hConsole, color);
		printf("      ");
	}
	if(charhealthP<=50 && charhealthP>40) {
		color = 46;
		SetConsoleTextAttribute(hConsole, color);
		printf("     ");
		color = 206;
		SetConsoleTextAttribute(hConsole, color);
		printf("     ");
	}
	if(charhealthP<=60 && charhealthP>50) {
		color = 46;
		SetConsoleTextAttribute(hConsole, color);
		printf("      ");
		color = 206;
		SetConsoleTextAttribute(hConsole, color);
		printf("    ");
	}
	if(charhealthP<=70 && charhealthP>60) {
		color = 46;
		SetConsoleTextAttribute(hConsole, color);
		printf("       ");
		color = 206;
		SetConsoleTextAttribute(hConsole, color);
		printf("   ");
	}
	if(charhealthP<=80 && charhealthP>70) {
		color = 46;
		SetConsoleTextAttribute(hConsole, color);
		printf("        ");
		color = 206;
		SetConsoleTextAttribute(hConsole, color);
		printf("  ");
	}
	if(charhealthP<=90 && charhealthP>80) {
		color = 46;
		SetConsoleTextAttribute(hConsole, color);
		printf("         ");
		color = 206;
		SetConsoleTextAttribute(hConsole, color);
		printf(" ");
	}
	if(charhealthP<=100 && charhealthP>90) {
		color = 46;
		SetConsoleTextAttribute(hConsole, color);
		printf("          ");
	}

}


void printhealth() {

	color = 242;
	SetConsoleTextAttribute(hConsole, color);
	printf("Your");
	color = 241;
	SetConsoleTextAttribute(hConsole, color);
	printf(" HP: ");
	color = 245;
	SetConsoleTextAttribute(hConsole, color);
	printf("[");
	printdashes();
	color = 245;
	SetConsoleTextAttribute(hConsole, color);
	printf("]");
	color = 245;
	SetConsoleTextAttribute(hConsole, color);
	printf("[");
	color = 249;
	SetConsoleTextAttribute(hConsole, color);
	printf("%.1f%%", charhealthP);
	color = 245;
	SetConsoleTextAttribute(hConsole, color);
	printf("]    ");
	color = 255;
	SetConsoleTextAttribute(hConsole, color);
}
void printenemyhealth() {

	color = 252;
	SetConsoleTextAttribute(hConsole, color);
	printf("   Enemy");
	color = 241;
	SetConsoleTextAttribute(hConsole, color);
	printf(" HP: ");
	color = 245;
	SetConsoleTextAttribute(hConsole, color);
	printf("[");
	printenemydashes();
	color = 245;
	SetConsoleTextAttribute(hConsole, color);
	printf("]");
	color = 245;
	SetConsoleTextAttribute(hConsole, color);
	printf("[");
	color = 249;
	SetConsoleTextAttribute(hConsole, color);
	printf("%.1f%%", enemyhealthP);
	color = 245;
	SetConsoleTextAttribute(hConsole, color);
	printf("]  ");
	color = 255;
	SetConsoleTextAttribute(hConsole, color);
}



void HPbars() {



	charhealthP = (currentcharhealth / charmaxhealth) * 100.000;
	enemyhealthP = (currentenemyhealth / enemymaxhealth) * 100.000;
	printhealth();
	printf("           ");
	printenemyhealth();
	printf("\n");
	color = 15;
	SetConsoleTextAttribute(hConsole, color);

	//printf("currentcharhealth: %.1f, \ncharmaxhealth: %.1f, \ncharhealthP: %.1f ",currentcharhealth, charmaxhealth, charhealthP);

	//getchar();
	//getchar();
	//system("cls");

}

#endif
