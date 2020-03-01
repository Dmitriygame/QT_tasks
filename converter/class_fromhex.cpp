#include "class_fromhex.h"

FromHEX::FromHEX() {}

FromHEX::~FromHEX() {}

void FromHEX::conversion(int t_num_sys) {
    switch (t_num_sys) {
        case 16: {
            result = QString::number(num);
            break;
        }
        case 2: {
            break;
        }
        case 10: {
            break;
        }
    }
}
