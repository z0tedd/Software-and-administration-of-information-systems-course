/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../../3_semester/programmingc++/kursax/kursax/Hangman/mainwindow.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {
struct qt_meta_tag_ZN10MainWindowE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN10MainWindowE = QtMocHelpers::stringData(
    "MainWindow",
    "myVariableChanged",
    "",
    "value",
    "on_PlayButton_clicked",
    "on_pushButton_clicked",
    "on_SettingsButton_clicked",
    "on_ExitButton_clicked",
    "on_pushButton_2_clicked",
    "on_HumanComp_clicked",
    "on_CompHuman_clicked",
    "on_ReturnToMainMenu_clicked",
    "on_GetPath_clicked",
    "on_SaveSettings_clicked",
    "on_textEdit_textChanged",
    "on_SetLetter_clicked",
    "on_EnterFullWord_clicked",
    "on_HumanHuman_clicked",
    "on_SetWord_2_clicked",
    "on_textEdit_2_textChanged",
    "on_EnterFullWord_2_clicked",
    "on_SetWord_clicked",
    "on_Player1_selectionChanged",
    "on_Player1_textChanged",
    "on_SaveButton_clicked",
    "on_Player2_textChanged",
    "onEnterFullWord",
    "on_PlayersEdit_textChanged",
    "on_HumanHuman_2_clicked"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN10MainWindowE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      26,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  170,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       4,    0,  173,    2, 0x08,    3 /* Private */,
       5,    0,  174,    2, 0x08,    4 /* Private */,
       6,    0,  175,    2, 0x08,    5 /* Private */,
       7,    0,  176,    2, 0x08,    6 /* Private */,
       8,    0,  177,    2, 0x08,    7 /* Private */,
       9,    0,  178,    2, 0x08,    8 /* Private */,
      10,    0,  179,    2, 0x08,    9 /* Private */,
      11,    0,  180,    2, 0x08,   10 /* Private */,
      12,    0,  181,    2, 0x08,   11 /* Private */,
      13,    0,  182,    2, 0x08,   12 /* Private */,
      14,    0,  183,    2, 0x08,   13 /* Private */,
      15,    0,  184,    2, 0x08,   14 /* Private */,
      16,    0,  185,    2, 0x08,   15 /* Private */,
      17,    0,  186,    2, 0x08,   16 /* Private */,
      18,    0,  187,    2, 0x08,   17 /* Private */,
      19,    0,  188,    2, 0x08,   18 /* Private */,
      20,    0,  189,    2, 0x08,   19 /* Private */,
      21,    0,  190,    2, 0x08,   20 /* Private */,
      22,    0,  191,    2, 0x08,   21 /* Private */,
      23,    0,  192,    2, 0x08,   22 /* Private */,
      24,    0,  193,    2, 0x08,   23 /* Private */,
      25,    0,  194,    2, 0x08,   24 /* Private */,
      26,    0,  195,    2, 0x08,   25 /* Private */,
      27,    0,  196,    2, 0x08,   26 /* Private */,
      28,    0,  197,    2, 0x08,   27 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_ZN10MainWindowE.offsetsAndSizes,
    qt_meta_data_ZN10MainWindowE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN10MainWindowE_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>,
        // method 'myVariableChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_PlayButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_SettingsButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_ExitButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_2_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_HumanComp_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_CompHuman_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_ReturnToMainMenu_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_GetPath_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_SaveSettings_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_textEdit_textChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_SetLetter_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_EnterFullWord_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_HumanHuman_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_SetWord_2_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_textEdit_2_textChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_EnterFullWord_2_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_SetWord_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_Player1_selectionChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_Player1_textChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_SaveButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_Player2_textChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onEnterFullWord'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_PlayersEdit_textChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_HumanHuman_2_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<MainWindow *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->myVariableChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->on_PlayButton_clicked(); break;
        case 2: _t->on_pushButton_clicked(); break;
        case 3: _t->on_SettingsButton_clicked(); break;
        case 4: _t->on_ExitButton_clicked(); break;
        case 5: _t->on_pushButton_2_clicked(); break;
        case 6: _t->on_HumanComp_clicked(); break;
        case 7: _t->on_CompHuman_clicked(); break;
        case 8: _t->on_ReturnToMainMenu_clicked(); break;
        case 9: _t->on_GetPath_clicked(); break;
        case 10: _t->on_SaveSettings_clicked(); break;
        case 11: _t->on_textEdit_textChanged(); break;
        case 12: _t->on_SetLetter_clicked(); break;
        case 13: _t->on_EnterFullWord_clicked(); break;
        case 14: _t->on_HumanHuman_clicked(); break;
        case 15: _t->on_SetWord_2_clicked(); break;
        case 16: _t->on_textEdit_2_textChanged(); break;
        case 17: _t->on_EnterFullWord_2_clicked(); break;
        case 18: _t->on_SetWord_clicked(); break;
        case 19: _t->on_Player1_selectionChanged(); break;
        case 20: _t->on_Player1_textChanged(); break;
        case 21: _t->on_SaveButton_clicked(); break;
        case 22: _t->on_Player2_textChanged(); break;
        case 23: _t->onEnterFullWord(); break;
        case 24: _t->on_PlayersEdit_textChanged(); break;
        case 25: _t->on_HumanHuman_2_clicked(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _q_method_type = void (MainWindow::*)(int );
            if (_q_method_type _q_method = &MainWindow::myVariableChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN10MainWindowE.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 26)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 26;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 26)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 26;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::myVariableChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
