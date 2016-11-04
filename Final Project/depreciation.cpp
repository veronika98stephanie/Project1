#include <iostream>
#include "depreciation.h"
#include "IntAndDepClass.h"

using namespace std;

Depreciation::Depreciation(double p, double c, double m)
    {
        percent = p;
        capital = c;
        month = m;
    }

//function to calculate and print the remaining depreciation good value on the screen
double Depreciation::getDepreciationGoodValue ()const
    {
        //check whether the value less than zero;
        for (int i = 1; i <= month; i++)
        {
            double totalDep;
            totalDep = capital *(1-i*percent/100);
            cout << "Your remaining value " << totalDep << " in month(s) " << i << endl;

            //if value less than equal to zero, exception will be thrown
            if (totalDep <= 0)
            {
                throw i;
            }
        }
        return capital *(1-month*percent/100);
    }

//function to calculate and print the remaining depreciation book value on the screen
double Depreciation::getDepreciationBookValue ()const
    {
        for (int i = 1; i <= month; i++)
        {
            double totalDep;
            totalDep = percent/100*capital*pow((1-percent/100),i-1);
            cout << "Your remaining value " << totalDep << " in month(s) " << i << endl;

            //if value less than equal to zero, exception will be thrown
            if (totalDep <= 0)
            {
                throw i;
            }
        }
        return percent/100*capital*pow((1-percent/100),month-1);
    }
