/****************************************************************************
** Meta object code from reading C++ file 'progressbar.h'
**
** Created: Sun 4. Jan 12:23:44 2009
**      by: The Qt Meta Object Compiler version 59 (Qt 4.4.4-temple)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "progressbar.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'progressbar.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.4.4-temple. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_progressbar[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets

       0        // eod
};

static const char qt_meta_stringdata_progressbar[] = {
    "progressbar\0"
};

const QMetaObject progressbar::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_progressbar,
      qt_meta_data_progressbar, 0 }
};

const QMetaObject *progressbar::metaObject() const
{
    return &staticMetaObject;
}

void *progressbar::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_progressbar))
        return static_cast<void*>(const_cast< progressbar*>(this));
    return QWidget::qt_metacast(_clname);
}

int progressbar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
