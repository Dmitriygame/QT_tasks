#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QString>

#include "class_converter.h"
#include "class_fromdec.h"


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

    }

    if (ui -> f_dec -> isChecked()) {

        FromDEC conDEC;
        conDEC.set_num(ui -> f_lineEdit -> text().toInt()); // check input number
        conDEC.conversion(t_num_sys);
        result = conDEC.getResult();
    }

    if (ui -> f_hex -> isChecked()) {

    }

    //output
    ui -> t_lineEdit -> setText(result);


}

