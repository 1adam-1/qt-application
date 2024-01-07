#include "addseance.h"
#include "ui_addseance.h"
#include "QMessageBox"

addseance::addseance(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::addseance)
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

addseance::~addseance()
{
    delete ui;
}




void addseance::on_pushButton_clicked()
{
    QSqlQueryModel * modal= new QSqlQueryModel();
    QSqlQuery query;
    query.prepare("SELECT titre FROM film");
    query.exec();
    modal->setQuery(query);
    ui->comboBox->setModel(modal);

}





void addseance::on_pushButton_2_clicked()
{
    QSqlQuery query;

    QString film = ui->comboBox->currentText();
    QString horaire = ui->comboBox_2->currentText();
    QString salle = ui->comboBox_3->currentText();
    QString prix = ui->comboBox_4->currentText();
    QString capacite = ui->lineEdit->text();

    query.prepare("SELECT statut FROM salle WHERE id = :salle");
    query.bindValue(":salle", salle);
    if (query.exec() && query.next()) {
        QString salleStatut = query.value(0).toString();
        if (salleStatut == "occupée") {
            qDebug() << "La salle est occupée.";
            QMessageBox::warning(this, "Salle occupée", "La salle est occupée. Choisissez une autre salle.");
        } else {
            query.prepare("INSERT INTO seance (film_proj, horaire, capacite, salle, prix) VALUES (:film, :horaire, :capacite, :salle, :prix)");
            query.bindValue(":film", film);
            query.bindValue(":horaire", horaire);
            query.bindValue(":capacite", capacite);
            query.bindValue(":salle", salle);
            query.bindValue(":prix", prix);

            if (query.exec()) {
                QMessageBox::about(this, "Succès", "Données ajoutées avec succès.");
                // Effectuer d'autres actions suite à l'ajout
            } else {
                QMessageBox::critical(this, "Erreur lors de l'ajout", query.lastError().text());
                // Gérer l'erreur d'ajout
            }
        }
    } else {
        QMessageBox::critical(this, "Erreur de requête", "Impossible d'exécuter la requête SELECT pour la salle.");
    }
}
