#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QString>

#include "class_converter.h"
#include "class_fromdec.h"
#include "class_frombin.h"
#include "class_fromhex.h"

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


void MainWindow::on_pushButton_clicked()
{
    int t_num_sys;
    QString result;

    if (ui -> t_bin -> isChecked()) {
        t_num_sys = 2;
    }
    if (ui -> t_dec -> isChecked()) {
        t_num_sys = 10;
    }
    if (ui -> t_hex -> isChecked()) {
        t_num_sys = 16;
    }


    if (ui -> f_bin -> isChecked()) {
        Converter *conBIN = new FromBIN;
        conBIN -> set_num(ui -> f_lineEdit -> text().toInt()); // check input number
        conBIN -> conversion(t_num_sys);
        result = conBIN -> getResult();
    }

    if (ui -> f_dec -> isChecked()) {

        Converter *conDEC = new FromDEC;
        conDEC -> set_num(ui -> f_lineEdit -> text().toInt()); // check input number
        conDEC -> conversion(t_num_sys);
        result = conDEC -> getResult();
    }

    if (ui -> f_hex -> isChecked()) {
        Converter *conHEX = new FromHEX;
        conHEX -> set_num(ui -> f_lineEdit -> text().toInt()); // check input number
        conHEX -> conversion(t_num_sys);
        result = conHEX -> getResult();
    }

    //output
    ui -> t_lineEdit -> setText(result);


}

