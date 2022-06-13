/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionLoad;
    QAction *actionAbout;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLineEdit *nameEdit;
    QLineEdit *lineEdit;
    QLabel *label_5;
    QSpacerItem *verticalSpacer;
    QLabel *label_7;
    QPushButton *loadButton;
    QTableView *tableDetailsView;
    QLabel *label_3;
    QPushButton *deleteButton;
    QPushButton *addRowButton;
    QGroupBox *fareGroupBox;
    QVBoxLayout *verticalLayout;
    QLabel *fareFromLabel;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *fareFromMinLabel;
    QSlider *fareFromSlider;
    QLabel *fareFromMaLabel;
    QLineEdit *fareFromLineEdit;
    QLabel *fareToLabel;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *fareToMinLabel;
    QSlider *fareToSlider;
    QLabel *fareToMaxLabel;
    QLabel *label;
    QLabel *label_6;
    QPushButton *saveButton;
    QLabel *label_4;
    QLineEdit *nameFilterlineEdit;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuHelp;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1003, 588);
        actionLoad = new QAction(MainWindow);
        actionLoad->setObjectName(QString::fromUtf8("actionLoad"));
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 15, 7, 1, 1);

        nameEdit = new QLineEdit(centralwidget);
        nameEdit->setObjectName(QString::fromUtf8("nameEdit"));

        gridLayout->addWidget(nameEdit, 7, 7, 1, 1);

        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        gridLayout->addWidget(lineEdit, 0, 3, 1, 1);

        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 7, 6, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 13, 6, 1, 1);

        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout->addWidget(label_7, 16, 7, 1, 1);

        loadButton = new QPushButton(centralwidget);
        loadButton->setObjectName(QString::fromUtf8("loadButton"));

        gridLayout->addWidget(loadButton, 4, 6, 1, 3);

        tableDetailsView = new QTableView(centralwidget);
        tableDetailsView->setObjectName(QString::fromUtf8("tableDetailsView"));

        gridLayout->addWidget(tableDetailsView, 4, 1, 10, 4);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 18, 6, 1, 1);

        deleteButton = new QPushButton(centralwidget);
        deleteButton->setObjectName(QString::fromUtf8("deleteButton"));

        gridLayout->addWidget(deleteButton, 6, 6, 1, 3);

        addRowButton = new QPushButton(centralwidget);
        addRowButton->setObjectName(QString::fromUtf8("addRowButton"));

        gridLayout->addWidget(addRowButton, 5, 6, 1, 3);

        fareGroupBox = new QGroupBox(centralwidget);
        fareGroupBox->setObjectName(QString::fromUtf8("fareGroupBox"));
        verticalLayout = new QVBoxLayout(fareGroupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        fareFromLabel = new QLabel(fareGroupBox);
        fareFromLabel->setObjectName(QString::fromUtf8("fareFromLabel"));

        verticalLayout->addWidget(fareFromLabel);

        widget = new QWidget(fareGroupBox);
        widget->setObjectName(QString::fromUtf8("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        fareFromMinLabel = new QLabel(widget);
        fareFromMinLabel->setObjectName(QString::fromUtf8("fareFromMinLabel"));

        horizontalLayout->addWidget(fareFromMinLabel);

        fareFromSlider = new QSlider(widget);
        fareFromSlider->setObjectName(QString::fromUtf8("fareFromSlider"));
        fareFromSlider->setMaximum(250);
        fareFromSlider->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(fareFromSlider);

        fareFromMaLabel = new QLabel(widget);
        fareFromMaLabel->setObjectName(QString::fromUtf8("fareFromMaLabel"));

        horizontalLayout->addWidget(fareFromMaLabel);

        fareFromLineEdit = new QLineEdit(widget);
        fareFromLineEdit->setObjectName(QString::fromUtf8("fareFromLineEdit"));
        fareFromLineEdit->setReadOnly(false);

        horizontalLayout->addWidget(fareFromLineEdit);


        verticalLayout->addWidget(widget);

        fareToLabel = new QLabel(fareGroupBox);
        fareToLabel->setObjectName(QString::fromUtf8("fareToLabel"));

        verticalLayout->addWidget(fareToLabel);

        widget_2 = new QWidget(fareGroupBox);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        horizontalLayout_2 = new QHBoxLayout(widget_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        fareToMinLabel = new QLabel(widget_2);
        fareToMinLabel->setObjectName(QString::fromUtf8("fareToMinLabel"));

        horizontalLayout_2->addWidget(fareToMinLabel);

        fareToSlider = new QSlider(widget_2);
        fareToSlider->setObjectName(QString::fromUtf8("fareToSlider"));
        fareToSlider->setMaximum(250);
        fareToSlider->setValue(250);
        fareToSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_2->addWidget(fareToSlider);

        fareToMaxLabel = new QLabel(widget_2);
        fareToMaxLabel->setObjectName(QString::fromUtf8("fareToMaxLabel"));

        horizontalLayout_2->addWidget(fareToMaxLabel);


        verticalLayout->addWidget(widget_2);


        gridLayout->addWidget(fareGroupBox, 8, 6, 1, 3);

        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 15, 6, 1, 1);

        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 16, 6, 1, 1);

        saveButton = new QPushButton(centralwidget);
        saveButton->setObjectName(QString::fromUtf8("saveButton"));

        gridLayout->addWidget(saveButton, 0, 6, 1, 3);

        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 18, 7, 1, 1);

        nameFilterlineEdit = new QLineEdit(centralwidget);
        nameFilterlineEdit->setObjectName(QString::fromUtf8("nameFilterlineEdit"));

        gridLayout->addWidget(nameFilterlineEdit, 0, 2, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1003, 25));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionLoad);
        menuHelp->addAction(actionAbout);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionLoad->setText(QCoreApplication::translate("MainWindow", "Load...", nullptr));
        actionAbout->setText(QCoreApplication::translate("MainWindow", "About", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "_______", nullptr));
        lineEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "Enter ID", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "NameEditor", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "______", nullptr));
        loadButton->setText(QCoreApplication::translate("MainWindow", "Load File", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Age:", nullptr));
        deleteButton->setText(QCoreApplication::translate("MainWindow", "Delete selected row", nullptr));
        addRowButton->setText(QCoreApplication::translate("MainWindow", "Add row", nullptr));
        fareGroupBox->setTitle(QCoreApplication::translate("MainWindow", "Networth", nullptr));
        fareFromLabel->setText(QCoreApplication::translate("MainWindow", "From", nullptr));
        fareFromMinLabel->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        fareFromMaLabel->setText(QCoreApplication::translate("MainWindow", "250", nullptr));
        fareToLabel->setText(QCoreApplication::translate("MainWindow", "To", nullptr));
        fareToMinLabel->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        fareToMaxLabel->setText(QCoreApplication::translate("MainWindow", "250", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Name:", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Networth:", nullptr));
        saveButton->setText(QCoreApplication::translate("MainWindow", "Save File", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "_______", nullptr));
        nameFilterlineEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "Enter name", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
        menuHelp->setTitle(QCoreApplication::translate("MainWindow", "Help", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
