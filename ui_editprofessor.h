/********************************************************************************
** Form generated from reading UI file 'editprofessor.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITPROFESSOR_H
#define UI_EDITPROFESSOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_EditProfessor
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label;
    QComboBox *comboBox_Profs;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_10;
    QLineEdit *lineEdit_first;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_11;
    QLineEdit *lineEdit_last;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_12;
    QLineEdit *lineEdit_ttl;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_13;
    QLineEdit *lineEdit_age;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_14;
    QLineEdit *lineEdit_email;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_15;
    QLineEdit *lineEdit_mobile;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_17;
    QComboBox *comboBox_courses;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_18;
    QComboBox *comboBox_addcrs;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_19;
    QComboBox *comboBox_remcrs;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *save;
    QPushButton *delete_2;
    QPushButton *delete_prof;
    QPushButton *ok;

    void setupUi(QDialog *EditProfessor)
    {
        if (EditProfessor->objectName().isEmpty())
            EditProfessor->setObjectName("EditProfessor");
        EditProfessor->resize(821, 540);
        verticalLayout_2 = new QVBoxLayout(EditProfessor);
        verticalLayout_2->setObjectName("verticalLayout_2");
        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName("horizontalLayout_12");
        label = new QLabel(EditProfessor);
        label->setObjectName("label");
        QFont font;
        font.setPointSize(27);
        label->setFont(font);

        horizontalLayout_12->addWidget(label);

        comboBox_Profs = new QComboBox(EditProfessor);
        comboBox_Profs->setObjectName("comboBox_Profs");

        horizontalLayout_12->addWidget(comboBox_Profs);


        verticalLayout_2->addLayout(horizontalLayout_12);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName("horizontalLayout_11");
        label_10 = new QLabel(EditProfessor);
        label_10->setObjectName("label_10");
        QFont font1;
        font1.setPointSize(20);
        label_10->setFont(font1);

        horizontalLayout_11->addWidget(label_10);

        lineEdit_first = new QLineEdit(EditProfessor);
        lineEdit_first->setObjectName("lineEdit_first");
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lineEdit_first->sizePolicy().hasHeightForWidth());
        lineEdit_first->setSizePolicy(sizePolicy);

        horizontalLayout_11->addWidget(lineEdit_first);


        verticalLayout->addLayout(horizontalLayout_11);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        label_11 = new QLabel(EditProfessor);
        label_11->setObjectName("label_11");
        label_11->setFont(font1);

        horizontalLayout_10->addWidget(label_11);

        lineEdit_last = new QLineEdit(EditProfessor);
        lineEdit_last->setObjectName("lineEdit_last");
        sizePolicy.setHeightForWidth(lineEdit_last->sizePolicy().hasHeightForWidth());
        lineEdit_last->setSizePolicy(sizePolicy);

        horizontalLayout_10->addWidget(lineEdit_last);


        verticalLayout->addLayout(horizontalLayout_10);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        label_12 = new QLabel(EditProfessor);
        label_12->setObjectName("label_12");
        label_12->setFont(font1);

        horizontalLayout_9->addWidget(label_12);

        lineEdit_ttl = new QLineEdit(EditProfessor);
        lineEdit_ttl->setObjectName("lineEdit_ttl");
        sizePolicy.setHeightForWidth(lineEdit_ttl->sizePolicy().hasHeightForWidth());
        lineEdit_ttl->setSizePolicy(sizePolicy);

        horizontalLayout_9->addWidget(lineEdit_ttl);


        verticalLayout->addLayout(horizontalLayout_9);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        label_13 = new QLabel(EditProfessor);
        label_13->setObjectName("label_13");
        label_13->setFont(font1);

        horizontalLayout_8->addWidget(label_13);

        lineEdit_age = new QLineEdit(EditProfessor);
        lineEdit_age->setObjectName("lineEdit_age");
        sizePolicy.setHeightForWidth(lineEdit_age->sizePolicy().hasHeightForWidth());
        lineEdit_age->setSizePolicy(sizePolicy);

        horizontalLayout_8->addWidget(lineEdit_age);


        verticalLayout->addLayout(horizontalLayout_8);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        label_14 = new QLabel(EditProfessor);
        label_14->setObjectName("label_14");
        label_14->setFont(font1);

        horizontalLayout_7->addWidget(label_14);

        lineEdit_email = new QLineEdit(EditProfessor);
        lineEdit_email->setObjectName("lineEdit_email");
        sizePolicy.setHeightForWidth(lineEdit_email->sizePolicy().hasHeightForWidth());
        lineEdit_email->setSizePolicy(sizePolicy);

        horizontalLayout_7->addWidget(lineEdit_email);


        verticalLayout->addLayout(horizontalLayout_7);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        label_15 = new QLabel(EditProfessor);
        label_15->setObjectName("label_15");
        label_15->setFont(font1);

        horizontalLayout_6->addWidget(label_15);

        lineEdit_mobile = new QLineEdit(EditProfessor);
        lineEdit_mobile->setObjectName("lineEdit_mobile");
        sizePolicy.setHeightForWidth(lineEdit_mobile->sizePolicy().hasHeightForWidth());
        lineEdit_mobile->setSizePolicy(sizePolicy);

        horizontalLayout_6->addWidget(lineEdit_mobile);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_17 = new QLabel(EditProfessor);
        label_17->setObjectName("label_17");
        label_17->setFont(font1);

        horizontalLayout_5->addWidget(label_17);

        comboBox_courses = new QComboBox(EditProfessor);
        comboBox_courses->setObjectName("comboBox_courses");

        horizontalLayout_5->addWidget(comboBox_courses);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_18 = new QLabel(EditProfessor);
        label_18->setObjectName("label_18");
        label_18->setFont(font1);

        horizontalLayout_4->addWidget(label_18);

        comboBox_addcrs = new QComboBox(EditProfessor);
        comboBox_addcrs->setObjectName("comboBox_addcrs");

        horizontalLayout_4->addWidget(comboBox_addcrs);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_19 = new QLabel(EditProfessor);
        label_19->setObjectName("label_19");
        label_19->setFont(font1);

        horizontalLayout_2->addWidget(label_19);

        comboBox_remcrs = new QComboBox(EditProfessor);
        comboBox_remcrs->setObjectName("comboBox_remcrs");

        horizontalLayout_2->addWidget(comboBox_remcrs);


        verticalLayout->addLayout(horizontalLayout_2);


        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        save = new QPushButton(EditProfessor);
        save->setObjectName("save");
        save->setAutoDefault(true);

        horizontalLayout_3->addWidget(save);

        delete_2 = new QPushButton(EditProfessor);
        delete_2->setObjectName("delete_2");
        delete_2->setAutoDefault(false);

        horizontalLayout_3->addWidget(delete_2);

        delete_prof = new QPushButton(EditProfessor);
        delete_prof->setObjectName("delete_prof");
        delete_prof->setAutoDefault(false);

        horizontalLayout_3->addWidget(delete_prof);

        ok = new QPushButton(EditProfessor);
        ok->setObjectName("ok");
        ok->setAutoDefault(false);

        horizontalLayout_3->addWidget(ok);


        verticalLayout_2->addLayout(horizontalLayout_3);


        retranslateUi(EditProfessor);

        QMetaObject::connectSlotsByName(EditProfessor);
    } // setupUi

    void retranslateUi(QDialog *EditProfessor)
    {
        EditProfessor->setWindowTitle(QCoreApplication::translate("EditProfessor", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("EditProfessor", "Choose a Professor to see details:", nullptr));
        label_10->setText(QCoreApplication::translate("EditProfessor", "First Name:", nullptr));
        label_11->setText(QCoreApplication::translate("EditProfessor", "Last Name:", nullptr));
        label_12->setText(QCoreApplication::translate("EditProfessor", "Title:", nullptr));
        label_13->setText(QCoreApplication::translate("EditProfessor", "Age:", nullptr));
        label_14->setText(QCoreApplication::translate("EditProfessor", "Email:", nullptr));
        label_15->setText(QCoreApplication::translate("EditProfessor", "Mobile:", nullptr));
        label_17->setText(QCoreApplication::translate("EditProfessor", "Courses Teaching:", nullptr));
        label_18->setText(QCoreApplication::translate("EditProfessor", "Add a Course:", nullptr));
        label_19->setText(QCoreApplication::translate("EditProfessor", "Remove a Course:", nullptr));
        save->setText(QCoreApplication::translate("EditProfessor", "Save Changes", nullptr));
        delete_2->setText(QCoreApplication::translate("EditProfessor", "Delete Course", nullptr));
        delete_prof->setText(QCoreApplication::translate("EditProfessor", "Delete Professor", nullptr));
        ok->setText(QCoreApplication::translate("EditProfessor", "Main Menu", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EditProfessor: public Ui_EditProfessor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITPROFESSOR_H
