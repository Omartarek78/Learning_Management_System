#include "editprofessor.h"
#include "ui_editprofessor.h"
#include "classes.h"
#include <vector>
#include "QMessageBox"
#include "Database.h"


EditProfessor::EditProfessor(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::EditProfessor)
{
    ui->setupUi(this);


    for(auto i : database.Profsvector){
      ui->comboBox_Profs->addItem(QString::fromStdString((i.getfirstName()) +" " + i.getlastName()));
    }

    ui->comboBox_addcrs->addItem("None");
    int index = ui->comboBox_Profs->currentIndex();
        for(auto c: database.Crsvector){
            bool flag =1;
        for(auto i : database.Profsvector[index].getCourses()){
            if( c.getCode() == i.getCode()){
                flag = 0;
                break;
            }
        }
        if(flag)
            ui->comboBox_addcrs->addItem(QString::fromStdString((c.getName())));
    }

}


void EditProfessor::on_comboBox_Profs_currentIndexChanged(int index)
{
    ui->comboBox_courses->clear();
    ui->comboBox_remcrs->clear();
    ui->lineEdit_first->setText(QString::fromStdString(database.Profsvector[index].getfirstName()));
    ui->lineEdit_last->setText(QString::fromStdString(database.Profsvector[index].getlastName()));
    ui->lineEdit_mobile->setText(QString::fromStdString(database.Profsvector[index].getMobile()));
    ui->lineEdit_email->setText(QString::fromStdString(database.Profsvector[index].getEmail()));
    ui->lineEdit_ttl->setText(QString::fromStdString(database.Profsvector[index].getTitle()));
    ui->lineEdit_age->setText(QString::number(database.Profsvector[index].getAge()));

    vector <Course> v = database.Profsvector[index].getCourses();
    for(auto i : v){
      ui->comboBox_courses->addItem(QString::fromStdString((i.getName())));
    }

    for(auto i : v){
      ui->comboBox_remcrs->addItem(QString::fromStdString((i.getName())));
    }

}


void EditProfessor::on_ok_clicked()
{
   this->close();
}


void EditProfessor::on_save_clicked()
{
    int chosenprof = ui->comboBox_Profs->currentIndex();
    int chosencrs = ui->comboBox_addcrs->currentIndex();
    database.Profsvector[chosenprof].setfirstName(ui->lineEdit_first->text().toStdString());
    database.Profsvector[chosenprof].setlastName(ui->lineEdit_last->text().toStdString());
    database.Profsvector[chosenprof].setAge(ui->lineEdit_age->text().toInt());
    database.Profsvector[chosenprof].setMobile(ui->lineEdit_mobile->text().toStdString());
    database.Profsvector[chosenprof].setEmail(ui->lineEdit_email->text().toStdString());
    database.Profsvector[chosenprof].setTitle(ui->lineEdit_ttl->text().toStdString());

//    if(chosencrs != 0){ //None not chosen
//    string chosencors = ui->comboBox_addcrs->itemText(chosencrs).toStdString();
//    for(auto i : database.Crsvector){
//        if(i.getName() == chosencors){
//            i.addProfessor(database.Profsvector[chosenprof]);
//            break;
//        }
//    }

    if(chosencrs!=0){
        for(int f=0;f<database.Crsvector.size();f++){
            if(ui->comboBox_addcrs->itemText(chosencrs).toStdString()==database.Crsvector[f].getName()){
                database.Crsvector[f].addProfessor(database.Profsvector[chosenprof]);
                break;
            }
        }

        QMessageBox::information(this, "Added Course", "Course added succesfully!");
    }


    QMessageBox::information(this, "Save Changes", "Details updated succesfully!");
    this->close();

}


void EditProfessor::on_delete_2_clicked()
{
    int chosenprof = ui->comboBox_Profs->currentIndex();
    int deletecrs = ui->comboBox_remcrs->currentIndex();
    QMessageBox::StandardButton reply = QMessageBox::warning(this, "Delete Course", "Are you sure you want to delete this Course?", QMessageBox::Cancel | QMessageBox::Yes);

    if(reply == QMessageBox::Yes){
    database.Profsvector[chosenprof].getCourses()[deletecrs].remProfessor(database.Profsvector[chosenprof]);
    this->close();
    }

}

void EditProfessor::on_delete_prof_clicked()
{
    int di = ui->comboBox_Profs->currentIndex();
    QMessageBox::StandardButton reply = QMessageBox::question(this, "Delete Professor", "Are you sure you want to delete this Professor?", QMessageBox::Cancel | QMessageBox::Yes);

    if(reply == QMessageBox::Yes){
        for(auto i : database.Profsvector[di].getCourses()){
            i.remProfessor(database.Profsvector[di]);
        }
        database.Profsvector.erase(database.Profsvector.begin()+di);
        this->close();
    }

}

EditProfessor::~EditProfessor()
{
    delete ui;
}






