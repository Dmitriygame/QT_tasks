#include "class_converter.h"

Converter::Converter() {}

Converter::~Converter() {}

void Converter::set_num(int value) {
    this -> num = value;
}

void Converter::conversion(int t_num_sys) {}

QString Converter::getResult() {
    return this -> result;
}

char Converter::int_to_char(int remainder) {

    char c_remainder;

    if (remainder >= 10) {

        if (remainder == 10) {
            c_remainder = 'A';
        }

        else if (remainder == 11) {
            c_remainder = 'B';
        }

        else if (remainder == 12) {
            c_remainder = 'C';
        }

        else if (remainder == 13) {
            c_remainder = 'D';
        }

        else if (remainder == 14) {
            c_remainder = 'E';
        }

        else if (remainder == 15) {
            c_remainder = 'F';
        }

        return c_remainder;
    }

    if (remainder < 10) {
        c_remainder = char(remainder + 48);
        return c_remainder;
    }
}
