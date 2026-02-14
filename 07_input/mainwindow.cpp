#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QString>
#include<QFont>
#include<QTime>
#include<QDate>
#include<QDateTime>
#include<QKeySequence>
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
    // comboBox
    QString comboValueExchange=ui->comboBox->currentText();
    ui->label_exchange->setText(comboValueExchange);

    //fontComboBox
    QFont selectedFont=ui->fontComboBox->currentFont();
    ui->textEdit->setFont(selectedFont);
    ui->label_font->setText(selectedFont.toString());
    ui->label_font->setFont(selectedFont);

    //lineEdit
    QString name=ui->lineEdit->text();
    ui->label_name->setText(name);
    QString password=ui->lineEdit_password->text();
    ui->label_password->setText(password);

    //textEdit
    QString remark=ui->textEdit->toPlainText();
    ui->label_remark->setText(remark);

    //spinBox
    int iAge=ui->spinBox->value();
    ui->label_age->setText(QString::number(iAge));

    //doubleSpinBox
    int iWeight=ui->doubleSpinBox->value();
    ui->label_weight->setText(QString::number(iWeight));

    //timeEdit
    QTime time=ui->timeEdit->time();
    ui->label_time->setText(time.toString());

    //dateEdit
    QDate date=ui->dateEdit->date();
    ui->label_date->setText(date.toString());

    //dateTimeEdit
    QDateTime dateTime=ui->dateTimeEdit->dateTime();
    ui->label_datetime->setText(dateTime.toString());

    //dial
    int iDial=ui->dial->value();
    ui->label_dial->setText(QString::number(iDial));

    //horizontalScrollBar
    int iHBar=ui->horizontalScrollBar->value();
    ui->label_hbar->setText(QString::number(iHBar));

    //verticalScrollBar
    int iVBar=ui->verticalScrollBar->value();
    ui->label_vbar->setText(QString::number(iVBar));

    //horizontalSlider
    int iHSlider=ui->horizontalSlider->value();
    ui->label_hslider->setText(QString::number(iHSlider));

    //verticalSlider
    int iVSlider=ui->verticalSlider->value();
    ui->label_vslider->setText(QString::number(iVSlider));

    //keySequenceEdit
    QKeySequence keySequence=ui->keySequenceEdit->keySequence();
    ui->label_keysequence->setText(keySequence.toString());

}



