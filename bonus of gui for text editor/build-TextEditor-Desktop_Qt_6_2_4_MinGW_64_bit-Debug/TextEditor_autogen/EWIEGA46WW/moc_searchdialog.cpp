/****************************************************************************
** Meta object code from reading C++ file 'searchdialog.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../TextEditor/searchdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'searchdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SearchDialog_t {
    const uint offsetsAndSize[12];
    char stringdata0[108];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_SearchDialog_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_SearchDialog_t qt_meta_stringdata_SearchDialog = {
    {
QT_MOC_LITERAL(0, 12), // "SearchDialog"
QT_MOC_LITERAL(13, 28), // "on_pushButton_search_clicked"
QT_MOC_LITERAL(42, 0), // ""
QT_MOC_LITERAL(43, 28), // "on_pushButton_toexit_clicked"
QT_MOC_LITERAL(72, 30), // "on_lineEdit_search_textChanged"
QT_MOC_LITERAL(103, 4) // "arg1"

    },
    "SearchDialog\0on_pushButton_search_clicked\0"
    "\0on_pushButton_toexit_clicked\0"
    "on_lineEdit_search_textChanged\0arg1"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SearchDialog[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   32,    2, 0x08,    1 /* Private */,
       3,    0,   33,    2, 0x08,    2 /* Private */,
       4,    1,   34,    2, 0x08,    3 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    5,

       0        // eod
};

void SearchDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SearchDialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_pushButton_search_clicked(); break;
        case 1: _t->on_pushButton_toexit_clicked(); break;
        case 2: _t->on_lineEdit_search_textChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject SearchDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_SearchDialog.offsetsAndSize,
    qt_meta_data_SearchDialog,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_SearchDialog_t
, QtPrivate::TypeAndForceComplete<SearchDialog, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>


>,
    nullptr
} };


const QMetaObject *SearchDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SearchDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SearchDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int SearchDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
