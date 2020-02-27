#ifndef CLASS_CONVERTER_H
#define CLASS_CONVERTER_H

#include <QString>

class Converter {
  public:
    Converter();
    ~Converter();
    void set_num(int value);
    virtual void conversion(int t_num_sys);
    QString getResult();
    char int_to_char(int remainder);
  protected:
    int num;
    QString result;
};

#endif // CLASS_CONVERTER_H
