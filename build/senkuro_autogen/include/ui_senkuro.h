/********************************************************************************
** Form generated from reading UI file 'senkuro.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SENKURO_H
#define UI_SENKURO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_senkuro
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *senkuro)
    {
        if (senkuro->objectName().isEmpty())
            senkuro->setObjectName(QStringLiteral("senkuro"));
        senkuro->resize(800, 600);
        centralwidget = new QWidget(senkuro);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        senkuro->setCentralWidget(centralwidget);
        menubar = new QMenuBar(senkuro);
        menubar->setObjectName(QStringLiteral("menubar"));
        senkuro->setMenuBar(menubar);
        statusbar = new QStatusBar(senkuro);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        senkuro->setStatusBar(statusbar);

        retranslateUi(senkuro);

        QMetaObject::connectSlotsByName(senkuro);
    } // setupUi

    void retranslateUi(QMainWindow *senkuro)
    {
        senkuro->setWindowTitle(QApplication::translate("senkuro", "senkuro", 0));
    } // retranslateUi

};

namespace Ui {
    class senkuro: public Ui_senkuro {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SENKURO_H
