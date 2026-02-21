#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QString>
#include<QMessageBox>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_login_clicked()
{
    QString username=ui->lineEdit_username->text();
    QString password=ui->lineEdit_2_password->text();


    if(username=="cmrohityadav" && password=="123456"){
        hide();
        pLoginWindow= new login(this);
        pLoginWindow->show();
    }else{
        QMessageBox::critical(this,"Login Failed","Username or password incorrect");
    }
}

