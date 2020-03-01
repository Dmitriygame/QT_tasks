#ifndef CLASS_FROMDEC_H
#define CLASS_FROMDEC_H

#include "class_converter.h"

class FromDEC : public Converter {
public:
    FromDEC();
    ~FromDEC();
    void conversion(int t_num_sys);
private:
    bool sorc;
};

#endif // CLASS_FROMDEC_H
