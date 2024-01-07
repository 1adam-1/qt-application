#ifndef BILLET_H
#define BILLET_H

#include <QWidget>
#include <QMainWindow>
#include<QSqlDatabase>
#include<QSqlQuery>
#include <QSqlError>
#include <QDebug>
#include<QSqlQueryModel>

namespace Ui {
class billet;
}

class billet : public QWidget
{
    Q_OBJECT

public:
    explicit billet(QWidget *parent = nullptr);
    ~billet();

private slots:
    void on_pushButton_clicked();

    void on_spinBox_valueChanged();



    void on_pushButton_2_clicked();


private:
    Ui::billet *ui;
};

#endif // BILLET_H
