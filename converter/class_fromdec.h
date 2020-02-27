#ifndef CLASS_FROMDEC_H
#define CLASS_FROMDEC_H

#include "class_converter.h"

#define N 15

class FromDEC : public Converter {
public:
    FromDEC();
    ~FromDEC();
    void conversion(int t_num_sys);
private:
    char c_result[N];
    bool sorc;
};

#endif // CLASS_FROMDEC_H
