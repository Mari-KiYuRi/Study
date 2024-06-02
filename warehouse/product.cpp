#include "product.h"

product::product(int id, QString category, QString name, QString producer, int weight, int price,
int quantity, int sectionNumber) {
    m_id = id;
    m_category = category;
    m_name = name;
    m_producer = producer;
    m_weight = weight;
    m_price = price;
    m_quantity = quantity;
    m_cost = m_price * m_quantity;
    m_sectionNumber = sectionNumber;
}

product::product() {
}
