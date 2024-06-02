#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QObject>
#include <QList>
#include "table.h"
#include "product.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    // QList<product> products;

private slots:
    void on_TableOut_clicked();

    void on_exit_clicked();

private:
    Ui::MainWindow *ui;
    Table* tableElements;
};
#endif // MAINWINDOW_H
