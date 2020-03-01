#include "class_frombin.h"

FromBIN::FromBIN() {}

FromBIN::~FromBIN() {}

void FromBIN::conversion(int t_num_sys) {
    if (t_num_sys == 2) {
        result = QString::number(num);
    }
    else if (t_num_sys == 10) {
        char* arr  = int_to_char_array(num);
        int sum = 0;
        for (int i = 0; arr[i] != '\0'; i++) { // над проверить работу каждой строки
            sum = sum * 2 + (int)arr[i] - 48;
        }
        this -> result = int_to_char_array(sum);
    }
    else if (t_num_sys == 16) {

    }
}
