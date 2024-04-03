/********************************************************************************
** Form generated from reading UI file 'RvizWrapper.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RVIZWRAPPER_H
#define UI_RVIZWRAPPER_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "spinner_widget/WaitingSpinnerWidget.h"

QT_BEGIN_NAMESPACE

class Ui_RvizWrapperWidget
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widgetButtons;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButtonDiscardRviz;
    QWidget *widgetLoadRviz;
    QVBoxLayout *verticalLayout_3;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButtonLoadRviz;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer_2;
    QWidget *widgetWaitingScreen;
    QVBoxLayout *verticalLayout_4;
    QLabel *spinner_info;
    QHBoxLayout *horizontalLayout;
    spinner_widget::WaitingSpinnerWidget *spinner;
    QSpacerItem *verticalSpacer;
    QWidget *widgetRviz;
    QVBoxLayout *verticalLayoutRviz;

    void setupUi(QWidget *RvizWrapperWidget)
    {
        if (RvizWrapperWidget->objectName().isEmpty())
            RvizWrapperWidget->setObjectName(QString::fromUtf8("RvizWrapperWidget"));
        RvizWrapperWidget->setEnabled(true);
        RvizWrapperWidget->resize(499, 400);
        RvizWrapperWidget->setMinimumSize(QSize(400, 400));
        verticalLayout = new QVBoxLayout(RvizWrapperWidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        widgetButtons = new QWidget(RvizWrapperWidget);
        widgetButtons->setObjectName(QString::fromUtf8("widgetButtons"));
        horizontalLayout_3 = new QHBoxLayout(widgetButtons);
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(9, 9, 9, 0);
        horizontalSpacer_3 = new QSpacerItem(0, 10, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        pushButtonDiscardRviz = new QPushButton(widgetButtons);
        pushButtonDiscardRviz->setObjectName(QString::fromUtf8("pushButtonDiscardRviz"));
        pushButtonDiscardRviz->setMaximumSize(QSize(16, 16));
        QIcon icon;
        QString iconThemeName = QString::fromUtf8("window-close");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon = QIcon::fromTheme(iconThemeName);
        } else {
            icon.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        pushButtonDiscardRviz->setIcon(icon);

        horizontalLayout_3->addWidget(pushButtonDiscardRviz);


        verticalLayout->addWidget(widgetButtons);

        widgetLoadRviz = new QWidget(RvizWrapperWidget);
        widgetLoadRviz->setObjectName(QString::fromUtf8("widgetLoadRviz"));
        widgetLoadRviz->setMinimumSize(QSize(0, 0));
        verticalLayout_3 = new QVBoxLayout(widgetLoadRviz);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_2 = new QSpacerItem(40, 1, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        pushButtonLoadRviz = new QPushButton(widgetLoadRviz);
        pushButtonLoadRviz->setObjectName(QString::fromUtf8("pushButtonLoadRviz"));
        pushButtonLoadRviz->setMinimumSize(QSize(0, 0));

        horizontalLayout_2->addWidget(pushButtonLoadRviz);

        horizontalSpacer = new QSpacerItem(40, 1, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout_3->addLayout(horizontalLayout_2);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);


        verticalLayout->addWidget(widgetLoadRviz);

        widgetWaitingScreen = new QWidget(RvizWrapperWidget);
        widgetWaitingScreen->setObjectName(QString::fromUtf8("widgetWaitingScreen"));
        verticalLayout_4 = new QVBoxLayout(widgetWaitingScreen);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        spinner_info = new QLabel(widgetWaitingScreen);
        spinner_info->setObjectName(QString::fromUtf8("spinner_info"));
        spinner_info->setMaximumSize(QSize(16777215, 17));

        verticalLayout_4->addWidget(spinner_info);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        spinner = new spinner_widget::WaitingSpinnerWidget(widgetWaitingScreen);
        spinner->setObjectName(QString::fromUtf8("spinner"));
        spinner->setMinimumSize(QSize(10, 10));

        horizontalLayout->addWidget(spinner);


        verticalLayout_4->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer);


        verticalLayout->addWidget(widgetWaitingScreen);

        widgetRviz = new QWidget(RvizWrapperWidget);
        widgetRviz->setObjectName(QString::fromUtf8("widgetRviz"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widgetRviz->sizePolicy().hasHeightForWidth());
        widgetRviz->setSizePolicy(sizePolicy);
        widgetRviz->setMinimumSize(QSize(0, 10));
        verticalLayoutRviz = new QVBoxLayout(widgetRviz);
        verticalLayoutRviz->setSpacing(0);
        verticalLayoutRviz->setObjectName(QString::fromUtf8("verticalLayoutRviz"));
        verticalLayoutRviz->setContentsMargins(9, 0, 9, 9);

        verticalLayout->addWidget(widgetRviz);


        retranslateUi(RvizWrapperWidget);

        QMetaObject::connectSlotsByName(RvizWrapperWidget);
    } // setupUi

    void retranslateUi(QWidget *RvizWrapperWidget)
    {
        RvizWrapperWidget->setWindowTitle(QApplication::translate("RvizWrapperWidget", "RViz Wrapper", nullptr));
#ifndef QT_NO_TOOLTIP
        pushButtonDiscardRviz->setToolTip(QApplication::translate("RvizWrapperWidget", "Detach RViz", nullptr));
#endif // QT_NO_TOOLTIP
        pushButtonDiscardRviz->setText(QString());
        pushButtonLoadRviz->setText(QApplication::translate("RvizWrapperWidget", "Load RViz", nullptr));
        spinner_info->setText(QApplication::translate("RvizWrapperWidget", "If not already started, start RViz now. Waiting for RViz...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RvizWrapperWidget: public Ui_RvizWrapperWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RVIZWRAPPER_H
