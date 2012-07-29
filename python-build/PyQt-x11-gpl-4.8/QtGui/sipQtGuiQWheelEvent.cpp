/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.11.2 on Thu Jul 12 20:03:19 2012
 *
 * Copyright (c) 2010 Riverbank Computing Limited <info@riverbankcomputing.com>
 * 
 * This file is part of PyQt.
 * 
 * This file may be used under the terms of the GNU General Public
 * License versions 2.0 or 3.0 as published by the Free Software
 * Foundation and appearing in the files LICENSE.GPL2 and LICENSE.GPL3
 * included in the packaging of this file.  Alternatively you may (at
 * your option) use any later version of the GNU General Public
 * License if such license has been publicly approved by Riverbank
 * Computing Limited (or its successors, if any) and the KDE Free Qt
 * Foundation. In addition, as a special exception, Riverbank gives you
 * certain additional rights. These rights are described in the Riverbank
 * GPL Exception version 1.1, which can be found in the file
 * GPL_EXCEPTION.txt in this package.
 * 
 * Please review the following information to ensure GNU General
 * Public Licensing requirements will be met:
 * http://trolltech.com/products/qt/licenses/licensing/opensource/. If
 * you are unsure which license is appropriate for your use, please
 * review the following information:
 * http://trolltech.com/products/qt/licenses/licensing/licensingoverview
 * or contact the sales department at sales@riverbankcomputing.com.
 * 
 * This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
 * WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
 */

#include "sipAPIQtGui.h"

#line 275 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtGui/qevent.sip"
#include <qevent.h>
#line 39 "sipQtGuiQWheelEvent.cpp"

#line 40 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qpoint.sip"
#include <qpoint.h>
#line 43 "sipQtGuiQWheelEvent.cpp"
#line 40 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 46 "sipQtGuiQWheelEvent.cpp"
#line 40 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 49 "sipQtGuiQWheelEvent.cpp"
#line 40 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 52 "sipQtGuiQWheelEvent.cpp"
#line 36 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 55 "sipQtGuiQWheelEvent.cpp"


class sipQWheelEvent : public QWheelEvent
{
public:
    sipQWheelEvent(const QPoint&,int,Qt::MouseButtons,Qt::KeyboardModifiers,Qt::Orientation);
    sipQWheelEvent(const QPoint&,const QPoint&,int,Qt::MouseButtons,Qt::KeyboardModifiers,Qt::Orientation);
    sipQWheelEvent(const QWheelEvent&);
    ~sipQWheelEvent();

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQWheelEvent(const sipQWheelEvent &);
    sipQWheelEvent &operator = (const sipQWheelEvent &);
};

sipQWheelEvent::sipQWheelEvent(const QPoint& a0,int a1,Qt::MouseButtons a2,Qt::KeyboardModifiers a3,Qt::Orientation a4): QWheelEvent(a0,a1,a2,a3,a4), sipPySelf(0)
{
}

sipQWheelEvent::sipQWheelEvent(const QPoint& a0,const QPoint& a1,int a2,Qt::MouseButtons a3,Qt::KeyboardModifiers a4,Qt::Orientation a5): QWheelEvent(a0,a1,a2,a3,a4,a5), sipPySelf(0)
{
}

sipQWheelEvent::sipQWheelEvent(const QWheelEvent& a0): QWheelEvent(a0), sipPySelf(0)
{
}

sipQWheelEvent::~sipQWheelEvent()
{
    sipCommonDtor(sipPySelf);
}


extern "C" {static PyObject *meth_QWheelEvent_delta(PyObject *, PyObject *);}
static PyObject *meth_QWheelEvent_delta(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QWheelEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QWheelEvent, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->delta();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWheelEvent, sipName_delta, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QWheelEvent_pos(PyObject *, PyObject *);}
static PyObject *meth_QWheelEvent_pos(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QWheelEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QWheelEvent, &sipCpp))
        {
            QPoint *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QPoint(sipCpp->pos());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QPoint,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWheelEvent, sipName_pos, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QWheelEvent_globalPos(PyObject *, PyObject *);}
static PyObject *meth_QWheelEvent_globalPos(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QWheelEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QWheelEvent, &sipCpp))
        {
            QPoint *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QPoint(sipCpp->globalPos());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QPoint,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWheelEvent, sipName_globalPos, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QWheelEvent_x(PyObject *, PyObject *);}
static PyObject *meth_QWheelEvent_x(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QWheelEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QWheelEvent, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->x();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWheelEvent, sipName_x, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QWheelEvent_y(PyObject *, PyObject *);}
static PyObject *meth_QWheelEvent_y(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QWheelEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QWheelEvent, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->y();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWheelEvent, sipName_y, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QWheelEvent_globalX(PyObject *, PyObject *);}
static PyObject *meth_QWheelEvent_globalX(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QWheelEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QWheelEvent, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->globalX();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWheelEvent, sipName_globalX, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QWheelEvent_globalY(PyObject *, PyObject *);}
static PyObject *meth_QWheelEvent_globalY(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QWheelEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QWheelEvent, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->globalY();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWheelEvent, sipName_globalY, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QWheelEvent_buttons(PyObject *, PyObject *);}
static PyObject *meth_QWheelEvent_buttons(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QWheelEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QWheelEvent, &sipCpp))
        {
            Qt::MouseButtons *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new Qt::MouseButtons(sipCpp->buttons());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_Qt_MouseButtons,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWheelEvent, sipName_buttons, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QWheelEvent_orientation(PyObject *, PyObject *);}
