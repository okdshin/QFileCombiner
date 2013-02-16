#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <boost/algorithm/string.hpp>
#include <QFileDialog>
#include "FileCombiner/FileCombiner.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

auto MainWindow::SelectDirectory() -> void {
    const auto directory_path_qstr = QFileDialog::getExistingDirectory(this);
    this->ui->directory_path_line_edit->setText(directory_path_qstr);
    this->directory_path = boost::filesystem::path(directory_path_qstr.toStdString());
}

auto MainWindow::Combine() -> void {
    if(this->ui->directory_path_line_edit->text().isEmpty()){
        this->ui->statusBar->showMessage("Directory's path is not selected!");
        return;
    }
    if(this->ui->keyword_line_edit->text().isEmpty()){
        this->ui->statusBar->showMessage("Keywords is empty!");
        return;
    }
    const auto raw_keyword = this->ui->keyword_line_edit->text().toStdString();
    std::vector<std::string> keyword_list;
    boost::algorithm::split(keyword_list, raw_keyword, boost::algorithm::is_any_of(" "));
    const auto dst_file_name_qstr = QFileDialog::getSaveFileName(this);
    file_combiner::CombineFile(this->directory_path, keyword_list, dst_file_name_qstr.toStdString());
}

MainWindow::~MainWindow()
{
    delete ui;
}
