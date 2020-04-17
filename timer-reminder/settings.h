#ifndef SETTINGS_H
#define SETTINGS_H

#include <QMainWindow>

namespace Ui {
class settings;
}

class settings : public QMainWindow
{
    Q_OBJECT

public:
    explicit settings(QWidget *parent = 0);
    ~settings();

private:
    Ui::settings *ui;
};

#endif // SETTINGS_H
