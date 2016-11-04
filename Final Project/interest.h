#ifndef INTEREST_H_INCLUDED
#define INTEREST_H_INCLUDED
#include "IntAndDepClass.h"

//class to hold members for interest
class Interest:public IntAndDep
{
    private:
        double compoundInt;
    public:
        Interest(double p, double c, double m);
        double getSingleInterest ()const;
        Interest (double, double, double, int);
};

#endif // INTEREST_H_INCLUDED
