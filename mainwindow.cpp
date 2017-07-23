#include "mainwindow.h"
#include "ui_mainwindow.h"

// [TODO] Add About Qt when clicked. QMessageBox::aboutQT(this, "About Qt");

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);
}

MainWindow::~MainWindow() {
    delete ui;
}
