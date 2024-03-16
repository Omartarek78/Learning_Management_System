#include "createstudent.h"
#include "ui_createstudent.h"
#include <vector>
#include <string>
using namespace std ;
CreateStudent::CreateStudent(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CreateStudent)

{
    ui->setupUi(this);
    for(auto c:database.Crsvector){
 ui->listWidget->addItem(QString::fromStdString(c.getName())) ;
//  ui->comboBox->addItem(QString::fromStdString(c.getName())) ;
    }
}

CreateStudent::~CreateStudent()
{
    delete ui;
}
Student s ;

void CreateStudent::on_pushButton_save_clicked()
{
    string a = ui->lineEdit_fname_3->text().toStdString();
    string b = ui->lineEdit_lname_3->text().toStdString();
    int c = ui->spinBox->value();
    string d = ui->lineEdit_mobile_3->text().toStdString();
    string e = ui->lineEdit_email->text().toStdString();
    string f =ui->lineEdit_grade_3->text().toStdString();
        s = Student(a,b,c,d,e,f);
   for(int i=0;i<ui->listWidget->count();i++){
       if(ui->listWidget->item(i)->text() == "selected")
            pushToVector(i,s);
   }
   database.stdsVector.push_back(s);
   close();

}

void CreateStudent::on_listWidget_currentRowChanged(int currentRow)
{
//     ui->label_3->setText(QString::fromStdString(database.Crsvector[currentRow].getName()));
//     ui->label->setText(QString::fromStdString(database.Crsvector[currentRow].getName()));*/
//     if(ui->listWidget->item(ui->listWidget->currentRow())->text() != "selected"){
//          pushToVector(currentRow,s);

//           ui->label_2->setText(QString::fromStdString(database.Crsvector[currentRow].getName()));
        //}
}


void CreateStudent:: pushToVector(int row,Student &s){
    database.Crsvector[row].addStudent(s);
}


void CreateStudent::on_pushButton_clicked()
{
       QListWidgetItem *it = ui->listWidget->item(ui->listWidget->currentRow());
               it->setText("selected");
//ui->listWidget->currentRow() ;
}
