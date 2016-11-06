#include <iostream>
#include <cmath>
#include <cstdlib>
#include <string>
#include "interest.cpp"
#include "depreciation menu.h"
#include "depreciation.cpp"
#include "interest menu.h"

using namespace std;

void interestChoices ();
void depreciationChoices ();

void exitchoice()
{
    char choice;

    cout << "Do you wish to Exit? (Y/N)" << endl;
    cin >> choice;

    if (toupper(choice)=='Y')
    {
        exit(0);
    }
    else
    {
        return;
    }
}

int main()
{

    char option[10];
    int ops;

    //print the menu at least once
    do
    {
        system("cls");
        //asking the user to choose the option
        cout << "1. Interest" << endl << "2. Depreciation" << endl << "3. exit" << endl;
        cout << "Please choose the option you want " << endl;
        cin >> option;

        ops = atoi(option);

        //The condition if the users input the wrong option or the right option
        while (ops < 1 || ops > 3)
        {
            cout << "Please input the correct number" << endl;
            cin >> option;
            ops = atoi(option);
        }

        if (ops == 1){
            cout << "Welcome to the interest section" << endl;
        }
        if (ops == 2){
                cout << "Welcome to the depreciation section" << endl;
        }

        //The condition if the users choose the option
        if (ops == 1)
        {
            interestChoices();
        }
        else if (ops == 2)
        {
            depreciationChoices();
        }
    }while(ops != 3);

    return 0;
}


