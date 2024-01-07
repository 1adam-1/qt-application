/********************************************************************************
** Form generated from reading UI file 'changesalle.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANGESALLE_H
#define UI_CHANGESALLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_changesalle
{
public:
    QLabel *label_12;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *label;
    QComboBox *comboBox_2;
    QComboBox *comboBox_3;
    QLabel *label_2;
    QPushButton *pushButton_2;

    void setupUi(QWidget *changesalle)
    {
        if (changesalle->objectName().isEmpty())
            changesalle->setObjectName("changesalle");
        changesalle->resize(699, 527);
        changesalle->setStyleSheet(QString::fromUtf8("color:white;\n"
"background:none;\n"
"background-image: url(:/new/prefix1/8324.png);"));
        label_12 = new QLabel(changesalle);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(130, 40, 451, 81));
        label_12->setStyleSheet(QString::fromUtf8("background:none;\n"
"font: 700 28pt \"Segoe UI\";\n"
"color:white"));
        gridLayoutWidget = new QWidget(changesalle);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(80, 160, 311, 94));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(gridLayoutWidget);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("font: 700 9pt \"Segoe UI\";\n"
"color:white"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        comboBox_2 = new QComboBox(gridLayoutWidget);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName("comboBox_2");
        comboBox_2->setStyleSheet(QString::fromUtf8("background :none;\n"
"color:black"));

        gridLayout->addWidget(comboBox_2, 0, 1, 1, 1);

        comboBox_3 = new QComboBox(gridLayoutWidget);
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->setObjectName("comboBox_3");
        comboBox_3->setStyleSheet(QString::fromUtf8("background :none;\n"
"color:black\n"
""));

        gridLayout->addWidget(comboBox_3, 1, 1, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName("label_2");
        label_2->setStyleSheet(QString::fromUtf8("font: 700 9pt \"Segoe UI\";\n"
"color:white"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        pushButton_2 = new QPushButton(changesalle);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(130, 280, 221, 41));
        pushButton_2->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Segoe UI\";\n"
"color:white"));

        retranslateUi(changesalle);

        QMetaObject::connectSlotsByName(changesalle);
    } // setupUi

    void retranslateUi(QWidget *changesalle)
    {
        changesalle->setWindowTitle(QCoreApplication::translate("changesalle", "Form", nullptr));
        label_12->setText(QCoreApplication::translate("changesalle", "Modifier une salle", nullptr));
        label->setText(QCoreApplication::translate("changesalle", "Salle", nullptr));
        comboBox_2->setItemText(0, QCoreApplication::translate("changesalle", "1", nullptr));
        comboBox_2->setItemText(1, QCoreApplication::translate("changesalle", "2", nullptr));
        comboBox_2->setItemText(2, QCoreApplication::translate("changesalle", "3", nullptr));
        comboBox_2->setItemText(3, QCoreApplication::translate("changesalle", "4", nullptr));
        comboBox_2->setItemText(4, QCoreApplication::translate("changesalle", "5", nullptr));

        comboBox_3->setItemText(0, QCoreApplication::translate("changesalle", "occupp\303\251e", nullptr));
        comboBox_3->setItemText(1, QCoreApplication::translate("changesalle", "libre", nullptr));

        label_2->setText(QCoreApplication::translate("changesalle", "Statut", nullptr));
        pushButton_2->setText(QCoreApplication::translate("changesalle", "Changer", nullptr));
    } // retranslateUi

};

namespace Ui {
    class changesalle: public Ui_changesalle {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGESALLE_H
