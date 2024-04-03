/********************************************************************************
** Form generated from reading UI file 'power_control_panel_widget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_POWER_CONTROL_PANEL_WIDGET_H
#define UI_POWER_CONTROL_PANEL_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PowerControlPanelWidget
{
public:
    QGridLayout *gridLayout_3;
    QGroupBox *groupBox_missionManager_2;
    QGridLayout *gridLayout;
    QGridLayout *gridLayout_5;
    QPushButton *pushButton_enableActuators;
    QPushButton *pushButton_disableActuators;
    QLabel *actuatorPowerInfo;

    void setupUi(QWidget *PowerControlPanelWidget)
    {
        if (PowerControlPanelWidget->objectName().isEmpty())
            PowerControlPanelWidget->setObjectName(QString::fromUtf8("PowerControlPanelWidget"));
        PowerControlPanelWidget->resize(353, 138);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(PowerControlPanelWidget->sizePolicy().hasHeightForWidth());
        PowerControlPanelWidget->setSizePolicy(sizePolicy);
        gridLayout_3 = new QGridLayout(PowerControlPanelWidget);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        groupBox_missionManager_2 = new QGroupBox(PowerControlPanelWidget);
        groupBox_missionManager_2->setObjectName(QString::fromUtf8("groupBox_missionManager_2"));
        groupBox_missionManager_2->setMinimumSize(QSize(261, 0));
        QFont font;
        font.setPointSize(12);
        groupBox_missionManager_2->setFont(font);
        gridLayout = new QGridLayout(groupBox_missionManager_2);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout_5 = new QGridLayout();
        gridLayout_5->setSpacing(6);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        pushButton_enableActuators = new QPushButton(groupBox_missionManager_2);
        pushButton_enableActuators->setObjectName(QString::fromUtf8("pushButton_enableActuators"));
        QFont font1;
        font1.setPointSize(10);
        pushButton_enableActuators->setFont(font1);

        gridLayout_5->addWidget(pushButton_enableActuators, 1, 0, 1, 1);

        pushButton_disableActuators = new QPushButton(groupBox_missionManager_2);
        pushButton_disableActuators->setObjectName(QString::fromUtf8("pushButton_disableActuators"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton_disableActuators->sizePolicy().hasHeightForWidth());
        pushButton_disableActuators->setSizePolicy(sizePolicy1);
        pushButton_disableActuators->setMinimumSize(QSize(0, 0));
        pushButton_disableActuators->setFont(font1);

        gridLayout_5->addWidget(pushButton_disableActuators, 2, 0, 1, 1);


        gridLayout->addLayout(gridLayout_5, 0, 0, 1, 1);

        actuatorPowerInfo = new QLabel(groupBox_missionManager_2);
        actuatorPowerInfo->setObjectName(QString::fromUtf8("actuatorPowerInfo"));

        gridLayout->addWidget(actuatorPowerInfo, 0, 1, 1, 1);


        gridLayout_3->addWidget(groupBox_missionManager_2, 0, 0, 1, 1);


        retranslateUi(PowerControlPanelWidget);

        QMetaObject::connectSlotsByName(PowerControlPanelWidget);
    } // setupUi

    void retranslateUi(QWidget *PowerControlPanelWidget)
    {
        PowerControlPanelWidget->setWindowTitle(QApplication::translate("PowerControlPanelWidget", "PathCreatorPlugin", nullptr));
        groupBox_missionManager_2->setTitle(QApplication::translate("PowerControlPanelWidget", "Power Control", nullptr));
#ifndef QT_NO_TOOLTIP
        pushButton_enableActuators->setToolTip(QApplication::translate("PowerControlPanelWidget", "Triggers rosservice to enable the actuators.", nullptr));
#endif // QT_NO_TOOLTIP
        pushButton_enableActuators->setText(QApplication::translate("PowerControlPanelWidget", "Enable Actuators", nullptr));
#ifndef QT_NO_TOOLTIP
        pushButton_disableActuators->setToolTip(QApplication::translate("PowerControlPanelWidget", "Triggers rosservice to disable the actuators.", nullptr));
#endif // QT_NO_TOOLTIP
        pushButton_disableActuators->setText(QApplication::translate("PowerControlPanelWidget", "Disabled Actuators", nullptr));
        actuatorPowerInfo->setText(QApplication::translate("PowerControlPanelWidget", "Info", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PowerControlPanelWidget: public Ui_PowerControlPanelWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_POWER_CONTROL_PANEL_WIDGET_H
