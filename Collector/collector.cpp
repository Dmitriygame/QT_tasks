#include "collector.h"

Collector::Collector() {}

QString Collector::bashToQT(QString command) {
    QProcess process;
    process.start(command);
    process.waitForFinished(-1);
    QString stdout = process.readAllStandardOutput();
    return stdout;
}

/*
 *QFile file("test.txt");
    if (file.open(QFile::WriteOnly | QFile::Truncate)) {
        QStringList acb;
        acb << "qwerty" << "Rewq";
        QTextStream out(&file);
        for (const auto &str : acb) {
            out << str << '\n';
        }
        file.close();




    }
    QStringList textList;
    textList << "qwerty" << "Rewq";
    QString text;
    for (int i = 0; i < textList.size(); i++) {
        text += textList[i] + "\n";
    }



QString text;
    QFile file("/home/dimis/task1.txt");
    if ((file.exists())&&(file.open(QIODevice::ReadOnly))) {
        text = file.readAll();
        file.close();
 *
 *
 */
