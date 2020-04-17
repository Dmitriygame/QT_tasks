#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_buttonCreate_clicked();

    void on_buttonInfo_clicked();

    void on_buttonHelp_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
