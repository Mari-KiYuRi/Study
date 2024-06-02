#include "mainwindow.h"
#include "table.h"
#include "./ui_mainwindow.h"
#include <QtWidgets>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_TableOut_clicked()
{
    QPalette m_pal;
    m_pal.setColor(QPalette::Active, QPalette::Window, QColor(204, 255, 255));
    m_pal.setColor(QPalette::Active, QPalette::WindowText, QColor(0, 0, 74));
    m_pal.setColor(QPalette::Active, QPalette::Button, QColor(153, 153, 255));
    m_pal.setColor(QPalette::Active, QPalette::ButtonText, QColor(0, 0, 74));

    tableElements = new Table;
    tableElements->setPalette(m_pal);
    tableElements->setAutoFillBackground(true);
    tableElements->setWindowTitle("Таблица");
    tableElements->show();
}


void MainWindow::on_exit_clicked()
{
    close();
}
