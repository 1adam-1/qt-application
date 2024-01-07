/********************************************************************************
** Form generated from reading UI file 'addseance.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDSEANCE_H
#define UI_ADDSEANCE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_addseance
{
public:
    QLabel *label_12;
    QPushButton *pushButton_2;
    QGroupBox *formGroupBox;
    QFormLayout *formLayout;
    QComboBox *comboBox;
    QLabel *label;
    QComboBox *comboBox_2;
    QLabel *label_2;
    QComboBox *comboBox_3;
    QLabel *label_3;
    QComboBox *comboBox_4;
    QLabel *label_4;
    QLineEdit *lineEdit;
    QPushButton *pushButton;

    void setupUi(QWidget *addseance)
    {
        if (addseance->objectName().isEmpty())
            addseance->setObjectName("addseance");
        addseance->resize(701, 634);
        addseance->setStyleSheet(QString::fromUtf8("color:white\n"
""));
        label_12 = new QLabel(addseance);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(90, 10, 521, 81));
        label_12->setStyleSheet(QString::fromUtf8("background:none;\n"
"font: 700 28pt \"Segoe UI\";"));
        pushButton_2 = new QPushButton(addseance);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(160, 340, 201, 51));
        pushButton_2->setStyleSheet(QString::fromUtf8("font: 700 10pt \"Segoe UI\";"));
        formGroupBox = new QGroupBox(addseance);
        formGroupBox->setObjectName("formGroupBox");
        formGroupBox->setGeometry(QRect(70, 140, 331, 171));
        formGroupBox->setStyleSheet(QString::fromUtf8("background:none"));
        formLayout = new QFormLayout(formGroupBox);
        formLayout->setObjectName("formLayout");
        comboBox = new QComboBox(formGroupBox);
        comboBox->setObjectName("comboBox");
        comboBox->setStyleSheet(QString::fromUtf8("color:black"));

        formLayout->setWidget(0, QFormLayout::FieldRole, comboBox);

        label = new QLabel(formGroupBox);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("font: 700 9pt \"Segoe UI\";"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label);

        comboBox_2 = new QComboBox(formGroupBox);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName("comboBox_2");
        comboBox_2->setStyleSheet(QString::fromUtf8("color:black"));

        formLayout->setWidget(1, QFormLayout::FieldRole, comboBox_2);

        label_2 = new QLabel(formGroupBox);
        label_2->setObjectName("label_2");
        label_2->setStyleSheet(QString::fromUtf8("font: 700 9pt \"Segoe UI\";"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_2);

        comboBox_3 = new QComboBox(formGroupBox);
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->setObjectName("comboBox_3");
        comboBox_3->setStyleSheet(QString::fromUtf8("color:black"));

        formLayout->setWidget(2, QFormLayout::FieldRole, comboBox_3);

        label_3 = new QLabel(formGroupBox);
        label_3->setObjectName("label_3");
        label_3->setStyleSheet(QString::fromUtf8("font: 700 9pt \"Segoe UI\";"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_3);

        comboBox_4 = new QComboBox(formGroupBox);
        comboBox_4->addItem(QString());
        comboBox_4->addItem(QString());
        comboBox_4->setObjectName("comboBox_4");
        comboBox_4->setStyleSheet(QString::fromUtf8("color:black"));

        formLayout->setWidget(3, QFormLayout::FieldRole, comboBox_4);

        label_4 = new QLabel(formGroupBox);
        label_4->setObjectName("label_4");
        label_4->setStyleSheet(QString::fromUtf8("font: 700 9pt \"Segoe UI\";"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_4);

        lineEdit = new QLineEdit(formGroupBox);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setStyleSheet(QString::fromUtf8("color:black"));

        formLayout->setWidget(4, QFormLayout::FieldRole, lineEdit);

        pushButton = new QPushButton(formGroupBox);
        pushButton->setObjectName("pushButton");
        pushButton->setStyleSheet(QString::fromUtf8("font: 700 9pt \"Segoe UI\";\n"
"color:black"));

        formLayout->setWidget(0, QFormLayout::LabelRole, pushButton);


        retranslateUi(addseance);

        QMetaObject::connectSlotsByName(addseance);
    } // setupUi

    void retranslateUi(QWidget *addseance)
    {
        addseance->setWindowTitle(QCoreApplication::translate("addseance", "Form", nullptr));
        label_12->setText(QCoreApplication::translate("addseance", "Planification de seance", nullptr));
        pushButton_2->setText(QCoreApplication::translate("addseance", "Ajouter", nullptr));
        label->setText(QCoreApplication::translate("addseance", "Saisir l'horaire", nullptr));
        comboBox_2->setItemText(0, QCoreApplication::translate("addseance", "2h-4h", nullptr));
        comboBox_2->setItemText(1, QCoreApplication::translate("addseance", "17h-19h", nullptr));
        comboBox_2->setItemText(2, QCoreApplication::translate("addseance", "20h-22h", nullptr));
        comboBox_2->setItemText(3, QCoreApplication::translate("addseance", "22h-00h", nullptr));

        label_2->setText(QCoreApplication::translate("addseance", "Saisir la salle", nullptr));
        comboBox_3->setItemText(0, QCoreApplication::translate("addseance", "1", nullptr));
        comboBox_3->setItemText(1, QCoreApplication::translate("addseance", "2", nullptr));
        comboBox_3->setItemText(2, QCoreApplication::translate("addseance", "3", nullptr));
        comboBox_3->setItemText(3, QCoreApplication::translate("addseance", "4", nullptr));
        comboBox_3->setItemText(4, QCoreApplication::translate("addseance", "5", nullptr));

        label_3->setText(QCoreApplication::translate("addseance", "Saisir le prix", nullptr));
        comboBox_4->setItemText(0, QCoreApplication::translate("addseance", "30dhs", nullptr));
        comboBox_4->setItemText(1, QCoreApplication::translate("addseance", "40dhs", nullptr));

        label_4->setText(QCoreApplication::translate("addseance", "Saisir la capacit\303\251", nullptr));
        pushButton->setText(QCoreApplication::translate("addseance", "Afficher les films", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addseance: public Ui_addseance {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDSEANCE_H
