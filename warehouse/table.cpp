#include "table.h"
#include "ui_table.h"

const int countColumns = 9;

Table::Table(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Table)
{
    ui->setupUi(this);
    readFromTextFile(products);
    //AddToProducts(product(1, "Ванна", "Мыло", "Ваниш", 2, 500, 20, 8));
    //AddToProducts(product(4, "Уборка", "Швабра", "Ваниш", 9, 1000, 20, 10));
    PrintTable();
}

void Table::AddToProducts(product addEl) {
    products.push_back(addEl);
}

void Table::PrintTable() {
    //ui->tableWidget->setSortingEnabled(true);
    ui->tableWidget->setColumnCount(countColumns);
    m_countRow = products.size();
    ui->tableWidget->setHorizontalHeaderLabels(QStringList() << "ID" << "Категория" << "Название"
                                                             << "Производитель" << "Вес" << "Цена" << "Количество" << "Стоимость" << "Номер секции");
    //ui->tableWidget->setRowCount(m_countRow);

    for (int i = 0; i < m_countRow; i++) {
        addRow(products[i]);
    }
}



void Table::addProductToFile(product f_product) {
    QFile file("Data.txt");
    if (file.open(QIODevice::Append | QIODevice::Text)) {
        QTextStream stream(&file);
        stream << f_product.m_id << "|" << f_product.m_category << "|" << f_product.m_name << "|" << f_product.m_producer << "|"
               << f_product.m_weight << "|" << f_product.m_price << "|" << f_product.m_quantity << "|" << f_product.m_cost << "|"
               << f_product.m_sectionNumber << "\n";
        file.flush();
        file.close();
    }
}


void Table::writeToTextFile(const QList<product>& f_products) {
    QFile file("Data.txt");
    if (file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        for (int i = 0; i < f_products.size(); i++) {
            addProductToFile(f_products[i]);
        }
        file.flush();
        file.close();
    }
}

void Table::readFromTextFile(QList<product>& f_products) {
    QFile file("Data.txt");
    if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QTextStream in(&file);
        //QTextStream &operator <<(&in, f_products);
        while(!in.atEnd()) {
            //int i = f_products.size();
            QString str = in.readLine();
            QStringList fields = str.split("|");
            if (fields.size() == 9) {
                product temp;
                temp.m_id = fields[0].toInt();
                temp.m_category = fields[1];
                temp.m_name = fields[2];
                temp.m_producer = fields[3];
                temp.m_weight = fields[4].toInt();
                temp.m_price = fields[5].toInt();
                temp.m_quantity = fields[6].toInt();
                temp.m_cost = fields[7].toInt();
                temp.m_sectionNumber = fields[8].toInt();
                f_products.push_back(temp);
            }
        }
        file.close();
    }
}

void Table::addProductToReport(product f_product)
{
    QFile file("Report.txt");
    if (file.open(QIODevice::Append | QIODevice::Text)) {
        QTextStream stream2(&file);
        stream2 << f_product.m_name << " | " << f_product.m_producer << " | "
               << f_product.m_cost << "\n";
        file.flush();
        file.close();
    }
}

void Table::printNewTable()
{
    ui->tableWidget->setColumnCount(countColumns);
    ui->tableWidget->setRowCount(products.size());
    m_countRow = products.size();
    ui->tableWidget->setHorizontalHeaderLabels(QStringList() << "ID" << "Категория" << "Название"
                                                             << "Производитель" << "Вес" << "Цена" << "Количество" << "Стоимость" << "Номер секции");
    for (int i = 0; i < products.size(); i++) {
        QTableWidgetItem *itemNum = new QTableWidgetItem(QString::number(products[i].m_id));
        ui->tableWidget->setItem(i, 0, itemNum);

        QTableWidgetItem *itemText = new QTableWidgetItem();
        itemText->setText(products[i].m_category);
        ui->tableWidget->setItem(i, 1, itemText);

        itemText = new QTableWidgetItem();
        itemText->setText(products[i].m_name);
        ui->tableWidget->setItem(i, 2, itemText);

        itemText = new QTableWidgetItem();
        itemText->setText(products[i].m_producer);
        ui->tableWidget->setItem(i, 3, itemText);

        itemNum = new QTableWidgetItem(QString::number(products[i].m_weight));
        ui->tableWidget->setItem(i, 4, itemNum);

        itemNum = new QTableWidgetItem(QString::number(products[i].m_price));
        ui->tableWidget->setItem(i, 5, itemNum);

        itemNum = new QTableWidgetItem(QString::number(products[i].m_quantity));
        ui->tableWidget->setItem(i, 6, itemNum);

        itemNum = new QTableWidgetItem(QString::number(products[i].m_cost));
        ui->tableWidget->setItem(i, 7, itemNum);

        itemNum = new QTableWidgetItem(QString::number(products[i].m_sectionNumber));
        ui->tableWidget->setItem(i, 8, itemNum);
    }

}

