#include <iostream>
#include "depreciation.h"

using namespace std;

    double Depreciation::getPercent()const
        {
            return percent;
        }
    double Depreciation::getCapital()const
        {
            return capital;
        }
    double Depreciation::getMonth()const
        {
            return month;
        }
    double Depreciation::getDepreciationGoodValue ()const
        {
            return capital *(1-month*percent/100);
        }
    double Depreciation::getDepreciationBookValue ()const
        {
            return percent/100*capital*pow((1-percent/100),month-1);
        }

