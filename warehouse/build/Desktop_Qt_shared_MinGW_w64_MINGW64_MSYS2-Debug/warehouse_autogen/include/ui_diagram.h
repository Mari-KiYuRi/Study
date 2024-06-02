/********************************************************************************
** Form generated from reading UI file 'diagram.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIAGRAM_H
#define UI_DIAGRAM_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Diagram
{
public:
    QLabel *label;

    void setupUi(QWidget *Diagram)
    {
        if (Diagram->objectName().isEmpty())
            Diagram->setObjectName("Diagram");
        Diagram->resize(777, 524);
        QIcon icon;
        icon.addFile(QString::fromUtf8("../../../../Mari/Pictures/pngtree-realistic-3d-rag-mop-and-plastic-bucket-png-image_6086440.png"), QSize(), QIcon::Normal, QIcon::Off);
        Diagram->setWindowIcon(icon);
        label = new QLabel(Diagram);
        label->setObjectName("label");
        label->setGeometry(QRect(270, 80, 281, 20));
        QFont font;
        font.setFamilies({QString::fromUtf8("Century Gothic")});
        font.setPointSize(11);
        label->setFont(font);

        retranslateUi(Diagram);

        QMetaObject::connectSlotsByName(Diagram);
    } // setupUi

    void retranslateUi(QWidget *Diagram)
    {
        Diagram->setWindowTitle(QCoreApplication::translate("Diagram", "Form", nullptr));
        label->setText(QCoreApplication::translate("Diagram", "\320\224\320\270\320\260\320\263\321\200\320\260\320\274\320\274\320\260 \320\277\320\276 \320\272\320\260\321\202\320\265\320\263\320\276\321\200\320\270\321\217\320\274", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Diagram: public Ui_Diagram {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIAGRAM_H
