#include "diagram.h"
#include "ui_diagram.h"
Diagram::Diagram(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Diagram)
{
    ui->setupUi(this);

}

void Diagram::setArray(QList<product> *f_products)
{
    us_products = f_products;
}

double* Diagram::f1(QStringList* Categories) {

    double* data = new double[Categories->size()];
    double* data1 = new double[Categories->size()]();
    for (int i = 0; i < Categories->size(); i++) {
        for (int j = 0; j < (*us_products).size(); j++) {
            if ((*us_products)[j].m_category == (*Categories)[i]) {
                data1[i] += 1.0;
            }
        }
        //qDebug() << data1[i];
    }
    double sum{};
    for (int i = 0; i< Categories->size(); i++) {
        if (i == Categories->size() - 1) {
            data[i] = 100 - sum - 0.0001;
            qDebug() << data[i];
            break;
        }
        data[i] = (data1[i] / (*us_products).size()) * 100;
        sum+= data[i];
        qDebug() << data[i];
    }

    return data;
}

void Diagram::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing);

    // Размеры и положение круговой диаграммы
    int radius = 100;
    int centerX = width() / 2;
    int centerY = height() / 2;

    QStringList Categories;
    bool add {true};
    int size = (*us_products).size();
    for (int i = 0; i < (*us_products).size(); i++) {
        for (int j = 0; j < Categories.size(); j++) {
            if ((*us_products)[i].m_category != Categories[j]) {
                add = true;
                //
                //break;
            }
            else {
                add = false;
                break;
            }
        }
        if (add) {
            Categories += (*us_products)[i].m_category;
        }
    }

    double* data = new double[Categories.size()];
    data = f1(&Categories);




    // Угол начала и конца каждого сектора
    double startAngle = 0;
    double spanAngle = 0;
    // Отрисовка секторов круговой диаграммы и добавление подписей
    for (int i = 0; i < Categories.size(); i++) {
        if(data[i] == 0)
            continue;
        spanAngle = data[i] * 360 / 100;
        painter.setBrush(QColor::fromHsv(i * 60, 255, 255));
        painter.drawPie(centerX - radius, centerY - radius, radius * 2, radius * 2, startAngle * 16, spanAngle * 16);

        // Добавление подписи к сектору
        int labelX = centerX + radius * qCos((startAngle + spanAngle / 2) * M_PI / 180);
        int labelY = centerY - radius * qSin((startAngle + spanAngle / 2) * M_PI / 180);
        painter.drawText(labelX, labelY, Categories[i]);

        startAngle += spanAngle;
    }


}

Diagram::~Diagram()
{
    delete ui;
}

