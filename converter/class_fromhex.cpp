#include "class_fromhex.h"

FromHEX::FromHEX() {}

FromHEX::~FromHEX() {}

void FromHEX::conversion(int t_num_sys) {
    if (t_num_sys == 16) {
        result = QString::number(num);
    }
    else if (t_num_sys == 2) {

    }
    else if (t_num_sys == 10) {

    }
}
