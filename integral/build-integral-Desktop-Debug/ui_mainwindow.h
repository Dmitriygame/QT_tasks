/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *sign_integral;
    QLabel *strip_dividing;
    QLabel *sign_equal;
    QPushButton *button;
    QLineEdit *dividend;
    QLineEdit *divider;
    QLineEdit *quotient;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(509, 254);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        sign_integral = new QLabel(centralWidget);
        sign_integral->setObjectName(QStringLiteral("sign_integral"));
        sign_integral->setGeometry(QRect(10, 20, 71, 121));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(sign_integral->sizePolicy().hasHeightForWidth());
        sign_integral->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(77);
        sign_integral->setFont(font);
        sign_integral->setTextFormat(Qt::AutoText);
        sign_integral->setAlignment(Qt::AlignCenter);
        strip_dividing = new QLabel(centralWidget);
        strip_dividing->setObjectName(QStringLiteral("strip_dividing"));
        strip_dividing->setGeometry(QRect(90, 20, 241, 101));
        QFont font1;
        font1.setPointSize(23);
        strip_dividing->setFont(font1);
        sign_equal = new QLabel(centralWidget);
        sign_equal->setObjectName(QStringLiteral("sign_equal"));
        sign_equal->setGeometry(QRect(330, 60, 31, 41));
        QFont font2;
        font2.setPointSize(40);
        sign_equal->setFont(font2);
        button = new QPushButton(centralWidget);
        button->setObjectName(QStringLiteral("button"));
        button->setGeometry(QRect(170, 160, 181, 31));
        dividend = new QLineEdit(centralWidget);
        dividend->setObjectName(QStringLiteral("dividend"));
        dividend->setGeometry(QRect(100, 44, 211, 31));
        dividend->setAlignment(Qt::AlignCenter);
        divider = new QLineEdit(centralWidget);
        divider->setObjectName(QStringLiteral("divider"));
        divider->setGeometry(QRect(100, 100, 211, 31));
        divider->setAlignment(Qt::AlignCenter);
        quotient = new QLineEdit(centralWidget);
        quotient->setObjectName(QStringLiteral("quotient"));
        quotient->setGeometry(QRect(370, 70, 121, 31));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 509, 22));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        sign_integral->setText(QApplication::translate("MainWindow", "\342\210\253", Q_NULLPTR));
        strip_dividing->setText(QApplication::translate("MainWindow", "_______________", Q_NULLPTR));
        sign_equal->setText(QApplication::translate("MainWindow", "=", Q_NULLPTR));
        button->setText(QApplication::translate("MainWindow", "CALCULATE", Q_NULLPTR));
        dividend->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        divider->setText(QApplication::translate("MainWindow", "1", Q_NULLPTR));
        quotient->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
