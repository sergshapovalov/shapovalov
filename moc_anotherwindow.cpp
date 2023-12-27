/****************************************************************************
** Meta object code from reading C++ file 'anotherwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../shapovalov/anotherwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'anotherwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_anotherwindow_t {
    QByteArrayData data[10];
    char stringdata0[160];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_anotherwindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_anotherwindow_t qt_meta_stringdata_anotherwindow = {
    {
QT_MOC_LITERAL(0, 0, 13), // "anotherwindow"
QT_MOC_LITERAL(1, 14, 11), // "firstWindow"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 18), // "on_pognali_clicked"
QT_MOC_LITERAL(4, 46, 23), // "on_lefteye_valueChanged"
QT_MOC_LITERAL(5, 70, 4), // "arg1"
QT_MOC_LITERAL(6, 75, 24), // "on_righteye_valueChanged"
QT_MOC_LITERAL(7, 100, 21), // "on_vvelidanye_clicked"
QT_MOC_LITERAL(8, 122, 19), // "on_ochistit_clicked"
QT_MOC_LITERAL(9, 142, 17) // "on_otkrit_clicked"

    },
    "anotherwindow\0firstWindow\0\0"
    "on_pognali_clicked\0on_lefteye_valueChanged\0"
    "arg1\0on_righteye_valueChanged\0"
    "on_vvelidanye_clicked\0on_ochistit_clicked\0"
    "on_otkrit_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_anotherwindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   50,    2, 0x08 /* Private */,
       4,    1,   51,    2, 0x08 /* Private */,
       6,    1,   54,    2, 0x08 /* Private */,
       7,    0,   57,    2, 0x08 /* Private */,
       8,    0,   58,    2, 0x08 /* Private */,
       9,    0,   59,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void anotherwindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        anotherwindow *_t = static_cast<anotherwindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->firstWindow(); break;
        case 1: _t->on_pognali_clicked(); break;
        case 2: _t->on_lefteye_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->on_righteye_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->on_vvelidanye_clicked(); break;
        case 5: _t->on_ochistit_clicked(); break;
        case 6: _t->on_otkrit_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (anotherwindow::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&anotherwindow::firstWindow)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject anotherwindow::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_anotherwindow.data,
      qt_meta_data_anotherwindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *anotherwindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *anotherwindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_anotherwindow.stringdata0))
        return static_cast<void*>(const_cast< anotherwindow*>(this));
    return QWidget::qt_metacast(_clname);
}

int anotherwindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void anotherwindow::firstWindow()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
