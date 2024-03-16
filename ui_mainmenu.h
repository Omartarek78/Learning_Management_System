/********************************************************************************
** Form generated from reading UI file 'mainmenu.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINMENU_H
#define UI_MAINMENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_MainMenu
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QComboBox *comboBox;
    QPushButton *pushButton_1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QComboBox *comboBox_details;
    QPushButton *pushButton_2;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_2;
    QComboBox *comboBoxCourse;
    QPushButton *pushButtonExport;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QDialog *MainMenu)
    {
        if (MainMenu->objectName().isEmpty())
            MainMenu->setObjectName("MainMenu");
        MainMenu->resize(987, 409);
        verticalLayout_2 = new QVBoxLayout(MainMenu);
        verticalLayout_2->setObjectName("verticalLayout_2");
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label = new QLabel(MainMenu);
        label->setObjectName("label");
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(26);
        font.setBold(true);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8(""));
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(label);


        verticalLayout_2->addLayout(horizontalLayout_3);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_2 = new QLabel(MainMenu);
        label_2->setObjectName("label_2");
        QFont font1;
        font1.setPointSize(16);
        label_2->setFont(font1);

        horizontalLayout->addWidget(label_2);

        comboBox = new QComboBox(MainMenu);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(comboBox->sizePolicy().hasHeightForWidth());
        comboBox->setSizePolicy(sizePolicy1);
        comboBox->setEditable(false);

        horizontalLayout->addWidget(comboBox);

        pushButton_1 = new QPushButton(MainMenu);
        pushButton_1->setObjectName("pushButton_1");
        sizePolicy1.setHeightForWidth(pushButton_1->sizePolicy().hasHeightForWidth());
        pushButton_1->setSizePolicy(sizePolicy1);
        pushButton_1->setStyleSheet(QString::fromUtf8("color:blue;"));
        pushButton_1->setAutoDefault(false);

        horizontalLayout->addWidget(pushButton_1);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_3 = new QLabel(MainMenu);
        label_3->setObjectName("label_3");
        label_3->setFont(font1);

        horizontalLayout_2->addWidget(label_3);

        comboBox_details = new QComboBox(MainMenu);
        comboBox_details->addItem(QString());
        comboBox_details->addItem(QString());
        comboBox_details->addItem(QString());
        comboBox_details->setObjectName("comboBox_details");
        sizePolicy1.setHeightForWidth(comboBox_details->sizePolicy().hasHeightForWidth());
        comboBox_details->setSizePolicy(sizePolicy1);

        horizontalLayout_2->addWidget(comboBox_details);

        pushButton_2 = new QPushButton(MainMenu);
        pushButton_2->setObjectName("pushButton_2");
        sizePolicy1.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy1);
        QFont font2;
        font2.setBold(false);
        font2.setUnderline(false);
        pushButton_2->setFont(font2);
        pushButton_2->setStyleSheet(QString::fromUtf8("color:blue;"));
        pushButton_2->setAutoDefault(false);

        horizontalLayout_2->addWidget(pushButton_2);


        verticalLayout->addLayout(horizontalLayout_2);


        verticalLayout_2->addLayout(verticalLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Preferred);

        verticalLayout_2->addItem(verticalSpacer);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        comboBoxCourse = new QComboBox(MainMenu);
        comboBoxCourse->setObjectName("comboBoxCourse");
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(comboBoxCourse->sizePolicy().hasHeightForWidth());
        comboBoxCourse->setSizePolicy(sizePolicy2);

        horizontalLayout_4->addWidget(comboBoxCourse);

        pushButtonExport = new QPushButton(MainMenu);
        pushButtonExport->setObjectName("pushButtonExport");
        sizePolicy1.setHeightForWidth(pushButtonExport->sizePolicy().hasHeightForWidth());
        pushButtonExport->setSizePolicy(sizePolicy1);

        horizontalLayout_4->addWidget(pushButtonExport);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);


        verticalLayout_2->addLayout(horizontalLayout_4);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Preferred);

        verticalLayout_2->addItem(verticalSpacer_2);


        retranslateUi(MainMenu);

        pushButton_2->setDefault(false);


        QMetaObject::connectSlotsByName(MainMenu);
    } // setupUi

    void retranslateUi(QDialog *MainMenu)
    {
        MainMenu->setWindowTitle(QCoreApplication::translate("MainMenu", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("MainMenu", "Welcome Admin to the E-Learning Platform", nullptr));
        label_2->setText(QCoreApplication::translate("MainMenu", "Choose from the following box if you want to create a:", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("MainMenu", "New Student", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("MainMenu", "New Professor", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("MainMenu", "New Course", nullptr));

        pushButton_1->setText(QCoreApplication::translate("MainMenu", "Confirm", nullptr));
        label_3->setText(QCoreApplication::translate("MainMenu", "Choose from the following box if you want to edit / display:", nullptr));
        comboBox_details->setItemText(0, QCoreApplication::translate("MainMenu", "Student Details", nullptr));
        comboBox_details->setItemText(1, QCoreApplication::translate("MainMenu", "Professor Details", nullptr));
        comboBox_details->setItemText(2, QCoreApplication::translate("MainMenu", "Course Details", nullptr));

        pushButton_2->setText(QCoreApplication::translate("MainMenu", "Confirm", nullptr));
        pushButtonExport->setText(QCoreApplication::translate("MainMenu", "Export to CSV", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainMenu: public Ui_MainMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINMENU_H
