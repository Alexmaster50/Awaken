#include <windows.h>
#include <stdio.h>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <cstdlib>
#include <time.h>
#include <cstdlib>
#include <math.h>
#include <random>

using namespace std;

int one   =  0;
int two   =  0;
int three =  0;
int four  =  0;
int five  =  0;
int six   =  0;

int i = 0;
int rollcount = 0;
int input = 0;

int main(){
    printf("Enter amount of rolls to do:\n");
    scanf("%d", &input);
    int remaining = input;
    for(i=0;i < input; i++){
    int diceroll = 1 + (rand() % 6);
    switch(diceroll){
        case 1:
            one++;
            break;
        case 2:
            two++;
            break;
        case 3:
            three++;
            break;
        case 4:
            four++;
            break;
        case 5:
            five++;
            break;
        case 6:
            six++;
            break;
        }
/*    printf(" One: %d, \n Two: %d, \n Three: %d, \n Four: %d, \n Five: %d, \n Six: %d, \n", one, two, three, four, five, six);
    printf("\n\n Roll:      %d", diceroll);
    rollcount++;
    printf("\n Rolls:     %d", rollcount);
    remaining--;
    printf("\n Remaining: %d", remaining);
*/    }
  printf(" One: %d, \n Two: %d, \n Three: %d, \n Four: %d, \n Five: %d, \n Six: %d, \n", one, two, three, four, five, six);
    getchar();
    getchar();
    getchar();
}
