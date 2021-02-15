// 
// This code has been automatically generated by RaQt_maker V0.0.1.
// 
// Rather than manually modify this file, it should be preferable to
// 
//     - 1) Modify the source files available here:
//         https://github.com/yguillemot/RaQt_maker.git
// 
//     - 2) Regenerate the whole code.
// 


#include <QtWidgets>

#include <iostream>
#include <string.h>

#include "RaQtWrapper.h"


extern void (*slotCallback)(int objId, char *slotName);
extern void (*slotCallbackInt)(int objId, char *slotName, STD_INT i);
extern void (*slotCallbackInt2)(int objId, char *slotName, STD_INT i1, STD_INT i2);
extern void (*slotCallbackStr)(int objId, char *slotName, char *s);
extern void (*slotCallbackIntStr)(int objId, char *slotName, STD_INT i, char *s);
extern void (*slotCallbackBool)(int objId, char *slotName, uchar b);
extern void (*slotCallbackPointer)(int objId, char *slotName, void *p);

extern void (*slotCallbackQEvent)(int objId, const char *slotName, QEvent* event);
extern void (*slotCallbackQMouseEvent)(int objId, const char *slotName, QMouseEvent* event);
extern void (*slotCallbackQPaintEvent)(int objId, const char *slotName, QPaintEvent* event);


extern void (*slotCallbackComplexSig)(int32_t objId, char *slotName, uint32_t dataId);


//     TODO TODO TODO
//     Structure a utiliser comme valeur dans la map signalDict
struct QtSignal {
    QtSignal(QString a_signalName, void * a_pcallemit) :
        signalName(a_signalName),
        pcallemit(a_pcallemit)
    { }

    QString signalName;
    void * pcallemit;

    void dump() {
        std::cout << signalName.toLocal8Bit().data() << " "
                  << pcallemit;
    }
};




class QWConnectorE : public QObject
{
 Q_OBJECT

public:
    QWConnectorE(int objId, char * signalName, char * signalSig);

    ~QWConnectorE() {
    }

    void emit_QWSignal() { emit QWSignal(); }
    void emit_QWSignal(int val)
    {
//         std::cout << "emit_QWSignal(int: " << val << ")\n";
        emit QWSignal(val);
    }
    void emit_QWSignal(bool b)
    {
//         std::cout << "this = " << this << " emit_QWSignal(bool: " << b << ")\n";
        emit QWSignal(b);
    }
    void emit_QWSignal(const QString str)
    {
//         std::cout << "this = " << this << " emit_QWSignal(str: \""
//                   << str.toLocal8Bit().data() << "\")\n";
        emit QWSignal(str);
    }
    void emit_QWLocalToLocalSignal(int dataId)
        { emit QWLocalToLocalSignal(dataId); }

signals:
    void QWSignal();
    void QWSignal(int);
    void QWSignal(bool b);
    void QWSignal(const QString &str);
    void QWLocalToLocalSignal(int dataId);

private:
    int m_objId;
    QString m_signalName;
    QString m_signalSig;
};



class QWConnectorR : public QObject
{
 Q_OBJECT

public:
    QWConnectorR(int objId, char * slotName, char * slotSig);

    ~QWConnectorR() {
    }


public slots:
    void QWSlot();
    void QWSlot(int val);
    void QWSlot(bool b);
    void QWSlot(const QString str);
    void QWLocalToLocalSlot(int dataId);

private:
    int m_objId;
    QString m_slotName;
    QString m_slotSig;
};






class CallbackValidator
{

public:
    CallbackValidator() :
                m_objId(0)        ,
        m_enterEvent(false)        ,
        m_leaveEvent(false)        ,
        m_mouseMoveEvent(false)        ,
        m_mousePressEvent(false)        ,
        m_mouseReleaseEvent(false)        ,
        m_paintEvent(false)

