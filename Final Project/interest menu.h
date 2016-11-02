#ifndef INTEREST_MENU_H_INCLUDED
#define INTEREST_MENU_H_INCLUDED

double  valueOwned2;

//interest option
void interestChoices()
{
    double  percentage,
            capitalo,
            months;

    char interestOption[10];
    int intoption;

    //ask for the interest option
    cout << "1. Single interest" << endl << "2. Compound interest" << endl;
    cin >> interestOption;

    intoption = atoi (interestOption);

    //When the users input the wrong option it will loop to ask other input
    while (intoption < 1 || intoption >2)
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
        cout << "Your capital will be " << single.getSingleInterest() << endl;

    }

    else if (intoption == 2)
    {
        char choice;

        cout << "-COMPOUND INTEREST-" << endl;
        cout << "Please input the interest percentage....%per month(s),";
        cout << " the capital...., and how long....month(s)" << endl;
        cin >> percentage >> capitalo >> months;

        cout << "test compound" << endl;
        Interest compound(percentage, capitalo, months, months);
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
}

#endif // INTEREST_MENU_H_INCLUDED
