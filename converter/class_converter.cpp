#include "class_converter.h"

#include <malloc.h>
#include <stdio.h>

Converter::Converter() {
    c_result = (char *)malloc(N * sizeof(char));
}

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

char* Converter::int_to_char_array(int n) {
        char* c;
        c = (char *)malloc(N * sizeof(char));
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
