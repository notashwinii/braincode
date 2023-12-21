#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include"login.h"
#include"mainwindow.h"
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
    void on_pushButton_start_clicked();

private:
    Ui::MainWindow *ui;
    login *Login;
};
#endif // MAINWINDOW_H
