#ifndef COLLECTOR_H
#define COLLECTOR_H
#include <QString>
#include <QProcess>

class Collector {
    public:
        Collector();
        QString bashToQT(QString command);
        ~Collector();
    private:

};

#endif // COLLECTOR_H
