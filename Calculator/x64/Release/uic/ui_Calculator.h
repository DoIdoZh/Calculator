/********************************************************************************
** Form generated from reading UI file 'Calculator.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCULATOR_H
#define UI_CALCULATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "mylineedit.h"

QT_BEGIN_NAMESPACE

class Ui_CalculatorClass
{
public:
    QWidget *centralWidget;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEditLeft;
    QComboBox *comboBox;
    myLineEdit *lineEditRight;
    QLabel *labelEqu;
    QLineEdit *lineEditAns;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButtonClear;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonCalc;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;

    void setupUi(QMainWindow *CalculatorClass)
    {
        if (CalculatorClass->objectName().isEmpty())
            CalculatorClass->setObjectName(QString::fromUtf8("CalculatorClass"));
        CalculatorClass->resize(700, 500);
        CalculatorClass->setMinimumSize(QSize(700, 500));
        CalculatorClass->setMaximumSize(QSize(700, 500));
        centralWidget = new QWidget(CalculatorClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(40, 170, 629, 70));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        lineEditLeft = new QLineEdit(layoutWidget);
        lineEditLeft->setObjectName(QString::fromUtf8("lineEditLeft"));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(14);
        lineEditLeft->setFont(font);

        horizontalLayout->addWidget(lineEditLeft);

        comboBox = new QComboBox(layoutWidget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setFont(font);

        horizontalLayout->addWidget(comboBox);

        lineEditRight = new myLineEdit(layoutWidget);
        lineEditRight->setObjectName(QString::fromUtf8("lineEditRight"));
        lineEditRight->setFont(font);

        horizontalLayout->addWidget(lineEditRight);

        labelEqu = new QLabel(layoutWidget);
        labelEqu->setObjectName(QString::fromUtf8("labelEqu"));
        labelEqu->setFont(font);
        labelEqu->setLayoutDirection(Qt::LeftToRight);
        labelEqu->setScaledContents(false);
        labelEqu->setAlignment(Qt::AlignCenter);
        labelEqu->setWordWrap(false);

        horizontalLayout->addWidget(labelEqu);

        lineEditAns = new QLineEdit(layoutWidget);
        lineEditAns->setObjectName(QString::fromUtf8("lineEditAns"));
        lineEditAns->setEnabled(true);
        lineEditAns->setFont(font);
        lineEditAns->setReadOnly(true);

        horizontalLayout->addWidget(lineEditAns);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        pushButtonClear = new QPushButton(layoutWidget);
        pushButtonClear->setObjectName(QString::fromUtf8("pushButtonClear"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Arial"));
        font1.setPointSize(14);
        font1.setBold(true);
        font1.setWeight(75);
        pushButtonClear->setFont(font1);

        horizontalLayout_3->addWidget(pushButtonClear);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        pushButtonCalc = new QPushButton(layoutWidget);
        pushButtonCalc->setObjectName(QString::fromUtf8("pushButtonCalc"));
        pushButtonCalc->setFont(font1);

        horizontalLayout_3->addWidget(pushButtonCalc);


        verticalLayout->addLayout(horizontalLayout_3);

        CalculatorClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(CalculatorClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 700, 23));
        CalculatorClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(CalculatorClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        CalculatorClass->addToolBar(Qt::TopToolBarArea, mainToolBar);

        retranslateUi(CalculatorClass);

        QMetaObject::connectSlotsByName(CalculatorClass);
    } // setupUi

    void retranslateUi(QMainWindow *CalculatorClass)
    {
        CalculatorClass->setWindowTitle(QCoreApplication::translate("CalculatorClass", "Calculator", nullptr));
        lineEditLeft->setText(QString());
        comboBox->setItemText(0, QCoreApplication::translate("CalculatorClass", "+", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("CalculatorClass", "-", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("CalculatorClass", "*", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("CalculatorClass", "/", nullptr));

        lineEditRight->setText(QString());
        labelEqu->setText(QCoreApplication::translate("CalculatorClass", "=", nullptr));
        lineEditAns->setText(QString());
        pushButtonClear->setText(QCoreApplication::translate("CalculatorClass", "\346\270\205\351\231\244", nullptr));
        pushButtonCalc->setText(QCoreApplication::translate("CalculatorClass", "\350\256\241\347\256\227", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CalculatorClass: public Ui_CalculatorClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATOR_H
