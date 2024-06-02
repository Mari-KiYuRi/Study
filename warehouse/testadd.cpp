#include "testadd.h"
#include "ui_testadd.h"

TestAdd::TestAdd(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::TestAdd)
{
    newElement = new product();
    ui->setupUi(this);
}

TestAdd::~TestAdd()
{

    delete ui;
}

void TestAdd::setArray(QList<product> *f_products)
{
     us_products = f_products;
}

product TestAdd::funcReturn() {
    return *newElement;
}



void TestAdd::on_Save_clicked()
{
    bool chek1{true};
    bool chek2{true};
    bool chek3{true};
    bool chek4{true};
    bool chek5{true};
    bool chekIdVar{true};

    QString tempID = ui->lineEdit->text();
   // chekID();

    chek1 = chek(tempID);
    if (chek1) {
        (*newElement).m_id = tempID.toInt();
        chekIdVar = chekID((*newElement).m_id);
    }

    (*newElement).m_category = ui->lineEditCat->text();

    (*newElement).m_name = ui ->lineEditName->text();
    (*newElement).m_producer = ui->lineEditProd->text();
    QString tempWeight = ui->lineEditWeight->text();
    chek2 = chek(tempWeight);
    if (chek2) {
        (*newElement).m_weight = tempWeight.toInt();
    }
    QString tempPrice = ui->lineEditPrice->text();
    chek3 = chek(tempPrice);
    if (chek3) {
        (*newElement).m_price = tempPrice.toInt();
    }
    QString temQuantity = ui->lineEditQuantity->text();
    chek4 = chek(temQuantity);
    if (chek4) {
        (*newElement).m_quantity = temQuantity.toInt();
    }

    (*newElement).m_cost = (*newElement).m_price * (*newElement).m_quantity;
    QString tempNumSec = ui->lineEditNumSec->text();
    chek5 = chek(tempNumSec);

    if (chek5) {
        (*newElement).m_sectionNumber = tempNumSec.toInt();
    }

    if ((!chekEmpty((*newElement).m_category)) || (!chekEmpty((*newElement).m_name)) || (!chekEmpty((*newElement).m_producer))) {
       (new QErrorMessage(this))->showMessage("Пожалуйста, не оставляйте поле пустым. Повторите ввод.");
    }

    if (!chek1) {
        (new QErrorMessage(this))->showMessage("Некорректный ввод ID! Пожалуйста, повторите ввод, используя только цифры и не оставляя поле пустым.");
    }
    if (!chek2) {
        (new QErrorMessage(this))->showMessage("Некорректный ввод веса! Пожалуйста, повторите ввод, используя только цифры и не оставляя поле пустым.");
    }
    if (!chek3) {
        (new QErrorMessage(this))->showMessage("Некорректный ввод цены! Пожалуйста, повторите ввод, используя только цифры и не оставляя поле пустым.");
    }
    if (!chek4) {
        (new QErrorMessage(this))->showMessage("Некорректный ввод количества! Пожалуйста, повторите ввод, используя только цифры и не оставляя поле пустым.");
    }
    if (!chek5) {
        (new QErrorMessage(this))->showMessage("Некорректный ввод номера секции! Пожалуйста, повторите ввод, используя только цифры и не оставляя поле пустым.");
    }
    if (!chekIdVar) {
        (new QErrorMessage(this))->showMessage("Данный ID уже существует. Пожалуйста, повторите ввод.");
    }

    isOk = true;
    if (chek1 && chek2 && chek3 && chek4 && chek5 && chekIdVar) {
        close();
    }
    else {
        isOk = false;
    }
}

bool TestAdd::chek(QString str)
{
    if (str.size() == 0) {
        return false;
    }
    for (int i = 0; i < str.size(); i++) {
        if ((str[i]>= '0') && (str[i] <= '9')) {
            continue;
        }
        else {
            return false;
        }

    }
    return true;
}

bool TestAdd::chekID(int id)
{
    for (int i = 0; i < us_products->size(); i++) {
        if (id == (*us_products)[i].m_id) {
            return false;
        }
    }
    return true;
}

bool TestAdd::chekEmpty(QString str)
{
    if (str.size() == 0) {
        return false;
    }
    return true;
}




