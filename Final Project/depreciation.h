#ifndef DEPRECIATION_H_INCLUDED
#define DEPRECIATION_H_INCLUDED
#include "IntAndDepClass.h"

//class to hold the member of depreciation
class Depreciation:public IntAndDep
{
    public:
        Depreciation(double p, double c, double m);
        double getDepreciationGoodValue ()const;
        double getDepreciationBookValue ()const;
};

#endif // DEPRECIATION_H_INCLUDED
