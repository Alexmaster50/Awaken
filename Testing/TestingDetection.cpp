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
int test = 1;

int main(){
while(1){
    switch((test=getch())){
/*        case WM_KEYDOWN: // NOT WORKING
            if(getch() == 'W'){
                    printf("Forward\n");
                    Sleep(50);
            }
            if(getch() == 'S'){
                    printf("Backward\n");
                    Sleep(50);
            }
            if(getch() == 'A'){
                    printf("Left\n");
                    Sleep(50);
            }
            if(getch() == 'D'){
                    printf("Right\n");
                    Sleep(50);
            }
            break;


            }*/
                           // WORKING

        //  KEYBOARD INPUTS
            case 'w':
                printf("UP\n");
                break;
            case 's':
                printf("DOWN\n");
                break;
            case 'a':
                printf("LEFT\n");
                break;
            case 'd':
                printf("RIGHT\n");
                break;
        }
    }
}
