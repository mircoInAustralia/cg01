/****************************************************************************
** Meta object code from reading C++ file 'Scene.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/Scene.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Scene.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Scene_t {
    QByteArrayData data[17];
    char stringdata[199];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Scene_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Scene_t qt_meta_stringdata_Scene = {
    {
QT_MOC_LITERAL(0, 0, 5), // "Scene"
QT_MOC_LITERAL(1, 6, 12), // "setXRotation"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 5), // "angle"
QT_MOC_LITERAL(4, 26, 12), // "setYRotation"
QT_MOC_LITERAL(5, 39, 12), // "setZRotation"
QT_MOC_LITERAL(6, 52, 12), // "reloadShader"
QT_MOC_LITERAL(7, 65, 10), // "resetScene"
QT_MOC_LITERAL(8, 76, 8), // "setFloor"
QT_MOC_LITERAL(9, 85, 15), // "mousePressEvent"
QT_MOC_LITERAL(10, 101, 12), // "QMouseEvent*"
QT_MOC_LITERAL(11, 114, 5), // "event"
QT_MOC_LITERAL(12, 120, 14), // "mouseMoveEvent"
QT_MOC_LITERAL(13, 135, 17), // "mouseReleaseEvent"
QT_MOC_LITERAL(14, 153, 21), // "mouseDoubleClickEvent"
QT_MOC_LITERAL(15, 175, 10), // "wheelEvent"
QT_MOC_LITERAL(16, 186, 12) // "QWheelEvent*"

    },
    "Scene\0setXRotation\0\0angle\0setYRotation\0"
    "setZRotation\0reloadShader\0resetScene\0"
    "setFloor\0mousePressEvent\0QMouseEvent*\0"
    "event\0mouseMoveEvent\0mouseReleaseEvent\0"
    "mouseDoubleClickEvent\0wheelEvent\0"
    "QWheelEvent*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Scene[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   69,    2, 0x0a /* Public */,
       4,    1,   72,    2, 0x0a /* Public */,
       5,    1,   75,    2, 0x0a /* Public */,
       6,    0,   78,    2, 0x0a /* Public */,
       7,    0,   79,    2, 0x0a /* Public */,
       8,    0,   80,    2, 0x0a /* Public */,
       9,    1,   81,    2, 0x09 /* Protected */,
      12,    1,   84,    2, 0x09 /* Protected */,
      13,    1,   87,    2, 0x09 /* Protected */,
      14,    1,   90,    2, 0x09 /* Protected */,
      15,    1,   93,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, 0x80000000 | 16,   11,

       0        // eod
};

void Scene::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Scene *_t = static_cast<Scene *>(_o);
        switch (_id) {
        case 0: _t->setXRotation((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->setYRotation((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->setZRotation((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->reloadShader(); break;
        case 4: _t->resetScene(); break;
        case 5: _t->setFloor(); break;
        case 6: _t->mousePressEvent((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 7: _t->mouseMoveEvent((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 8: _t->mouseReleaseEvent((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 9: _t->mouseDoubleClickEvent((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 10: _t->wheelEvent((*reinterpret_cast< QWheelEvent*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject Scene::staticMetaObject = {
    { &QGLWidget::staticMetaObject, qt_meta_stringdata_Scene.data,
      qt_meta_data_Scene,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Scene::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Scene::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Scene.stringdata))
        return static_cast<void*>(const_cast< Scene*>(this));
    return QGLWidget::qt_metacast(_clname);
}

int Scene::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGLWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
