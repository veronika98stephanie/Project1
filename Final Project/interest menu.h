#ifndef INTEREST_MENU_H_INCLUDED
#define INTEREST_MENU_H_INCLUDED
#include <iomanip>

void exitchoice();//defined in main.cpp

//interest option
void interestChoices()
{
    double  percentage,
            capitalo,
            months;

    char interestOption[10];
    int intoption;

    //ask for the interest option
    cout << "1. Single interest" << endl << "2. Compound interest" << endl << "3. Back" << endl;
    cin >> interestOption;

    intoption = atoi (interestOption);

    //When the users input the wrong option it will loop to ask other input
    while (intoption < 1 || intoption >3)
    {
        cout<<"Please enter the right number"<<endl;
        cin>>interestOption;

        intoption = atoi (interestOption);
    }

    //ask the user to input the percentage, capital, and time to be calculated
    if (intoption == 1)
    {
        cout << "-SINGLE INTEREST-" << endl;
        cout << "Percentage....%per month(s),";
        cout << " the capital...., and how long....month(s)" << endl;
        cin >> percentage >> capitalo >> months;

        Interest single(percentage, capitalo, months);

        system("cls");

        cout << "Your capital will be " << single.getSingleInterest() << endl;
        cout << "-USER INPUT DATA-"<< endl;
        cout << left << setw (10) << "Month" << right << setw(10) << ": " << single.getMonth() << endl;
        cout << left << setw (10) << "Capital" << right << setw(10) << ": " << single.getCapital() << endl;
        cout << left << setw (10) << "Percentage" << right << setw(10) << ": " << single.getPercent() << "%" << endl;

        exitchoice();

    }
    else if (intoption == 2)
    {
        cout << "-COMPOUND INTEREST-" << endl;
        cout << "Please input the interest percentage....%per month(s),";
        cout << " the capital...., and how long....month(s)" << endl;
        cin >> percentage >> capitalo >> months;

        system("cls");

        Interest compound(percentage, capitalo, months, months);
        cout << "-USER INPUT DATA-"<< endl;
        cout << left << setw (10) << "Month" << right << setw(10) << ": " << compound.getMonth() << endl;
        cout << left << setw (10) << "Capital" << right << setw(10) << ": " << compound.getCapital() << endl;
        cout << left << setw (10) << "Percentage" << right << setw(10) << ": " << compound.getPercent() << "%" << endl;

        exitchoice();

    }
    else
        return;
}



#endif // INTEREST_MENU_H_INCLUDED
