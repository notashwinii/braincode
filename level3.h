#ifndef LEVEL3_H
#define LEVEL3_H

#include <QWidget>

namespace Ui {
class level3;
}

class level3 : public QWidget
{
    Q_OBJECT

public:
    explicit level3(QWidget *parent = nullptr);
    ~level3();

private slots:
    void on_level3Back_clicked();

    void on_level3Next_clicked();

    void on_quit_clicked();

    void on_how_clicked();

private:
    Ui::level3 *ui;
};

#endif // LEVEL3_H
