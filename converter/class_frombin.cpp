#include "class_frombin.h"

FromBIN::FromBIN() {}

FromBIN::~FromBIN() {}

void FromBIN::conversion(int t_num_sys) {
    switch (t_num_sys) {
        case 2: {
            result = QString::number(num);
            break;
        }
        case 10: {
            char* arr  = int_to_char_array(num);
            int sum = 0;
            for (int i = 0; arr[i] != '\0'; i++) { // над проверить работу каждой строки
                sum = sum * 2 + static_cast<int>(arr[i]) - 48;
            }
            this -> result = int_to_char_array(sum);
            delete [] arr;
            break;
        }
        case 16: {

            break;
        }
    }
}
