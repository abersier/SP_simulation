/****************************************************************************
** Meta object code from reading C++ file 'userInteractionModeWidget.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/anymal_rsl/anymal_rsl_user_interface/user_interaction_mode_panel/user_interaction_mode_widget/include/user_interaction_mode_widget/userInteractionModeWidget.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'userInteractionModeWidget.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_user_interaction_mode_widget__ServiceRunnable_t {
    QByteArrayData data[5];
    char stringdata0[104];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_user_interaction_mode_widget__ServiceRunnable_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_user_interaction_mode_widget__ServiceRunnable_t qt_meta_stringdata_user_interaction_mode_widget__ServiceRunnable = {
    {
QT_MOC_LITERAL(0, 0, 45), // "user_interaction_mode_widget:..."
QT_MOC_LITERAL(1, 46, 23), // "completionCallbackReady"
QT_MOC_LITERAL(2, 70, 0), // ""
QT_MOC_LITERAL(3, 71, 16), // "ServiceRunnable*"
QT_MOC_LITERAL(4, 88, 15) // "serviceRunnable"

    },
    "user_interaction_mode_widget::ServiceRunnable\0"
    "completionCallbackReady\0\0ServiceRunnable*\0"
    "serviceRunnable"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_user_interaction_mode_widget__ServiceRunnable[] = {

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

void user_interaction_mode_widget::ServiceRunnable::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
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

QT_INIT_METAOBJECT const QMetaObject user_interaction_mode_widget::ServiceRunnable::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_user_interaction_mode_widget__ServiceRunnable.data,
    qt_meta_data_user_interaction_mode_widget__ServiceRunnable,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *user_interaction_mode_widget::ServiceRunnable::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *user_interaction_mode_widget::ServiceRunnable::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_user_interaction_mode_widget__ServiceRunnable.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QRunnable"))
        return static_cast< QRunnable*>(this);
    return QObject::qt_metacast(_clname);
}

int user_interaction_mode_widget::ServiceRunnable::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void user_interaction_mode_widget::ServiceRunnable::completionCallbackReady(ServiceRunnable * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_user_interaction_mode_widget__userInteractionModeWidget_t {
    QByteArrayData data[8];
    char stringdata0[191];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_user_interaction_mode_widget__userInteractionModeWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_user_interaction_mode_widget__userInteractionModeWidget_t qt_meta_stringdata_user_interaction_mode_widget__userInteractionModeWidget = {
    {
QT_MOC_LITERAL(0, 0, 55), // "user_interaction_mode_widget:..."
QT_MOC_LITERAL(1, 56, 39), // "handleServiceRunnableCompleti..."
QT_MOC_LITERAL(2, 96, 0), // ""
QT_MOC_LITERAL(3, 97, 16), // "ServiceRunnable*"
QT_MOC_LITERAL(4, 114, 15), // "serviceRunnable"
QT_MOC_LITERAL(5, 130, 24), // "pressedAutonomousControl"
QT_MOC_LITERAL(6, 155, 17), // "pressedGuiControl"
QT_MOC_LITERAL(7, 173, 17) // "pressedRcuControl"

    },
    "user_interaction_mode_widget::userInteractionModeWidget\0"
    "handleServiceRunnableCompletionCallback\0"
    "\0ServiceRunnable*\0serviceRunnable\0"
    "pressedAutonomousControl\0pressedGuiControl\0"
    "pressedRcuControl"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_user_interaction_mode_widget__userInteractionModeWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x09 /* Protected */,
       5,    0,   37,    2, 0x09 /* Protected */,
       6,    0,   38,    2, 0x09 /* Protected */,
       7,    0,   39,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void user_interaction_mode_widget::userInteractionModeWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<userInteractionModeWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->handleServiceRunnableCompletionCallback((*reinterpret_cast< ServiceRunnable*(*)>(_a[1]))); break;
        case 1: _t->pressedAutonomousControl(); break;
        case 2: _t->pressedGuiControl(); break;
        case 3: _t->pressedRcuControl(); break;
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

QT_INIT_METAOBJECT const QMetaObject user_interaction_mode_widget::userInteractionModeWidget::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_user_interaction_mode_widget__userInteractionModeWidget.data,
    qt_meta_data_user_interaction_mode_widget__userInteractionModeWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *user_interaction_mode_widget::userInteractionModeWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *user_interaction_mode_widget::userInteractionModeWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_user_interaction_mode_widget__userInteractionModeWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int user_interaction_mode_widget::userInteractionModeWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
