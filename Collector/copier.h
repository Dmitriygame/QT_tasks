#ifndef COPIER_H
#define COPIER_H
#include <QString>

class Copier
{
public:
    Copier();
    void setAmount(int value);
    void setPath(QString value);
    void setName(QString value);
    ~Copier();
private:
    int number = 1;
    QString zeros, path,
            nameFile = "task1.out";
};

#endif // COPIER_H


//QString str= "gotodoc://12133";//строка которую я разбиваю
//   QStringList list=str.split("//");//тут на выходе получается ["gotodoc://","12133"]
