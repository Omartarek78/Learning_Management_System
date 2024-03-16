/********************************************************************************
** Form generated from reading UI file 'editstudent.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITSTUDENT_H
#define UI_EDITSTUDENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_EditStudent
{
public:
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label;
    QComboBox *comboBoxStudent;
    QSpacerItem *horizontalSpacer_3;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QPushButton *pushButton;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *lineEditFirstName;
    QLineEdit *lineEditLastName;
    QLineEdit *lineEditAge;
    QLineEdit *lineEditMobile;
    QLineEdit *lineEditEmail;
    QComboBox *comboBoxCurrentCourses;
    QLineEdit *lineEditScore;
    QLineEdit *lineEditGrade;
    QComboBox *comboBoxAddCourses;
    QComboBox *comboBoxRemoveCourses;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButtonSave;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonRemove;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *pushButtonMainMenu;

    void setupUi(QDialog *EditStudent)
    {
        if (EditStudent->objectName().isEmpty())
            EditStudent->setObjectName("EditStudent");
        EditStudent->resize(603, 540);
        verticalLayout_4 = new QVBoxLayout(EditStudent);
        verticalLayout_4->setObjectName("verticalLayout_4");
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        label = new QLabel(EditStudent);
        label->setObjectName("label");

        horizontalLayout_3->addWidget(label);

        comboBoxStudent = new QComboBox(EditStudent);
        comboBoxStudent->setObjectName("comboBoxStudent");
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(comboBoxStudent->sizePolicy().hasHeightForWidth());
        comboBoxStudent->setSizePolicy(sizePolicy);

        horizontalLayout_3->addWidget(comboBoxStudent);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);


        verticalLayout_4->addLayout(horizontalLayout_3);

        groupBox = new QGroupBox(EditStudent);
        groupBox->setObjectName("groupBox");
        verticalLayout_3 = new QVBoxLayout(groupBox);
        verticalLayout_3->setObjectName("verticalLayout_3");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");

        verticalLayout->addWidget(label_3);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName("label_4");

        verticalLayout->addWidget(label_4);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName("label_5");

        verticalLayout->addWidget(label_5);

        label_6 = new QLabel(groupBox);
        label_6->setObjectName("label_6");

        verticalLayout->addWidget(label_6);

        label_7 = new QLabel(groupBox);
        label_7->setObjectName("label_7");

        verticalLayout->addWidget(label_7);

        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName("pushButton");

        verticalLayout->addWidget(pushButton);

        label_8 = new QLabel(groupBox);
        label_8->setObjectName("label_8");

        verticalLayout->addWidget(label_8);

        label_9 = new QLabel(groupBox);
        label_9->setObjectName("label_9");

        verticalLayout->addWidget(label_9);

        label_10 = new QLabel(groupBox);
        label_10->setObjectName("label_10");

        verticalLayout->addWidget(label_10);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        lineEditFirstName = new QLineEdit(groupBox);
        lineEditFirstName->setObjectName("lineEditFirstName");

        verticalLayout_2->addWidget(lineEditFirstName);

        lineEditLastName = new QLineEdit(groupBox);
        lineEditLastName->setObjectName("lineEditLastName");

        verticalLayout_2->addWidget(lineEditLastName);

        lineEditAge = new QLineEdit(groupBox);
        lineEditAge->setObjectName("lineEditAge");

        verticalLayout_2->addWidget(lineEditAge);

        lineEditMobile = new QLineEdit(groupBox);
        lineEditMobile->setObjectName("lineEditMobile");

        verticalLayout_2->addWidget(lineEditMobile);

        lineEditEmail = new QLineEdit(groupBox);
        lineEditEmail->setObjectName("lineEditEmail");

        verticalLayout_2->addWidget(lineEditEmail);

        comboBoxCurrentCourses = new QComboBox(groupBox);
        comboBoxCurrentCourses->setObjectName("comboBoxCurrentCourses");

        verticalLayout_2->addWidget(comboBoxCurrentCourses);

        lineEditScore = new QLineEdit(groupBox);
        lineEditScore->setObjectName("lineEditScore");

        verticalLayout_2->addWidget(lineEditScore);

        lineEditGrade = new QLineEdit(groupBox);
        lineEditGrade->setObjectName("lineEditGrade");

        verticalLayout_2->addWidget(lineEditGrade);

        comboBoxAddCourses = new QComboBox(groupBox);
        comboBoxAddCourses->setObjectName("comboBoxAddCourses");

        verticalLayout_2->addWidget(comboBoxAddCourses);

        comboBoxRemoveCourses = new QComboBox(groupBox);
        comboBoxRemoveCourses->setObjectName("comboBoxRemoveCourses");

        verticalLayout_2->addWidget(comboBoxRemoveCourses);


        horizontalLayout->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        pushButtonSave = new QPushButton(groupBox);
        pushButtonSave->setObjectName("pushButtonSave");

        horizontalLayout_2->addWidget(pushButtonSave);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        pushButtonRemove = new QPushButton(groupBox);
        pushButtonRemove->setObjectName("pushButtonRemove");

        horizontalLayout_2->addWidget(pushButtonRemove);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        pushButtonMainMenu = new QPushButton(groupBox);
        pushButtonMainMenu->setObjectName("pushButtonMainMenu");

        horizontalLayout_2->addWidget(pushButtonMainMenu);


        verticalLayout_3->addLayout(horizontalLayout_2);


        verticalLayout_4->addWidget(groupBox);


        retranslateUi(EditStudent);

        QMetaObject::connectSlotsByName(EditStudent);
    } // setupUi

    void retranslateUi(QDialog *EditStudent)
    {
        EditStudent->setWindowTitle(QCoreApplication::translate("EditStudent", "Edit/Display Student", nullptr));
        label->setText(QCoreApplication::translate("EditStudent", "Choose Student", nullptr));
        groupBox->setTitle(QCoreApplication::translate("EditStudent", "Student Info", nullptr));
        label_2->setText(QCoreApplication::translate("EditStudent", "First Name", nullptr));
        label_3->setText(QCoreApplication::translate("EditStudent", "Last Name", nullptr));
        label_4->setText(QCoreApplication::translate("EditStudent", "Age", nullptr));
        label_5->setText(QCoreApplication::translate("EditStudent", "Mobile", nullptr));
        label_6->setText(QCoreApplication::translate("EditStudent", "Email", nullptr));
        label_7->setText(QCoreApplication::translate("EditStudent", "Current Courses", nullptr));
        pushButton->setText(QCoreApplication::translate("EditStudent", "View Course Score", nullptr));
        label_8->setText(QCoreApplication::translate("EditStudent", "Grade", nullptr));
        label_9->setText(QCoreApplication::translate("EditStudent", "Add Course", nullptr));
        label_10->setText(QCoreApplication::translate("EditStudent", "Remove Course", nullptr));
        pushButtonSave->setText(QCoreApplication::translate("EditStudent", "Save Changes", nullptr));
        pushButtonRemove->setText(QCoreApplication::translate("EditStudent", "Remove", nullptr));
        pushButtonMainMenu->setText(QCoreApplication::translate("EditStudent", "Main Menu", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EditStudent: public Ui_EditStudent {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITSTUDENT_H