Table::~Table()
{
    //writeToTextFile(products);
    delete ui;
}

void Table::on_Exit2_clicked()
{
    writeToTextFile(products);
    close();
}


void Table::on_AddElement_clicked()
{
    QPalette m_pal;
    m_pal.setColor(QPalette::Active, QPalette::Window, QColor(204, 255, 255));
    m_pal.setColor(QPalette::Active, QPalette::WindowText, QColor(0, 0, 74));
    m_pal.setColor(QPalette::Active, QPalette::Button, QColor(153, 153, 255));
    m_pal.setColor(QPalette::Active, QPalette::ButtonText, QColor(0, 0, 74));

    testAd = new TestAdd();
    testAd->setPalette(m_pal);
    testAd->setAutoFillBackground(true);
    testAd->setWindowTitle("Добавление товара");
    testAd->show();

    testAd->setArray(&products);
    testAd->setModal(true);
    testAd->exec();
    if (testAd->isOk) {
        AddToProducts(testAd->funcReturn());
        addRow(testAd->funcReturn());
    }
}

void Table::addRow(const product& prod) {
    int i = ui->tableWidget->rowCount()+1;
    ui->tableWidget->setRowCount(i);
    i--;

    QTableWidgetItem *itemNum = new QTableWidgetItem(QString::number(prod.m_id));
    //ui->tableWidget->item->setTextAlignment(Align);
    //ui->tableWidget->item(i, 0)->setTextAlignment(Qt::AlignCenter);
    ui->tableWidget->setItem(i, 0, itemNum);

    QTableWidgetItem *itemText = new QTableWidgetItem();
    itemText->setText(prod.m_category);
    ui->tableWidget->setItem(i, 1, itemText);

    itemText = new QTableWidgetItem();
    itemText->setText(prod.m_name);
    ui->tableWidget->setItem(i, 2, itemText);

    itemText = new QTableWidgetItem();
    itemText->setText(prod.m_producer);
    ui->tableWidget->setItem(i, 3, itemText);

    itemNum = new QTableWidgetItem(QString::number(prod.m_weight));
    ui->tableWidget->setItem(i, 4, itemNum);

    itemNum = new QTableWidgetItem(QString::number(prod.m_price));
    ui->tableWidget->setItem(i, 5, itemNum);

    itemNum = new QTableWidgetItem(QString::number(prod.m_quantity));
    ui->tableWidget->setItem(i, 6, itemNum);

    itemNum = new QTableWidgetItem(QString::number(prod.m_cost));
    ui->tableWidget->setItem(i, 7, itemNum);

    itemNum = new QTableWidgetItem(QString::number(prod.m_sectionNumber));
    ui->tableWidget->setItem(i, 8, itemNum);
}

