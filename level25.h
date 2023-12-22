#ifndef LEVEL25_H
#define LEVEL25_H

#include <QWidget>

namespace Ui {
class level25;
}

class level25 : public QWidget
{
    Q_OBJECT

public:
    explicit level25(QWidget *parent = nullptr);
    ~level25();

private:
    Ui::level25 *ui;
};

#endif // LEVEL25_H
