#ifndef EDIT_H
#define EDIT_H

#include <QDialog>
#include <QMessageBox>
#include <QObject>
#include <QList>
#include "product.h"
#include <QObject>
#include <QErrorMessage>

namespace Ui {
class Edit;
}

class Edit : public QDialog
{
    Q_OBJECT

public:
    explicit Edit(QWidget *parent = nullptr);
    ~Edit();
    void setArray(QList<product>* f_prodocts);
    bool isOk = false;
    int m_countRow;

    QList<product>* us_products;

private slots:
    void on_Ready_clicked();

    //void on_BoxEdit_activated(int index);

private:
    bool chek(QString str);
    bool chekID(int id);
    Ui::Edit *ui;
};

#endif // EDIT_H
