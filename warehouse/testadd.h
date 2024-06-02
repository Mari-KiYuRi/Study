#ifndef TESTADD_H
#define TESTADD_H

#include <QDialog>
#include"product.h"
#include <QWidget>
#include <QLineEdit>
#include <QObject>
#include <QErrorMessage>

namespace Ui {
class TestAdd;
}

class TestAdd : public QDialog
{
    Q_OBJECT

public:

    explicit TestAdd(QWidget *parent = nullptr);
    ~TestAdd();
    bool isOk = false;
    void setArray(QList<product>* f_products);
    product* newElement;
    product funcReturn();
    QList<product>* us_products;

private slots:

    void on_Save_clicked();

private:
    bool chek(QString str);
    bool chekID(int id);
    bool chekEmpty(QString str);
    Ui::TestAdd *ui;
};

#endif // TESTADD_H
