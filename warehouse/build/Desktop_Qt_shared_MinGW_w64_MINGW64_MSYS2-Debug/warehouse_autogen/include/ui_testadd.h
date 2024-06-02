/********************************************************************************
** Form generated from reading UI file 'testadd.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TESTADD_H
#define UI_TESTADD_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TestAdd
{
public:
    QPushButton *Save;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_3;
    QLabel *label;
    QLabel *label_3;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEdit;
    QLineEdit *lineEditCat;
    QLineEdit *lineEditName;
    QLineEdit *lineEditProd;
    QLineEdit *lineEditWeight;
    QLineEdit *lineEditPrice;
    QLineEdit *lineEditQuantity;
    QLineEdit *lineEditNumSec;

    void setupUi(QDialog *TestAdd)
    {
        if (TestAdd->objectName().isEmpty())
            TestAdd->setObjectName("TestAdd");
        TestAdd->resize(688, 504);
        QIcon icon;
        icon.addFile(QString::fromUtf8("C:/Users/Mari/Pictures/pngtree-realistic-3d-rag-mop-and-plastic-bucket-png-image_6086440.png"), QSize(), QIcon::Normal, QIcon::Off);
        TestAdd->setWindowIcon(icon);
        Save = new QPushButton(TestAdd);
        Save->setObjectName("Save");
        Save->setGeometry(QRect(520, 430, 131, 41));
        QFont font;
        font.setFamilies({QString::fromUtf8("Ink Free")});
        font.setPointSize(11);
        font.setBold(true);
        Save->setFont(font);
        Save->setCursor(QCursor(Qt::PointingHandCursor));
        layoutWidget = new QWidget(TestAdd);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(570, 210, 42, 91));
        verticalLayout_3 = new QVBoxLayout(layoutWidget);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName("label");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Century Gothic")});
        font1.setPointSize(11);
        label->setFont(font1);

        verticalLayout_3->addWidget(label);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName("label_3");
        label_3->setFont(font1);

        verticalLayout_3->addWidget(label_3);

        layoutWidget1 = new QWidget(TestAdd);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(50, 30, 501, 371));
        horizontalLayout = new QHBoxLayout(layoutWidget1);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName("label_2");
        label_2->setFont(font1);
        label_2->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        label_2->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_2->addWidget(label_2);

        label_4 = new QLabel(layoutWidget1);
        label_4->setObjectName("label_4");
        label_4->setFont(font1);
        label_4->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        label_4->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_2->addWidget(label_4);

        label_5 = new QLabel(layoutWidget1);
        label_5->setObjectName("label_5");
        label_5->setFont(font1);
        label_5->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        label_5->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_2->addWidget(label_5);

        label_6 = new QLabel(layoutWidget1);
        label_6->setObjectName("label_6");
        label_6->setFont(font1);
        label_6->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        label_6->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_2->addWidget(label_6);

        label_7 = new QLabel(layoutWidget1);
        label_7->setObjectName("label_7");
        label_7->setFont(font1);
        label_7->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        label_7->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_2->addWidget(label_7);

        label_8 = new QLabel(layoutWidget1);
        label_8->setObjectName("label_8");
        label_8->setFont(font1);
        label_8->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        label_8->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_2->addWidget(label_8);

        label_9 = new QLabel(layoutWidget1);
        label_9->setObjectName("label_9");
        label_9->setFont(font1);
        label_9->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        label_9->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_2->addWidget(label_9);

        label_10 = new QLabel(layoutWidget1);
        label_10->setObjectName("label_10");
        label_10->setFont(font1);
        label_10->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        label_10->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_2->addWidget(label_10);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        lineEdit = new QLineEdit(layoutWidget1);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setFont(font1);

        verticalLayout->addWidget(lineEdit);

        lineEditCat = new QLineEdit(layoutWidget1);
        lineEditCat->setObjectName("lineEditCat");
        lineEditCat->setFont(font1);

        verticalLayout->addWidget(lineEditCat);

        lineEditName = new QLineEdit(layoutWidget1);
        lineEditName->setObjectName("lineEditName");
        lineEditName->setFont(font1);

        verticalLayout->addWidget(lineEditName);

        lineEditProd = new QLineEdit(layoutWidget1);
        lineEditProd->setObjectName("lineEditProd");
        lineEditProd->setFont(font1);

        verticalLayout->addWidget(lineEditProd);

        lineEditWeight = new QLineEdit(layoutWidget1);
        lineEditWeight->setObjectName("lineEditWeight");
        lineEditWeight->setFont(font1);

        verticalLayout->addWidget(lineEditWeight);

        lineEditPrice = new QLineEdit(layoutWidget1);
        lineEditPrice->setObjectName("lineEditPrice");
        lineEditPrice->setFont(font1);

        verticalLayout->addWidget(lineEditPrice);

        lineEditQuantity = new QLineEdit(layoutWidget1);
        lineEditQuantity->setObjectName("lineEditQuantity");
        lineEditQuantity->setFont(font1);

        verticalLayout->addWidget(lineEditQuantity);

        lineEditNumSec = new QLineEdit(layoutWidget1);
        lineEditNumSec->setObjectName("lineEditNumSec");
        lineEditNumSec->setFont(font1);

        verticalLayout->addWidget(lineEditNumSec);


        horizontalLayout->addLayout(verticalLayout);


        retranslateUi(TestAdd);

        QMetaObject::connectSlotsByName(TestAdd);
    } // setupUi

    void retranslateUi(QDialog *TestAdd)
    {
        TestAdd->setWindowTitle(QCoreApplication::translate("TestAdd", "Dialog", nullptr));
        Save->setText(QCoreApplication::translate("TestAdd", "\320\223\320\276\321\202\320\276\320\262\320\276", nullptr));
        label->setText(QCoreApplication::translate("TestAdd", "\320\263\321\200.", nullptr));
        label_3->setText(QCoreApplication::translate("TestAdd", "\321\200\321\203\320\261.", nullptr));
        label_2->setText(QCoreApplication::translate("TestAdd", "\320\235\320\276\320\274\320\265\321\200 ID:", nullptr));
        label_4->setText(QCoreApplication::translate("TestAdd", "\320\232\320\260\321\202\320\265\320\263\320\276\321\200\320\270\321\217:", nullptr));
        label_5->setText(QCoreApplication::translate("TestAdd", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265 \321\202\320\276\320\262\320\260\321\200\320\260:", nullptr));
        label_6->setText(QCoreApplication::translate("TestAdd", "\320\237\321\200\320\276\320\270\320\267\320\262\320\276\320\264\320\270\321\202\320\265\320\273\321\214:", nullptr));
        label_7->setText(QCoreApplication::translate("TestAdd", "\320\222\320\265\321\201:", nullptr));
        label_8->setText(QCoreApplication::translate("TestAdd", "\320\246\320\265\320\275\320\260:", nullptr));
        label_9->setText(QCoreApplication::translate("TestAdd", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \321\202\320\276\320\262\320\260\321\200\320\276\320\262 \320\275\320\260 \321\201\320\272\320\273\320\260\320\264\320\265:", nullptr));
        label_10->setText(QCoreApplication::translate("TestAdd", "\320\235\320\276\320\274\320\265\321\200 \321\201\320\265\320\272\321\206\320\270\320\270:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TestAdd: public Ui_TestAdd {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TESTADD_H
