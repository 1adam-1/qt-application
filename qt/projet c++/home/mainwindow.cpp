#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "addmovie.h"
#include "addseance.h"
#include "billet.h"
#include "changesalle.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    // Create a new main window to host the loli widget
    QMainWindow *newWindow = new QMainWindow(this);

    // Create an instance of the loli widget
    addmovie *myaddmovie = new addmovie(newWindow);

    // Set up the loli widget in the new window
    newWindow->setCentralWidget(myaddmovie);

    // Set the size of the new window
    newWindow->resize(800, 600);  // Adjust the width and height as needed

    // Show the new window
    newWindow->show();
}


void MainWindow::on_pushButton_2_clicked()
{
    QMainWindow *newWindow = new QMainWindow(this);

    addseance  *myaddseance = new addseance (newWindow);

    newWindow->setCentralWidget(myaddseance);

    newWindow->resize(800, 600);

    newWindow->show();
}


void MainWindow::on_pushButton_3_clicked()
{
    QMainWindow *newWindow = new QMainWindow(this);

    billet  *mybillet  = new billet  (newWindow);

    newWindow->setCentralWidget(mybillet );

    newWindow->resize(800, 600);
    newWindow->show();
}


void MainWindow::on_pushButton_4_clicked()
{
    QMainWindow *newWindow = new QMainWindow(this);

    changesalle  *mychangesalle  = new changesalle  (newWindow);

    newWindow->setCentralWidget(mychangesalle );

    newWindow->resize(800, 600);
    newWindow->show();
}

