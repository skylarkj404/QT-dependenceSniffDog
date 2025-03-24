/********************************************************************************
** Form generated from reading UI file 'dll_sniff_dog.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLL_SNIFF_DOG_H
#define UI_DLL_SNIFF_DOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_dll_Sniff_dog
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QLabel *label_4;
    QScrollArea *scrollArea_2;
    QWidget *scrollAreaWidgetContents_2;
    QGridLayout *gridLayout_2;
    QLineEdit *deploymentToolLocation;
    QLabel *label_3;
    QScrollArea *scrollArea_3;
    QWidget *scrollAreaWidgetContents_3;
    QGridLayout *gridLayout_3;
    QLineEdit *exeFilelocation;
    QComboBox *deploymentTool;
    QTextEdit *statusdispaly;
    QPushButton *pushButton;

    void setupUi(QMainWindow *dll_Sniff_dog)
    {
        if (dll_Sniff_dog->objectName().isEmpty())
            dll_Sniff_dog->setObjectName("dll_Sniff_dog");
        dll_Sniff_dog->resize(800, 139);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(dll_Sniff_dog->sizePolicy().hasHeightForWidth());
        dll_Sniff_dog->setSizePolicy(sizePolicy);
        dll_Sniff_dog->setMinimumSize(QSize(800, 139));
        dll_Sniff_dog->setMaximumSize(QSize(800, 139));
        dll_Sniff_dog->setStyleSheet(QString::fromUtf8("QMainWindow{\n"
"	background-color: rgb(49, 74, 111);\n"
"}"));
        centralwidget = new QWidget(dll_Sniff_dog);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	color: rgb(255, 255, 255);\n"
"}"));

        gridLayout->addWidget(label_4, 0, 1, 1, 1);

        scrollArea_2 = new QScrollArea(centralwidget);
        scrollArea_2->setObjectName("scrollArea_2");
        scrollArea_2->setStyleSheet(QString::fromUtf8("QScrollArea QWidget {\n"
"	background-color: rgb(49, 74, 111);\n"
"border: none;\n"
"}\n"
"\n"
""));
        scrollArea_2->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName("scrollAreaWidgetContents_2");
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 256, 69));
        gridLayout_2 = new QGridLayout(scrollAreaWidgetContents_2);
        gridLayout_2->setObjectName("gridLayout_2");
        deploymentToolLocation = new QLineEdit(scrollAreaWidgetContents_2);
        deploymentToolLocation->setObjectName("deploymentToolLocation");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(deploymentToolLocation->sizePolicy().hasHeightForWidth());
        deploymentToolLocation->setSizePolicy(sizePolicy1);
        deploymentToolLocation->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	color: rgb(255, 255, 255);\n"
"}"));

        gridLayout_2->addWidget(deploymentToolLocation, 0, 0, 1, 1);

        scrollArea_2->setWidget(scrollAreaWidgetContents_2);

        gridLayout->addWidget(scrollArea_2, 1, 1, 1, 1);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	color: rgb(255, 255, 255);\n"
"}"));

        gridLayout->addWidget(label_3, 0, 2, 1, 1);

        scrollArea_3 = new QScrollArea(centralwidget);
        scrollArea_3->setObjectName("scrollArea_3");
        scrollArea_3->setStyleSheet(QString::fromUtf8("QScrollArea QWidget {\n"
"	background-color: rgb(49, 74, 111);\n"
"border: none;\n"
"}\n"
"\n"
""));
        scrollArea_3->setWidgetResizable(true);
        scrollAreaWidgetContents_3 = new QWidget();
        scrollAreaWidgetContents_3->setObjectName("scrollAreaWidgetContents_3");
        scrollAreaWidgetContents_3->setGeometry(QRect(0, 0, 257, 69));
        gridLayout_3 = new QGridLayout(scrollAreaWidgetContents_3);
        gridLayout_3->setObjectName("gridLayout_3");
        exeFilelocation = new QLineEdit(scrollAreaWidgetContents_3);
        exeFilelocation->setObjectName("exeFilelocation");
        sizePolicy1.setHeightForWidth(exeFilelocation->sizePolicy().hasHeightForWidth());
        exeFilelocation->setSizePolicy(sizePolicy1);
        exeFilelocation->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	color: rgb(255, 255, 255);\n"
"}"));

        gridLayout_3->addWidget(exeFilelocation, 0, 0, 1, 1);

        scrollArea_3->setWidget(scrollAreaWidgetContents_3);

        gridLayout->addWidget(scrollArea_3, 1, 2, 1, 1);

        deploymentTool = new QComboBox(centralwidget);
        deploymentTool->addItem(QString());
        deploymentTool->setObjectName("deploymentTool");
        QFont font;
        font.setKerning(true);
        deploymentTool->setFont(font);

        gridLayout->addWidget(deploymentTool, 2, 1, 1, 1);

        statusdispaly = new QTextEdit(centralwidget);
        statusdispaly->setObjectName("statusdispaly");
        statusdispaly->setStyleSheet(QString::fromUtf8("QTextEdit{\n"
"	color: rgb(49, 74, 111);\n"
"}"));
        statusdispaly->setReadOnly(true);

        gridLayout->addWidget(statusdispaly, 0, 0, 3, 1);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");

        gridLayout->addWidget(pushButton, 2, 2, 1, 1);

        dll_Sniff_dog->setCentralWidget(centralwidget);

        retranslateUi(dll_Sniff_dog);

        QMetaObject::connectSlotsByName(dll_Sniff_dog);
    } // setupUi

    void retranslateUi(QMainWindow *dll_Sniff_dog)
    {
        dll_Sniff_dog->setWindowTitle(QCoreApplication::translate("dll_Sniff_dog", "dll_Sniff_dog", nullptr));
        label_4->setText(QCoreApplication::translate("dll_Sniff_dog", "deployment tool location", nullptr));
        deploymentToolLocation->setText(QCoreApplication::translate("dll_Sniff_dog", "hint:C:\\Qt\\<version>\\<compiler>\\bin\\", nullptr));
        label_3->setText(QCoreApplication::translate("dll_Sniff_dog", "QT_file.exe file location", nullptr));
        deploymentTool->setItemText(0, QCoreApplication::translate("dll_Sniff_dog", "windeployqt.exe", nullptr));

        pushButton->setText(QCoreApplication::translate("dll_Sniff_dog", "run", nullptr));
    } // retranslateUi

};

namespace Ui {
    class dll_Sniff_dog: public Ui_dll_Sniff_dog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DLL_SNIFF_DOG_H
