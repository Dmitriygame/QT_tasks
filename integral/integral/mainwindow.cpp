#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "class_integral_calculator.h"

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

void MainWindow::on_button_clicked()
{
    ui -> statusBar -> showMessage("");
    ui -> quotient -> setText("");

    if (ui -> divider -> text().toInt() == 0) {
        ui -> statusBar -> showMessage("Your divider quotient 0!");
        ui -> quotient -> setText("Error");
    }

    else {
        IntegralCalculator counter;
        counter.setDividend(ui -> dividend -> text());
        counter.setDivider(ui -> divider -> text());
        counter.compute();
        ui -> quotient -> setText(counter.getResult());
    }

}
