#include "billet.h"
#include "ui_billet.h"
#include <QDateTime>
#include <QMessageBox>


billet::billet(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::billet)
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

billet::~billet()
{
    delete ui;
}

void billet::on_pushButton_clicked()
{
    QSqlQueryModel * modal= new QSqlQueryModel();
    QSqlQuery query;
    query.prepare("SELECT film_proj,horaire,salle FROM seance");
    query.exec();
    modal->setQuery(query);
    ui->tableView->setModel(modal);


}



void billet::on_spinBox_valueChanged()
{

    int valeurID = ui->lineEdit->text().toInt();
    QVariant nbrplaces = ui->spinBox->value();

    // Requête SQL pour récupérer le prix de la séance
    QSqlQuery query;
    query.prepare("SELECT prix FROM seance WHERE num = :id");
    query.bindValue(":id", valeurID);

    if (query.exec()) {
        // Récupérer le prix depuis la requête SQL
        if (query.next()) {
            int prixSeance = query.value(0).toInt();

            // Convert QVariant to int
            int nombreDePlaces = nbrplaces.toInt();

            // Calculer le prix total en fonction du nombre de places et du prix de la séance
            int prixTotal = nombreDePlaces * prixSeance;

            // Afficher le prix dans une QLabel ou une autre interface utilisateur
            ui->label_2->setText("Prix total : " + QString::number(prixTotal) + " dhs");
        } else {
            qDebug() << "Aucun résultat trouvé pour la séance avec l'ID :" << valeurID;
        }
    } else {
        qDebug() << "Erreur lors de la récupération du prix de la séance :" << query.lastError().text();
    }


}




void billet::on_pushButton_2_clicked()
{
    // Check if required fields are not empty
    if (ui->lineEdit->text().isEmpty() || ui->lineEdit_2->text().isEmpty()|| ui->lineEdit_3->text().isEmpty()) {
        QMessageBox::warning(this, "Champs vides", "Veuillez remplir tous les champs requis.");
        return;
    }

    int valeurID = ui->lineEdit->text().toInt();

    QSqlQuery query;
    query.prepare("SELECT prix FROM seance WHERE num = :id");
    query.bindValue(":id", valeurID);

    int prixSeance = 0;

    if (query.exec()) {
        // Récupérer le prix depuis la requête SQL
        if (query.next()) {
            prixSeance = query.value(0).toInt();
        } else {
            qDebug() << "Aucun résultat trouvé pour la séance avec l'ID :" << valeurID;
            return;  // Exit the function if no result is found
        }
    }

    QDateTime currentDate = QDateTime::currentDateTime();

    query.prepare("INSERT INTO billet (seance_assoc, prix, date) VALUES (:seance, :prix, :date)");
    query.bindValue(":seance", valeurID);
    query.bindValue(":prix", prixSeance);
    query.bindValue(":date", currentDate);

    if (!query.exec()){
        qDebug() << "Erreur lors de l'insertion dans la table billet :" << query.lastError().text();
        QMessageBox::critical(this, "Erreur", "Erreur lors de l'insertion dans la table billet.");
    }

    QSqlQuery qry;
    QString nom = ui->lineEdit_2->text();
    QString coordonnes = ui->lineEdit_3->text();
    QString historique = ui->lineEdit->text();

    qry.prepare("INSERT INTO client(nom,coordonnes,historique) VALUES(:n,:c,:h)");
    qry.bindValue(":n", nom);
    qry.bindValue(":c", coordonnes);
    qry.bindValue(":h", historique);


    if (qry.exec()) {
        QMessageBox::information(this, "Succès", "Données ajoutées avec succès.");
    } else {
        qDebug() << "Erreur lors de l'insertion dans la table client :" << qry.lastError().text();
        QMessageBox::critical(this, "Erreur", "Erreur lors de l'insertion dans la table client.");
    }

}






