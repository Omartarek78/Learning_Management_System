/********************************************************************************
** Form generated from reading UI file 'admin.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMIN_H
#define UI_ADMIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Admin
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *labelName;
    QLabel *labelPassword;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *lineEditName;
    QLineEdit *lineEditPassword;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Admin)
    {
        if (Admin->objectName().isEmpty())
            Admin->setObjectName("Admin");
        Admin->resize(601, 319);
        centralwidget = new QWidget(Admin);
        centralwidget->setObjectName("centralwidget");
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName("horizontalLayout");
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        verticalLayout_3 = new QVBoxLayout(groupBox);
        verticalLayout_3->setObjectName("verticalLayout_3");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        labelName = new QLabel(groupBox);
        labelName->setObjectName("labelName");

        verticalLayout->addWidget(labelName);

        labelPassword = new QLabel(groupBox);
        labelPassword->setObjectName("labelPassword");

        verticalLayout->addWidget(labelPassword);


        horizontalLayout_2->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        lineEditName = new QLineEdit(groupBox);
        lineEditName->setObjectName("lineEditName");

        verticalLayout_2->addWidget(lineEditName);

        lineEditPassword = new QLineEdit(groupBox);
        lineEditPassword->setObjectName("lineEditPassword");
        lineEditPassword->setEchoMode(QLineEdit::Password);

        verticalLayout_2->addWidget(lineEditPassword);


        horizontalLayout_2->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout_2);

        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName("pushButton");
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);

        verticalLayout_3->addWidget(pushButton, 0, Qt::AlignHCenter);


        horizontalLayout->addWidget(groupBox);

        Admin->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Admin);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 601, 26));
        Admin->setMenuBar(menubar);
        statusbar = new QStatusBar(Admin);
        statusbar->setObjectName("statusbar");
        Admin->setStatusBar(statusbar);

        retranslateUi(Admin);

        QMetaObject::connectSlotsByName(Admin);
    } // setupUi

    void retranslateUi(QMainWindow *Admin)
    {
        Admin->setWindowTitle(QCoreApplication::translate("Admin", "Welcome", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Admin", "Login", nullptr));
        labelName->setText(QCoreApplication::translate("Admin", "User Name", nullptr));
        labelPassword->setText(QCoreApplication::translate("Admin", "Password", nullptr));
        pushButton->setText(QCoreApplication::translate("Admin", "Login", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Admin: public Ui_Admin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMIN_H