    {
//         std::cout << "############## EVENTVALIDATOR CTOR ##############\n";
//
//         std::cout << "m_objId = " << m_objId << "\n";
//         std::cout << "m_mouseMoveEvent = " << m_mouseMoveEvent << "\n";
//         std::cout << "m_enterEvent = " << m_enterEvent << "\n";
//         std::cout << "m_leaveEvent = " << m_leaveEvent << "\n";
//         std::cout << "m_rakuMouseMoveHandler = " << m_rakuMouseMoveHandler.toLocal8Bit().data() << "\n";
//         std::cout << "m_rakuEnterHandler = " << m_rakuEnterHandler.toLocal8Bit().data() << "\n";
//         std::cout << "m_rakuLeaveHandler = " << m_rakuLeaveHandler.toLocal8Bit().data() << "\n";
//         std::cout << "\n";
    }

    ~CallbackValidator() { }

    void validateEvent(int32_t objId, char * methodName)
    {
//         std::cout << "validateEvent eventType=" << eventType
//             << "  objId=" << objId << "  methodName=" << methodName << "\n";
//
//         std::cout << "m_objId = " << m_objId << "\n";
//         std::cout << "m_mouseMoveEvent = " << m_mouseMoveEvent << "\n";
//         std::cout << "m_enterEvent = " << m_enterEvent << "\n";
//         std::cout << "m_leaveEvent = " << m_leaveEvent << "\n";
//         std::cout << "m_rakuMouseMoveHandler = " << m_rakuMouseMoveHandler.toLocal8Bit().data() << "\n";
//         std::cout << "m_rakuEnterHandler = " << m_rakuEnterHandler.toLocal8Bit().data() << "\n";
//         std::cout << "m_rakuLeaveHandler = " << m_rakuLeaveHandler.toLocal8Bit().data() << "\n";
//         std::cout << "\n";

        m_objId = objId;
        QString meth = QString(methodName);


    if (meth == QString("enterEvent")) {
        m_enterEvent = true;
    }
    if (meth == QString("leaveEvent")) {
        m_leaveEvent = true;
    }
    if (meth == QString("mouseMoveEvent")) {
        m_mouseMoveEvent = true;
    }
    if (meth == QString("mousePressEvent")) {
        m_mousePressEvent = true;
    }
    if (meth == QString("mouseReleaseEvent")) {
        m_mouseReleaseEvent = true;
    }
    if (meth == QString("paintEvent")) {
        m_paintEvent = true;
    }


//         std::cout << "m_objId = " << m_objId << "\n";
//         std::cout << "m_mouseMoveEvent = " << m_mouseMoveEvent << "\n";
//         std::cout << "m_enterEvent = " << m_enterEvent << "\n";
//         std::cout << "m_leaveEvent = " << m_leaveEvent << "\n";
//         std::cout << "m_rakuMouseMoveHandler = " << m_rakuMouseMoveHandler.toLocal8Bit().data() << "\n";
//         std::cout << "m_rakuEnterHandler = " << m_rakuEnterHandler.toLocal8Bit().data() << "\n";
//         std::cout << "m_rakuLeaveHandler = " << m_rakuLeaveHandler.toLocal8Bit().data() << "\n";
//
//         std::cout << "validateEvent : Fin\n";
    }

    // Raku object Id
    int32_t m_objId;

    // Validate the callback
        bool m_enterEvent;
        bool m_leaveEvent;
        bool m_mouseMoveEvent;
        bool m_mousePressEvent;
        bool m_mouseReleaseEvent;
        bool m_paintEvent;


    // Raku name of the method used as callback
    QString m_rakuMouseMoveHandler;
    QString m_rakuEnterHandler;
    QString m_rakuLeaveHandler;
};





//////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////
// Subclasses

class SCQLabel : public QLabel, public CallbackValidator
{
public:
    SCQLabel(QWidget* parent, Qt::WindowFlags f):
        QLabel(parent, f)
    { }

    SCQLabel(const QString& text, QWidget* parent, Qt::WindowFlags f):
        QLabel(text, parent, f)
    { }

    ~SCQLabel() { }

    void enterEvent(QEvent* event)
    {
        if (m_enterEvent) {
        //   CONVERSION NEEDED HERE !!!
            (*slotCallbackQEvent)(
                m_objId, "enterEvent",
                event
            );
        }
        QLabel::enterEvent(event);
    }

