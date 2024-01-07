#ifndef ADDSEANCE_H
#define ADDSEANCE_H

#include <QWidget>
#include <QMainWindow>
#include<QSqlDatabase>
#include<QSqlQuery>
#include <QSqlError>
#include <QDebug>
#include<QSqlQueryModel>

namespace Ui {
class addseance;
}

class addseance : public QWidget
{
    Q_OBJECT

public:
    explicit addseance(QWidget *parent = nullptr);
    ~addseance();

private slots:


    void on_pushButton_clicked();


    void on_pushButton_2_clicked();

private:
    Ui::addseance *ui;
};

#endif // ADDSEANCE_H
