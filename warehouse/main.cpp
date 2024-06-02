#include "mainwindow.h"
#include "table.h"
#include <QApplication>

const int MAX_SYMBOL = 10;

int FixNumber(int* greet, QString EnteredValue) {
    QChar symbol{};
    bool IsntOk{ true };
    while (IsntOk) {
        IsntOk = false;
        if (EnteredValue.length() > MAX_SYMBOL) {
            //cout << "Вы превысили количество допустимых значений! ";
            IsntOk = true;
        }
        else {
            for (int i = 0; i < EnteredValue.length(); i++) {
                symbol = EnteredValue[i];
                if ((symbol <= '9') && (symbol >= '0')) {
                    IsntOk = false;
                }
                else {
                    //cout << "~Некорректный ввод! В вашей записи присутствуют лишние символы~ " << "\n";
                    IsntOk = true;
                    break;
                }
            }
        }
        if (IsntOk) {


        }
    }
    return EnteredValue.toInt();
}

int main(int argc, char *argv[])
{

    QApplication a(argc, argv);
    a.setStyle("fusion");

    QPalette m_pal;
    m_pal.setColor(QPalette::Active, QPalette::Window, QColor(204, 255, 255));
    m_pal.setColor(QPalette::Active, QPalette::WindowText, QColor(0, 0, 74));
    m_pal.setColor(QPalette::Active, QPalette::Button, QColor(153, 153, 255));
    m_pal.setColor(QPalette::Active, QPalette::ButtonText, QColor(0, 0, 74));

    MainWindow w;
    w.setPalette(m_pal);
    w.setAutoFillBackground(true);
    w.setWindowTitle("Склад");
    w.show();

    return a.exec();
}
