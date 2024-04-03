/********************************************************************************
** Form generated from reading UI file 'joypad_plugin.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_JOYPAD_PLUGIN_H
#define UI_JOYPAD_PLUGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LocoJoypad
{
public:
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QGridLayout *gridLayout_3;
    QPushButton *pushButtonLeft;
    QPushButton *pushButtonDown;
    QPushButton *pushButtonRight;
    QPushButton *pushButtonUp;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout_4;
    QPushButton *pushButtonSelect;
    QPushButton *pushButtonStart;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer_3;
    QPushButton *pushButtonStickReset;
    QGridLayout *gridLayout;
    QPushButton *pushButtonA;
    QPushButton *pushButtonB;
    QPushButton *pushButtonY;
    QPushButton *pushButtonX;
    QSpacerItem *horizontalSpacer;
    QFrame *frame_joystick_slider;
    QPushButton *pushButtonResetAxes;
    QSlider *axisXLeft;
    QSlider *axisYLeft;
    QSlider *axisXRight;
    QSlider *axisYRight;
    QFrame *frame_joystick_real;
    QWidget *widget_left;
    QGridLayout *gridLayout_6;
    QGridLayout *joystick_left;
    QWidget *widget_right;
    QGridLayout *gridLayout_8;
    QGridLayout *joystick_right;
    QHBoxLayout *horizontalLayout_3;
    QGridLayout *gridLayout_5;
    QDoubleSpinBox *joystick_left_radius;
    QLabel *left_radius_label;
    QDoubleSpinBox *joystick_left_angle;
    QLabel *left_angle_label;
    QPushButton *left_send_values;
    QGridLayout *gridLayout_7;
    QLabel *right_radius_label;
    QDoubleSpinBox *joystick_right_radius;
    QLabel *right_angle_label;
    QDoubleSpinBox *joystick_right_angle;
    QPushButton *right_send_values;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *LocoJoypad)
    {
        if (LocoJoypad->objectName().isEmpty())
            LocoJoypad->setObjectName(QString::fromUtf8("LocoJoypad"));
        LocoJoypad->resize(493, 450);
        LocoJoypad->setStyleSheet(QString::fromUtf8(""));
        horizontalLayout_2 = new QHBoxLayout(LocoJoypad);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setSpacing(6);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setSizeConstraint(QLayout::SetDefaultConstraint);
        pushButtonLeft = new QPushButton(LocoJoypad);
        pushButtonLeft->setObjectName(QString::fromUtf8("pushButtonLeft"));
        pushButtonLeft->setMaximumSize(QSize(30, 30));

        gridLayout_3->addWidget(pushButtonLeft, 2, 0, 1, 1);

        pushButtonDown = new QPushButton(LocoJoypad);
        pushButtonDown->setObjectName(QString::fromUtf8("pushButtonDown"));
        pushButtonDown->setMaximumSize(QSize(30, 30));

        gridLayout_3->addWidget(pushButtonDown, 3, 1, 1, 1);

        pushButtonRight = new QPushButton(LocoJoypad);
        pushButtonRight->setObjectName(QString::fromUtf8("pushButtonRight"));
        pushButtonRight->setMaximumSize(QSize(30, 30));

        gridLayout_3->addWidget(pushButtonRight, 2, 2, 1, 1);

        pushButtonUp = new QPushButton(LocoJoypad);
        pushButtonUp->setObjectName(QString::fromUtf8("pushButtonUp"));
        pushButtonUp->setMaximumSize(QSize(30, 30));

        gridLayout_3->addWidget(pushButtonUp, 0, 1, 1, 1);


        horizontalLayout->addLayout(gridLayout_3);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setSpacing(6);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        pushButtonSelect = new QPushButton(LocoJoypad);
        pushButtonSelect->setObjectName(QString::fromUtf8("pushButtonSelect"));

        gridLayout_4->addWidget(pushButtonSelect, 1, 1, 1, 1);

        pushButtonStart = new QPushButton(LocoJoypad);
        pushButtonStart->setObjectName(QString::fromUtf8("pushButtonStart"));

        gridLayout_4->addWidget(pushButtonStart, 1, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 2, QSizePolicy::Minimum, QSizePolicy::Preferred);

        gridLayout_4->addItem(verticalSpacer_2, 2, 0, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 2, QSizePolicy::Minimum, QSizePolicy::Preferred);

        gridLayout_4->addItem(verticalSpacer_3, 0, 0, 1, 1);

        pushButtonStickReset = new QPushButton(LocoJoypad);
        pushButtonStickReset->setObjectName(QString::fromUtf8("pushButtonStickReset"));
        QFont font;
        font.setPointSize(10);
        pushButtonStickReset->setFont(font);
        pushButtonStickReset->setCheckable(true);
        pushButtonStickReset->setChecked(false);

        gridLayout_4->addWidget(pushButtonStickReset, 0, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout_4, 0, 0, 1, 1);


        horizontalLayout->addLayout(gridLayout_2);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pushButtonA = new QPushButton(LocoJoypad);
        pushButtonA->setObjectName(QString::fromUtf8("pushButtonA"));
        pushButtonA->setMaximumSize(QSize(30, 30));
        pushButtonA->setCheckable(true);
        pushButtonA->setChecked(false);

        gridLayout->addWidget(pushButtonA, 2, 1, 1, 1);

        pushButtonB = new QPushButton(LocoJoypad);
        pushButtonB->setObjectName(QString::fromUtf8("pushButtonB"));
        pushButtonB->setMaximumSize(QSize(30, 30));

        gridLayout->addWidget(pushButtonB, 1, 2, 1, 1);

        pushButtonY = new QPushButton(LocoJoypad);
        pushButtonY->setObjectName(QString::fromUtf8("pushButtonY"));
        pushButtonY->setMaximumSize(QSize(30, 30));

        gridLayout->addWidget(pushButtonY, 0, 1, 1, 1);

        pushButtonX = new QPushButton(LocoJoypad);
        pushButtonX->setObjectName(QString::fromUtf8("pushButtonX"));
        pushButtonX->setMaximumSize(QSize(30, 30));

        gridLayout->addWidget(pushButtonX, 1, 0, 1, 1);


        horizontalLayout->addLayout(gridLayout);

        horizontalSpacer = new QSpacerItem(2, 20, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);

        frame_joystick_slider = new QFrame(LocoJoypad);
        frame_joystick_slider->setObjectName(QString::fromUtf8("frame_joystick_slider"));
        frame_joystick_slider->setMinimumSize(QSize(10, 2));
        frame_joystick_slider->setFrameShape(QFrame::NoFrame);
        frame_joystick_slider->setFrameShadow(QFrame::Raised);
        pushButtonResetAxes = new QPushButton(frame_joystick_slider);
        pushButtonResetAxes->setObjectName(QString::fromUtf8("pushButtonResetAxes"));
        pushButtonResetAxes->setGeometry(QRect(150, 120, 91, 27));
        axisXLeft = new QSlider(frame_joystick_slider);
        axisXLeft->setObjectName(QString::fromUtf8("axisXLeft"));
        axisXLeft->setGeometry(QRect(20, 60, 160, 29));
        axisXLeft->setMinimum(-1000);
        axisXLeft->setMaximum(1000);
        axisXLeft->setPageStep(10);
        axisXLeft->setSliderPosition(0);
        axisXLeft->setOrientation(Qt::Horizontal);
        axisYLeft = new QSlider(frame_joystick_slider);
        axisYLeft->setObjectName(QString::fromUtf8("axisYLeft"));
        axisYLeft->setGeometry(QRect(90, 0, 29, 160));
        axisYLeft->setMinimum(-1000);
        axisYLeft->setMaximum(1000);
        axisYLeft->setOrientation(Qt::Vertical);
        axisXRight = new QSlider(frame_joystick_slider);
        axisXRight->setObjectName(QString::fromUtf8("axisXRight"));
        axisXRight->setGeometry(QRect(210, 60, 160, 29));
        axisXRight->setMinimum(-1000);
        axisXRight->setMaximum(1000);
        axisXRight->setPageStep(10);
        axisXRight->setSliderPosition(0);
        axisXRight->setOrientation(Qt::Horizontal);
        axisYRight = new QSlider(frame_joystick_slider);
        axisYRight->setObjectName(QString::fromUtf8("axisYRight"));
        axisYRight->setGeometry(QRect(280, 0, 29, 160));
        axisYRight->setMinimum(-1000);
        axisYRight->setMaximum(1000);
        axisYRight->setOrientation(Qt::Vertical);

        verticalLayout->addWidget(frame_joystick_slider);

        frame_joystick_real = new QFrame(LocoJoypad);
        frame_joystick_real->setObjectName(QString::fromUtf8("frame_joystick_real"));
        frame_joystick_real->setMinimumSize(QSize(0, 160));
        frame_joystick_real->setFrameShape(QFrame::NoFrame);
        frame_joystick_real->setFrameShadow(QFrame::Raised);
        widget_left = new QWidget(frame_joystick_real);
        widget_left->setObjectName(QString::fromUtf8("widget_left"));
        widget_left->setGeometry(QRect(20, 0, 160, 160));
        gridLayout_6 = new QGridLayout(widget_left);
        gridLayout_6->setSpacing(6);
        gridLayout_6->setContentsMargins(11, 11, 11, 11);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        gridLayout_6->setContentsMargins(0, 0, 0, 0);
        joystick_left = new QGridLayout();
        joystick_left->setSpacing(6);
        joystick_left->setObjectName(QString::fromUtf8("joystick_left"));

        gridLayout_6->addLayout(joystick_left, 0, 0, 1, 1);

        widget_right = new QWidget(frame_joystick_real);
        widget_right->setObjectName(QString::fromUtf8("widget_right"));
        widget_right->setGeometry(QRect(220, 0, 160, 160));
        gridLayout_8 = new QGridLayout(widget_right);
        gridLayout_8->setSpacing(6);
        gridLayout_8->setContentsMargins(11, 11, 11, 11);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        gridLayout_8->setContentsMargins(0, 0, 0, 0);
        joystick_right = new QGridLayout();
        joystick_right->setSpacing(6);
        joystick_right->setObjectName(QString::fromUtf8("joystick_right"));

        gridLayout_8->addLayout(joystick_right, 0, 0, 1, 1);


        verticalLayout->addWidget(frame_joystick_real);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        gridLayout_5 = new QGridLayout();
        gridLayout_5->setSpacing(6);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        joystick_left_radius = new QDoubleSpinBox(LocoJoypad);
        joystick_left_radius->setObjectName(QString::fromUtf8("joystick_left_radius"));
        joystick_left_radius->setDecimals(1);
        joystick_left_radius->setMaximum(1.000000000000000);
        joystick_left_radius->setSingleStep(0.100000000000000);

        gridLayout_5->addWidget(joystick_left_radius, 0, 1, 1, 1);

        left_radius_label = new QLabel(LocoJoypad);
        left_radius_label->setObjectName(QString::fromUtf8("left_radius_label"));

        gridLayout_5->addWidget(left_radius_label, 0, 0, 1, 1);

        joystick_left_angle = new QDoubleSpinBox(LocoJoypad);
        joystick_left_angle->setObjectName(QString::fromUtf8("joystick_left_angle"));
        joystick_left_angle->setDecimals(0);
        joystick_left_angle->setMinimum(-180.000000000000000);
        joystick_left_angle->setMaximum(180.000000000000000);
        joystick_left_angle->setSingleStep(10.000000000000000);

        gridLayout_5->addWidget(joystick_left_angle, 1, 1, 1, 1);

        left_angle_label = new QLabel(LocoJoypad);
        left_angle_label->setObjectName(QString::fromUtf8("left_angle_label"));

        gridLayout_5->addWidget(left_angle_label, 1, 0, 1, 1);

        left_send_values = new QPushButton(LocoJoypad);
        left_send_values->setObjectName(QString::fromUtf8("left_send_values"));

        gridLayout_5->addWidget(left_send_values, 2, 0, 1, 1);


        horizontalLayout_3->addLayout(gridLayout_5);

        gridLayout_7 = new QGridLayout();
        gridLayout_7->setSpacing(6);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        right_radius_label = new QLabel(LocoJoypad);
        right_radius_label->setObjectName(QString::fromUtf8("right_radius_label"));

        gridLayout_7->addWidget(right_radius_label, 0, 0, 1, 1);

        joystick_right_radius = new QDoubleSpinBox(LocoJoypad);
        joystick_right_radius->setObjectName(QString::fromUtf8("joystick_right_radius"));
        joystick_right_radius->setDecimals(1);
        joystick_right_radius->setMaximum(1.000000000000000);
        joystick_right_radius->setSingleStep(0.100000000000000);

        gridLayout_7->addWidget(joystick_right_radius, 0, 1, 1, 1);

        right_angle_label = new QLabel(LocoJoypad);
        right_angle_label->setObjectName(QString::fromUtf8("right_angle_label"));

        gridLayout_7->addWidget(right_angle_label, 1, 0, 1, 1);

        joystick_right_angle = new QDoubleSpinBox(LocoJoypad);
        joystick_right_angle->setObjectName(QString::fromUtf8("joystick_right_angle"));
        joystick_right_angle->setDecimals(0);
        joystick_right_angle->setMinimum(-180.000000000000000);
        joystick_right_angle->setMaximum(180.000000000000000);
        joystick_right_angle->setSingleStep(10.000000000000000);

        gridLayout_7->addWidget(joystick_right_angle, 1, 1, 1, 1);

        right_send_values = new QPushButton(LocoJoypad);
        right_send_values->setObjectName(QString::fromUtf8("right_send_values"));

        gridLayout_7->addWidget(right_send_values, 2, 0, 1, 1);


        horizontalLayout_3->addLayout(gridLayout_7);


        verticalLayout->addLayout(horizontalLayout_3);

        verticalSpacer = new QSpacerItem(20, 2, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout_2->addLayout(verticalLayout);


        retranslateUi(LocoJoypad);

        QMetaObject::connectSlotsByName(LocoJoypad);
    } // setupUi

    void retranslateUi(QWidget *LocoJoypad)
    {
        LocoJoypad->setWindowTitle(QApplication::translate("LocoJoypad", "Joypad", nullptr));
        pushButtonLeft->setText(QApplication::translate("LocoJoypad", "<", nullptr));
        pushButtonDown->setText(QApplication::translate("LocoJoypad", "v", nullptr));
        pushButtonRight->setText(QApplication::translate("LocoJoypad", ">", nullptr));
        pushButtonUp->setText(QApplication::translate("LocoJoypad", "^", nullptr));
        pushButtonSelect->setText(QApplication::translate("LocoJoypad", "Select", nullptr));
        pushButtonStart->setText(QApplication::translate("LocoJoypad", "Start", nullptr));
        pushButtonStickReset->setText(QApplication::translate("LocoJoypad", "Stick Reset", nullptr));
        pushButtonA->setText(QApplication::translate("LocoJoypad", "A", nullptr));
        pushButtonB->setText(QApplication::translate("LocoJoypad", "B", nullptr));
        pushButtonY->setText(QApplication::translate("LocoJoypad", "Y", nullptr));
        pushButtonX->setText(QApplication::translate("LocoJoypad", "X", nullptr));
        pushButtonResetAxes->setText(QApplication::translate("LocoJoypad", "Reset axes", nullptr));
        left_radius_label->setText(QApplication::translate("LocoJoypad", "LJoyRadius:", nullptr));
        left_angle_label->setText(QApplication::translate("LocoJoypad", "LJoyAngle [deg]:", nullptr));
        left_send_values->setText(QApplication::translate("LocoJoypad", "Send values", nullptr));
        right_radius_label->setText(QApplication::translate("LocoJoypad", "RJoyRadius:", nullptr));
        right_angle_label->setText(QApplication::translate("LocoJoypad", "RJoyAngle [deg]:", nullptr));
        right_send_values->setText(QApplication::translate("LocoJoypad", "Send values", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LocoJoypad: public Ui_LocoJoypad {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JOYPAD_PLUGIN_H
