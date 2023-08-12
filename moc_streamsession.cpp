/****************************************************************************
** Meta object code from reading C++ file 'streamsession.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "streamsession.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'streamsession.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_StreamSession_t {
    QByteArrayData data[20];
    char stringdata0[238];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_StreamSession_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_StreamSession_t qt_meta_stringdata_StreamSession = {
    {
QT_MOC_LITERAL(0, 0, 13), // "StreamSession"
QT_MOC_LITERAL(1, 14, 20), // "FfmpegFrameAvailable"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 11), // "SessionQuit"
QT_MOC_LITERAL(4, 48, 16), // "ChiakiQuitReason"
QT_MOC_LITERAL(5, 65, 6), // "reason"
QT_MOC_LITERAL(6, 72, 10), // "reason_str"
QT_MOC_LITERAL(7, 83, 17), // "LoginPINRequested"
QT_MOC_LITERAL(8, 101, 9), // "incorrect"
QT_MOC_LITERAL(9, 111, 9), // "InitAudio"
QT_MOC_LITERAL(10, 121, 8), // "channels"
QT_MOC_LITERAL(11, 130, 4), // "rate"
QT_MOC_LITERAL(12, 135, 11), // "InitHaptics"
QT_MOC_LITERAL(13, 147, 5), // "Event"
QT_MOC_LITERAL(14, 153, 12), // "ChiakiEvent*"
QT_MOC_LITERAL(15, 166, 5), // "event"
QT_MOC_LITERAL(16, 172, 17), // "DisconnectHaptics"
QT_MOC_LITERAL(17, 190, 14), // "ConnectHaptics"
QT_MOC_LITERAL(18, 205, 14), // "UpdateGamepads"
QT_MOC_LITERAL(19, 220, 17) // "SendFeedbackState"

    },
    "StreamSession\0FfmpegFrameAvailable\0\0"
    "SessionQuit\0ChiakiQuitReason\0reason\0"
    "reason_str\0LoginPINRequested\0incorrect\0"
    "InitAudio\0channels\0rate\0InitHaptics\0"
    "Event\0ChiakiEvent*\0event\0DisconnectHaptics\0"
    "ConnectHaptics\0UpdateGamepads\0"
    "SendFeedbackState"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_StreamSession[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x06 /* Public */,
       3,    2,   65,    2, 0x06 /* Public */,
       7,    1,   70,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    2,   73,    2, 0x08 /* Private */,
      12,    0,   78,    2, 0x08 /* Private */,
      13,    1,   79,    2, 0x08 /* Private */,
      16,    0,   82,    2, 0x08 /* Private */,
      17,    0,   83,    2, 0x08 /* Private */,
      18,    0,   84,    2, 0x08 /* Private */,
      19,    0,   85,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4, QMetaType::QString,    5,    6,
    QMetaType::Void, QMetaType::Bool,    8,

 // slots: parameters
    QMetaType::Void, QMetaType::UInt, QMetaType::UInt,   10,   11,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void StreamSession::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<StreamSession *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->FfmpegFrameAvailable(); break;
        case 1: _t->SessionQuit((*reinterpret_cast< ChiakiQuitReason(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 2: _t->LoginPINRequested((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->InitAudio((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2]))); break;
        case 4: _t->InitHaptics(); break;
        case 5: _t->Event((*reinterpret_cast< ChiakiEvent*(*)>(_a[1]))); break;
        case 6: _t->DisconnectHaptics(); break;
        case 7: _t->ConnectHaptics(); break;
        case 8: _t->UpdateGamepads(); break;
        case 9: _t->SendFeedbackState(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ChiakiQuitReason >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (StreamSession::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StreamSession::FfmpegFrameAvailable)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (StreamSession::*)(ChiakiQuitReason , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StreamSession::SessionQuit)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (StreamSession::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StreamSession::LoginPINRequested)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject StreamSession::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_StreamSession.data,
    qt_meta_data_StreamSession,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *StreamSession::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *StreamSession::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_StreamSession.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int StreamSession::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void StreamSession::FfmpegFrameAvailable()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void StreamSession::SessionQuit(ChiakiQuitReason _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void StreamSession::LoginPINRequested(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
