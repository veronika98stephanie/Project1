#ifndef INTANDDEPCLASS_H_INCLUDED
#define INTANDDEPCLASS_H_INCLUDED

class IntAndDep
{
    protected:
            double percent,
                   capital,
                   month;
    public:
            double getPercent()const
            {
                return percent;
            }
            double getCapital()const
            {
                return capital;
            }
            double getMonth()const
            {
                return month;
            }
};


#endif // INTANDDEPCLASS_H_INCLUDED
