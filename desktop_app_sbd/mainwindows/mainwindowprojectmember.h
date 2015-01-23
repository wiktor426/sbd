#ifndef MAINWINDOWPROJECTMEMBER_H
#define MAINWINDOWPROJECTMEMBER_H

#include <QMainWindow>

namespace Ui {
class MainWindowProjectMember;
}

class MainWindowProjectMember : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindowProjectMember(QWidget *parent = 0);
    ~MainWindowProjectMember();
    QString user_id;
    QString user_name;
    QString user_surname;
    QString user_password;
    QString project_name;
    void refreshLabels();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButtonProjectInfo_clicked();

    void on_pushButtonSearchSupply_clicked();

private:
    Ui::MainWindowProjectMember *ui;
};

#endif // MAINWINDOWPROJECTMEMBER_H
