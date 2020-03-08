#include "class_frombin.h"

#include <cmath>

FromBIN::FromBIN() {}

FromBIN::~FromBIN() {}

void FromBIN::conversion(int t_num_sys) {
    switch (t_num_sys) {
        case 2: {
            result = QString::number(num);
            break;
        }
        case 10: {
            c_result = int_to_char_array(num);
            int sum = 0;
            for (int i = 0; c_result[i] != '\0'; i++) {
                sum = sum * 2 + static_cast<int>(c_result[i]) - 48;
            }
            this -> result = int_to_char_array(sum);
            break;
        }
        case 16: {
            int i_res = 0;
            int degree = 1;
            QByteArray ba = s_num.toLocal8Bit();
            const char *c_num = ba.data();
            for (int i = 0; s_num[i] != '\0'; i++ ) {
                degree *= 2;
            }
            degree /= 2;

            for (int i = 0; degree > 0; degree /= 2, i++ ) {
                i_res += (static_cast<int>(c_num[i]) - 48) * degree;
            }
            result = QString::number(i_res);
            break;
        }
    }
}
