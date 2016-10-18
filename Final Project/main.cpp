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

void interestChoices(){

    double  percent,
            capital,
            months;

    //ask another option
    cout << "1. Single interest" << endl << "2. Compound interest" << endl;
    cin >> interestOption;

    //When the users input the wrong option it will loop to ask other input
    while (interestOption < 1 || interestOption >2){
        cout<<"Please enter the right number"<<endl;
        cin>>interestOption;
    }
            //ask the user to input the percentage, capital, and time to be calculated
            if (interestOption == 1){
                cout << "Now you are entering the section of single interest" << endl;
                cout << "Please input the interest percentage....%per month(s),";
                cout << " the capital...., and how long....month(s)" << endl;
                cin >> percent >> capital >> months;
                singleInterest(percent, capital, months, valueOwned1);
            }else if (interestOption == 2){
                cout << "Now you are entering the section of compound interest" << endl;
                cout << "Please input the interest percentage....%per month(s),";
                cout << " the capital...., and how long....month(s)" << endl;
                cin >> percent >> capital >> months;
                compoundInterest(percent, capital, months, valueOwned2);
        }
}

//The formula to calculate the single interest
int singleInterest(double interestPercentage1, double capital1, double time1, double valueOwned1){
    valueOwned1 = capital1 + capital1 * interestPercentage1/100 * time1;
    cout << valueOwned1 << endl;
    return valueOwned1;
}

//The formula to calculate the compound interest
double compoundInterest(double interestPercentage2, double capital2, double time2, double valueOwned2){

    double nValueOwned2 [500];
    int months;
    char choice;

    for (int i = 1; i <= time2; i++){
        double increasingvalue;
        increasingvalue = pow(1 + interestPercentage2/100, i);
        valueOwned2 = capital2 * increasingvalue;
        nValueOwned2 [i] = {valueOwned2};
        cout << "When you are in " << i << " month(s), " <<
                "your capital will be " << valueOwned2 << endl;
    }

    //ask the user to input the months to see the value that they have in that months
    cout << "Do you wish to see your value in a certain months?(Y/N)" << endl;
    cin >> choice;

    switch (choice)
    {
    case 'Y':
    case 'y':
        cout << "Please enter the month you wish to see the value "<<
            "with in the range of months that you have input"<<endl;
        cin >> months;
        cout<<nValueOwned2 [months]<<endl;
        break;
    case 'n':
    case 'N':
        exit (0);
    }
}


