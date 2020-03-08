#ifndef CLASS_CONVERTER_H
#define CLASS_CONVERTER_H

#include <QString>

#define N 17

class Converter {
  public:
    Converter();
    ~Converter();
    void set_num(int value);
    void set_s_num(QString value);
    virtual void conversion(int t_num_sys);
    QString getResult();
    char int_to_char(int remainder);
    char* int_to_char_array(int value);
  protected:
    int num;
    char* c_result;
    QString result;
    QString s_num;
};

#endif // CLASS_CONVERTER_H