    void leaveEvent(QEvent* event)
    {
        if (m_leaveEvent) {
        //   CONVERSION NEEDED HERE !!!
            (*slotCallbackQEvent)(
                m_objId, "leaveEvent",
                event
            );
        }
        QLabel::leaveEvent(event);
    }

    void mouseMoveEvent(QMouseEvent* event)
    {
        if (m_mouseMoveEvent) {
        //   CONVERSION NEEDED HERE !!!
            (*slotCallbackQMouseEvent)(
                m_objId, "mouseMoveEvent",
                event
            );
        }
        QLabel::mouseMoveEvent(event);
    }

    void mousePressEvent(QMouseEvent* event)
    {
        if (m_mousePressEvent) {
        //   CONVERSION NEEDED HERE !!!
            (*slotCallbackQMouseEvent)(
                m_objId, "mousePressEvent",
                event
            );
        }
        QLabel::mousePressEvent(event);
    }

    void mouseReleaseEvent(QMouseEvent* event)
    {
        if (m_mouseReleaseEvent) {
        //   CONVERSION NEEDED HERE !!!
            (*slotCallbackQMouseEvent)(
                m_objId, "mouseReleaseEvent",
                event
            );
        }
        QLabel::mouseReleaseEvent(event);
    }

    void paintEvent(QPaintEvent* event)
    {
        if (m_paintEvent) {
        //   CONVERSION NEEDED HERE !!!
            (*slotCallbackQPaintEvent)(
                m_objId, "paintEvent",
                event
            );
        }
        QLabel::paintEvent(event);
    }

};

class SCQLineEdit : public QLineEdit, public CallbackValidator
{
public:
    SCQLineEdit(QWidget* parent):
        QLineEdit(parent)
    { }

    SCQLineEdit(const QString& arg1, QWidget* parent):
        QLineEdit(arg1, parent)
    { }

    ~SCQLineEdit() { }

    void enterEvent(QEvent* event)
    {
        if (m_enterEvent) {
        //   CONVERSION NEEDED HERE !!!
            (*slotCallbackQEvent)(
                m_objId, "enterEvent",
                event
            );
        }
        QLineEdit::enterEvent(event);
    }

    void leaveEvent(QEvent* event)
    {
        if (m_leaveEvent) {
        //   CONVERSION NEEDED HERE !!!
            (*slotCallbackQEvent)(
                m_objId, "leaveEvent",
                event
            );
        }
        QLineEdit::leaveEvent(event);
    }

    void mouseMoveEvent(QMouseEvent* event)
    {
        if (m_mouseMoveEvent) {
        //   CONVERSION NEEDED HERE !!!
            (*slotCallbackQMouseEvent)(
                m_objId, "mouseMoveEvent",
                event
            );
        }
        QLineEdit::mouseMoveEvent(event);
    }

    void mousePressEvent(QMouseEvent* event)
    {
        if (m_mousePressEvent) {
        //   CONVERSION NEEDED HERE !!!
            (*slotCallbackQMouseEvent)(
                m_objId, "mousePressEvent",
                event
            );
        }
        QLineEdit::mousePressEvent(event);
    }

    void mouseReleaseEvent(QMouseEvent* event)
    {
        if (m_mouseReleaseEvent) {
        //   CONVERSION NEEDED HERE !!!
            (*slotCallbackQMouseEvent)(
                m_objId, "mouseReleaseEvent",
                event
            );
        }
        QLineEdit::mouseReleaseEvent(event);
    }

    void paintEvent(QPaintEvent* event)
    {
        if (m_paintEvent) {
        //   CONVERSION NEEDED HERE !!!
            (*slotCallbackQPaintEvent)(
                m_objId, "paintEvent",
                event
            );
        }
        QLineEdit::paintEvent(event);
    }

};

class SCQMenu : public QMenu, public CallbackValidator
{
public:
    SCQMenu(QWidget* parent):
        QMenu(parent)
    { }

    SCQMenu(const QString& title, QWidget* parent):
        QMenu(title, parent)
    { }

