/********************************************************************************
** Form generated from reading UI file 'editcourse.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITCOURSE_H
#define UI_EDITCOURSE_H

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

class Ui_EditCourse
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QComboBox *comboBox_Course;
    QSpacerItem *horizontalSpacer_2;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_Name;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *lineEdit_Code;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLineEdit *lineEdit_LecHall;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QLineEdit *lineEdit_Time;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_6;
    QComboBox *comboBox_Professors;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_7;
    QComboBox *comboBox_Students;
    QPushButton *pushButton_Save;
    QPushButton *pushButton_Mainmenu;

    void setupUi(QDialog *EditCourse)
    {
        if (EditCourse->objectName().isEmpty())
            EditCourse->setObjectName("EditCourse");
        EditCourse->resize(400, 435);
        verticalLayout = new QVBoxLayout(EditCourse);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label = new QLabel(EditCourse);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        comboBox_Course = new QComboBox(EditCourse);
        comboBox_Course->setObjectName("comboBox_Course");

        horizontalLayout->addWidget(comboBox_Course);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);

        groupBox = new QGroupBox(EditCourse);
        groupBox->setObjectName("groupBox");
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName("verticalLayout_2");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");

        horizontalLayout_2->addWidget(label_2);

        lineEdit_Name = new QLineEdit(groupBox);
        lineEdit_Name->setObjectName("lineEdit_Name");

        horizontalLayout_2->addWidget(lineEdit_Name);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");

        horizontalLayout_3->addWidget(label_3);

        lineEdit_Code = new QLineEdit(groupBox);
        lineEdit_Code->setObjectName("lineEdit_Code");

        horizontalLayout_3->addWidget(lineEdit_Code);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_4 = new QLabel(groupBox);
        label_4->setObjectName("label_4");

        horizontalLayout_4->addWidget(label_4);

        lineEdit_LecHall = new QLineEdit(groupBox);
        lineEdit_LecHall->setObjectName("lineEdit_LecHall");

        horizontalLayout_4->addWidget(lineEdit_LecHall);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_5 = new QLabel(groupBox);
        label_5->setObjectName("label_5");

        horizontalLayout_5->addWidget(label_5);

        lineEdit_Time = new QLineEdit(groupBox);
        lineEdit_Time->setObjectName("lineEdit_Time");

        horizontalLayout_5->addWidget(lineEdit_Time);


        verticalLayout_2->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        label_6 = new QLabel(groupBox);
        label_6->setObjectName("label_6");

        horizontalLayout_6->addWidget(label_6);

        comboBox_Professors = new QComboBox(groupBox);
        comboBox_Professors->setObjectName("comboBox_Professors");

        horizontalLayout_6->addWidget(comboBox_Professors);


        verticalLayout_2->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        label_7 = new QLabel(groupBox);
        label_7->setObjectName("label_7");

        horizontalLayout_7->addWidget(label_7);

        comboBox_Students = new QComboBox(groupBox);
        comboBox_Students->setObjectName("comboBox_Students");

        horizontalLayout_7->addWidget(comboBox_Students);


        verticalLayout_2->addLayout(horizontalLayout_7);


        verticalLayout->addWidget(groupBox);

        pushButton_Save = new QPushButton(EditCourse);
        pushButton_Save->setObjectName("pushButton_Save");

        verticalLayout->addWidget(pushButton_Save);

        pushButton_Mainmenu = new QPushButton(EditCourse);
        pushButton_Mainmenu->setObjectName("pushButton_Mainmenu");

        verticalLayout->addWidget(pushButton_Mainmenu);


        retranslateUi(EditCourse);

        QMetaObject::connectSlotsByName(EditCourse);
    } // setupUi

    void retranslateUi(QDialog *EditCourse)
    {
        EditCourse->setWindowTitle(QCoreApplication::translate("EditCourse", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("EditCourse", "Choose course", nullptr));
        groupBox->setTitle(QString());
        label_2->setText(QCoreApplication::translate("EditCourse", "Name", nullptr));
        lineEdit_Name->setText(QString());
        label_3->setText(QCoreApplication::translate("EditCourse", "Code", nullptr));
        lineEdit_Code->setText(QString());
        label_4->setText(QCoreApplication::translate("EditCourse", "LecHall", nullptr));
        lineEdit_LecHall->setText(QString());
        label_5->setText(QCoreApplication::translate("EditCourse", "Time", nullptr));
        lineEdit_Time->setText(QString());
        label_6->setText(QCoreApplication::translate("EditCourse", "Professors", nullptr));
        label_7->setText(QCoreApplication::translate("EditCourse", "Students", nullptr));
        pushButton_Save->setText(QCoreApplication::translate("EditCourse", "Save changes", nullptr));
        pushButton_Mainmenu->setText(QCoreApplication::translate("EditCourse", "Main menu", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EditCourse: public Ui_EditCourse {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITCOURSE_H
