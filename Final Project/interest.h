#ifndef INTEREST_H_INCLUDED
#define INTEREST_H_INCLUDED

//class to hold the attribute and function for interest
class Interest
{
private:
    double percent,
           capital,
           month,
           compoundInt;
public:
    Interest(double p, double c, double m);
    double getPercent()const;
    double getCapital()const;
    double getMonth()const;
    double getSingleInterest ()const;
    Interest (double, double, double, int);
};

#endif // INTEREST_H_INCLUDED
