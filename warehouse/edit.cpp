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
