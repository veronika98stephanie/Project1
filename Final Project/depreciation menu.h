#ifndef DEPRECIATION_MENU_H_INCLUDED
#define DEPRECIATION_MENU_H_INCLUDED
#include "depreciation.h"
#include <iomanip>

void exitchoice();//defined in main.cpp

//depreciation option
void depreciationChoices ()
{
    double  percentage,
            capitalo,
            months;

    char depreciationOption[10];
    int depoption;

    //ask for the depreciation option
    cout << "1. Depreciation good value" << endl << "2. Depreciation book value" << endl << "3. Back" << endl;
    //char input: to prevent error if input other than number
    cin >> depreciationOption;

    depoption = atoi (depreciationOption);

    //When the users input the wrong option it will loop to ask other input
    while (depoption < 1 || depoption >3)
    {
        cout<<"Please enter the right number"<<endl;
        cin>>depreciationOption;

        depoption = atoi(depreciationOption);
    }

    //ask the user to input the percentage, capital, and time to be calculated
    if (depoption == 1)
    {
        cout << "-DEPRECIATION GOOD VALUE-" << endl;
        cout << "Input the percentage....%per month(s),";
        cout << " the capital...., and how long....month(s)" << endl;
        cin >> percentage >> capitalo >> months;

        Depreciation good(percentage, capitalo, months);

        system("cls");

        try
        {
            good.getDepreciationGoodValue();
            cout << "-USER INPUT DATA-"<< endl;
            cout << left << setw (10) << "Month" << right << setw(10) << ": " << good.getMonth() << endl;
            cout << left << setw (10) << "Capital" << right << setw(10) << ": " << good.getCapital() << endl;
            cout << left << setw (10) << "Percentage" << right << setw(10) << ": " << good.getPercent() << "%" << endl;

        }
        catch (int i)
        {
            cout << "Your thing will not have any value from month " << i << endl;
        }
        exitchoice();
    }
    else if (depoption == 2)
    {
        cout << "-DEPRECIATION BOOK VALUE-" << endl;
        cout << "Please input the interest percentage....%per month(s),";
        cout << " the capital...., and how long....month(s)" << endl;
        cin >> percentage >> capitalo >> months;

        Depreciation book(percentage, capitalo, months);

        system("cls");

        try
        {
            book.getDepreciationBookValue();
            cout << "-USER INPUT DATA-"<< endl;
            cout << left << setw (10) << "Month" << right << setw(10) << ": " << book.getMonth() << endl;
            cout << left << setw (10) << "Capital" << right << setw(10) << ": " << book.getCapital() << endl;
            cout << left << setw (10) << "Percentage" << right << setw(10) << ": " << book.getPercent() << "%" << endl;
        }
        catch (int i)
        {
            cout << "Your thing will not have any value from month " << i << endl;
        }
        exitchoice();
    }
    else
        return;
}



#endif // DEPRECIATION_MENU_H_INCLUDED
