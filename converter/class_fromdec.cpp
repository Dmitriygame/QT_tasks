#include "class_fromdec.h"
#include <cmath>

FromDEC::FromDEC() {}

FromDEC::~FromDEC() {}

void FromDEC::conversion(int t_num_sys) {
    if (t_num_sys == 10) {
        result = QString::number(num);
    }
    else {
        for (int i = 0; i < N; i++) {   //clean char result array
            c_result[i] = ' ';
        }

        int result_division = num,
            remainder = result_division % t_num_sys;

        c_result[0] = int_to_char(remainder);
        int i = 1;
        do {
            result_division = floor (result_division / t_num_sys);
            remainder = result_division % t_num_sys;
            c_result[i] = int_to_char(remainder);
            ++i;
        } while (result_division  >= t_num_sys);

        //turn
        for (int i = 0,  j = N - 1; i < j; ++i, --j) {
            int t = c_result[i];
             c_result[i] = c_result[j];
             c_result[j] = t;
        }
        this -> result = c_result;
    }
}
