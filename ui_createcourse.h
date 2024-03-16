/********************************************************************************
** Form generated from reading UI file 'createcourse.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATECOURSE_H
#define UI_CREATECOURSE_H

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

class Ui_CreateCourse
{
public:
    QVBoxLayout *verticalLayout_4;
    QLabel *label_18;
    QHBoxLayout *horizontalLayout_22;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_16;
    QVBoxLayout *verticalLayout_3;
    QLineEdit *lineEdit_name_5;
    QLineEdit *lineEdit_code_4;
    QLineEdit *lineEdit_lecture_5;
    QComboBox *comboBox_times;
    QComboBox *comboBox_prof_4;
    QComboBox *comboBox_stud_4;
    QPushButton *pushButton_create;

    void setupUi(QDialog *CreateCourse)
    {
        if (CreateCourse->objectName().isEmpty())
            CreateCourse->setObjectName("CreateCourse");
        CreateCourse->resize(400, 281);
        verticalLayout_4 = new QVBoxLayout(CreateCourse);
        verticalLayout_4->setObjectName("verticalLayout_4");
        label_18 = new QLabel(CreateCourse);
        label_18->setObjectName("label_18");
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_18->sizePolicy().hasHeightForWidth());
        label_18->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(18);
        font.setBold(true);
        label_18->setFont(font);

        verticalLayout_4->addWidget(label_18);

        horizontalLayout_22 = new QHBoxLayout();
        horizontalLayout_22->setObjectName("horizontalLayout_22");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_11 = new QLabel(CreateCourse);
        label_11->setObjectName("label_11");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial")});
        font1.setPointSize(16);
        label_11->setFont(font1);

        verticalLayout_2->addWidget(label_11);

        label_12 = new QLabel(CreateCourse);
        label_12->setObjectName("label_12");
        label_12->setFont(font1);

        verticalLayout_2->addWidget(label_12);

        label_13 = new QLabel(CreateCourse);
        label_13->setObjectName("label_13");
        label_13->setFont(font1);

        verticalLayout_2->addWidget(label_13);

        label_14 = new QLabel(CreateCourse);
        label_14->setObjectName("label_14");
        label_14->setFont(font1);

        verticalLayout_2->addWidget(label_14);

        label_15 = new QLabel(CreateCourse);
        label_15->setObjectName("label_15");
        label_15->setFont(font1);

        verticalLayout_2->addWidget(label_15);

        label_16 = new QLabel(CreateCourse);
        label_16->setObjectName("label_16");
        label_16->setFont(font1);

        verticalLayout_2->addWidget(label_16);


        horizontalLayout_22->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        lineEdit_name_5 = new QLineEdit(CreateCourse);
        lineEdit_name_5->setObjectName("lineEdit_name_5");

        verticalLayout_3->addWidget(lineEdit_name_5);

        lineEdit_code_4 = new QLineEdit(CreateCourse);
        lineEdit_code_4->setObjectName("lineEdit_code_4");

        verticalLayout_3->addWidget(lineEdit_code_4);

        lineEdit_lecture_5 = new QLineEdit(CreateCourse);
        lineEdit_lecture_5->setObjectName("lineEdit_lecture_5");

        verticalLayout_3->addWidget(lineEdit_lecture_5);

        comboBox_times = new QComboBox(CreateCourse);
        comboBox_times->addItem(QString());
        comboBox_times->addItem(QString());
        comboBox_times->addItem(QString());
        comboBox_times->addItem(QString());
        comboBox_times->addItem(QString());
        comboBox_times->setObjectName("comboBox_times");

        verticalLayout_3->addWidget(comboBox_times);

        comboBox_prof_4 = new QComboBox(CreateCourse);
        comboBox_prof_4->setObjectName("comboBox_prof_4");

        verticalLayout_3->addWidget(comboBox_prof_4);

        comboBox_stud_4 = new QComboBox(CreateCourse);
        comboBox_stud_4->setObjectName("comboBox_stud_4");

        verticalLayout_3->addWidget(comboBox_stud_4);


        horizontalLayout_22->addLayout(verticalLayout_3);


        verticalLayout_4->addLayout(horizontalLayout_22);

        pushButton_create = new QPushButton(CreateCourse);
        pushButton_create->setObjectName("pushButton_create");
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton_create->sizePolicy().hasHeightForWidth());
        pushButton_create->setSizePolicy(sizePolicy1);
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Arial")});
        font2.setPointSize(16);
        font2.setBold(true);
        pushButton_create->setFont(font2);

        verticalLayout_4->addWidget(pushButton_create, 0, Qt::AlignHCenter);


        retranslateUi(CreateCourse);

        QMetaObject::connectSlotsByName(CreateCourse);
    } // setupUi

    void retranslateUi(QDialog *CreateCourse)
    {
        CreateCourse->setWindowTitle(QCoreApplication::translate("CreateCourse", "Dialog", nullptr));
        label_18->setText(QCoreApplication::translate("CreateCourse", "Create Course", nullptr));
        label_11->setText(QCoreApplication::translate("CreateCourse", "Name", nullptr));
        label_12->setText(QCoreApplication::translate("CreateCourse", "Code      ", nullptr));
        label_13->setText(QCoreApplication::translate("CreateCourse", "Lecture Hall", nullptr));
        label_14->setText(QCoreApplication::translate("CreateCourse", "Time", nullptr));
        label_15->setText(QCoreApplication::translate("CreateCourse", "Professor", nullptr));
        label_16->setText(QCoreApplication::translate("CreateCourse", "Student", nullptr));
        comboBox_times->setItemText(0, QCoreApplication::translate("CreateCourse", "8 AM - 10 AM", nullptr));
        comboBox_times->setItemText(1, QCoreApplication::translate("CreateCourse", "10 AM - 12 PM", nullptr));
        comboBox_times->setItemText(2, QCoreApplication::translate("CreateCourse", "12 PM - 2 PM", nullptr));
        comboBox_times->setItemText(3, QCoreApplication::translate("CreateCourse", "2 PM - 4 PM", nullptr));
        comboBox_times->setItemText(4, QCoreApplication::translate("CreateCourse", "4 PM - 6 PM", nullptr));

#if QT_CONFIG(accessibility)
        pushButton_create->setAccessibleName(QString());
#endif // QT_CONFIG(accessibility)
        pushButton_create->setText(QCoreApplication::translate("CreateCourse", "Create", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CreateCourse: public Ui_CreateCourse {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATECOURSE_H