void Table::addRowEdit(const product& prod, int i) {
    ui->tableWidget->setRowCount(i+1);

    QTableWidgetItem *itemNum = new QTableWidgetItem(QString::number(prod.m_id));

    ui->tableWidget->setItem(i, 0, itemNum);

    QTableWidgetItem *itemText = new QTableWidgetItem();
    itemText->setText(prod.m_category);
    ui->tableWidget->setItem(i, 1, itemText);

    itemText = new QTableWidgetItem();
    itemText->setText(prod.m_name);
    ui->tableWidget->setItem(i, 2, itemText);

    itemText = new QTableWidgetItem();
    itemText->setText(prod.m_producer);
    ui->tableWidget->setItem(i, 3, itemText);

    itemNum = new QTableWidgetItem(QString::number(prod.m_weight));
    ui->tableWidget->setItem(i, 4, itemNum);

    itemNum = new QTableWidgetItem(QString::number(prod.m_price));
    ui->tableWidget->setItem(i, 5, itemNum);

    itemNum = new QTableWidgetItem(QString::number(prod.m_quantity));
    ui->tableWidget->setItem(i, 6, itemNum);

    itemNum = new QTableWidgetItem(QString::number(prod.m_cost));
    ui->tableWidget->setItem(i, 7, itemNum);

    itemNum = new QTableWidgetItem(QString::number(prod.m_sectionNumber));
    ui->tableWidget->setItem(i, 8, itemNum);
}

void Table::on_Search_clicked()
{
    QPalette m_pal;
    m_pal.setColor(QPalette::Active, QPalette::Window, QColor(204, 255, 255));
    m_pal.setColor(QPalette::Active, QPalette::WindowText, QColor(0, 0, 74));
    m_pal.setColor(QPalette::Active, QPalette::Button, QColor(153, 153, 255));
    m_pal.setColor(QPalette::Active, QPalette::ButtonText, QColor(0, 0, 74));

    windowSearch = new Search();
    windowSearch->setPalette(m_pal);
    windowSearch->setAutoFillBackground(true);
    windowSearch->setWindowTitle("Поиск");
    windowSearch->show();

    windowSearch->setArray(&products);
    windowSearch->setModal(true);
    windowSearch->exec();
}


void Table::on_ReportButton_clicked()
{
    QFile file("Report.txt");
    if (file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        QTextStream stream(&file);
        stream << "Отчет\n";
        stream << "Название | Производитель | Общая стоимость\n";
        file.flush();
        file.close();
    }
    for (int i = 0; i < products.size(); i++) {
        addProductToReport (products[i]);
    }
    ui->labelReport->setText("Отчет сохранен в файл Report.txt✅");
}


void Table::on_edit_table_clicked() {
    QPalette m_pal;
    m_pal.setColor(QPalette::Active, QPalette::Window, QColor(204, 255, 255));
    m_pal.setColor(QPalette::Active, QPalette::WindowText, QColor(0, 0, 74));
    m_pal.setColor(QPalette::Active, QPalette::Button, QColor(153, 153, 255));
    m_pal.setColor(QPalette::Active, QPalette::ButtonText, QColor(0, 0, 74));

    editTable = new Edit();
    editTable->setPalette(m_pal);
    editTable->setAutoFillBackground(true);
    editTable->setWindowTitle("Редактирование");
    editTable->show();

    editTable -> setArray(&products);

    editTable -> setModal(true);
    editTable -> exec();
    if (editTable->isOk) {
       // ui->tableWidget->setSortingEnabled(true);
        ui->tableWidget->setColumnCount(countColumns);
        ui->tableWidget->setHorizontalHeaderLabels(QStringList() << "ID" << "Категория" << "Название"
                                                                 << "Производитель" << "Вес" << "Цена" << "Количество" << "Стоимость" << "Номер секции");
        for(int i{}; i < int(products.size());i++){
            addRowEdit(products[i], i);
        }
    }
}


void Table::on_SortCategory1_clicked()
{
    bool sort{};
    do {
        sort = true;

        for (int i = 0; i < products.size() -1; i++) {
            if (products.size() == 0) {
                break;
            }
            if (products[i].m_category > products[i+1].m_category) {

                product* temp = new product;
                *temp = products[i];
                products[i] = products[i+1];
                products[i+1] = *temp;
                sort = false;
                delete temp;
            }
        }
    } while (!sort);
    printNewTable();
}


