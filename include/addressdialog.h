#ifndef ADDRESSDIALOG_H
#define ADDRESSDIALOG_H

#include <QDialog>

namespace Ui {
class addressDialog;
}

class addressDialog : public QDialog
{
    Q_OBJECT

public:
    explicit addressDialog(QWidget *parent = nullptr);
    ~addressDialog();
    QString getAddress();
    void setAddress(QString a);

private slots:
    void on_buttonBox_rejected();

    void on_buttonBox_accepted();

private:
    Ui::addressDialog *ui;
};

#endif // ADDRESSDIALOG_H
