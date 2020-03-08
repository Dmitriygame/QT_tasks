#ifndef CLASS_FROMBIN_H
#define CLASS_FROMBIN_H

#include "class_converter.h"
#include <QString>

class FromBIN : public Converter {
public:
    FromBIN();
    ~FromBIN();
    void conversion(int t_num_sys);
};

#endif // CLASS_FROMBIN_H
