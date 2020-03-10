#ifndef CLASS_INTEGRAL_CALCULATOR_H
#define CLASS_INTEGRAL_CALCULATOR_H

#include <QString>

#define N 20


class IntegralCalculator
{
public:
    IntegralCalculator();
    ~IntegralCalculator();
    void setDividend(QString value);
    void setDivider(QString value);
    void compute();
    QString getResult();
private:
    char* m_dividend = new char [N];
    char* m_divider = new char [N];
    double m_result;
};

#endif // CLASS_INTEGRAL_CALCULATOR_H
