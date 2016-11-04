#include <iostream>
#include "interest.h"
#include "IntAndDepClass.h"

using namespace std;

Interest::Interest(double p, double c, double m)
    {
        this->percent = p;
        this->capital = c;
        this->month = m;
    }

double Interest::getSingleInterest ()const
    {
        double totalInt;
        for (int i = 1; i <= month; i++)
        {
            totalInt = capital + capital * percent/100 * i;
            cout << "In month " << i << ", your capital will be " << totalInt << endl;
        }
        return totalInt;
    }

Interest::Interest(double p, double c, double m, int a )
    {
        this->percent = p;
        this->capital = c;
        this->month = m;

        double *ptr = &compoundInt;

        ptr = new double[a];

        for (int i = 0; i < a ; i++)
        {
            *(ptr + i) = c*pow((1+p/100), i+1);
            cout << "In month " << i+1 << ", your capital will be " << ptr[i] << endl;
        }
        delete []ptr;
    }


