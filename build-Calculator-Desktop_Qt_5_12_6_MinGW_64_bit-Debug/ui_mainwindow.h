/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QPushButton *Button8;
    QPushButton *Button4;
    QPushButton *Button7;
    QPushButton *Button1;
    QPushButton *Divide;
    QPushButton *Button9;
    QPushButton *MemAdd;
    QPushButton *Clear;
    QPushButton *Button5;
    QPushButton *Button2;
    QPushButton *Button0;
    QPushButton *Button6;
    QPushButton *Multiply;
    QPushButton *MemClear;
    QPushButton *Button3;
    QPushButton *ChangeSign;
    QPushButton *Add;
    QPushButton *Mem;
    QPushButton *Subtract;
    QPushButton *Equals;
    QLineEdit *Display;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(351, 271);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        Button8 = new QPushButton(centralwidget);
        Button8->setObjectName(QString::fromUtf8("Button8"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Button8->sizePolicy().hasHeightForWidth());
        Button8->setSizePolicy(sizePolicy);
        Button8->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   	background-color: #C0C0C0; \n"
"	border: 1px solid gray;\n"
"	border-radius: 0px;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"   	background-color: #A9A9A9; \n"
"	border: 1px solid gray;\n"
"	border-radius: 0px;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button8, 1, 1, 1, 1);

        Button4 = new QPushButton(centralwidget);
        Button4->setObjectName(QString::fromUtf8("Button4"));
        sizePolicy.setHeightForWidth(Button4->sizePolicy().hasHeightForWidth());
        Button4->setSizePolicy(sizePolicy);
        Button4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   	background-color: #C0C0C0; \n"
"	border: 1px solid gray;\n"
"	border-radius: 0px;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"   	background-color: #A9A9A9; \n"
"	border: 1px solid gray;\n"
"	border-radius: 0px;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button4, 2, 0, 1, 1);

        Button7 = new QPushButton(centralwidget);
        Button7->setObjectName(QString::fromUtf8("Button7"));
        sizePolicy.setHeightForWidth(Button7->sizePolicy().hasHeightForWidth());
        Button7->setSizePolicy(sizePolicy);
        Button7->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   	background-color: #C0C0C0; \n"
"	border: 1px solid gray;\n"
"	border-radius: 0px;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"   	background-color: #A9A9A9; \n"
"	border: 1px solid gray;\n"
"	border-radius: 0px;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button7, 1, 0, 1, 1);

        Button1 = new QPushButton(centralwidget);
        Button1->setObjectName(QString::fromUtf8("Button1"));
        sizePolicy.setHeightForWidth(Button1->sizePolicy().hasHeightForWidth());
        Button1->setSizePolicy(sizePolicy);
        Button1->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   	background-color: #C0C0C0; \n"
"	border: 1px solid gray;\n"
"	border-radius: 0px;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"   	background-color: #A9A9A9; \n"
"	border: 1px solid gray;\n"
"	border-radius: 0px;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button1, 3, 0, 1, 1);

        Divide = new QPushButton(centralwidget);
        Divide->setObjectName(QString::fromUtf8("Divide"));
        sizePolicy.setHeightForWidth(Divide->sizePolicy().hasHeightForWidth());
        Divide->setSizePolicy(sizePolicy);
        Divide->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   	background-color: #FF8C00; \n"
"	border: 1px solid gray;\n"
"	border-radius: 0px;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"   	background-color: #A9A9A9; \n"
"	border: 1px solid gray;\n"
"	border-radius: 0px;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Divide, 1, 3, 1, 1);

        Button9 = new QPushButton(centralwidget);
        Button9->setObjectName(QString::fromUtf8("Button9"));
        sizePolicy.setHeightForWidth(Button9->sizePolicy().hasHeightForWidth());
        Button9->setSizePolicy(sizePolicy);
        Button9->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   	background-color: #C0C0C0; \n"
"	border: 1px solid gray;\n"
"	border-radius: 0px;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"   	background-color: #A9A9A9; \n"
"	border: 1px solid gray;\n"
"	border-radius: 0px;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button9, 1, 2, 1, 1);

        MemAdd = new QPushButton(centralwidget);
        MemAdd->setObjectName(QString::fromUtf8("MemAdd"));
        sizePolicy.setHeightForWidth(MemAdd->sizePolicy().hasHeightForWidth());
        MemAdd->setSizePolicy(sizePolicy);
        MemAdd->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   	background-color: #FF8C00; \n"
"	border: 1px solid gray;\n"
"	border-radius: 0px;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"   	background-color: #A9A9A9; \n"
"	border: 1px solid gray;\n"
"	border-radius: 0px;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(MemAdd, 1, 4, 1, 1);

        Clear = new QPushButton(centralwidget);
        Clear->setObjectName(QString::fromUtf8("Clear"));
        sizePolicy.setHeightForWidth(Clear->sizePolicy().hasHeightForWidth());
        Clear->setSizePolicy(sizePolicy);
        Clear->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   	background-color: #C0C0C0; \n"
"	border: 1px solid gray;\n"
"	border-radius: 0px;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"   	background-color: #A9A9A9; \n"
"	border: 1px solid gray;\n"
"	border-radius: 0px;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Clear, 4, 0, 1, 1);

        Button5 = new QPushButton(centralwidget);
        Button5->setObjectName(QString::fromUtf8("Button5"));
        sizePolicy.setHeightForWidth(Button5->sizePolicy().hasHeightForWidth());
        Button5->setSizePolicy(sizePolicy);
        Button5->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   	background-color: #C0C0C0; \n"
"	border: 1px solid gray;\n"
"	border-radius: 0px;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"   	background-color: #A9A9A9; \n"
"	border: 1px solid gray;\n"
"	border-radius: 0px;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button5, 2, 1, 1, 1);

        Button2 = new QPushButton(centralwidget);
        Button2->setObjectName(QString::fromUtf8("Button2"));
        sizePolicy.setHeightForWidth(Button2->sizePolicy().hasHeightForWidth());
        Button2->setSizePolicy(sizePolicy);
        Button2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   	background-color: #C0C0C0; \n"
"	border: 1px solid gray;\n"
"	border-radius: 0px;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"   	background-color: #A9A9A9; \n"
"	border: 1px solid gray;\n"
"	border-radius: 0px;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button2, 3, 1, 1, 1);

        Button0 = new QPushButton(centralwidget);
        Button0->setObjectName(QString::fromUtf8("Button0"));
        sizePolicy.setHeightForWidth(Button0->sizePolicy().hasHeightForWidth());
        Button0->setSizePolicy(sizePolicy);
        Button0->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   	background-color: #C0C0C0; \n"
"	border: 1px solid gray;\n"
"	border-radius: 0px;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"   	background-color: #A9A9A9; \n"
"	border: 1px solid gray;\n"
"	border-radius: 0px;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button0, 4, 1, 1, 1);

        Button6 = new QPushButton(centralwidget);
        Button6->setObjectName(QString::fromUtf8("Button6"));
        sizePolicy.setHeightForWidth(Button6->sizePolicy().hasHeightForWidth());
        Button6->setSizePolicy(sizePolicy);
        Button6->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   	background-color: #C0C0C0; \n"
"	border: 1px solid gray;\n"
"	border-radius: 0px;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"   	background-color: #A9A9A9; \n"
"	border: 1px solid gray;\n"
"	border-radius: 0px;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button6, 2, 2, 1, 1);

        Multiply = new QPushButton(centralwidget);
        Multiply->setObjectName(QString::fromUtf8("Multiply"));
        sizePolicy.setHeightForWidth(Multiply->sizePolicy().hasHeightForWidth());
        Multiply->setSizePolicy(sizePolicy);
        Multiply->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   	background-color: #FF8C00; \n"
"	border: 1px solid gray;\n"
"	border-radius: 0px;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"   	background-color: #A9A9A9; \n"
"	border: 1px solid gray;\n"
"	border-radius: 0px;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Multiply, 2, 3, 1, 1);

        MemClear = new QPushButton(centralwidget);
        MemClear->setObjectName(QString::fromUtf8("MemClear"));
        sizePolicy.setHeightForWidth(MemClear->sizePolicy().hasHeightForWidth());
        MemClear->setSizePolicy(sizePolicy);
        MemClear->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   	background-color: #FF8C00; \n"
"	border: 1px solid gray;\n"
"	border-radius: 0px;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"   	background-color: #A9A9A9; \n"
"	border: 1px solid gray;\n"
"	border-radius: 0px;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(MemClear, 2, 4, 1, 1);

        Button3 = new QPushButton(centralwidget);
        Button3->setObjectName(QString::fromUtf8("Button3"));
        sizePolicy.setHeightForWidth(Button3->sizePolicy().hasHeightForWidth());
        Button3->setSizePolicy(sizePolicy);
        Button3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   	background-color: #C0C0C0; \n"
"	border: 1px solid gray;\n"
"	border-radius: 0px;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"   	background-color: #A9A9A9; \n"
"	border: 1px solid gray;\n"
"	border-radius: 0px;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button3, 3, 2, 1, 1);

        ChangeSign = new QPushButton(centralwidget);
        ChangeSign->setObjectName(QString::fromUtf8("ChangeSign"));
        sizePolicy.setHeightForWidth(ChangeSign->sizePolicy().hasHeightForWidth());
        ChangeSign->setSizePolicy(sizePolicy);
        ChangeSign->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   	background-color: #C0C0C0; \n"
"	border: 1px solid gray;\n"
"	border-radius: 0px;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"   	background-color: #A9A9A9; \n"
"	border: 1px solid gray;\n"
"	border-radius: 0px;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(ChangeSign, 4, 2, 1, 1);

        Add = new QPushButton(centralwidget);
        Add->setObjectName(QString::fromUtf8("Add"));
        sizePolicy.setHeightForWidth(Add->sizePolicy().hasHeightForWidth());
        Add->setSizePolicy(sizePolicy);
        Add->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   	background-color: #FF8C00; \n"
"	border: 1px solid gray;\n"
"	border-radius: 0px;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"   	background-color: #A9A9A9; \n"
"	border: 1px solid gray;\n"
"	border-radius: 0px;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Add, 3, 3, 1, 1);

        Mem = new QPushButton(centralwidget);
        Mem->setObjectName(QString::fromUtf8("Mem"));
        sizePolicy.setHeightForWidth(Mem->sizePolicy().hasHeightForWidth());
        Mem->setSizePolicy(sizePolicy);
        Mem->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   	background-color: #FF8C00; \n"
"	border: 1px solid gray;\n"
"	border-radius: 0px;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"   	background-color: #A9A9A9; \n"
"	border: 1px solid gray;\n"
"	border-radius: 0px;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Mem, 3, 4, 1, 1);

        Subtract = new QPushButton(centralwidget);
        Subtract->setObjectName(QString::fromUtf8("Subtract"));
        sizePolicy.setHeightForWidth(Subtract->sizePolicy().hasHeightForWidth());
        Subtract->setSizePolicy(sizePolicy);
        Subtract->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   	background-color: #FF8C00; \n"
"	border: 1px solid gray;\n"
"	border-radius: 0px;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"   	background-color: #A9A9A9; \n"
"	border: 1px solid gray;\n"
"	border-radius: 0px;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Subtract, 4, 3, 1, 1);

        Equals = new QPushButton(centralwidget);
        Equals->setObjectName(QString::fromUtf8("Equals"));
        sizePolicy.setHeightForWidth(Equals->sizePolicy().hasHeightForWidth());
        Equals->setSizePolicy(sizePolicy);
        Equals->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   	background-color: #FF8C00; \n"
"	border: 1px solid gray;\n"
"	border-radius: 0px;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"   	background-color: #A9A9A9; \n"
"	border: 1px solid gray;\n"
"	border-radius: 0px;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Equals, 4, 4, 1, 1);

        Display = new QLineEdit(centralwidget);
        Display->setObjectName(QString::fromUtf8("Display"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(Display->sizePolicy().hasHeightForWidth());
        Display->setSizePolicy(sizePolicy1);
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(18);
        font.setBold(true);
        font.setWeight(75);
        Display->setFont(font);
        Display->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"	 background-color: gray;\n"
"	 border: 1px solid gray;\n"
"	 color: #ffffff;}"));
        Display->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(Display, 0, 0, 1, 5);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 351, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        Button8->setText(QApplication::translate("MainWindow", "8", nullptr));
        Button4->setText(QApplication::translate("MainWindow", "4", nullptr));
        Button7->setText(QApplication::translate("MainWindow", "7", nullptr));
        Button1->setText(QApplication::translate("MainWindow", "1", nullptr));
        Divide->setText(QApplication::translate("MainWindow", "/", nullptr));
        Button9->setText(QApplication::translate("MainWindow", "9", nullptr));
        MemAdd->setText(QApplication::translate("MainWindow", "M+", nullptr));
        Clear->setText(QApplication::translate("MainWindow", "C", nullptr));
        Button5->setText(QApplication::translate("MainWindow", "5", nullptr));
        Button2->setText(QApplication::translate("MainWindow", "2", nullptr));
        Button0->setText(QApplication::translate("MainWindow", "0", nullptr));
        Button6->setText(QApplication::translate("MainWindow", "6", nullptr));
        Multiply->setText(QApplication::translate("MainWindow", "*", nullptr));
        MemClear->setText(QApplication::translate("MainWindow", "M-", nullptr));
        Button3->setText(QApplication::translate("MainWindow", "3", nullptr));
        ChangeSign->setText(QApplication::translate("MainWindow", "+/-", nullptr));
        Add->setText(QApplication::translate("MainWindow", "+", nullptr));
        Mem->setText(QApplication::translate("MainWindow", "M", nullptr));
        Subtract->setText(QApplication::translate("MainWindow", "-", nullptr));
        Equals->setText(QApplication::translate("MainWindow", "=", nullptr));
        Display->setText(QApplication::translate("MainWindow", "0.0", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
