/********************************************************************************
** Form generated from reading UI file 'addmovie.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDMOVIE_H
#define UI_ADDMOVIE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_addmovie
{
public:
    QWidget *formLayoutWidget_2;
    QFormLayout *formLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_5;
    QLabel *label_7;
    QLineEdit *lineEdit_6;
    QLabel *label_8;
    QLineEdit *lineEdit_7;
    QLabel *label_9;
    QLineEdit *lineEdit_8;
    QLabel *label_11;
    QDateEdit *dateEdit_2;
    QPushButton *pushButton_2;
    QLabel *label_12;

    void setupUi(QWidget *addmovie)
    {
        if (addmovie->objectName().isEmpty())
            addmovie->setObjectName("addmovie");
        addmovie->resize(704, 533);
        addmovie->setStyleSheet(QString::fromUtf8("\n"
"\n"
"color:white\n"
""));
        formLayoutWidget_2 = new QWidget(addmovie);
        formLayoutWidget_2->setObjectName("formLayoutWidget_2");
        formLayoutWidget_2->setGeometry(QRect(20, 140, 371, 171));
        formLayout_2 = new QFormLayout(formLayoutWidget_2);
        formLayout_2->setObjectName("formLayout_2");
        formLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(formLayoutWidget_2);
        label_2->setObjectName("label_2");
        label_2->setStyleSheet(QString::fromUtf8("font: 700 11pt \"Segoe UI\";"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_2);

        lineEdit_5 = new QLineEdit(formLayoutWidget_2);
        lineEdit_5->setObjectName("lineEdit_5");

        formLayout_2->setWidget(0, QFormLayout::FieldRole, lineEdit_5);

        label_7 = new QLabel(formLayoutWidget_2);
        label_7->setObjectName("label_7");
        label_7->setStyleSheet(QString::fromUtf8("font: 700 11pt \"Segoe UI\";"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_7);

        lineEdit_6 = new QLineEdit(formLayoutWidget_2);
        lineEdit_6->setObjectName("lineEdit_6");

        formLayout_2->setWidget(1, QFormLayout::FieldRole, lineEdit_6);

        label_8 = new QLabel(formLayoutWidget_2);
        label_8->setObjectName("label_8");
        label_8->setStyleSheet(QString::fromUtf8("font: 700 11pt \"Segoe UI\";"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_8);

        lineEdit_7 = new QLineEdit(formLayoutWidget_2);
        lineEdit_7->setObjectName("lineEdit_7");

        formLayout_2->setWidget(2, QFormLayout::FieldRole, lineEdit_7);

        label_9 = new QLabel(formLayoutWidget_2);
        label_9->setObjectName("label_9");
        label_9->setStyleSheet(QString::fromUtf8("font: 700 11pt \"Segoe UI\";"));

        formLayout_2->setWidget(3, QFormLayout::LabelRole, label_9);

        lineEdit_8 = new QLineEdit(formLayoutWidget_2);
        lineEdit_8->setObjectName("lineEdit_8");

        formLayout_2->setWidget(3, QFormLayout::FieldRole, lineEdit_8);

        label_11 = new QLabel(formLayoutWidget_2);
        label_11->setObjectName("label_11");
        label_11->setStyleSheet(QString::fromUtf8("font: 700 11pt \"Segoe UI\";"));

        formLayout_2->setWidget(4, QFormLayout::LabelRole, label_11);

        dateEdit_2 = new QDateEdit(formLayoutWidget_2);
        dateEdit_2->setObjectName("dateEdit_2");
        dateEdit_2->setStyleSheet(QString::fromUtf8("color:black"));

        formLayout_2->setWidget(4, QFormLayout::FieldRole, dateEdit_2);

        pushButton_2 = new QPushButton(addmovie);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(160, 350, 201, 51));
        pushButton_2->setStyleSheet(QString::fromUtf8("font: 700 10pt \"Segoe UI\";"));
        label_12 = new QLabel(addmovie);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(130, 10, 451, 81));
        label_12->setStyleSheet(QString::fromUtf8("background:none;\n"
"font: 700 28pt \"Segoe UI\";"));

        retranslateUi(addmovie);

        QMetaObject::connectSlotsByName(addmovie);
    } // setupUi

    void retranslateUi(QWidget *addmovie)
    {
        addmovie->setWindowTitle(QCoreApplication::translate("addmovie", "Form", nullptr));
        label_2->setText(QCoreApplication::translate("addmovie", "Titre :", nullptr));
        label_7->setText(QCoreApplication::translate("addmovie", "R\303\251alisateur :", nullptr));
        label_8->setText(QCoreApplication::translate("addmovie", "Dur\303\251e :", nullptr));
        label_9->setText(QCoreApplication::translate("addmovie", "Genre :", nullptr));
        label_11->setText(QCoreApplication::translate("addmovie", "Date de sortie :", nullptr));
        pushButton_2->setText(QCoreApplication::translate("addmovie", "Ajouter", nullptr));
        label_12->setText(QCoreApplication::translate("addmovie", "Ajouter un film", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addmovie: public Ui_addmovie {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDMOVIE_H
