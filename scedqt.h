#ifndef SCEDQT_H
#define SCEDQT_H

#include <QMainWindow>

namespace Ui {
class scedQt;
}

class scedQt : public QMainWindow
{
    Q_OBJECT

public:
    explicit scedQt(QWidget *parent = 0);
    ~scedQt();

private:
    Ui::scedQt *ui;
};

#endif // SCEDQT_H
