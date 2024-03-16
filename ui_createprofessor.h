/********************************************************************************
** Form generated from reading UI file 'createprofessor.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATEPROFESSOR_H
#define UI_CREATEPROFESSOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_CreateProfessor
{
public:
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *lineEditFirstName;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QLineEdit *lineEditLastName;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_4;
    QLineEdit *lineEditMobile;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QSpinBox *spinBoxAge;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_5;
    QLineEdit *lineEditEmail;
    QHBoxLayout *horizontalLayout;
    QLabel *label_6;
    QLineEdit *lineEditTitle;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_7;
    QListWidget *listWidget;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *pushButton_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;

    void setupUi(QDialog *CreateProfessor)
    {
        if (CreateProfessor->objectName().isEmpty())
            CreateProfessor->setObjectName("CreateProfessor");
        CreateProfessor->resize(457, 336);
        verticalLayout_5 = new QVBoxLayout(CreateProfessor);
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label = new QLabel(CreateProfessor);
        label->setObjectName("label");

        horizontalLayout_2->addWidget(label);

        lineEditFirstName = new QLineEdit(CreateProfessor);
        lineEditFirstName->setObjectName("lineEditFirstName");

        horizontalLayout_2->addWidget(lineEditFirstName);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_2 = new QLabel(CreateProfessor);
        label_2->setObjectName("label_2");

        horizontalLayout_3->addWidget(label_2);

        lineEditLastName = new QLineEdit(CreateProfessor);
        lineEditLastName->setObjectName("lineEditLastName");

        horizontalLayout_3->addWidget(lineEditLastName);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_4 = new QLabel(CreateProfessor);
        label_4->setObjectName("label_4");

        horizontalLayout_5->addWidget(label_4);

        lineEditMobile = new QLineEdit(CreateProfessor);
        lineEditMobile->setObjectName("lineEditMobile");

        horizontalLayout_5->addWidget(lineEditMobile);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_3 = new QLabel(CreateProfessor);
        label_3->setObjectName("label_3");

        horizontalLayout_4->addWidget(label_3);

        spinBoxAge = new QSpinBox(CreateProfessor);
        spinBoxAge->setObjectName("spinBoxAge");
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(spinBoxAge->sizePolicy().hasHeightForWidth());
        spinBoxAge->setSizePolicy(sizePolicy);

        horizontalLayout_4->addWidget(spinBoxAge);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        label_5 = new QLabel(CreateProfessor);
        label_5->setObjectName("label_5");

        horizontalLayout_6->addWidget(label_5);

        lineEditEmail = new QLineEdit(CreateProfessor);
        lineEditEmail->setObjectName("lineEditEmail");

        horizontalLayout_6->addWidget(lineEditEmail);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_6 = new QLabel(CreateProfessor);
        label_6->setObjectName("label_6");

        horizontalLayout->addWidget(label_6);

        lineEditTitle = new QLineEdit(CreateProfessor);
        lineEditTitle->setObjectName("lineEditTitle");

        horizontalLayout->addWidget(lineEditTitle);


        verticalLayout->addLayout(horizontalLayout);

        groupBox = new QGroupBox(CreateProfessor);
        groupBox->setObjectName("groupBox");
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(123);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy1);
        groupBox->setStyleSheet(QString::fromUtf8("Border: white\n"
""));
        verticalLayout_4 = new QVBoxLayout(groupBox);
        verticalLayout_4->setObjectName("verticalLayout_4");
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        label_7 = new QLabel(groupBox);
        label_7->setObjectName("label_7");

        horizontalLayout_8->addWidget(label_7);

        listWidget = new QListWidget(groupBox);
        listWidget->setObjectName("listWidget");

        horizontalLayout_8->addWidget(listWidget);


        verticalLayout_4->addLayout(horizontalLayout_8);


        verticalLayout->addWidget(groupBox);


        verticalLayout_5->addLayout(verticalLayout);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        pushButton_2 = new QPushButton(CreateProfessor);
        pushButton_2->setObjectName("pushButton_2");
        sizePolicy.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy);

        horizontalLayout_7->addWidget(pushButton_2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer);

        pushButton = new QPushButton(CreateProfessor);
        pushButton->setObjectName("pushButton");
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Maximum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy2);

        horizontalLayout_7->addWidget(pushButton);


        verticalLayout_5->addLayout(horizontalLayout_7);


        retranslateUi(CreateProfessor);

        QMetaObject::connectSlotsByName(CreateProfessor);
    } // setupUi

    void retranslateUi(QDialog *CreateProfessor)
    {
        CreateProfessor->setWindowTitle(QCoreApplication::translate("CreateProfessor", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("CreateProfessor", "First Name", nullptr));
        label_2->setText(QCoreApplication::translate("CreateProfessor", "Last Name", nullptr));
        label_4->setText(QCoreApplication::translate("CreateProfessor", "Mobile", nullptr));
        label_3->setText(QCoreApplication::translate("CreateProfessor", "Age", nullptr));
        label_5->setText(QCoreApplication::translate("CreateProfessor", "E-mail", nullptr));
        label_6->setText(QCoreApplication::translate("CreateProfessor", "Title", nullptr));
        groupBox->setTitle(QString());
        label_7->setText(QCoreApplication::translate("CreateProfessor", "Courses", nullptr));
        pushButton_2->setText(QCoreApplication::translate("CreateProfessor", "Add another course", nullptr));
        pushButton->setText(QCoreApplication::translate("CreateProfessor", "Create", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CreateProfessor: public Ui_CreateProfessor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATEPROFESSOR_H