    ~SCQMenu() { }

    void enterEvent(QEvent* event)
    {
        if (m_enterEvent) {
        //   CONVERSION NEEDED HERE !!!
            (*slotCallbackQEvent)(
                m_objId, "enterEvent",
                event
            );
        }
        QMenu::enterEvent(event);
    }

    void leaveEvent(QEvent* event)
    {
        if (m_leaveEvent) {
        //   CONVERSION NEEDED HERE !!!
            (*slotCallbackQEvent)(
                m_objId, "leaveEvent",
                event
            );
        }
        QMenu::leaveEvent(event);
    }

    void mouseMoveEvent(QMouseEvent* event)
    {
        if (m_mouseMoveEvent) {
        //   CONVERSION NEEDED HERE !!!
            (*slotCallbackQMouseEvent)(
                m_objId, "mouseMoveEvent",
                event
            );
        }
        QMenu::mouseMoveEvent(event);
    }

    void mousePressEvent(QMouseEvent* event)
    {
        if (m_mousePressEvent) {
        //   CONVERSION NEEDED HERE !!!
            (*slotCallbackQMouseEvent)(
                m_objId, "mousePressEvent",
                event
            );
        }
        QMenu::mousePressEvent(event);
    }

    void mouseReleaseEvent(QMouseEvent* event)
    {
        if (m_mouseReleaseEvent) {
        //   CONVERSION NEEDED HERE !!!
            (*slotCallbackQMouseEvent)(
                m_objId, "mouseReleaseEvent",
                event
            );
        }
        QMenu::mouseReleaseEvent(event);
    }

    void paintEvent(QPaintEvent* event)
    {
        if (m_paintEvent) {
        //   CONVERSION NEEDED HERE !!!
            (*slotCallbackQPaintEvent)(
                m_objId, "paintEvent",
                event
            );
        }
        QMenu::paintEvent(event);
    }

};

class SCQPushButton : public QPushButton, public CallbackValidator
{
public:
    SCQPushButton(const QString& text, QWidget* parent):
        QPushButton(text, parent)
    { }

    ~SCQPushButton() { }

    void enterEvent(QEvent* event)
    {
        if (m_enterEvent) {
        //   CONVERSION NEEDED HERE !!!
            (*slotCallbackQEvent)(
                m_objId, "enterEvent",
                event
            );
        }
        QPushButton::enterEvent(event);
    }

    void leaveEvent(QEvent* event)
    {
        if (m_leaveEvent) {
        //   CONVERSION NEEDED HERE !!!
            (*slotCallbackQEvent)(
                m_objId, "leaveEvent",
                event
            );
        }
        QPushButton::leaveEvent(event);
    }

    void mouseMoveEvent(QMouseEvent* event)
    {
        if (m_mouseMoveEvent) {
        //   CONVERSION NEEDED HERE !!!
            (*slotCallbackQMouseEvent)(
                m_objId, "mouseMoveEvent",
                event
            );
        }
        QPushButton::mouseMoveEvent(event);
    }

    void mousePressEvent(QMouseEvent* event)
    {
        if (m_mousePressEvent) {
        //   CONVERSION NEEDED HERE !!!
            (*slotCallbackQMouseEvent)(
                m_objId, "mousePressEvent",
                event
            );
        }
        QPushButton::mousePressEvent(event);
    }

    void mouseReleaseEvent(QMouseEvent* event)
    {
        if (m_mouseReleaseEvent) {
        //   CONVERSION NEEDED HERE !!!
            (*slotCallbackQMouseEvent)(
                m_objId, "mouseReleaseEvent",
                event
            );
        }
        QPushButton::mouseReleaseEvent(event);
    }

    void paintEvent(QPaintEvent* event)
    {
        if (m_paintEvent) {
        //   CONVERSION NEEDED HERE !!!
            (*slotCallbackQPaintEvent)(
                m_objId, "paintEvent",
                event
            );
        }
        QPushButton::paintEvent(event);
    }

};

