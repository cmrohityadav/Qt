#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "dialoglogin.h"
#include "loginwindow.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_btn_login_dialog_clicked();

    void on_btn_login_window_clicked();

private:
    Ui::MainWindow *ui;
    DialogLogin* pLoginDialog;
    loginwindow* pLoginWindow;
};
#endif // MAINWINDOW_H
