/****************************************************************************
** Meta object code from reading C++ file 'display.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../autoview/common/display.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'display.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_autoview__common__Display_t {
    QByteArrayData data[22];
    char stringdata0[260];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_autoview__common__Display_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_autoview__common__Display_t qt_meta_stringdata_autoview__common__Display = {
    {
QT_MOC_LITERAL(0, 0, 25), // "autoview::common::Display"
QT_MOC_LITERAL(1, 26, 10), // "timeSignal"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 8), // "Display*"
QT_MOC_LITERAL(4, 47, 7), // "display"
QT_MOC_LITERAL(5, 55, 14), // "autolink::Time"
QT_MOC_LITERAL(6, 70, 4), // "time"
QT_MOC_LITERAL(7, 75, 10), // "setEnabled"
QT_MOC_LITERAL(8, 86, 7), // "enabled"
QT_MOC_LITERAL(9, 94, 11), // "queueRender"
QT_MOC_LITERAL(10, 106, 7), // "setIcon"
QT_MOC_LITERAL(11, 114, 4), // "icon"
QT_MOC_LITERAL(12, 119, 15), // "onEnableChanged"
QT_MOC_LITERAL(13, 135, 17), // "setStatusInternal"
QT_MOC_LITERAL(14, 153, 5), // "level"
QT_MOC_LITERAL(15, 159, 4), // "name"
QT_MOC_LITERAL(16, 164, 4), // "text"
QT_MOC_LITERAL(17, 169, 20), // "deleteStatusInternal"
QT_MOC_LITERAL(18, 190, 21), // "clearStatusesInternal"
QT_MOC_LITERAL(19, 212, 31), // "associatedPanelVisibilityChange"
QT_MOC_LITERAL(20, 244, 7), // "visible"
QT_MOC_LITERAL(21, 252, 7) // "disable"

    },
    "autoview::common::Display\0timeSignal\0"
    "\0Display*\0display\0autolink::Time\0time\0"
    "setEnabled\0enabled\0queueRender\0setIcon\0"
    "icon\0onEnableChanged\0setStatusInternal\0"
    "level\0name\0text\0deleteStatusInternal\0"
    "clearStatusesInternal\0"
    "associatedPanelVisibilityChange\0visible\0"
    "disable"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_autoview__common__Display[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   64,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,   69,    2, 0x0a /* Public */,
       9,    0,   72,    2, 0x0a /* Public */,
      10,    1,   73,    2, 0x0a /* Public */,
      12,    0,   76,    2, 0x0a /* Public */,
      13,    3,   77,    2, 0x08 /* Private */,
      17,    1,   84,    2, 0x08 /* Private */,
      18,    0,   87,    2, 0x08 /* Private */,
      19,    1,   88,    2, 0x08 /* Private */,
      21,    0,   91,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5,    4,    6,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QIcon,   11,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::QString,   14,   15,   16,
    QMetaType::Void, QMetaType::QString,   15,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   20,
    QMetaType::Void,

       0        // eod
};

void autoview::common::Display::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Display *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->timeSignal((*reinterpret_cast< Display*(*)>(_a[1])),(*reinterpret_cast< autolink::Time(*)>(_a[2]))); break;
        case 1: _t->setEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->queueRender(); break;
        case 3: _t->setIcon((*reinterpret_cast< const QIcon(*)>(_a[1]))); break;
        case 4: _t->onEnableChanged(); break;
        case 5: _t->setStatusInternal((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 6: _t->deleteStatusInternal((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->clearStatusesInternal(); break;
        case 8: _t->associatedPanelVisibilityChange((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->disable(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Display* >(); break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< autolink::Time >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Display::*)(Display * , autolink::Time );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Display::timeSignal)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject autoview::common::Display::staticMetaObject = { {
    QMetaObject::SuperData::link<properties::BoolProperty::staticMetaObject>(),
    qt_meta_stringdata_autoview__common__Display.data,
    qt_meta_data_autoview__common__Display,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *autoview::common::Display::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *autoview::common::Display::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_autoview__common__Display.stringdata0))
        return static_cast<void*>(this);
    return properties::BoolProperty::qt_metacast(_clname);
}

int autoview::common::Display::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = properties::BoolProperty::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void autoview::common::Display::timeSignal(Display * _t1, autolink::Time _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