class SCQTextEdit : public QTextEdit, public CallbackValidator
{
public:
    SCQTextEdit(QWidget* parent):
        QTextEdit(parent)
    { }

    ~SCQTextEdit() { }

    void enterEvent(QEvent* event)
    {
        if (m_enterEvent) {
        //   CONVERSION NEEDED HERE !!!
            (*slotCallbackQEvent)(
                m_objId, "enterEvent",
                event
            );
        }
        QTextEdit::enterEvent(event);
    }

    void leaveEvent(QEvent* event)
    {
        if (m_leaveEvent) {
        //   CONVERSION NEEDED HERE !!!
            (*slotCallbackQEvent)(
                m_objId, "leaveEvent",
                event
            );
        }
        QTextEdit::leaveEvent(event);
    }

    void mouseMoveEvent(QMouseEvent* event)
    {
        if (m_mouseMoveEvent) {
        //   CONVERSION NEEDED HERE !!!
            (*slotCallbackQMouseEvent)(
                m_objId, "mouseMoveEvent",
                event
            );
        }
        QTextEdit::mouseMoveEvent(event);
    }

    void mousePressEvent(QMouseEvent* event)
    {
        if (m_mousePressEvent) {
        //   CONVERSION NEEDED HERE !!!
            (*slotCallbackQMouseEvent)(
                m_objId, "mousePressEvent",
                event
            );
        }
        QTextEdit::mousePressEvent(event);
    }

    void mouseReleaseEvent(QMouseEvent* event)
    {
        if (m_mouseReleaseEvent) {
        //   CONVERSION NEEDED HERE !!!
            (*slotCallbackQMouseEvent)(
                m_objId, "mouseReleaseEvent",
                event
            );
        }
        QTextEdit::mouseReleaseEvent(event);
    }

    void paintEvent(QPaintEvent* event)
    {
        if (m_paintEvent) {
        //   CONVERSION NEEDED HERE !!!
            (*slotCallbackQPaintEvent)(
                m_objId, "paintEvent",
                event
            );
        }
        QTextEdit::paintEvent(event);
    }

};

class SCQWidget : public QWidget, public CallbackValidator
{
public:
    SCQWidget(QWidget* parent, Qt::WindowFlags f):
        QWidget(parent, f)
    { }

    ~SCQWidget() { }

    void enterEvent(QEvent* event)
    {
        if (m_enterEvent) {
        //   CONVERSION NEEDED HERE !!!
            (*slotCallbackQEvent)(
                m_objId, "enterEvent",
                event
            );
        }
        QWidget::enterEvent(event);
    }

    void leaveEvent(QEvent* event)
    {
        if (m_leaveEvent) {
        //   CONVERSION NEEDED HERE !!!
            (*slotCallbackQEvent)(
                m_objId, "leaveEvent",
                event
            );
        }
        QWidget::leaveEvent(event);
    }

    void mouseMoveEvent(QMouseEvent* event)
    {
        if (m_mouseMoveEvent) {
        //   CONVERSION NEEDED HERE !!!
            (*slotCallbackQMouseEvent)(
                m_objId, "mouseMoveEvent",
                event
            );
        }
        QWidget::mouseMoveEvent(event);
    }

    void mousePressEvent(QMouseEvent* event)
    {
        if (m_mousePressEvent) {
        //   CONVERSION NEEDED HERE !!!
            (*slotCallbackQMouseEvent)(
                m_objId, "mousePressEvent",
                event
            );
        }
        QWidget::mousePressEvent(event);
    }

    void mouseReleaseEvent(QMouseEvent* event)
    {
        if (m_mouseReleaseEvent) {
        //   CONVERSION NEEDED HERE !!!
            (*slotCallbackQMouseEvent)(
                m_objId, "mouseReleaseEvent",
                event
            );
        }
        QWidget::mouseReleaseEvent(event);
    }

    void paintEvent(QPaintEvent* event)
    {
        if (m_paintEvent) {
        //   CONVERSION NEEDED HERE !!!
            (*slotCallbackQPaintEvent)(
                m_objId, "paintEvent",
                event
            );
        }
        QWidget::paintEvent(event);
    }

};





