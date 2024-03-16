#ifndef EDITCOURSE_H
#define EDITCOURSE_H
#include<QMessageBox>
#include <QDialog>

namespace Ui {
class EditCourse;
}

class EditCourse : public QDialog
{
    Q_OBJECT

public:
    explicit EditCourse(QWidget *parent = nullptr);
    ~EditCourse();

private slots:

    void on_pushButton_Mainmenu_clicked();

    void on_comboBox_Course_currentIndexChanged(int index);

    void on_pushButton_Save_clicked();

private:
    Ui::EditCourse *ui;
};

#endif // EDITCOURSE_H
