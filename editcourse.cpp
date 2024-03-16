#include "editcourse.h"
#include "ui_editcourse.h"
#include "Database.h"
#include "classes.h"
EditCourse::EditCourse(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::EditCourse)
{
    ui->setupUi(this);
    for(auto i:database.Crsvector){
        ui->comboBox_Course->addItem(QString::fromStdString(i.getName()));
    }
    ui->lineEdit_Name->setText(QString::fromStdString(database.Crsvector[0].getName()));
    ui->lineEdit_Code->setText(QString::fromStdString(database.Crsvector[0].getCode()));
    ui->lineEdit_LecHall->setText(QString::fromStdString(database.Crsvector[0].getLecHall()));
    ui->lineEdit_Time->setText(QString::fromStdString(database.Crsvector[0].getTime()));
//    for(auto i:database.Crsvector[0].getProfessors()){
//        ui->comboBox_Professors->addItem(QString::fromStdString(i.getfirstName()+i.getlastName()));
//    }
//    for(auto i:database.Crsvector[0].getStudents()){
//        ui->comboBox_Students->addItem(QString::fromStdString(i.getfirstName()+i.getlastName()));
//    }

}

EditCourse::~EditCourse()
{
    delete ui;
}

void EditCourse::on_pushButton_Mainmenu_clicked()
{
    hide();
}
void EditCourse::on_comboBox_Course_currentIndexChanged(int index)
{
    ui->comboBox_Professors->clear();
    ui->comboBox_Students->clear();
    ui->lineEdit_Name->setText(QString::fromStdString(database.Crsvector[index].getName()));
    ui->lineEdit_Code->setText(QString::fromStdString(database.Crsvector[index].getCode()));
    ui->lineEdit_LecHall->setText(QString::fromStdString(database.Crsvector[index].getLecHall()));
    ui->lineEdit_Time->setText(QString::fromStdString(database.Crsvector[index].getTime()));

    for(auto i:database.Crsvector[index].getProfessors()){
        ui->comboBox_Professors->addItem(QString::fromStdString(i.getfirstName()+" "+ i.getlastName()));
    }
    for(auto i:database.Crsvector[index].getStudents()){
        ui->comboBox_Students->addItem(QString::fromStdString(i.getfirstName()+" " +i.getlastName()));
    }
}

void EditCourse::on_pushButton_Save_clicked()
{
    int index = ui->comboBox_Course->currentIndex();
    database.Crsvector[index].setName(ui->lineEdit_Name->text().toStdString());
    database.Crsvector[index].setCode(ui->lineEdit_Code->text().toStdString());
    database.Crsvector[index].setLecHall(ui->lineEdit_LecHall->text().toStdString());
    database.Crsvector[index].setTime(ui->lineEdit_Time->text().toStdString());
    hide();

}

