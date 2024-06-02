/********************************************************************************
** Form generated from reading UI file 'edit.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDIT_H
#define UI_EDIT_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Edit
{
public:
    QLabel *label;
    QLineEdit *lineEditID;
    QComboBox *BoxEdit;
    QLineEdit *lineEdit;
    QPushButton *Ready;

    void setupUi(QDialog *Edit)
    {
        if (Edit->objectName().isEmpty())
            Edit->setObjectName("Edit");
        Edit->resize(473, 284);
        QIcon icon;
        icon.addFile(QString::fromUtf8("C:/Users/Mari/Pictures/pngtree-realistic-3d-rag-mop-and-plastic-bucket-png-image_6086440.png"), QSize(), QIcon::Normal, QIcon::Off);
        Edit->setWindowIcon(icon);
        label = new QLabel(Edit);
        label->setObjectName("label");
        label->setGeometry(QRect(60, 70, 151, 31));
        QFont font;
        font.setFamilies({QString::fromUtf8("Century Gothic")});
        font.setPointSize(11);
        label->setFont(font);
        lineEditID = new QLineEdit(Edit);
        lineEditID->setObjectName("lineEditID");
        lineEditID->setGeometry(QRect(250, 60, 161, 41));
        lineEditID->setFont(font);
        BoxEdit = new QComboBox(Edit);
        BoxEdit->addItem(QString());
        BoxEdit->addItem(QString());
        BoxEdit->setObjectName("BoxEdit");
        BoxEdit->setGeometry(QRect(50, 130, 181, 41));
        BoxEdit->setFont(font);
        lineEdit = new QLineEdit(Edit);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(250, 130, 161, 41));
        lineEdit->setFont(font);
        Ready = new QPushButton(Edit);
        Ready->setObjectName("Ready");
        Ready->setGeometry(QRect(330, 220, 121, 41));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Ink Free")});
        font1.setPointSize(11);
        font1.setBold(true);
        Ready->setFont(font1);
        Ready->setCursor(QCursor(Qt::PointingHandCursor));
        Ready->setFlat(false);

        retranslateUi(Edit);

        QMetaObject::connectSlotsByName(Edit);
    } // setupUi

    void retranslateUi(QDialog *Edit)
    {
        Edit->setWindowTitle(QCoreApplication::translate("Edit", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Edit", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 ID:", nullptr));
        BoxEdit->setItemText(0, QCoreApplication::translate("Edit", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276", nullptr));
        BoxEdit->setItemText(1, QCoreApplication::translate("Edit", "\342\204\226 \321\201\320\265\320\272\321\206\320\270\320\270", nullptr));

        Ready->setText(QCoreApplication::translate("Edit", "\320\223\320\276\321\202\320\276\320\262\320\276", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Edit: public Ui_Edit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDIT_H
