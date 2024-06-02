#include "search.h"
#include "ui_search.h"

const int countColumns = 9;

Search::Search(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Search)
{
    ui->setupUi(this);
    ui->comboBox->addItem("Поиск по категории");
    ui->comboBox->addItem("Поиск по названию");
    ui->comboBox->addItem("Поиск по производителю");
    ui->comboBox->addItem("Поиск по номеру секции");
}

void Search::setArray(QList<product>* f_products)
{
    us_products = f_products;
}

Search::~Search()
{
    delete ui;
}

void Search::Print(int &counter, int &i)
{
    counter++;
    ui->tableWidget->setRowCount(counter);
    QTableWidgetItem *itemNum = new QTableWidgetItem(QString::number((*us_products)[i].m_id));
    ui->tableWidget->setItem(counter-1, 0, itemNum);

    QTableWidgetItem *itemText = new QTableWidgetItem();
    itemText->setText((*us_products)[i].m_category);
    ui->tableWidget->setItem(counter-1, 1, itemText);

    itemText = new QTableWidgetItem();
    itemText->setText((*us_products)[i].m_name);
    ui->tableWidget->setItem(counter-1, 2, itemText);

    itemText = new QTableWidgetItem();
    itemText->setText((*us_products)[i].m_producer);
    ui->tableWidget->setItem(counter-1, 3, itemText);

    itemNum = new QTableWidgetItem(QString::number((*us_products)[i].m_weight));
    ui->tableWidget->setItem(counter-1, 4, itemNum);

    itemNum = new QTableWidgetItem(QString::number((*us_products)[i].m_price));
    ui->tableWidget->setItem(counter-1, 5, itemNum);

    itemNum = new QTableWidgetItem(QString::number((*us_products)[i].m_quantity));
    ui->tableWidget->setItem(counter-1, 6, itemNum);

    itemNum = new QTableWidgetItem(QString::number((*us_products)[i].m_cost));
    ui->tableWidget->setItem(counter-1, 7, itemNum);

    itemNum = new QTableWidgetItem(QString::number((*us_products)[i].m_sectionNumber));
    ui->tableWidget->setItem(counter-1, 8, itemNum);
}

bool Search::compareString(QString ans1, QString ans2)
{
    if (ans1.contains(ans2, Qt::CaseInsensitive))
    //if (ans1 == ans2)
        return true;
    else
        return false;
}

bool Search::compareNumbers(int ans1, int ans2)
{
    if (ans1 == ans2)
        return true;
    else
        return false;
}



void Search::on_SearchButton_clicked()
{
    int index = ui->comboBox->currentIndex();
    ui->tableWidget->setSortingEnabled(true);
    ui->tableWidget->setColumnCount(countColumns);
    ui->tableWidget->setHorizontalHeaderLabels(QStringList() << "ID" << "Категория" << "Название"
                                                             << "Производитель" << "Вес" << "Цена" << "Количество" << "Стоимость" << "Номер секции");
    int counter = 0;
    switch (index) {
    case 0: {
        QString answer = ui->lineEdit->text();
        for (int i = 0; i < us_products->size(); i++) {
            if (compareString((*us_products)[i].m_category, answer)) {
                Print(counter, i);
            }
        }
        if (counter == 0) {
            int j = 0;
            int rows = counter - 1;
            Print(rows, j);
        }
        break;
    }
    case 1: {
        QString answer = ui->lineEdit->text();
        for (int i = 0; i < us_products->size(); i++) {
            if (compareString((*us_products)[i].m_name, answer)) {
                Print(counter, i);
            }
        }
        if (counter == 0) {
            int j = 0;
            int rows = counter - 1;
            Print(rows, j);
        }
        break;
    }
    case 2: {
    QString answer = ui->lineEdit->text();
        for (int i = 0; i < us_products->size(); i++) {
        if (compareString((*us_products)[i].m_producer, answer)) {
                Print(counter, i);
            }
        }
        if (counter == 0) {
            int j = 0;
            int rows = counter - 1;
            Print(rows, j);
        }
        break;
    }
    case 3: {
        QString answer = ui->lineEdit->text();
        for (int i = 0; i < us_products->size(); i++) {
            if (compareNumbers((*us_products)[i].m_sectionNumber, answer.toInt())) {
                Print(counter, i);
            }
        }
        if (counter == 0) {
            int j = 0;
            int rows = counter - 1;
            Print(rows, j);
        }
        break;
    }
}
}


void Search::on_ExitButton_clicked()
{
    close();
}



