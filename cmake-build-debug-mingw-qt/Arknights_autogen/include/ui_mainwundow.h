/********************************************************************************
** Form generated from reading UI file 'mainwundow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWUNDOW_H
#define UI_MAINWUNDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mainwundow
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *mainwundow)
    {
        if (mainwundow->objectName().isEmpty())
            mainwundow->setObjectName("mainwundow");
        mainwundow->resize(400, 300);
        centralwidget = new QWidget(mainwundow);
        centralwidget->setObjectName("centralwidget");
        mainwundow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(mainwundow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 400, 17));
        mainwundow->setMenuBar(menubar);
        statusbar = new QStatusBar(mainwundow);
        statusbar->setObjectName("statusbar");
        mainwundow->setStatusBar(statusbar);

        retranslateUi(mainwundow);

        QMetaObject::connectSlotsByName(mainwundow);
    } // setupUi

    void retranslateUi(QMainWindow *mainwundow)
    {
        mainwundow->setWindowTitle(QCoreApplication::translate("mainwundow", "mainwundow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class mainwundow: public Ui_mainwundow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWUNDOW_H
