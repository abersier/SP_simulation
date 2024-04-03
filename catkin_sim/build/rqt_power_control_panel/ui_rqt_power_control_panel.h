/********************************************************************************
** Form generated from reading UI file 'rqt_power_control_panel.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RQT_POWER_CONTROL_PANEL_H
#define UI_RQT_POWER_CONTROL_PANEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RQT_Plugin_Widget
{
public:
    QVBoxLayout *verticalLayout;

    void setupUi(QWidget *RQT_Plugin_Widget)
    {
        if (RQT_Plugin_Widget->objectName().isEmpty())
            RQT_Plugin_Widget->setObjectName(QString::fromUtf8("RQT_Plugin_Widget"));
        RQT_Plugin_Widget->resize(402, 224);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(RQT_Plugin_Widget->sizePolicy().hasHeightForWidth());
        RQT_Plugin_Widget->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(RQT_Plugin_Widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));

        retranslateUi(RQT_Plugin_Widget);

        QMetaObject::connectSlotsByName(RQT_Plugin_Widget);
    } // setupUi

    void retranslateUi(QWidget *RQT_Plugin_Widget)
    {
        RQT_Plugin_Widget->setWindowTitle(QApplication::translate("RQT_Plugin_Widget", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RQT_Plugin_Widget: public Ui_RQT_Plugin_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RQT_POWER_CONTROL_PANEL_H
