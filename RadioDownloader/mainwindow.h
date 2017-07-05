#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <radio.h>
#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();



    void on_verticalSlider_actionTriggered(int action);

private:
    Ui::MainWindow *ui;
    Radio* ptr_Radio;
};

#endif // MAINWINDOW_H
