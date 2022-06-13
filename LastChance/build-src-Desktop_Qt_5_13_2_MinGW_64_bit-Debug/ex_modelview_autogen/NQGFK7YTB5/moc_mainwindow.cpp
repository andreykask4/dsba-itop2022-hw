/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/ex_modelview/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[22];
    char stringdata0[291];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 8), // "loadFile"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 8), // "saveFile"
QT_MOC_LITERAL(4, 30, 10), // "addRowSlot"
QT_MOC_LITERAL(5, 41, 23), // "on_spinBox_valueChanged"
QT_MOC_LITERAL(6, 65, 4), // "arg1"
QT_MOC_LITERAL(7, 70, 26), // "on_tableView_doubleClicked"
QT_MOC_LITERAL(8, 97, 11), // "QModelIndex"
QT_MOC_LITERAL(9, 109, 5), // "index"
QT_MOC_LITERAL(10, 115, 12), // "updateFilter"
QT_MOC_LITERAL(11, 128, 4), // "text"
QT_MOC_LITERAL(12, 133, 13), // "updateFilter2"
QT_MOC_LITERAL(13, 147, 19), // "updateFilterMinFare"
QT_MOC_LITERAL(14, 167, 5), // "value"
QT_MOC_LITERAL(15, 173, 19), // "updateFilterMaxFare"
QT_MOC_LITERAL(16, 193, 18), // "updateFromLineEdit"
QT_MOC_LITERAL(17, 212, 9), // "showAbout"
QT_MOC_LITERAL(18, 222, 7), // "setName"
QT_MOC_LITERAL(19, 230, 13), // "deleteRowSlot"
QT_MOC_LITERAL(20, 244, 30), // "on_fareFromSlider_valueChanged"
QT_MOC_LITERAL(21, 275, 15) // "changeActiveRow"

    },
    "MainWindow\0loadFile\0\0saveFile\0addRowSlot\0"
    "on_spinBox_valueChanged\0arg1\0"
    "on_tableView_doubleClicked\0QModelIndex\0"
    "index\0updateFilter\0text\0updateFilter2\0"
    "updateFilterMinFare\0value\0updateFilterMaxFare\0"
    "updateFromLineEdit\0showAbout\0setName\0"
    "deleteRowSlot\0on_fareFromSlider_valueChanged\0"
    "changeActiveRow"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   89,    2, 0x08 /* Private */,
       3,    0,   90,    2, 0x08 /* Private */,
       4,    0,   91,    2, 0x08 /* Private */,
       5,    1,   92,    2, 0x08 /* Private */,
       7,    1,   95,    2, 0x08 /* Private */,
      10,    1,   98,    2, 0x08 /* Private */,
      12,    1,  101,    2, 0x08 /* Private */,
      13,    1,  104,    2, 0x08 /* Private */,
      15,    1,  107,    2, 0x08 /* Private */,
      16,    1,  110,    2, 0x08 /* Private */,
      17,    0,  113,    2, 0x08 /* Private */,
      18,    0,  114,    2, 0x08 /* Private */,
      19,    0,  115,    2, 0x08 /* Private */,
      20,    1,  116,    2, 0x08 /* Private */,
      21,    1,  119,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void, 0x80000000 | 8,    9,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->loadFile(); break;
        case 1: _t->saveFile(); break;
        case 2: _t->addRowSlot(); break;
        case 3: _t->on_spinBox_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->on_tableView_doubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 5: _t->updateFilter((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->updateFilter2((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->updateFilterMinFare((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->updateFilterMaxFare((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->updateFromLineEdit((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->showAbout(); break;
        case 11: _t->setName(); break;
        case 12: _t->deleteRowSlot(); break;
        case 13: _t->on_fareFromSlider_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->changeActiveRow((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_MainWindow.data,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
