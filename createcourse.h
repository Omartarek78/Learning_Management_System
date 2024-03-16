#ifndef CREATECOURSE_H
#define CREATECOURSE_H

#include <QDialog>

namespace Ui {
class CreateCourse;
}

class CreateCourse : public QDialog
{
    Q_OBJECT

public:
    explicit CreateCourse(QWidget *parent = nullptr);
    ~CreateCourse();

private slots:
    void on_pushButton_create_clicked();

private:
    Ui::CreateCourse *ui;
};

#endif // CREATECOURSE_H
