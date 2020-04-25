#ifndef LATEDIALOG_H
#define LATEDIALOG_H

#include <QDialog>

namespace Ui {
class lateDialog;
}

class lateDialog : public QDialog
{
    Q_OBJECT

public:
    explicit lateDialog(QWidget *parent = nullptr);
    ~lateDialog();

private slots:
    void on_buttonBox_accepted();

    void on_buttonBox_rejected();

private:
    Ui::lateDialog *ui;
};

#endif // LATEDIALOG_H
