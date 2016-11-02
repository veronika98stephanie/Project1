#include <iostream>
#include "interest.h"

using namespace std;

    Interest::Interest(double p, double c, double m)
            {
                percent = p;
                capital = c;
                month = m;
            }

    double Interest::getPercent()const
        {
            return percent;
        }
    double Interest::getCapital()const
        {
            return capital;
        }
    double Interest::getMonth()const
        {
            return month;
        }
    double Interest::getSingleInterest ()const
        {
            return capital + capital * percent/100 * month;
        }
    Interest::Interest(double p, double c, double m, int a )
        {
            double *ptr = &compoundInt;

            ptr = new double[a];

            for (int i = 0; i < a ; i++)
            {
                *(ptr + i) = c*pow((1+p/100), i+1);
                cout << "In month " << i+1 << ", your capital will be " << *(ptr + i) << endl;
            }
        }
