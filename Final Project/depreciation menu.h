#ifndef DEPRECIATION_MENU_H_INCLUDED
#define DEPRECIATION_MENU_H_INCLUDED

#include "depreciation.h"

//depreciation option
void depreciationChoices ()
{
    double  percentage,
            capitalo,
            months;

    char depreciationOption[10];
    int depoption;

    //ask for the depreciation option
    cout << "1. Depreciation good value" << endl << "2. Depreciation book value" << endl;
    //option using char datatype to prevent error while the input is other than number.
    cin >> depreciationOption;

    depoption = atoi (depreciationOption);

    //When the users input the wrong option it will loop to ask other input
    while (depoption < 1 || depoption >2)
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

        cout << "Your remaining value " << good.getDepreciationGoodValue() << endl;

    }
    else if (depoption == 2)
    {
        cout << "-DEPRECIATION BOOK VALUE-" << endl;
        cout << "Please input the interest percentage....%per month(s),";
        cout << " the capital...., and how long....month(s)" << endl;
        cin >> percentage >> capitalo >> months;

        Depreciation book(percentage, capitalo, months);

        cout << "Your remaining value " << book.getDepreciationBookValue() << endl;

    }
}



#endif // DEPRECIATION_MENU_H_INCLUDED
