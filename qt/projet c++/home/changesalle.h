#ifndef CHANGESALLE_H
#define CHANGESALLE_H

#include <QWidget>
#include <QMainWindow>
#include<QSqlDatabase>
#include<QSqlQuery>
#include <QSqlError>
#include <QDebug>

namespace Ui {
class changesalle;
}

class changesalle : public QWidget
{
    Q_OBJECT

public:
    explicit changesalle(QWidget *parent = nullptr);
    ~changesalle();

private slots:
    void on_pushButton_2_clicked();

private:
    Ui::changesalle *ui;
};

#endif // CHANGESALLE_H
