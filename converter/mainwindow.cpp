#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QString>
#include <cmath>
#include <string>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

char int_to_char(int remainder);

void MainWindow::on_pushButton_clicked()
{
    int f_num_sys, t_num_sys;
    int N = 15;
    char c_result[N];
    QString result;
    bool sorc;

    for (int i = 0; i < N; i++) {   //clean char result array
        c_result[i] = ' ';
    }

    if (ui -> f_bin -> isChecked()) {
        f_num_sys = 2;
    }
    if (ui -> f_dec -> isChecked()) {
        f_num_sys = 10;
    }
    if (ui -> f_hex -> isChecked()) {
        f_num_sys = 16;
    }

    if (ui -> t_bin -> isChecked()) {
        t_num_sys = 2;
    }
    if (ui -> t_dec -> isChecked()) {
        t_num_sys = 10;
    }
    if (ui -> t_hex -> isChecked()) {
        t_num_sys = 16;
    }

    int num = ui -> f_lineEdit -> text().toInt(); // check input number

    if (f_num_sys == 2 && t_num_sys == 2) {
        result = QString::number(num);
        sorc = true;
    }

    if (f_num_sys == 2 && t_num_sys != 2) {

    }

    if (f_num_sys == 10 && t_num_sys == 10) {
        result = QString::number(num);
        sorc = true;
    }

    if (f_num_sys == 10 && t_num_sys != 10) {
        int result_division = num,
            remainder = result_division % t_num_sys;

        c_result[0] = int_to_char(remainder);
        int i = 1;
        do {
            result_division = floor (result_division / t_num_sys);
            remainder = result_division % t_num_sys;
            c_result[i] = int_to_char(remainder);
            ++i;
        } while (result_division  >= t_num_sys);


        //turn
        for (int i = 0,  j = N - 1; i < j; ++i, --j) {
            int t = c_result[i];
             c_result[i] = c_result[j];
             c_result[j] = t;
        }
        sorc = false;
    }

    if (f_num_sys == 16 && t_num_sys == 16) {
        result = QString::number(num);
        sorc = true;
    }

    if (f_num_sys == 16 && t_num_sys != 16) {

    }

    //output
    if (sorc == true) {
        ui -> t_lineEdit -> setText(result);
    }
    else if (sorc == false) {
        ui -> t_lineEdit -> setText(c_result);
    }


}


char int_to_char(int remainder) {

    char c_remainder;

    if (remainder >= 10) {

        if (remainder == 10) {
            c_remainder = 'A';
        }

        else if (remainder == 11) {
            c_remainder = 'B';
        }

        else if (remainder == 12) {
            c_remainder = 'C';
        }

        else if (remainder == 13) {
            c_remainder = 'D';
        }

        else if (remainder == 14) {
            c_remainder = 'E';
        }

        else if (remainder == 15) {
            c_remainder = 'F';
        }

        return c_remainder;
    }

    if (remainder < 10) {
        c_remainder = char(remainder + 48);
        return c_remainder;
    }
}
