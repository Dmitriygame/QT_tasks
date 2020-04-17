#ifndef COLLECTOR_H
#define COLLECTOR_H
#include <QString>
#include <QProcess>

class Collector
{
    public:
        Collector();
        QString bashToQT(QString command);
    private:

};

#endif // COLLECTOR_H
