/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Wed Feb 25 04:04:35 2015
**      by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QTextEdit>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *Go;
    QTextEdit *userInput;
    QLineEdit *Correct;
    QLineEdit *Incorrect;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *TextLabel;
    QLabel *Num1;
    QLabel *label_4;
    QLabel *Num2;
    QLabel *label;
    QLabel *label_2;
    QMenuBar *menuBar;
    QMenu *menuFlashCards;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(400, 300);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        Go = new QPushButton(centralWidget);
        Go->setObjectName(QString::fromUtf8("Go"));
        Go->setGeometry(QRect(130, 150, 99, 23));
        userInput = new QTextEdit(centralWidget);
        userInput->setObjectName(QString::fromUtf8("userInput"));
        userInput->setGeometry(QRect(270, 50, 104, 76));
        Correct = new QLineEdit(centralWidget);
        Correct->setObjectName(QString::fromUtf8("Correct"));
        Correct->setGeometry(QRect(30, 190, 113, 22));
        Incorrect = new QLineEdit(centralWidget);
        Incorrect->setObjectName(QString::fromUtf8("Incorrect"));
        Incorrect->setGeometry(QRect(220, 190, 113, 22));
        horizontalLayoutWidget = new QWidget(centralWidget);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(128, 50, 101, 80));
        TextLabel = new QHBoxLayout(horizontalLayoutWidget);
        TextLabel->setSpacing(6);
        TextLabel->setContentsMargins(11, 11, 11, 11);
        TextLabel->setObjectName(QString::fromUtf8("TextLabel"));
        TextLabel->setContentsMargins(0, 0, 0, 0);
        Num1 = new QLabel(horizontalLayoutWidget);
        Num1->setObjectName(QString::fromUtf8("Num1"));

        TextLabel->addWidget(Num1);

        label_4 = new QLabel(horizontalLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        TextLabel->addWidget(label_4);

        Num2 = new QLabel(horizontalLayoutWidget);
        Num2->setObjectName(QString::fromUtf8("Num2"));

        TextLabel->addWidget(Num2);

        label = new QLabel(horizontalLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        TextLabel->addWidget(label);

        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(220, 80, 57, 14));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 20));
        menuFlashCards = new QMenu(menuBar);
        menuFlashCards->setObjectName(QString::fromUtf8("menuFlashCards"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFlashCards->menuAction());

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        Go->setText(QApplication::translate("MainWindow", "Go!", 0, QApplication::UnicodeUTF8));
        Correct->setText(QApplication::translate("MainWindow", "Correct", 0, QApplication::UnicodeUTF8));
        Incorrect->setText(QApplication::translate("MainWindow", "Incorrect", 0, QApplication::UnicodeUTF8));
        Num1->setText(QApplication::translate("MainWindow", "5", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("MainWindow", "+", 0, QApplication::UnicodeUTF8));
        Num2->setText(QApplication::translate("MainWindow", "3", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
        label_2->setText(QApplication::translate("MainWindow", "     =", 0, QApplication::UnicodeUTF8));
        menuFlashCards->setTitle(QApplication::translate("MainWindow", "FlashCards", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
