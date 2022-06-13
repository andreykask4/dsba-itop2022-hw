/********************************************************************************
** Form generated from reading UI file 'addrowdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDROWDIALOG_H
#define UI_ADDROWDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_AddRowDialog
{
public:
    QFormLayout *formLayout;
    QLabel *IDLabel;
    QLineEdit *IDLineEdit;
    QPushButton *okButton;
    QPushButton *cancelButton;
    QLabel *rankLabel;
    QLineEdit *rankLineEdit;
    QLabel *nameLabel;
    QLineEdit *nameLineEdit;
    QLabel *networthLabel;
    QLineEdit *networthLineEdit;
    QLabel *ageLabel;
    QSpinBox *spinBox;
    QLabel *countryLabel;
    QLineEdit *countryLineEdit;
    QLabel *sourceLabel;
    QLineEdit *sourceLineEdit;
    QLabel *industryLabel;
    QLineEdit *industryLineEdit;

    void setupUi(QDialog *AddRowDialog)
    {
        if (AddRowDialog->objectName().isEmpty())
            AddRowDialog->setObjectName(QString::fromUtf8("AddRowDialog"));
        AddRowDialog->resize(440, 399);
        formLayout = new QFormLayout(AddRowDialog);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        IDLabel = new QLabel(AddRowDialog);
        IDLabel->setObjectName(QString::fromUtf8("IDLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, IDLabel);

        IDLineEdit = new QLineEdit(AddRowDialog);
        IDLineEdit->setObjectName(QString::fromUtf8("IDLineEdit"));

        formLayout->setWidget(0, QFormLayout::FieldRole, IDLineEdit);

        okButton = new QPushButton(AddRowDialog);
        okButton->setObjectName(QString::fromUtf8("okButton"));

        formLayout->setWidget(9, QFormLayout::FieldRole, okButton);

        cancelButton = new QPushButton(AddRowDialog);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));

        formLayout->setWidget(10, QFormLayout::FieldRole, cancelButton);

        rankLabel = new QLabel(AddRowDialog);
        rankLabel->setObjectName(QString::fromUtf8("rankLabel"));

        formLayout->setWidget(1, QFormLayout::LabelRole, rankLabel);

        rankLineEdit = new QLineEdit(AddRowDialog);
        rankLineEdit->setObjectName(QString::fromUtf8("rankLineEdit"));

        formLayout->setWidget(1, QFormLayout::FieldRole, rankLineEdit);

        nameLabel = new QLabel(AddRowDialog);
        nameLabel->setObjectName(QString::fromUtf8("nameLabel"));

        formLayout->setWidget(2, QFormLayout::LabelRole, nameLabel);

        nameLineEdit = new QLineEdit(AddRowDialog);
        nameLineEdit->setObjectName(QString::fromUtf8("nameLineEdit"));

        formLayout->setWidget(2, QFormLayout::FieldRole, nameLineEdit);

        networthLabel = new QLabel(AddRowDialog);
        networthLabel->setObjectName(QString::fromUtf8("networthLabel"));

        formLayout->setWidget(3, QFormLayout::LabelRole, networthLabel);

        networthLineEdit = new QLineEdit(AddRowDialog);
        networthLineEdit->setObjectName(QString::fromUtf8("networthLineEdit"));

        formLayout->setWidget(3, QFormLayout::FieldRole, networthLineEdit);

        ageLabel = new QLabel(AddRowDialog);
        ageLabel->setObjectName(QString::fromUtf8("ageLabel"));

        formLayout->setWidget(4, QFormLayout::LabelRole, ageLabel);

        spinBox = new QSpinBox(AddRowDialog);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setMaximum(999);

        formLayout->setWidget(4, QFormLayout::FieldRole, spinBox);

        countryLabel = new QLabel(AddRowDialog);
        countryLabel->setObjectName(QString::fromUtf8("countryLabel"));

        formLayout->setWidget(5, QFormLayout::LabelRole, countryLabel);

        countryLineEdit = new QLineEdit(AddRowDialog);
        countryLineEdit->setObjectName(QString::fromUtf8("countryLineEdit"));

        formLayout->setWidget(5, QFormLayout::FieldRole, countryLineEdit);

        sourceLabel = new QLabel(AddRowDialog);
        sourceLabel->setObjectName(QString::fromUtf8("sourceLabel"));

        formLayout->setWidget(6, QFormLayout::LabelRole, sourceLabel);

        sourceLineEdit = new QLineEdit(AddRowDialog);
        sourceLineEdit->setObjectName(QString::fromUtf8("sourceLineEdit"));

        formLayout->setWidget(6, QFormLayout::FieldRole, sourceLineEdit);

        industryLabel = new QLabel(AddRowDialog);
        industryLabel->setObjectName(QString::fromUtf8("industryLabel"));

        formLayout->setWidget(7, QFormLayout::LabelRole, industryLabel);

        industryLineEdit = new QLineEdit(AddRowDialog);
        industryLineEdit->setObjectName(QString::fromUtf8("industryLineEdit"));

        formLayout->setWidget(7, QFormLayout::FieldRole, industryLineEdit);


        retranslateUi(AddRowDialog);

        QMetaObject::connectSlotsByName(AddRowDialog);
    } // setupUi

    void retranslateUi(QDialog *AddRowDialog)
    {
        AddRowDialog->setWindowTitle(QCoreApplication::translate("AddRowDialog", "Dialog", nullptr));
        IDLabel->setText(QCoreApplication::translate("AddRowDialog", "Id", nullptr));
        IDLineEdit->setText(QString());
        okButton->setText(QCoreApplication::translate("AddRowDialog", "OK", nullptr));
        cancelButton->setText(QCoreApplication::translate("AddRowDialog", "Cancel", nullptr));
        rankLabel->setText(QCoreApplication::translate("AddRowDialog", "Rank", nullptr));
        nameLabel->setText(QCoreApplication::translate("AddRowDialog", "Name", nullptr));
        networthLabel->setText(QCoreApplication::translate("AddRowDialog", "NetWorth", nullptr));
        ageLabel->setText(QCoreApplication::translate("AddRowDialog", "Age", nullptr));
        countryLabel->setText(QCoreApplication::translate("AddRowDialog", "Country", nullptr));
        sourceLabel->setText(QCoreApplication::translate("AddRowDialog", "Source", nullptr));
        industryLabel->setText(QCoreApplication::translate("AddRowDialog", "Industry", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddRowDialog: public Ui_AddRowDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDROWDIALOG_H
