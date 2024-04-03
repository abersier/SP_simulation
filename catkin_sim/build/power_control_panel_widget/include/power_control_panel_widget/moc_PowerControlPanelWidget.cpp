/****************************************************************************
** Meta object code from reading C++ file 'PowerControlPanelWidget.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/anymal_rsl/anymal_rsl_user_interface/power_control_panel/power_control_panel_widget/include/power_control_panel_widget/PowerControlPanelWidget.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PowerControlPanelWidget.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_power_control_panel_widget__ServiceRunnable_t {
    QByteArrayData data[5];
    char stringdata0[102];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_power_control_panel_widget__ServiceRunnable_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_power_control_panel_widget__ServiceRunnable_t qt_meta_stringdata_power_control_panel_widget__ServiceRunnable = {
    {
QT_MOC_LITERAL(0, 0, 43), // "power_control_panel_widget::S..."
QT_MOC_LITERAL(1, 44, 23), // "completionCallbackReady"
QT_MOC_LITERAL(2, 68, 0), // ""
QT_MOC_LITERAL(3, 69, 16), // "ServiceRunnable*"
QT_MOC_LITERAL(4, 86, 15) // "serviceRunnable"

    },
    "power_control_panel_widget::ServiceRunnable\0"
    "completionCallbackReady\0\0ServiceRunnable*\0"
    "serviceRunnable"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_power_control_panel_widget__ServiceRunnable[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void power_control_panel_widget::ServiceRunnable::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ServiceRunnable *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->completionCallbackReady((*reinterpret_cast< ServiceRunnable*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ServiceRunnable* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ServiceRunnable::*)(ServiceRunnable * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ServiceRunnable::completionCallbackReady)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject power_control_panel_widget::ServiceRunnable::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_power_control_panel_widget__ServiceRunnable.data,
    qt_meta_data_power_control_panel_widget__ServiceRunnable,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *power_control_panel_widget::ServiceRunnable::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *power_control_panel_widget::ServiceRunnable::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_power_control_panel_widget__ServiceRunnable.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QRunnable"))
        return static_cast< QRunnable*>(this);
    return QObject::qt_metacast(_clname);
}

int power_control_panel_widget::ServiceRunnable::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void power_control_panel_widget::ServiceRunnable::completionCallbackReady(ServiceRunnable * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_power_control_panel_widget__PowerControlPanelWidget_t {
    QByteArrayData data[7];
    char stringdata0[173];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_power_control_panel_widget__PowerControlPanelWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_power_control_panel_widget__PowerControlPanelWidget_t qt_meta_stringdata_power_control_panel_widget__PowerControlPanelWidget = {
    {
QT_MOC_LITERAL(0, 0, 51), // "power_control_panel_widget::P..."
QT_MOC_LITERAL(1, 52, 39), // "handleServiceRunnableCompleti..."
QT_MOC_LITERAL(2, 92, 0), // ""
QT_MOC_LITERAL(3, 93, 16), // "ServiceRunnable*"
QT_MOC_LITERAL(4, 110, 15), // "serviceRunnable"
QT_MOC_LITERAL(5, 126, 22), // "pressedEnableActuators"
QT_MOC_LITERAL(6, 149, 23) // "pressedDisableActuators"

    },
    "power_control_panel_widget::PowerControlPanelWidget\0"
    "handleServiceRunnableCompletionCallback\0"
    "\0ServiceRunnable*\0serviceRunnable\0"
    "pressedEnableActuators\0pressedDisableActuators"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_power_control_panel_widget__PowerControlPanelWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x09 /* Protected */,
       5,    0,   32,    2, 0x09 /* Protected */,
       6,    0,   33,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void power_control_panel_widget::PowerControlPanelWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PowerControlPanelWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->handleServiceRunnableCompletionCallback((*reinterpret_cast< ServiceRunnable*(*)>(_a[1]))); break;
        case 1: _t->pressedEnableActuators(); break;
        case 2: _t->pressedDisableActuators(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ServiceRunnable* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject power_control_panel_widget::PowerControlPanelWidget::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_power_control_panel_widget__PowerControlPanelWidget.data,
    qt_meta_data_power_control_panel_widget__PowerControlPanelWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *power_control_panel_widget::PowerControlPanelWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *power_control_panel_widget::PowerControlPanelWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_power_control_panel_widget__PowerControlPanelWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int power_control_panel_widget::PowerControlPanelWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
