

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

 void MainWindow::on_Submit_pressed()
{
    if ( ui->Password->text()== "secret")
    {
      ui->Answer->setText("Here's the secret to living to 100: live to 99 and be Very careful.");

    }

    else{
       ui->Answer->setText("thats not the correct password, so you I cant shre the secret with you");
    }


}
