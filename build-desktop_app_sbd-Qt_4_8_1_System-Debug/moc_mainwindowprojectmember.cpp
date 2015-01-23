/****************************************************************************
** Meta object code from reading C++ file 'mainwindowprojectmember.h'
**
** Created: Thu Jan 22 17:15:05 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../desktop_app_sbd/mainwindows/mainwindowprojectmember.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindowprojectmember.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MainWindowProjectMember[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      25,   24,   24,   24, 0x08,
      51,   24,   24,   24, 0x08,
      86,   24,   24,   24, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MainWindowProjectMember[] = {
    "MainWindowProjectMember\0\0"
    "on_pushButton_2_clicked()\0"
    "on_pushButtonProjectInfo_clicked()\0"
    "on_pushButtonSearchSupply_clicked()\0"
};

void MainWindowProjectMember::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MainWindowProjectMember *_t = static_cast<MainWindowProjectMember *>(_o);
        switch (_id) {
        case 0: _t->on_pushButton_2_clicked(); break;
        case 1: _t->on_pushButtonProjectInfo_clicked(); break;
        case 2: _t->on_pushButtonSearchSupply_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData MainWindowProjectMember::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MainWindowProjectMember::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindowProjectMember,
      qt_meta_data_MainWindowProjectMember, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MainWindowProjectMember::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MainWindowProjectMember::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MainWindowProjectMember::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindowProjectMember))
        return static_cast<void*>(const_cast< MainWindowProjectMember*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindowProjectMember::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
