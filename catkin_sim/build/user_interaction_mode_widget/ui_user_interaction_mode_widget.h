/********************************************************************************
** Form generated from reading UI file 'user_interaction_mode_widget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USER_INTERACTION_MODE_WIDGET_H
#define UI_USER_INTERACTION_MODE_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_userInteractionModeWidget
{
public:
    QGridLayout *gridLayout_3;
    QGroupBox *groupBox_missionManager_2;
    QGridLayout *gridLayout;
    QGridLayout *gridLayout_5;
    QPushButton *pushButton_rcuControl;
    QPushButton *pushButton_guiControl;
    QPushButton *pushButton_autoControl;
    QLabel *controlAuthorithyInfo;

    void setupUi(QWidget *userInteractionModeWidget)
    {
        if (userInteractionModeWidget->objectName().isEmpty())
            userInteractionModeWidget->setObjectName(QString::fromUtf8("userInteractionModeWidget"));
        userInteractionModeWidget->resize(353, 138);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(userInteractionModeWidget->sizePolicy().hasHeightForWidth());
        userInteractionModeWidget->setSizePolicy(sizePolicy);
        gridLayout_3 = new QGridLayout(userInteractionModeWidget);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        groupBox_missionManager_2 = new QGroupBox(userInteractionModeWidget);
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
        pushButton_rcuControl = new QPushButton(groupBox_missionManager_2);
        pushButton_rcuControl->setObjectName(QString::fromUtf8("pushButton_rcuControl"));
        pushButton_rcuControl->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton_rcuControl->sizePolicy().hasHeightForWidth());
        pushButton_rcuControl->setSizePolicy(sizePolicy1);
        pushButton_rcuControl->setMinimumSize(QSize(0, 0));
        QFont font1;
        font1.setPointSize(10);
        pushButton_rcuControl->setFont(font1);

        gridLayout_5->addWidget(pushButton_rcuControl, 3, 0, 1, 1);

        pushButton_guiControl = new QPushButton(groupBox_missionManager_2);
        pushButton_guiControl->setObjectName(QString::fromUtf8("pushButton_guiControl"));
        pushButton_guiControl->setEnabled(true);
        pushButton_guiControl->setFont(font1);

        gridLayout_5->addWidget(pushButton_guiControl, 2, 0, 1, 1);

        pushButton_autoControl = new QPushButton(groupBox_missionManager_2);
        pushButton_autoControl->setObjectName(QString::fromUtf8("pushButton_autoControl"));
        pushButton_autoControl->setEnabled(true);
        pushButton_autoControl->setFont(font1);

        gridLayout_5->addWidget(pushButton_autoControl, 1, 0, 1, 1);


        gridLayout->addLayout(gridLayout_5, 0, 0, 1, 1);

        controlAuthorithyInfo = new QLabel(groupBox_missionManager_2);
        controlAuthorithyInfo->setObjectName(QString::fromUtf8("controlAuthorithyInfo"));

        gridLayout->addWidget(controlAuthorithyInfo, 0, 1, 1, 1);


        gridLayout_3->addWidget(groupBox_missionManager_2, 0, 0, 1, 1);


        retranslateUi(userInteractionModeWidget);

        QMetaObject::connectSlotsByName(userInteractionModeWidget);
    } // setupUi

    void retranslateUi(QWidget *userInteractionModeWidget)
    {
        userInteractionModeWidget->setWindowTitle(QApplication::translate("userInteractionModeWidget", "PathCreatorPlugin", nullptr));
        groupBox_missionManager_2->setTitle(QApplication::translate("userInteractionModeWidget", "User Interaction Mode", nullptr));
#ifndef QT_NO_TOOLTIP
        pushButton_rcuControl->setToolTip(QApplication::translate("userInteractionModeWidget", "Triggers service to control the robot by the GUI.", nullptr));
#endif // QT_NO_TOOLTIP
        pushButton_rcuControl->setText(QApplication::translate("userInteractionModeWidget", "RCU Control", nullptr));
#ifndef QT_NO_TOOLTIP
        pushButton_guiControl->setToolTip(QApplication::translate("userInteractionModeWidget", "Triggers service to control the robot by the GUI.", nullptr));
#endif // QT_NO_TOOLTIP
        pushButton_guiControl->setText(QApplication::translate("userInteractionModeWidget", "GUI Control", nullptr));
        pushButton_autoControl->setText(QApplication::translate("userInteractionModeWidget", "Autonomous", nullptr));
        controlAuthorithyInfo->setText(QApplication::translate("userInteractionModeWidget", "Info", nullptr));
    } // retranslateUi

};

namespace Ui {
    class userInteractionModeWidget: public Ui_userInteractionModeWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USER_INTERACTION_MODE_WIDGET_H
