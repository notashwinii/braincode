#ifndef BRAINCODE_H
#define BRAINCODE_H

#include <QMainWindow>
#include<QtSql>

#include"login.h"
#include"Braincode.h"
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
    QSqlDatabase DB_Connection;
    login *Login;


};
#endif // BRAINCODE_H
