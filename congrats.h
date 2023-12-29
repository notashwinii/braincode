#ifndef CONGRATS_H
#define CONGRATS_H

#include <QDialog>

namespace Ui {
class congrats;
}

class congrats : public QDialog
{
    Q_OBJECT

public:
    explicit congrats(QWidget *parent = nullptr);
    ~congrats();

private:
    Ui::congrats *ui;
};

#endif // CONGRATS_H
