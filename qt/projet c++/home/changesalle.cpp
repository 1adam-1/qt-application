#include "changesalle.h"
#include "ui_changesalle.h"
#include <QDateTime>
#include <QMessageBox>

changesalle::changesalle(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::changesalle)
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

changesalle::~changesalle()
{
    delete ui;
}

void changesalle::on_pushButton_2_clicked()
{
    QVariant salle = ui->comboBox_2->currentText();
    QVariant etat = ui->comboBox_3->currentText();

    QSqlQuery query;

    query.prepare("UPDATE salle SET statut = :newStatut WHERE id = :salle");
    query.bindValue(":newStatut", etat);
    query.bindValue(":salle", salle);

    if (query.exec()) {
        QMessageBox::about(this, "Succès", "Statut de la salle mis à jour avec succès.");
        // Additional actions after successful update
    } else {
        QMessageBox::critical(this, "Erreur lors de la mise à jour", query.lastError().text());
        // Handle update error
    }
}
