/********************************************************************************
** Form generated from reading UI file 'createstudent.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATESTUDENT_H
#define UI_CREATESTUDENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_CreateStudent
{
public:
    QVBoxLayout *verticalLayout_3;
    QLabel *label_5;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_fname;
    QLineEdit *lineEdit_fname_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_lname;
    QLineEdit *lineEdit_lname_3;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_age;
    QSpinBox *spinBox;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_mobile;
    QLineEdit *lineEdit_mobile_3;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_email;
    QLineEdit *lineEdit_email;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_grade;
    QLineEdit *lineEdit_grade_3;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_course;
    QListWidget *listWidget;
    QHBoxLayout *horizontalLayout_8;
    QPushButton *pushButton;
    QPushButton *pushButton_save;

    void setupUi(QDialog *CreateStudent)
    {
        if (CreateStudent->objectName().isEmpty())
            CreateStudent->setObjectName("CreateStudent");
        CreateStudent->setWindowModality(Qt::WindowModal);
        CreateStudent->setEnabled(true);
        CreateStudent->resize(563, 472);
        CreateStudent->setStyleSheet(QString::fromUtf8(""));
        verticalLayout_3 = new QVBoxLayout(CreateStudent);
        verticalLayout_3->setObjectName("verticalLayout_3");
        label_5 = new QLabel(CreateStudent);
        label_5->setObjectName("label_5");
        QFont font;
        font.setPointSize(28);
        font.setBold(true);
        label_5->setFont(font);

        verticalLayout_3->addWidget(label_5);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_fname = new QLabel(CreateStudent);
        label_fname->setObjectName("label_fname");
        label_fname->setMinimumSize(QSize(63, 27));
        label_fname->setBaseSize(QSize(0, 15));
        label_fname->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_3->addWidget(label_fname);

        lineEdit_fname_3 = new QLineEdit(CreateStudent);
        lineEdit_fname_3->setObjectName("lineEdit_fname_3");

        horizontalLayout_3->addWidget(lineEdit_fname_3);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_lname = new QLabel(CreateStudent);
        label_lname->setObjectName("label_lname");
        label_lname->setMinimumSize(QSize(63, 27));
        label_lname->setBaseSize(QSize(0, 15));
        label_lname->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_4->addWidget(label_lname);

        lineEdit_lname_3 = new QLineEdit(CreateStudent);
        lineEdit_lname_3->setObjectName("lineEdit_lname_3");

        horizontalLayout_4->addWidget(lineEdit_lname_3);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_age = new QLabel(CreateStudent);
        label_age->setObjectName("label_age");
        label_age->setMinimumSize(QSize(63, 27));
        label_age->setBaseSize(QSize(0, 15));
        label_age->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_5->addWidget(label_age);

        spinBox = new QSpinBox(CreateStudent);
        spinBox->setObjectName("spinBox");
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(spinBox->sizePolicy().hasHeightForWidth());
        spinBox->setSizePolicy(sizePolicy);

        horizontalLayout_5->addWidget(spinBox);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        label_mobile = new QLabel(CreateStudent);
        label_mobile->setObjectName("label_mobile");
        label_mobile->setMinimumSize(QSize(63, 27));
        label_mobile->setBaseSize(QSize(0, 15));
        label_mobile->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_6->addWidget(label_mobile);

        lineEdit_mobile_3 = new QLineEdit(CreateStudent);
        lineEdit_mobile_3->setObjectName("lineEdit_mobile_3");

        horizontalLayout_6->addWidget(lineEdit_mobile_3);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        label_email = new QLabel(CreateStudent);
        label_email->setObjectName("label_email");
        label_email->setMinimumSize(QSize(63, 27));
        label_email->setBaseSize(QSize(0, 15));
        label_email->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_7->addWidget(label_email);

        lineEdit_email = new QLineEdit(CreateStudent);
        lineEdit_email->setObjectName("lineEdit_email");

        horizontalLayout_7->addWidget(lineEdit_email);


        verticalLayout->addLayout(horizontalLayout_7);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_grade = new QLabel(CreateStudent);
        label_grade->setObjectName("label_grade");
        label_grade->setMinimumSize(QSize(63, 27));
        label_grade->setBaseSize(QSize(0, 15));
        label_grade->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_2->addWidget(label_grade);

        lineEdit_grade_3 = new QLineEdit(CreateStudent);
        lineEdit_grade_3->setObjectName("lineEdit_grade_3");

        horizontalLayout_2->addWidget(lineEdit_grade_3);


        verticalLayout->addLayout(horizontalLayout_2);

        groupBox = new QGroupBox(CreateStudent);
        groupBox->setObjectName("groupBox");
        groupBox->setStyleSheet(QString::fromUtf8("border : white "));
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName("verticalLayout_2");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        label_course = new QLabel(groupBox);
        label_course->setObjectName("label_course");
        label_course->setMinimumSize(QSize(63, 27));
        label_course->setBaseSize(QSize(0, 15));
        label_course->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout->addWidget(label_course);

        listWidget = new QListWidget(groupBox);
        listWidget->setObjectName("listWidget");

        horizontalLayout->addWidget(listWidget);


        verticalLayout_2->addLayout(horizontalLayout);


        verticalLayout->addWidget(groupBox);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(50);
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        pushButton = new QPushButton(CreateStudent);
        pushButton->setObjectName("pushButton");

        horizontalLayout_8->addWidget(pushButton);

        pushButton_save = new QPushButton(CreateStudent);
        pushButton_save->setObjectName("pushButton_save");
        pushButton_save->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_8->addWidget(pushButton_save);


        verticalLayout->addLayout(horizontalLayout_8);


        verticalLayout_3->addLayout(verticalLayout);


        retranslateUi(CreateStudent);

        QMetaObject::connectSlotsByName(CreateStudent);
    } // setupUi

    void retranslateUi(QDialog *CreateStudent)
    {
        CreateStudent->setWindowTitle(QCoreApplication::translate("CreateStudent", "Dialog", nullptr));
        label_5->setText(QCoreApplication::translate("CreateStudent", "Create Student ", nullptr));
        label_fname->setText(QCoreApplication::translate("CreateStudent", "First Name", nullptr));
        label_lname->setText(QCoreApplication::translate("CreateStudent", "Last Name ", nullptr));
        label_age->setText(QCoreApplication::translate("CreateStudent", "Age", nullptr));
        label_mobile->setText(QCoreApplication::translate("CreateStudent", "Mobile", nullptr));
        label_email->setText(QCoreApplication::translate("CreateStudent", "Email", nullptr));
        label_grade->setText(QCoreApplication::translate("CreateStudent", "Grade", nullptr));
        groupBox->setTitle(QString());
        label_course->setText(QCoreApplication::translate("CreateStudent", "Course", nullptr));
        pushButton->setText(QCoreApplication::translate("CreateStudent", "Add another course ", nullptr));
        pushButton_save->setText(QCoreApplication::translate("CreateStudent", "Save", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CreateStudent: public Ui_CreateStudent {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATESTUDENT_H
