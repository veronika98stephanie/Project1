#include <iostream>
#include <cmath>
#include <cstdlib>
#include <string>

using namespace std;

//class to hold the attribute and function for interest
class Interest
{
private:
    double percent,
           capital,
           month;
public:
    Interest(double p, double c, double m)
    {
        percent = p;
        capital = c;
        month = m;
    }
    double getPercent()const
        {return percent;}
    double getCapital()const
        {return capital;}
    double getMonth()const
        {return month;}
    double getSingleInterest ()const
        {return capital + capital * percent/100 * month;}
    double getCompoundInterest ()const
        {return capital*pow((1+percent/100),month);}
};

//class to hold the attribute and function of depreciation
class Depreciation
{
private:
    static double objectValue1;
    static double objectValue2;
    double percent,
           capital,
           month;
public:
    Depreciation(double p, double c, double m)
    {
        percent = p;
        capital = c;
        month = m;
    }
    double getPercent()const
        {return percent;}
    double getCapital()const
        {return capital;}
    double getMonth()const
        {return month;}
    double getDepreciationGoodValue ()const
        {return capital *(1-month*percent/100);}
    double getDepreciationBookValue ()const
        {return percent/100*capital*pow((1-percent/100),month-1);}
};

void interestChoices ();
void depreciationChoices ();
double compoundInterest (double, double, double, double);

int depreciationOption;
double  valueOwned2;

int main()
{

    char option[10];
    int ops;

    //print the menu at least once
    do
    {
        //asking the user to choose the option
        cout << "1. Interest" << endl << "2. Depreciation" << endl << "3. exit" << endl;
        cout << "Please choose the option you want " << endl;
        cin >> option;

        ops = atoi(option);

        //The condition if the users input the wrong option or the right option
        while (ops < 1 || ops > 3){
            cout << "Please input the correct number" << endl;
            cin >> option;

            ops = atoi(option);

        }
        while (ops == 1){
            cout << "Welcome to the interest section" << endl;
            break;
        }
        while (ops == 2){
                cout << "Welcome to the depreciation section" << endl;
                break;
        }

        //The condition if the users choose the option
        if (ops == 1)
        {
            interestChoices();
        }else if (ops == 2)
        {
            depreciationChoices();
        }
    }while(ops != 3);

    return 0;
}

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

    }else if (intoption == 2)
    {
        char choice;

        cout << "-COMPOUND INTEREST-" << endl;
        cout << "Please input the interest percentage....%per month(s),";
        cout << " the capital...., and how long....month(s)" << endl;
        cin >> percentage >> capitalo >> months;

        Interest compound(percentage, capitalo, months);

        cout << "Your capital will be " << compound.getCompoundInterest() << endl;
        cout << "Do you wish to see the whole capital? (Y/N)" << endl;
        cin >> choice;

        if (toupper(choice)=='Y')
        {
            compoundInterest(percentage, capitalo, months, valueOwned2);
        }else
        {
            cout << "Exiting the program";
            exit(0);
        }
    }
}

//To show the compound interest from the beginning of the month through the end of the inputed month
double compoundInterest(double interestPercent, double capital, double time, double valueOwned){

    double nValueOwned2 [500];
    int months;
    char choice;

    for (int i = 1; i <= time; i++){

        valueOwned = capital * pow((1 + interestPercent/100), i);
        nValueOwned2 [i] = {valueOwned};

        cout << "When you are in " << i << " month(s), " <<
                "your capital will be " << valueOwned << endl;
    }

    //ask the user to input the months to see the value that they have in that months
    cout << "Do you wish to see your value in a certain months?(Y/N)" << endl;
    cin >> choice;

    switch (toupper(choice))
    {
    case 'Y':
        cout << "Please enter the month you wish to see the value "<<
            "with in the range of months that you have input"<<endl;
        cin >> months;
        cout<<nValueOwned2 [months]<<endl;
        break;
    case 'N':
        exit (0);
    }
}

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

    }else if (depoption == 2)
    {
        char choice;

        cout << "-DEPRECIATION BOOK VALUE-" << endl;
        cout << "Please input the interest percentage....%per month(s),";
        cout << " the capital...., and how long....month(s)" << endl;
        cin >> percentage >> capitalo >> months;

        Depreciation book(percentage, capitalo, months);

        cout << "Your remaining value " << book.getDepreciationBookValue() << endl;

    }
}

