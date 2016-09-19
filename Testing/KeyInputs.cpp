// METHOD ONE //            FAIL
/*
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

int input = 1;
int test = 1;

int main(){
    while(1){
    switch(input){
        case WM_KEYDOWN:
        here:
            switch(test){
                case VK_UP:
                    printf("Forward\n");
                    break;
                case VK_DOWN:
                    printf("Backward\n");
                    break;
                case VK_LEFT:
                    printf("Left\n");
                    break;
                case VK_RIGHT:
                    printf("Right\n");
                    break;
                case VK_LCONTROL:
                    printf("Inventory\n");
                    break;

        }
                default:
                    goto here;
    }
    }
}
*/


// METHOD TWO //            SUCCESS
/*
#include <conio.h>
#include <iostream>
using namespace std;

#define KEY_UP 72
#define KEY_DOWN 80
#define KEY_LEFT 75
#define KEY_RIGHT 77

int main()
{
    int c = 0;
    while(1)
    {
        c = 0;
    here:
        switch((c=getch())) {
        case KEY_UP:
            cout << endl << "Up" << endl;//key up
            break;
        case KEY_DOWN:
            cout << endl << "Down" << endl;   // key down
            break;
        case KEY_LEFT:
            cout << endl << "Left" << endl;  // key left
            break;
        case KEY_RIGHT:
            cout << endl << "Right" << endl;  // key right
            break;
        default:
            //cout << endl << "null" << endl;  // not arrow
            goto here;
            break;
        }

    }
}
*/

// METHOD THREE //          FAIL
/*
#include <windows.h>
#include <stdio.h>
#include <iostream>

int main()
{
    HANDLE hInput = GetStdHandle(STD_INPUT_HANDLE);
    DWORD NumInputs = 0;
    DWORD InputsRead = 0;
    bool running = true;

    INPUT_RECORD irInput;

    GetNumberOfConsoleInputEvents(hInput, &NumInputs);

    ReadConsoleInput(hInput, &irInput, 1, &InputsRead);
while(1){
        here:
    switch(irInput.Event.KeyEvent.wVirtualKeyCode)
    {
        case VK_ESCAPE:
        printf("Escape");
        break;

        case VK_LEFT:
        printf("Left");
        break;

        case VK_UP:
        printf("Up");
        break;

        case VK_RIGHT:
        printf("Right");
        break;

        case VK_DOWN:
        printf("Down");
        break;

        default:
            goto here;
    }
}
}
*/

// METHOD FOUR //           TESTING
/*
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

char test = 1;

int main(){
while(1){
    switch(test){
        case WM_KEYDOWN:
            if(WPARAM == 'W'){
                    printf("Forward\n");
                    Sleep(50);
            }
            if(WPARAM == 'S'){
                    printf("Backward\n");
                    Sleep(50);
            }
            if(WPARAM == 'A'){
                    printf("Left\n");
                    Sleep(50);
            }
            if(WPARAM == 'D'){
                    printf("Right\n");
                    Sleep(50);
            }
            break;
        }
    }
}
*/
