#ifndef CREATESTUDENT_H
#define CREATESTUDENT_H
#include "Database.h"
#include <QDialog>
#include<QListWidgetItem>
#include<QMessageBox>

namespace Ui {
class CreateStudent;
}

class CreateStudent : public QDialog
{
    Q_OBJECT

public:
    explicit CreateStudent(QWidget *parent = nullptr);
    void pushToVector(int row,Student &s);
    ~CreateStudent();

private slots:
    void on_pushButton_save_clicked();

//    void on_listWidget_itemClicked(QListWidgetItem *item);



//    void on_listWidget_itemClicked(QListWidgetItem *item);

    void on_listWidget_currentRowChanged(int currentRow);

//   void on_listWidget_clicked(const QModelIndex &index);

//   void on_comboBox_currentIndexChanged(int index);

    void on_pushButton_clicked();

private:
    Ui::CreateStudent *ui;
};

#endif // CREATESTUDENT_H
