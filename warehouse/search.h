#ifndef SEARCH_H
#define SEARCH_H

#include <QDialog>
#include "product.h"
#include <QDebug>

namespace Ui {
class Search;
}

class Search : public QDialog
{
    Q_OBJECT

public:
    void setArray(QList<product>* f_products);
    explicit Search(QWidget *parent = nullptr);
    ~Search();
    QList<product>* us_products;
private slots:
    void on_SearchButton_clicked();

    void on_ExitButton_clicked();
private:
    void Print(int &counter, int &i);
    bool compareString(QString ans1, QString ans2);
    bool compareNumbers(int ans1, int ans2);
    Ui::Search *ui;

};


#endif // SEARCH_H
