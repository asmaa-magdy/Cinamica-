#ifndef VIEW_H
#define VIEW_H

#include <QDialog>

namespace Ui {
class view;
}

class view : public QDialog
{
    Q_OBJECT

public:
    explicit view(QWidget *parent = 0);
    ~view();

private slots:
    void on_label_2_linkActivated(const QString &link);
    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::view *ui;
};

#endif // VIEW_H
