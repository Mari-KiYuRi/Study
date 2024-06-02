/********************************************************************************
** Form generated from reading UI file 'table.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TABLE_H
#define UI_TABLE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Table
{
public:
    QPushButton *Exit2;
    QTableWidget *tableWidget;
    QPushButton *AddElement;
    QPushButton *Search;
    QPushButton *ReportButton;
    QLabel *labelReport;
    QPushButton *edit_table;
    QLabel *label_5;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QPushButton *SortCategory1;
    QPushButton *SortCategory2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_2;
    QPushButton *SortProducer1;
    QPushButton *SortProducer2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QPushButton *SortQuantity1;
    QPushButton *SortQuantity2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_4;
    QPushButton *SortNumSec1;
    QPushButton *SortNumSec2;
    QPushButton *Diagram;
    QLabel *label_6;

    void setupUi(QWidget *Table)
    {
        if (Table->objectName().isEmpty())
            Table->setObjectName("Table");
        Table->resize(1266, 647);
        QIcon icon;
        icon.addFile(QString::fromUtf8("../../../Pictures/\320\262\320\265\320\264\321\200\320\276.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Table->setWindowIcon(icon);
        Exit2 = new QPushButton(Table);
        Exit2->setObjectName("Exit2");
        Exit2->setGeometry(QRect(980, 580, 191, 41));
        QFont font;
        font.setFamilies({QString::fromUtf8("Ink Free")});
        font.setPointSize(11);
        font.setBold(true);
        Exit2->setFont(font);
        Exit2->setCursor(QCursor(Qt::PointingHandCursor));
        tableWidget = new QTableWidget(Table);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(10, 150, 921, 481));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Century Gothic")});
        tableWidget->setFont(font1);
        tableWidget->setEditTriggers(QAbstractItemView::EditTrigger::NoEditTriggers);
        AddElement = new QPushButton(Table);
        AddElement->setObjectName("AddElement");
        AddElement->setGeometry(QRect(980, 70, 191, 41));
        AddElement->setFont(font);
        AddElement->setCursor(QCursor(Qt::PointingHandCursor));
        Search = new QPushButton(Table);
        Search->setObjectName("Search");
        Search->setGeometry(QRect(980, 190, 191, 41));
        Search->setFont(font);
        Search->setCursor(QCursor(Qt::PointingHandCursor));
        ReportButton = new QPushButton(Table);
        ReportButton->setObjectName("ReportButton");
        ReportButton->setGeometry(QRect(980, 310, 191, 41));
        ReportButton->setFont(font);
        ReportButton->setCursor(QCursor(Qt::PointingHandCursor));
        labelReport = new QLabel(Table);
        labelReport->setObjectName("labelReport");
        labelReport->setGeometry(QRect(950, 370, 271, 31));
        labelReport->setFont(font);
        labelReport->setCursor(QCursor(Qt::ArrowCursor));
        labelReport->setAlignment(Qt::AlignmentFlag::AlignCenter);
        edit_table = new QPushButton(Table);
        edit_table->setObjectName("edit_table");
        edit_table->setGeometry(QRect(980, 130, 191, 41));
        edit_table->setFont(font);
        edit_table->setCursor(QCursor(Qt::PointingHandCursor));
        label_5 = new QLabel(Table);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(360, 10, 131, 20));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Century Gothic")});
        font2.setPointSize(11);
        font2.setBold(true);
        label_5->setFont(font2);
        layoutWidget = new QWidget(Table);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(30, 50, 844, 81));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label = new QLabel(layoutWidget);
        label->setObjectName("label");
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Century Gothic")});
        font3.setPointSize(10);
        label->setFont(font3);

        horizontalLayout_2->addWidget(label);

        SortCategory1 = new QPushButton(layoutWidget);
        SortCategory1->setObjectName("SortCategory1");
        SortCategory1->setFont(font);
        SortCategory1->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_2->addWidget(SortCategory1);

        SortCategory2 = new QPushButton(layoutWidget);
        SortCategory2->setObjectName("SortCategory2");
        SortCategory2->setFont(font);
        SortCategory2->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_2->addWidget(SortCategory2);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");
        label_2->setFont(font3);

        horizontalLayout_4->addWidget(label_2);

        SortProducer1 = new QPushButton(layoutWidget);
        SortProducer1->setObjectName("SortProducer1");
        SortProducer1->setFont(font);
        SortProducer1->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_4->addWidget(SortProducer1);

        SortProducer2 = new QPushButton(layoutWidget);
        SortProducer2->setObjectName("SortProducer2");
        SortProducer2->setFont(font);
        SortProducer2->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_4->addWidget(SortProducer2);


        verticalLayout_2->addLayout(horizontalLayout_4);


        horizontalLayout_5->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName("label_3");
        label_3->setFont(font3);

        horizontalLayout_3->addWidget(label_3);

        SortQuantity1 = new QPushButton(layoutWidget);
        SortQuantity1->setObjectName("SortQuantity1");
        SortQuantity1->setFont(font);
        SortQuantity1->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_3->addWidget(SortQuantity1);

        SortQuantity2 = new QPushButton(layoutWidget);
        SortQuantity2->setObjectName("SortQuantity2");
        SortQuantity2->setFont(font);
        SortQuantity2->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_3->addWidget(SortQuantity2);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName("label_4");
        label_4->setFont(font3);

        horizontalLayout->addWidget(label_4);

        SortNumSec1 = new QPushButton(layoutWidget);
        SortNumSec1->setObjectName("SortNumSec1");
        SortNumSec1->setFont(font);
        SortNumSec1->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout->addWidget(SortNumSec1);

        SortNumSec2 = new QPushButton(layoutWidget);
        SortNumSec2->setObjectName("SortNumSec2");
        SortNumSec2->setFont(font);
        SortNumSec2->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout->addWidget(SortNumSec2);


        verticalLayout->addLayout(horizontalLayout);


        horizontalLayout_5->addLayout(verticalLayout);

        Diagram = new QPushButton(Table);
        Diagram->setObjectName("Diagram");
        Diagram->setGeometry(QRect(980, 250, 191, 41));
        Diagram->setFont(font);
        Diagram->setCursor(QCursor(Qt::PointingHandCursor));
        label_6 = new QLabel(Table);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(1020, 340, 221, 231));
        label_6->setPixmap(QPixmap(QString::fromUtf8("../../../Pictures/app.ico")));
        label_6->raise();
        Exit2->raise();
        tableWidget->raise();
        AddElement->raise();
        Search->raise();
        ReportButton->raise();
        labelReport->raise();
        edit_table->raise();
        label_5->raise();
        layoutWidget->raise();
        Diagram->raise();

        retranslateUi(Table);

        QMetaObject::connectSlotsByName(Table);
    } // setupUi

    void retranslateUi(QWidget *Table)
    {
        Table->setWindowTitle(QCoreApplication::translate("Table", "Form", nullptr));
        Exit2->setText(QCoreApplication::translate("Table", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", nullptr));
        AddElement->setText(QCoreApplication::translate("Table", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \321\215\320\273\320\265\320\274\320\265\320\275\321\202", nullptr));
        Search->setText(QCoreApplication::translate("Table", "\320\237\320\276\320\270\321\201\320\272", nullptr));
        ReportButton->setText(QCoreApplication::translate("Table", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214 \320\276\321\202\321\207\321\221\321\202 ", nullptr));
        labelReport->setText(QString());
        edit_table->setText(QCoreApplication::translate("Table", "\320\240\320\265\320\264\320\260\320\272\321\202\320\270\321\200\320\276\320\262\320\260\321\202\321\214", nullptr));
        label_5->setText(QCoreApplication::translate("Table", "\320\241\320\276\321\200\321\202\320\270\321\200\320\276\320\262\320\272\320\260", nullptr));
        label->setText(QCoreApplication::translate("Table", "\320\277\320\276 \320\272\320\260\321\202\320\265\320\263\320\276\321\200\320\270\320\270:          ", nullptr));
        SortCategory1->setText(QCoreApplication::translate("Table", "\320\220-\320\257", nullptr));
        SortCategory2->setText(QCoreApplication::translate("Table", "\320\257-\320\220", nullptr));
        label_2->setText(QCoreApplication::translate("Table", "\320\277\320\276 \320\277\321\200\320\276\320\270\320\267\320\262\320\276\320\264\320\270\321\202\320\265\320\273\321\216: ", nullptr));
        SortProducer1->setText(QCoreApplication::translate("Table", "\320\220-\320\257", nullptr));
        SortProducer2->setText(QCoreApplication::translate("Table", "\320\257-\320\220", nullptr));
        label_3->setText(QCoreApplication::translate("Table", "\320\277\320\276 \320\272\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\321\203         ", nullptr));
        SortQuantity1->setText(QCoreApplication::translate("Table", "\320\237\320\276 \320\262\320\276\320\267\321\200\320\260\321\201\321\202\320\260\320\275\320\270\321\216 \342\206\221", nullptr));
        SortQuantity2->setText(QCoreApplication::translate("Table", "\320\237\320\276 \321\203\320\261\321\213\320\262\320\260\320\275\320\270\321\216 \342\206\223 ", nullptr));
        label_4->setText(QCoreApplication::translate("Table", "\320\277\320\276 \320\275\320\276\320\274\320\265\321\200\321\203 \321\201\320\265\320\272\321\206\320\270\320\270:", nullptr));
        SortNumSec1->setText(QCoreApplication::translate("Table", "\320\237\320\276 \320\262\320\276\320\267\321\200\320\260\321\201\321\202\320\260\320\275\320\270\321\216 \342\206\221", nullptr));
        SortNumSec2->setText(QCoreApplication::translate("Table", "\320\237\320\276 \321\203\320\261\321\213\320\262\320\260\320\275\320\270\321\216 \342\206\223 ", nullptr));
        Diagram->setText(QCoreApplication::translate("Table", "\320\224\320\270\320\260\320\263\321\200\320\260\320\274\320\274\320\260", nullptr));
        label_6->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Table: public Ui_Table {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TABLE_H
