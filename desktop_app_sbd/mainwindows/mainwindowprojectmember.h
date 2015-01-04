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

private:
    Ui::MainWindowProjectMember *ui;
};

#endif // MAINWINDOWPROJECTMEMBER_H
