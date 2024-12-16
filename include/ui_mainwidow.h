/********************************************************************************
** Form generated from reading UI file 'mainwidow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWIDOW_H
#define UI_MAINWIDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mainwidow
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *mainwidow)
    {
        if (mainwidow->objectName().isEmpty())
            mainwidow->setObjectName("mainwidow");
        mainwidow->resize(400, 300);
        centralwidget = new QWidget(mainwidow);
        centralwidget->setObjectName("centralwidget");
        mainwidow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(mainwidow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 400, 17));
        mainwidow->setMenuBar(menubar);
        statusbar = new QStatusBar(mainwidow);
        statusbar->setObjectName("statusbar");
        mainwidow->setStatusBar(statusbar);

        retranslateUi(mainwidow);

        QMetaObject::connectSlotsByName(mainwidow);
    } // setupUi

    void retranslateUi(QMainWindow *mainwidow)
    {
        mainwidow->setWindowTitle(QCoreApplication::translate("mainwidow", "mainwidow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class mainwidow: public Ui_mainwidow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWIDOW_H
