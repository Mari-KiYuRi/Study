#include "edit.h"
#include "ui_edit.h"
 
Edit::Edit(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Edit)
{
    ui->setupUi(this);
    ui->BoxEdit->currentIndex();
}
 
void Edit::setArray(QList<product> *f_prodocts){
    us_products = f_prodocts;
}
 
Edit::~Edit() {
    delete ui;
}
 
void Edit::on_Ready_clicked() {
    bool chek1{true};
    bool chek2{true};
    bool chekIdVar{true};

    int m_count = (*us_products).size();
    int index = ui->BoxEdit->currentIndex();
    int temp = 0;
    QString id = ui->lineEditID->text();
    chek1 = chek(id);
    if (chek1) {
        for (int i{}; i < m_count; i++) {
            if (id.toInt() == (*us_products)[i].m_id) {
                temp = i;
                break;
            }
        }
        chekIdVar = chekID(id.toInt());
    }
    QString newValue = ui->lineEdit->text();
    chek2 = chek(newValue);
    if (chek2 && chekIdVar) {
    if (index == 0){
        (*us_products)[temp].m_quantity = newValue.toInt();
        (*us_products)[temp].m_cost = (*us_products)[temp].m_quantity * (*us_products)[temp].m_price;
    }
    else if (index == 1){
        (*us_products)[temp].m_sectionNumber = newValue.toInt();
    }
    }
    if (!chekIdVar) {
        (new QErrorMessage(this))->showMessage("Товар с введённым ID не найден. Пожалуйста, повторите ввод.");
    }
    if (!chek1) {
        (new QErrorMessage(this))->showMessage("Некорректный ввод ID! Пожалуйста, повторите ввод, используя только цифры и не оставляя поле пустым.");
    }
    if (!chek2) {
         (new QErrorMessage(this))->showMessage("Некорректный ввод! Пожалуйста, повторите ввод, используя только цифры и не оставляя поле пустым.");
    }
    //newElement.m_category = ui->lineEdit->text();
    // QMessageBox::information(this,"Title", ui->BoxEdit->currentText());
    isOk = true;
    if(chek1 && chek2 && chekIdVar) {
        close();
    }
}

bool Edit::chek(QString str)
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

bool Edit::chekID(int id)
{
    for (int i = 0; i < us_products->size(); i++) {
        if (id == (*us_products)[i].m_id) {
            return true;
        }
    }
    return false;
}
