#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QMessageBox"
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

void MainWindow::on_pushButton_clicked()
{
    QMessageBox::warning(this,"This is pop-up TITLE","This is the pop-up BODY MESSAGE");
}


void MainWindow::on_btn_warning_clicked()
{
    QMessageBox::warning(this,"this title","this is the warning");
}


void MainWindow::on_btn_error_clicked()
{
    QMessageBox::critical(this,"this is the error title","this is error message");
}


void MainWindow::on_btn_info_clicked()
{
    QMessageBox::information(this,"this is info title","this is the info body message");
}


void MainWindow::on_btn_question_clicked()
{
    QMessageBox::StandardButton reply;
    reply=QMessageBox::question(this,"this question title","are you 18+ ? ",QMessageBox::Yes| QMessageBox::No| QMessageBox::Discard);

    if(reply==QMessageBox::Yes){
        ui->label->setText("Yes !! You can vote");
    }else if(reply==QMessageBox::No){
        ui->label->setText("NOOO you cannot vote");
    }else{
        ui->label->setText("You discarded");
    }
}


void MainWindow::on_pushButton_2_clicked()
{
    QMessageBox msg;
    msg.setWindowTitle("this is custom title");
    msg.setText("this is the pop-up body");
    msg.setStandardButtons(QMessageBox::Ignore|QMessageBox::Retry|QMessageBox::Cancel);
    // msg.exec();

    QMessageBox::StandardButton reply;
    reply = static_cast<QMessageBox::StandardButton>(msg.exec());

    if (reply == QMessageBox::Ignore) {
        ui->label->setText("You pressed Ignore");
    }
    else if (reply == QMessageBox::Retry) {
        ui->label->setText("You pressed Retry");
    }
    else if (reply == QMessageBox::Cancel) {
        ui->label->setText("You pressed Cancel");
    }
}

