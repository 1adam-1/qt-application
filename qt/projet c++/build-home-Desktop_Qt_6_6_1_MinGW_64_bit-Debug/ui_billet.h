/********************************************************************************
** Form generated from reading UI file 'billet.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BILLET_H
#define UI_BILLET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_billet
{
public:
    QPushButton *pushButton;
    QTableView *tableView;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *label;
    QSpinBox *spinBox;
    QLineEdit *lineEdit;
    QLabel *label_3;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLineEdit *lineEdit_2;
    QLabel *label_5;
    QLineEdit *lineEdit_3;
    QLabel *label_4;
    QPushButton *pushButton_2;

    void setupUi(QWidget *billet)
    {
        if (billet->objectName().isEmpty())
            billet->setObjectName("billet");
        billet->resize(741, 641);
        billet->setStyleSheet(QString::fromUtf8("color:black;\n"
"background:none\n"
""));
        pushButton = new QPushButton(billet);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(180, 230, 331, 41));
        pushButton->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Segoe UI\";"));
        tableView = new QTableView(billet);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(180, 20, 331, 201));
        tableView->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Segoe UI\";"));
        horizontalLayoutWidget = new QWidget(billet);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(20, 400, 301, 21));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(horizontalLayoutWidget);
        label_2->setObjectName("label_2");
        label_2->setStyleSheet(QString::fromUtf8("color:white;\n"
"font: 700 9pt \"Segoe UI\";"));

        horizontalLayout->addWidget(label_2);

        gridLayoutWidget = new QWidget(billet);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(20, 300, 311, 94));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(gridLayoutWidget);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("font: 700 9pt \"Segoe UI\";\n"
"color:white"));

        gridLayout->addWidget(label, 1, 0, 1, 1);

        spinBox = new QSpinBox(gridLayoutWidget);
        spinBox->setObjectName("spinBox");

        gridLayout->addWidget(spinBox, 1, 1, 1, 1);

        lineEdit = new QLineEdit(gridLayoutWidget);
        lineEdit->setObjectName("lineEdit");

        gridLayout->addWidget(lineEdit, 0, 1, 1, 1);

        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName("label_3");
        label_3->setStyleSheet(QString::fromUtf8("font: 700 9pt \"Segoe UI\";\n"
"color:white"));

        gridLayout->addWidget(label_3, 0, 0, 1, 1);

        formLayoutWidget = new QWidget(billet);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(20, 430, 301, 81));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        lineEdit_2 = new QLineEdit(formLayoutWidget);
        lineEdit_2->setObjectName("lineEdit_2");

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEdit_2);

        label_5 = new QLabel(formLayoutWidget);
        label_5->setObjectName("label_5");
        label_5->setStyleSheet(QString::fromUtf8("font: 700 9pt \"Segoe UI\";\n"
"color:white"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_5);

        lineEdit_3 = new QLineEdit(formLayoutWidget);
        lineEdit_3->setObjectName("lineEdit_3");

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEdit_3);

        label_4 = new QLabel(formLayoutWidget);
        label_4->setObjectName("label_4");
        label_4->setStyleSheet(QString::fromUtf8("font: 700 9pt \"Segoe UI\";\n"
"color:white"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_4);

        pushButton_2 = new QPushButton(billet);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(60, 520, 221, 41));
        pushButton_2->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Segoe UI\";"));

        retranslateUi(billet);

        QMetaObject::connectSlotsByName(billet);
    } // setupUi

    void retranslateUi(QWidget *billet)
    {
        billet->setWindowTitle(QCoreApplication::translate("billet", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("billet", "Afficher les seances disponibles", nullptr));
        label_2->setText(QString());
        label->setText(QCoreApplication::translate("billet", "Nombre de place", nullptr));
        label_3->setText(QCoreApplication::translate("billet", "la s\303\251ance", nullptr));
        label_5->setText(QCoreApplication::translate("billet", "coordonn\303\251es", nullptr));
        label_4->setText(QCoreApplication::translate("billet", "Nom du client", nullptr));
        pushButton_2->setText(QCoreApplication::translate("billet", "Ajouter", nullptr));
    } // retranslateUi

};

namespace Ui {
    class billet: public Ui_billet {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BILLET_H
