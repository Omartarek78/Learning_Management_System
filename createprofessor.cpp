#include "createprofessor.h"
#include "ui_createprofessor.h"
#include "Database.h"

CreateProfessor::CreateProfessor(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CreateProfessor)
{
    ui->setupUi(this);
    for(auto c:database.Crsvector){
     ui->listWidget->addItem(QString::fromStdString(c.getName())) ;
     //ui->comboBox->addItem(QString::fromStdString(c.getName())) ;
        }
}
Professor p1;
CreateProfessor::~CreateProfessor()
{
    delete ui;
}

void CreateProfessor::on_pushButton_clicked()
{
    string FirstName(ui->lineEditFirstName->text().toStdString());
     string LastName(ui->lineEditLastName->text().toStdString());
     string Email (ui->lineEditEmail->text().toStdString());
     string Title(ui->lineEditTitle->text().toStdString());
     string Mobile(ui->lineEditMobile->text().toStdString());
     int Age (ui->spinBoxAge->value());
     //string Age (ui->lineEditAge->text().toInt());
     Professor p1(FirstName,LastName,Age,Mobile,Email,Title);
     for(int i=0;i<ui->listWidget->count();i++){
         if(ui->listWidget->item(i)->text() == "selected"){
            database.Crsvector[i].addProfessor(p1);
         }
     }
     database.Profsvector.push_back(p1);
     // ui->label->setText(QString::fromStdString(p1.getfirstName()));
     close();
}


void CreateProfessor::on_listWidget_currentRowChanged(int currentRow)
{
//    if(ui->listWidget->item(ui->listWidget->currentRow())->text() != "selected"){
//             database.Crsvector[currentRow].addProfessor(p1);
//    }
}


void CreateProfessor::on_pushButton_2_clicked()
{
    QListWidgetItem *it = ui->listWidget->item(ui->listWidget->currentRow());
                   it->setText("selected");
}

