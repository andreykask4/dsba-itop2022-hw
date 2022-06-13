#include "addrowdialog.h"
#include "ui_addrowdialog.h"
#include <QMessageBox>

AddRowDialog::AddRowDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddRowDialog)
{
    ui->setupUi(this);
    this->setWindowTitle("Add row");

    QObject::connect(ui->okButton, SIGNAL(clicked()), this, SLOT(saveAddedRow()));
    QObject::connect(ui->cancelButton, SIGNAL(clicked()), this, SLOT(reject()));
}

void AddRowDialog::saveAddedRow()
{
    newRow.push_back(ui->IDLineEdit->text().toInt());
    newRow.push_back(ui->rankLineEdit->text().toInt());
    newRow.push_back(ui->nameLineEdit->text());
    newRow.push_back(ui->networthLineEdit->text());
    newRow.push_back(ui->spinBox->value());
    newRow.push_back(ui->countryLineEdit->text());
    newRow.push_back(ui->sourceLineEdit->text());
    newRow.push_back(ui->industryLineEdit->text());
    
    QMessageBox::warning(this, "Title", "Looooonger Text");
    
    accept();
}

const QList<QVariant>& AddRowDialog::getNewRow()
{
    return newRow;
}


AddRowDialog::~AddRowDialog()
{
    delete ui;
}