void Table::on_SortCategory2_clicked()
{
    bool sort{};
    do {
        sort = true;

        for (int i = 0; i < products.size() -1; i++) {
            if (products.size() == 0) {
                break;
            }
            if (products[i].m_category < products[i+1].m_category) {

                product* temp = new product;
                *temp = products[i];
                products[i] = products[i+1];
                products[i+1] = *temp;
                sort = false;
                delete temp;
            }
        }
    } while (!sort);
    printNewTable();
}


void Table::on_SortProducer1_clicked()
{
    bool sort{};
    do {
        sort = true;

        for (int i = 0; i < products.size() -1; i++) {
            if (products.size() == 0) {
                break;
            }
            if (products[i].m_producer > products[i+1].m_producer) {

                product* temp = new product;
                *temp = products[i];
                products[i] = products[i+1];
                products[i+1] = *temp;
                sort = false;
                delete temp;
            }
        }
    } while (!sort);
    printNewTable();
}


void Table::on_SortProducer2_clicked()
{
    bool sort{};
    do {
        sort = true;

        for (int i = 0; i < products.size() -1; i++) {
            if (products.size() == 0) {
                break;
            }
            if (products[i].m_producer < products[i+1].m_producer) {

                product* temp = new product;
                *temp = products[i];
                products[i] = products[i+1];
                products[i+1] = *temp;
                sort = false;
                delete temp;
            }
        }
    } while (!sort);
    printNewTable();
}


void Table::on_SortQuantity1_clicked()
{
    bool sort{};
    do {
        sort = true;

        for (int i = 0; i < products.size() -1; i++) {
            if (products.size() == 0) {
                break;
            }
            if (products[i].m_quantity > products[i+1].m_quantity) {

                product* temp = new product;
                *temp = products[i];
                products[i] = products[i+1];
                products[i+1] = *temp;
                sort = false;

                delete temp;
            }
        }
    } while (!sort);
    printNewTable();
}


void Table::on_SortQuantity2_clicked()
{
    bool sort{};
    do {
        sort = true;

        for (int i = 0; i < products.size() -1; i++) {
            if (products.size() == 0) {
                break;
            }
            if (products[i].m_quantity < products[i+1].m_quantity) {

                product* temp = new product;
                *temp = products[i];
                products[i] = products[i+1];
                products[i+1] = *temp;
                sort = false;

                delete temp;
            }
        }
    } while (!sort);
    printNewTable();
}




void Table::on_SortNumSec1_clicked()
{
    bool sort{};
    do {
        sort = true;

        for (int i = 0; i < products.size() -1; i++) {
            if (products.size() == 0) {
                break;
            }
            if (products[i].m_sectionNumber > products[i+1].m_sectionNumber) {

                product* temp = new product;
                *temp = products[i];
                products[i] = products[i+1];
                products[i+1] = *temp;
                sort = false;

                delete temp;
            }
        }
    } while (!sort);
    printNewTable();
}


void Table::on_SortNumSec2_clicked()
{
    bool sort{};
    do {
        sort = true;

        for (int i = 0; i < products.size() -1; i++) {
            if (products.size() == 0) {
                break;
            }
            if (products[i].m_sectionNumber < products[i+1].m_sectionNumber) {

                product* temp = new product;
                *temp = products[i];
                products[i] = products[i+1];
                products[i+1] = *temp;
                sort = false;

                delete temp;
            }
        }
    } while (!sort);
    printNewTable();
}


void Table::on_Diagram_clicked()
{
    QPalette m_pal;
    m_pal.setColor(QPalette::Active, QPalette::Window, QColor(204, 255, 255));
    m_pal.setColor(QPalette::Active, QPalette::WindowText, QColor(0, 0, 74));
    m_pal.setColor(QPalette::Active, QPalette::Button, QColor(153, 153, 255));
    m_pal.setColor(QPalette::Active, QPalette::ButtonText, QColor(0, 0, 74));

    windDiagram = new Diagram();
    windDiagram->setPalette(m_pal);
    windDiagram->setAutoFillBackground(true);
    windDiagram->setWindowTitle("Диаграмма");
    windDiagram->setArray(&products);
    windDiagram->show();
}

