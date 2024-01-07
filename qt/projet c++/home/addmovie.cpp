#include "addmovie.h"
#include "ui_addmovie.h"
#include "QMessageBox"

addmovie::addmovie(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::addmovie)
{
    ui->setupUi(this);
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName(("C:/Users/abakr/OneDrive/Bureau/qt/projet c++/home/cinema.db"));
    if (!db.open()) {
        qDebug() << "Erreur lors de l'ouverture de la base de données :" << db.lastError().text();
    } else {
        qDebug() << "Connexion à la base de données établie avec succès.";
    }
}

addmovie::~addmovie()
{
    delete ui;
}

void addmovie::on_pushButton_2_clicked()
{
    QString titre = ui->lineEdit_5->text();
    QString realisateur = ui->lineEdit_6->text();
    QString duree = ui->lineEdit_7->text();
    QString genre = ui->lineEdit_8->text();
    QString date = ui->dateEdit_2->date().toString("yyyy-MM-dd");


    QSqlQuery query;
    query.prepare("INSERT INTO film (titre, realisateur, duree, genre, date) VALUES (:titre, :realisateur, :duree, :genre, :date)");
    query.bindValue(":titre", titre);
    query.bindValue(":realisateur", realisateur);
    query.bindValue(":duree", duree);
    query.bindValue(":genre", genre);
    query.bindValue(":date", date);

    if(query.exec()) {
        QMessageBox::about(this,"   ","Données ajoutées avec succès.");
    } else {
        QMessageBox::about(this, "Erreur lors de l'ajout :", query.lastError().text());
    }


}

