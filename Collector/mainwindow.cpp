#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

#include <QFile>
#include <QString>
#include <QTextStream>

#include "argumentHandler.h"
#include "pathPreparer.h"
#include "collector.h"
#include "copier.h"



MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("Collector");
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_buttonCreate_clicked() {





}

void MainWindow::on_buttonInfo_clicked() {
    QMessageBox::about(this, "Information", "...");
}

void MainWindow::on_buttonHelp_clicked() {
    QMessageBox::about(this, "Help", "  This program collects data about Your computer and writes it to a file(s).\n  The 'Path to file' field shows the path to this file.\n  The 'Filename' field shows how the first part of the file will be named. The second part will consist of the creation date and file number.\n  Click 'Create' to create the file(s).\n  Click 'Information' to see information about Your device\n(this is how it will look in the file(s)).");
}
