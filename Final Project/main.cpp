#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;

void interestChoices ();
void depreciationChoices ();
int singleInterest (double, double, double, double);
double compoundInterest (double, double, double, double);
int depreciationGoodValue ();
int depreciationBookValue ();

int interestOption,
    depreciationOption;

double  valueOwned1,
        valueOwned2;

int main()
{
    int option;

    //asking the user to choose the option
    cout << "1. Interest" << endl << "2. Depreciation" << endl;
    cout << "Please choose the option you want " << endl;
    cin >> option;

    //The condition if the users input the wrong option or the right option
    while (option < 1 || option > 2){
        cout << "Please input the correct number" << endl;
        cin >> option;
    }
    while (option == 1){
        cout << "Welcome to the interest section" << endl;
        break;
    }
    while (option == 2){
            cout << "Welcome to the depreciation section" << endl;
            break;
    }

    //The condition if the users choose the option
    if (option == 1){
        interestChoices();
    }

    return 0;
}
