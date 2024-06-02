#ifndef PRODUCT_H
#define PRODUCT_H
#include <QString>

class product
{
public:
    int m_id{};
    QString m_category;
    QString m_name;
    QString m_producer;
    int m_weight{};
    int m_price{};
    int m_quantity{};
    int m_cost{};
    int m_sectionNumber{};
    product(int id, QString category, QString name, QString producer, int weight, int price,
                     int quantity, int sectionNumber);
    product();
};

#endif // PRODUCT_H
