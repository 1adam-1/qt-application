#ifndef ADDMOVIE_H
#define ADDMOVIE_H

#include <QWidget>
#include <QMainWindow>
#include<QSqlDatabase>
#include<QSqlQuery>
#include <QSqlError>
#include <QDebug>

namespace Ui {
class addmovie;
}

class addmovie : public QWidget
{
    Q_OBJECT

public:
    explicit addmovie(QWidget *parent = nullptr);
    ~addmovie();

private slots:
    void on_pushButton_2_clicked();

private:
    Ui::addmovie *ui;
};

#endif // ADDMOVIE_H
