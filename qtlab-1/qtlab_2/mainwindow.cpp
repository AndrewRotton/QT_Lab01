#include "mainwindow.h"
#include "ui_mainwindow.h"

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

void MainWindow::on_Go_pressed()
{
    int Number1 = ui->Num1->text().toInt();
    int Number2 = ui->Num2->text().toInt();
    int rand1 = qrand() % 10;
    int rand2 = qrand() % 10;
    int Choice = ui->userInput->toPlainText().toInt();
    if
     ( Number1 + Number2 == Choice)
    ui->Correct->setText("Correct");
    else{
        ui->Incorrect->setText("Incorrect");
    }
    ui->Num1->setText(QString::number(rand1));
    ui->Num2->setText(QString::number(rand2));
}
