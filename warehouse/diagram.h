#ifndef DIAGRAM_H
#define DIAGRAM_H

#include <QWidget>
#include <QPainter>
#include "product.h"
namespace Ui {
class Diagram; 
}

class Diagram : public QWidget
{
    Q_OBJECT

public:
    QList<product>* us_products;
    explicit Diagram(QWidget *parent = nullptr);

    void setArray(QList<product>* f_products);

    void paintEvent(QPaintEvent *);
    ~Diagram();

private slots:
    //void on_Print_clicked();

private:
    double* f1(QStringList *Categories);
    Ui::Diagram *ui;
};

#endif // DIAGRAM_H
