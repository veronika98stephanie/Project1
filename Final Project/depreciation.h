#ifndef DEPRECIATION_H_INCLUDED
#define DEPRECIATION_H_INCLUDED

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
    double getPercent()const;
    double getCapital()const;
    double getMonth()const;
    double getDepreciationGoodValue ()const;
    double getDepreciationBookValue ()const;
};

#endif // DEPRECIATION_H_INCLUDED