static PyObject *meth_QWheelEvent_orientation(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QWheelEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QWheelEvent, &sipCpp))
        {
            Qt::Orientation sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->orientation();
            Py_END_ALLOW_THREADS

            return sipConvertFromEnum(sipRes,sipType_Qt_Orientation);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWheelEvent, sipName_orientation, NULL);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QWheelEvent(void *, const sipTypeDef *);}
static void *cast_QWheelEvent(void *ptr, const sipTypeDef *targetType)
{
    void *res;

    if (targetType == sipType_QWheelEvent)
        return ptr;

    if ((res = ((const sipClassTypeDef *)sipType_QInputEvent)->ctd_cast((QInputEvent *)(QWheelEvent *)ptr,targetType)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QWheelEvent(void *, int);}
static void release_QWheelEvent(void *sipCppV,int sipState)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQWheelEvent *>(sipCppV);
    else
        delete reinterpret_cast<QWheelEvent *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QWheelEvent(sipSimpleWrapper *);}
static void dealloc_QWheelEvent(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQWheelEvent *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QWheelEvent(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_QWheelEvent(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_QWheelEvent(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQWheelEvent *sipCpp = 0;

    {
        const QPoint * a0;
        int a1;
        Qt::MouseButtons * a2;
        int a2State = 0;
        Qt::KeyboardModifiers * a3;
        int a3State = 0;
        Qt::Orientation a4 = Qt::Vertical;

        static const char *sipKwdList[] = {
            NULL,
            NULL,
            NULL,
            NULL,
            sipName_orientation,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "J9iJ1J1|E", sipType_QPoint, &a0, &a1, sipType_Qt_MouseButtons, &a2, &a2State, sipType_Qt_KeyboardModifiers, &a3, &a3State, sipType_Qt_Orientation, &a4))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQWheelEvent(*a0,a1,*a2,*a3,a4);
            Py_END_ALLOW_THREADS
            sipReleaseType(a2,sipType_Qt_MouseButtons,a2State);
            sipReleaseType(a3,sipType_Qt_KeyboardModifiers,a3State);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const QPoint * a0;
        const QPoint * a1;
        int a2;
        Qt::MouseButtons * a3;
        int a3State = 0;
        Qt::KeyboardModifiers * a4;
        int a4State = 0;
        Qt::Orientation a5 = Qt::Vertical;

        static const char *sipKwdList[] = {
            NULL,
            NULL,
            NULL,
            NULL,
            NULL,
            sipName_orientation,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "J9J9iJ1J1|E", sipType_QPoint, &a0, sipType_QPoint, &a1, &a2, sipType_Qt_MouseButtons, &a3, &a3State, sipType_Qt_KeyboardModifiers, &a4, &a4State, sipType_Qt_Orientation, &a5))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQWheelEvent(*a0,*a1,a2,*a3,*a4,a5);
            Py_END_ALLOW_THREADS
            sipReleaseType(a3,sipType_Qt_MouseButtons,a3State);
            sipReleaseType(a4,sipType_Qt_KeyboardModifiers,a4State);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const QWheelEvent * a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QWheelEvent, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQWheelEvent(*a0);
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QWheelEvent[] = {{247, 255, 1}};


static PyMethodDef methods_QWheelEvent[] = {
    {SIP_MLNAME_CAST(sipName_buttons), meth_QWheelEvent_buttons, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_delta), meth_QWheelEvent_delta, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_globalPos), meth_QWheelEvent_globalPos, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_globalX), meth_QWheelEvent_globalX, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_globalY), meth_QWheelEvent_globalY, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_orientation), meth_QWheelEvent_orientation, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_pos), meth_QWheelEvent_pos, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_x), meth_QWheelEvent_x, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_y), meth_QWheelEvent_y, METH_VARARGS, NULL}
};


pyqt4ClassTypeDef sipTypeDef_QtGui_QWheelEvent = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_QWheelEvent,
        {0}
    },
    {
        sipNameNr_QWheelEvent,
        {0, 0, 1},
        9, methods_QWheelEvent,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    -1,
    -1,
    supers_QWheelEvent,
    0,
    init_QWheelEvent,
    0,
    0,
#if PY_MAJOR_VERSION >= 3
    0,
    0,
#else
    0,
    0,
    0,
    0,
#endif
    dealloc_QWheelEvent,
    0,
    0,
    0,
    release_QWheelEvent,
    cast_QWheelEvent,
    0,
    0,
    0
},
    0,
    0,
    0
};