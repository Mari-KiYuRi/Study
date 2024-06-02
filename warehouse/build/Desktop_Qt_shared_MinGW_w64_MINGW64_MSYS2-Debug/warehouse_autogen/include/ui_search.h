/********************************************************************************
** Form generated from reading UI file 'search.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCH_H
#define UI_SEARCH_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_Search
{
public:
    QComboBox *comboBox;
    QTableWidget *tableWidget;
    QPushButton *SearchButton;
    QPushButton *ExitButton;
    QLineEdit *lineEdit;

    void setupUi(QDialog *Search)
    {
        if (Search->objectName().isEmpty())
            Search->setObjectName("Search");
        Search->resize(1031, 650);
        QIcon icon;
        icon.addFile(QString::fromUtf8("C:/Users/Mari/Pictures/pngtree-realistic-3d-rag-mop-and-plastic-bucket-png-image_6086440.png"), QSize(), QIcon::Normal, QIcon::Off);
        Search->setWindowIcon(icon);
        comboBox = new QComboBox(Search);
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(50, 20, 281, 41));
        QFont font;
        font.setFamilies({QString::fromUtf8("Century Gothic")});
        font.setPointSize(11);
        comboBox->setFont(font);
        tableWidget = new QTableWidget(Search);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(40, 80, 971, 481));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Century Gothic")});
        tableWidget->setFont(font1);
        SearchButton = new QPushButton(Search);
        SearchButton->setObjectName("SearchButton");
        SearchButton->setGeometry(QRect(760, 20, 141, 41));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Ink Free")});
        font2.setPointSize(11);
        font2.setBold(true);
        SearchButton->setFont(font2);
        SearchButton->setCursor(QCursor(Qt::PointingHandCursor));
        ExitButton = new QPushButton(Search);
        ExitButton->setObjectName("ExitButton");
        ExitButton->setGeometry(QRect(870, 570, 141, 41));
        ExitButton->setFont(font2);
        ExitButton->setCursor(QCursor(Qt::PointingHandCursor));
        lineEdit = new QLineEdit(Search);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(340, 20, 301, 41));
        lineEdit->setFont(font);

        retranslateUi(Search);

        QMetaObject::connectSlotsByName(Search);
    } // setupUi

    void retranslateUi(QDialog *Search)
    {
        Search->setWindowTitle(QCoreApplication::translate("Search", "Dialog", nullptr));
        SearchButton->setText(QCoreApplication::translate("Search", "\320\235\320\260\320\271\321\202\320\270", nullptr));
        ExitButton->setText(QCoreApplication::translate("Search", "\320\222\321\213\321\205\320\276\320\264", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Search: public Ui_Search {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCH_H
