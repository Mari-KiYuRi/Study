#ifndef TABLE_H
#define TABLE_H

#include <QWidget>
#include <QWindow>
#include "product.h"
#include <QDebug>
#include <QDialog>
#include <QObject>
#include "testadd.h"
#include <QFile>
#include "search.h"
#include "edit.h"
#include "diagram.h"

namespace Ui {
class Table;
}

class Table : public QWidget
{
    Q_OBJECT

public:
    explicit Table(QWidget *parent = nullptr);
    ~Table();
    int m_countRow;
    QList<product> products;

private slots:
    void on_Exit2_clicked();
    void on_AddElement_clicked();
    void AddToProducts(product addEl);
    void PrintTable();
    void on_Search_clicked();
    void on_ReportButton_clicked();
    void on_edit_table_clicked();

    void on_SortCategory1_clicked();

    void on_SortCategory2_clicked();

    void on_SortProducer1_clicked();

    void on_SortProducer2_clicked();

    void on_SortQuantity1_clicked();

    void on_SortQuantity2_clicked();

    void on_SortNumSec1_clicked();

    void on_SortNumSec2_clicked();

    void on_Diagram_clicked();

private:
    Ui::Table *ui;
    Diagram* windDiagram;
    TestAdd* testAd;
    Search* windowSearch;
    Edit* editTable;
    void addRow(const product& prod);
    void addRowEdit(const product& prod, int i);
    void writeToTextFile(const QList<product>& f_products);
    void addProductToFile(product f_product);
    void readFromTextFile(QList<product>& tem);
    void addProductToReport(product f_product);
    void printNewTable();

};

#endif // TABLE_H
