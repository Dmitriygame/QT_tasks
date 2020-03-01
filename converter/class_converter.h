#ifndef CLASS_CONVERTER_H
#define CLASS_CONVERTER_H

#include <QString>

#define N 15

class Converter {
  public:
    Converter();
    ~Converter();
    void set_num(int value);
    virtual void conversion(int t_num_sys);
    QString getResult();
    char int_to_char(int remainder);
    char* int_to_char_array(int value);
  protected:
    int num;
    char* c_result;
    QString result;
};

#endif // CLASS_CONVERTER_H
