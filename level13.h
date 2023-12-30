#ifndef LEVEL13_H
#define LEVEL13_H

#include <QWidget>

namespace Ui {
class level13;
}

class level13 : public QWidget
{
    Q_OBJECT

public:
    explicit level13(QWidget *parent = nullptr);
    ~level13();

private slots:
    void on_level13Back_clicked();

    void on_level13Next_clicked();

    void on_how_clicked();

    void on_quit_clicked();

private:
    Ui::level13 *ui;
};

#endif // LEVEL13_H
