#ifndef LEVEL4_H
#define LEVEL4_H

#include <QWidget>

namespace Ui {
class level4;
}

class level4 : public QWidget
{
    Q_OBJECT

public:
    explicit level4(QWidget *parent = nullptr);
    ~level4();

private slots:
    void on_level4Back_clicked();

private:
    Ui::level4 *ui;
};

#endif // LEVEL4_H
