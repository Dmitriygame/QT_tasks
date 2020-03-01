#ifndef CLASS_FROMHEX_H
#define CLASS_FROMHEX_H

#include "class_converter.h"

class FromHEX : public Converter {
public:
    FromHEX();
    ~FromHEX();
    void conversion(int t_num_sys);
};

#endif // CLASS_FROMHEX_H
