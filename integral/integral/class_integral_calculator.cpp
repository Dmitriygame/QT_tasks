#include "class_integral_calculator.h"

IntegralCalculator::IntegralCalculator() {}

IntegralCalculator::~IntegralCalculator() {}

void IntegralCalculator::setDividend(QString value) {
    QByteArray ba = value.toLocal8Bit();
    this -> m_dividend = ba.data();
}

void IntegralCalculator::setDivider(QString value) {
    QByteArray ba = value.toLocal8Bit();
    this -> m_divider = ba.data();
}

void IntegralCalculator::compute() {
    this -> m_result = 0;

}

QString IntegralCalculator::getResult() {
    QString value = QString::number(this -> m_result);
    return value;
}
