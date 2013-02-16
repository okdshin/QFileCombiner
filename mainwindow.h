#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <boost/filesystem.hpp>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
public slots:
    void SelectDirectory();
    void Combine();
    
private:
    Ui::MainWindow *ui;

    boost::filesystem::path directory_path;
};

#endif // MAINWINDOW_H
