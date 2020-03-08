#ifndef CLASS_FROMHEX_H
#define CLASS_FROMHEX_H

#include "class_converter.h"

class FromHEX : public Converter {
public:
    FromHEX();
    ~FromHEX();
    void conversion(int t_num_sys);
    QString hex_bin(char value);
    int char_int(char value);
};

#endif // CLASS_FROMHEX_H
