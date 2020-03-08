#include "class_fromhex.h"

#include <cmath>

FromHEX::FromHEX() {}

FromHEX::~FromHEX() {}

void FromHEX::conversion(int t_num_sys) {
    switch (t_num_sys) {
        case 16: {
            result = s_num;
            break;
        }
        case 2: {
            result = "";
            QByteArray ba = s_num.toLocal8Bit();
            const char *c_num = ba.data();
            for (int i = 0; s_num[i] != '\0'; i++ ) {
                result += hex_bin(c_num[i]);
            }
            break;
        }
        case 10: {
            int i_res = 0;
            int degree = 0;
            QByteArray ba = s_num.toLocal8Bit();
            const char *c_num = ba.data();
            for (int i = 0; s_num[i] != '\0'; i++ ) {
                degree = i;
            }
            for (int i = 0; degree != -1; degree--, i++ ) {   //
                i_res += char_int(c_num[i]) * pow(16, degree);
            }
            result = QString::number(i_res);
            break;
        }
    }
}

QString FromHEX::hex_bin(char value) {
    QString resVal;
    if (value == '0') {
        resVal = "0000";
    }
    else if (value == '1') {
        resVal = "0001";
    }
    else if (value == '2') {
        resVal = "0010";
    }
    else if (value == '3') {
        resVal = "0011";
    }
    else if (value == '4') {
        resVal = "0100";
    }
    else if (value == '5') {
        resVal = "0101";
    }
    else if (value == '6') {
        resVal = "0110";
    }
    else if (value == '7') {
        resVal = "0111";
    }
    else if (value == '8') {
        resVal = "1000";
    }
    else if (value == '9') {
        resVal = "1001";
    }
    else if (value == 'A') {
        resVal = "1010";
    }
    else if (value == 'B') {
        resVal = "1011";
    }
    else if (value == 'C') {
        resVal = "1100";
    }
    else if (value == 'D') {
        resVal = "1101";
    }
    else if (value == 'E') {
        resVal = "1110";
    }
    else if (value == 'F') {
        resVal = "1111";
    }
    return resVal;
}

int FromHEX::char_int(char value) {
    int res;
    if (value=='1' || value=='2' || value=='3' || value=='4' || value=='5'
            || value=='6' || value=='7' || value=='8' || value=='9')
    {
        res = static_cast<int>(value) - 48;
    }
    else if (value == 'A') {
        res = 10;
    }
    else if (value == 'B') {
        res = 11;
    }
    else if (value == 'C') {
        res = 12;
    }
    else if (value == 'D') {
        res = 13;
    }
    else if (value == 'E') {
        res = 14;
    }
    else if (value == 'F') {
        res = 15;
    }
    return res;
}
