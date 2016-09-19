// reading a text file
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int level = 0;
int gold = 0;
int xps = 0;

string line;

void getnums()
{

    ifstream myfile ("storageslot.txt");
    if (myfile.is_open())
    {
        myfile >> level >> gold >> xps;
        /*
        while ( getline (myfile,line) )
        {
            cout << line << '\n';
        }
        */
        printf("Lev: %d \nGol: %d \nExp: %d \n", level, gold, xps);
        myfile.close();
    }

    else cout << "Unable to open file";




}

int option = 0;
int increase = 0;

int main ()
{

rerunnums:
    getnums();

    printf("\n What do you want to increase?");
    printf("\n1: Lev \n2: Gol\n3: Exp\n");
    scanf("%d", &option);

    switch(option)
    {
    case 1:
        printf("How much to increase 'Lev' By?");
        option = 0;
        break;
    case 2:
        printf("How much to increase 'Gol' By?");
        option = 0;
        break;
    case 3:
        printf("How much to increase 'Exp' By?");
        option = 0;
        break;
    default:
        goto rerunnums;
        break;
    }

    getchar();
    getchar();
    getchar();
    return 0;
}
