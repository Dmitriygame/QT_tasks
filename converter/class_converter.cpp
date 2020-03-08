#include "class_converter.h"

#include <malloc.h>
#include <stdio.h>

Converter::Converter() {
    c_result = new char[N];
}

Converter::~Converter() {
    delete [] c_result;
}

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
        switch (remainder) {
            case 10: {
                c_remainder = 'A';
                break;
            }
            case 11: {
                c_remainder = 'B';
                break;
            }
            case 12: {
                c_remainder = 'C';
                break;
            }
            case 13: {
                c_remainder = 'D';
                break;
            }
            case 14: {
                c_remainder = 'E';
                break;
            }
            case 15: {
                c_remainder = 'F';
                break;
            }
            default: {break;}
        }
    }

    if (remainder < 10) {
        c_remainder = char(remainder + 48);
    }
    return c_remainder;
}

char* Converter::int_to_char_array(int n) {
        char* c = new char [N];
        int v = 0; //количество цифр в числе n
        //разбиваем на отдельные символы число n
        while (n > 9)
        {
            c[v++] = (n % 10) + '0';
            n = n / 10;
        }
        c[v++] = n + '0';
        c[v] = '\0';
        char t;
        //инвертируем массив символов
        for (int i = 0; i < v / 2; i++)
        {
            t = c[i];
            c[i] = c[v - 1 - i];
            c[v - 1 - i] = t;
        }
        return c;
}

void Converter::set_s_num(QString value) {
    this -> s_num = value;
}
