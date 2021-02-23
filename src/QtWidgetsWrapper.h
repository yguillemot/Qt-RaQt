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


#include <stdint.h>

#ifdef __cplusplus
#define EXTERNC extern "C"
#else
#define EXTERNC
#endif


// What std size for integers ???
#define STD_INT long



EXTERNC void * QWApplicationCtor(int argc, char **argv);

EXTERNC int QWApplicationExec(void * obj);

EXTERNC void * QWApplicationInstance();



EXTERNC void  QWQAbstractButtonsetText(void * obj, char * text);
EXTERNC char * QWQAbstractButtontext(void * obj);
EXTERNC void  QWQAbstractButtonclick(void * obj);
EXTERNC void * QWQActionCtor_1(void * parent);
EXTERNC void  QWQActiontrigger(void * obj);
EXTERNC void  QWQActionsetEnabled(void * obj, int8_t  arg1);
EXTERNC void  QWQActionsetDisabled(void * obj, int8_t  b);
EXTERNC void QWQActionDtor(void *);
EXTERNC void  QWQBoxLayoutaddLayout(void * obj, void * layout, int32_t  stretch);
EXTERNC void * QWQBrushCtor_1();
EXTERNC void * QWQBrushCtor_2(int  bs);
EXTERNC void * QWQBrushCtor_3(void * color, int  bs);
EXTERNC void  QWQBrushsetStyle(void * obj, int  arg1);
EXTERNC void  QWQBrushsetColor_1(void * obj, void * color);
EXTERNC void QWQBrushDtor(void *);
EXTERNC void * QWQColorCtor_2(int  color);
EXTERNC void * QWQColorCtor_3(int32_t  r, int32_t  g, int32_t  b, int32_t  a);
EXTERNC int32_t  QWQColoralpha(void * obj);
EXTERNC int32_t  QWQColorred(void * obj);
EXTERNC int32_t  QWQColorgreen(void * obj);
EXTERNC int32_t  QWQColorblue(void * obj);
EXTERNC void QWQColorDtor(void *);
EXTERNC int8_t  QWQCoreApplicationsendEvent(void * obj, void * receiver, void * event);
EXTERNC void  QWQCoreApplicationquit(void * obj);
EXTERNC void * QWQEventCtor_1(int  type);
EXTERNC void * QWQEventCtor_2(void * other);
EXTERNC int  QWQEventtype(void * obj);
EXTERNC int8_t  QWQEventspontaneous(void * obj);
EXTERNC int8_t  QWQEventisAccepted(void * obj);
EXTERNC void  QWQEventaccept(void * obj);
EXTERNC void  QWQEventignore(void * obj);
EXTERNC void QWQEventDtor(void *);
EXTERNC void * QWQFontCtor_1();
EXTERNC void  QWQFontsetFamily(void * obj, char * arg1);
EXTERNC void  QWQFontsetPointSize(void * obj, int32_t  arg1);
EXTERNC void  QWQFontsetBold(void * obj, int8_t  arg1);
EXTERNC void  QWQFontsetItalic(void * obj, int8_t  b);
EXTERNC void QWQFontDtor(void *);
EXTERNC void * QWQHBoxLayoutCtor_1();
EXTERNC void QWQHBoxLayoutDtor(void *);
EXTERNC void * QWQImageCtor_3(int32_t  width, int32_t  height, int  format);
EXTERNC int32_t  QWQImagewidth(void * obj);
EXTERNC int32_t  QWQImageheight(void * obj);
EXTERNC void * QWQImagepixelColor_1(void * obj, int32_t  x, int32_t  y);
EXTERNC void  QWQImagefill_2(void * obj, void * color);
EXTERNC void QWQImageDtor(void *);
EXTERNC void * QWQLabelCtor_1(void * parent, int  f);
EXTERNC void * SCWQLabelCtor_1(void * parent, int  f);
EXTERNC void * QWQLabelCtor_2(char * text, void * parent, int  f);
EXTERNC void * SCWQLabelCtor_2(char * text, void * parent, int  f);
EXTERNC void  QWQLabelsetTextFormat(void * obj, int  arg1);
EXTERNC void  QWQLabelsetAlignment(void * obj, int  arg1);
EXTERNC void  QWQLabelsetMargin(void * obj, int32_t  arg1);
EXTERNC void  QWQLabelsetText(void * obj, char * arg1);
EXTERNC void  QWQLabelclear(void * obj);
EXTERNC void QWvalidateCB_QLabel(void *obj, int32_t objId, char *methodName);
EXTERNC void QWQLabelDtor(void *);
EXTERNC void SCWQLabelDtor(void *);
EXTERNC int8_t  QWQLayoutsetAlignment_1(void * obj, void * w, int  alignment);
EXTERNC int8_t  QWQLayoutsetAlignment_2(void * obj, void * l, int  alignment);
EXTERNC void  QWQLayoutaddWidget(void * obj, void * w);
EXTERNC void * QWQLineEditCtor_1(void * parent);
EXTERNC void * SCWQLineEditCtor_1(void * parent);
EXTERNC void * QWQLineEditCtor_2(char * arg1, void * parent);
EXTERNC void * SCWQLineEditCtor_2(char * arg1, void * parent);
EXTERNC char * QWQLineEdittext(void * obj);
EXTERNC void  QWQLineEditsetAlignment(void * obj, int  flag);
EXTERNC void  QWQLineEditsetText(void * obj, char * arg1);
EXTERNC void  QWQLineEditclear(void * obj);
EXTERNC void QWvalidateCB_QLineEdit(void *obj, int32_t objId, char *methodName);
EXTERNC void QWQLineEditDtor(void *);
EXTERNC void SCWQLineEditDtor(void *);
EXTERNC void * QWQMenuCtor_1(void * parent);
EXTERNC void * SCWQMenuCtor_1(void * parent);
EXTERNC void * QWQMenuCtor_2(char * title, void * parent);
EXTERNC void * SCWQMenuCtor_2(char * title, void * parent);
EXTERNC void * QWQMenuaddAction_1(void * obj, char * text);
EXTERNC void * QWQMenuexec_1(void * obj);
EXTERNC void QWvalidateCB_QMenu(void *obj, int32_t objId, char *methodName);
EXTERNC void QWQMenuDtor(void *);
EXTERNC void SCWQMenuDtor(void *);
EXTERNC void * QWQMouseEventCtor_1(int  type, void * localPos, int  button, int  buttons, int  modifiers);
EXTERNC void * QWQMouseEventCtor_2(int  type, void * localPos, void * screenPos, int  button, int  buttons, int  modifiers);
EXTERNC void * QWQMouseEventCtor_3(int  type, void * localPos, void * windowPos, void * screenPos, int  button, int  buttons, int  modifiers);
EXTERNC void * QWQMouseEventCtor_4(int  type, void * localPos, void * windowPos, void * screenPos, int  button, int  buttons, int  modifiers, int  source);
EXTERNC int32_t  QWQMouseEventx(void * obj);
EXTERNC int32_t  QWQMouseEventy(void * obj);
EXTERNC int  QWQMouseEventbutton(void * obj);
EXTERNC void QWQMouseEventDtor(void *);
EXTERNC void * QWQPaintEventCtor_2(void * paintRect);
EXTERNC void * QWQPaintEventrect(void * obj);
EXTERNC void QWQPaintEventDtor(void *);
EXTERNC void * QWQPainterCtor_1();

EXTERNC void * QWQPainterCtor_QWidget(void * arg1);
EXTERNC void * QWQPainterCtor_QImage(void * arg1);

EXTERNC int8_t QWQPainterbegin_null(void * obj);
EXTERNC int8_t QWQPainterbegin_QWidget(void * obj, void * arg1);
EXTERNC int8_t QWQPainterbegin_QImage(void * obj, void * arg1);
EXTERNC int8_t  QWQPainterend(void * obj);
EXTERNC void  QWQPaintersetPen_1(void * obj, void * color);
EXTERNC void  QWQPaintersetPen_2(void * obj, void * pen);
EXTERNC void  QWQPaintersetPen_3(void * obj, int  style);
EXTERNC void  QWQPaintersetBrush_1(void * obj, void * brush);
EXTERNC void  QWQPaintersave(void * obj);
EXTERNC void  QWQPainterrestore(void * obj);
EXTERNC void  QWQPainterdrawLine_3(void * obj, int32_t  x1, int32_t  y1, int32_t  x2, int32_t  y2);
EXTERNC void  QWQPainterdrawRect_2(void * obj, int32_t  x1, int32_t  y1, int32_t  w, int32_t  h);
EXTERNC void  QWQPainterdrawEllipse_3(void * obj, int32_t  x, int32_t  y, int32_t  w, int32_t  h);
EXTERNC void QWQPainterDtor(void *);
EXTERNC void * QWQPenCtor_1();
EXTERNC void * QWQPenCtor_2(int  arg1);
EXTERNC void * QWQPenCtor_3(void * color);
EXTERNC void  QWQPensetWidth(void * obj, int32_t  width);
EXTERNC void  QWQPensetColor(void * obj, void * color);
EXTERNC void  QWQPensetBrush(void * obj, void * brush);
EXTERNC void QWQPenDtor(void *);
EXTERNC void * QWQPointCtor_1();
EXTERNC void * QWQPointCtor_2(int32_t  xpos, int32_t  ypos);
EXTERNC int8_t  QWQPointisNull(void * obj);
EXTERNC int32_t  QWQPointx(void * obj);
EXTERNC int32_t  QWQPointy(void * obj);
EXTERNC void  QWQPointsetX(void * obj, int32_t  x);
EXTERNC void  QWQPointsetY(void * obj, int32_t  y);
EXTERNC int32_t  QWQPointmanhattanLength(void * obj);
EXTERNC void QWQPointDtor(void *);
EXTERNC void * QWQPointFCtor_1();
EXTERNC void * QWQPointFCtor_2(void * p);
EXTERNC void * QWQPointFCtor_3(double  xpos, double  ypos);
EXTERNC double  QWQPointFmanhattanLength(void * obj);
EXTERNC int8_t  QWQPointFisNull(void * obj);
EXTERNC double  QWQPointFx(void * obj);
EXTERNC double  QWQPointFy(void * obj);
EXTERNC void  QWQPointFsetX(void * obj, double  x);
EXTERNC void  QWQPointFsetY(void * obj, double  y);
EXTERNC void QWQPointFDtor(void *);
EXTERNC void * QWQPushButtonCtor_2(char * text, void * parent);
EXTERNC void * SCWQPushButtonCtor_2(char * text, void * parent);
EXTERNC void  QWQPushButtonsetMenu(void * obj, void * menu);
EXTERNC void QWvalidateCB_QPushButton(void *obj, int32_t objId, char *methodName);
EXTERNC void QWQPushButtonDtor(void *);
EXTERNC void SCWQPushButtonDtor(void *);
EXTERNC void * QWQRectCtor_1();
EXTERNC void * QWQRectCtor_2(void * topleft, void * bottomright);
EXTERNC void * QWQRectCtor_4(int32_t  left, int32_t  top, int32_t  width, int32_t  height);
EXTERNC int32_t  QWQRectx(void * obj);
EXTERNC int32_t  QWQRecty(void * obj);
EXTERNC int32_t  QWQRectwidth(void * obj);
EXTERNC int32_t  QWQRectheight(void * obj);
EXTERNC void QWQRectDtor(void *);
EXTERNC void * QWQRegionCtor_1();
EXTERNC void QWQRegionDtor(void *);
EXTERNC void * QWQTextEditCtor_1(void * parent);
EXTERNC void * SCWQTextEditCtor_1(void * parent);
EXTERNC char * QWQTextEdittoPlainText(void * obj);
EXTERNC void QWvalidateCB_QTextEdit(void *obj, int32_t objId, char *methodName);
EXTERNC void QWQTextEditDtor(void *);
EXTERNC void SCWQTextEditDtor(void *);
EXTERNC void * QWQTimerCtor(void * parent);
EXTERNC void  QWQTimersetInterval_1(void * obj, int32_t  msec);
EXTERNC void  QWQTimerstart_2(void * obj);
EXTERNC void  QWQTimerstop(void * obj);
EXTERNC void QWQTimerDtor(void *);
EXTERNC void * QWQVBoxLayoutCtor_1();
EXTERNC void QWQVBoxLayoutDtor(void *);
EXTERNC void * QWQWidgetCtor(void * parent, int  f);
EXTERNC void * SCWQWidgetCtor(void * parent, int  f);
EXTERNC void  QWQWidgetsetDisabled(void * obj, int8_t  arg1);
EXTERNC int32_t  QWQWidgetwidth(void * obj);
EXTERNC int32_t  QWQWidgetheight(void * obj);
EXTERNC void  QWQWidgetsetMinimumSize_2(void * obj, int32_t  minw, int32_t  minh);
EXTERNC void  QWQWidgetsetFixedSize_2(void * obj, int32_t  w, int32_t  h);
EXTERNC void  QWQWidgetsetFixedWidth(void * obj, int32_t  w);
EXTERNC void  QWQWidgetsetFixedHeight(void * obj, int32_t  h);
EXTERNC void * QWQWidgetfont(void * obj);
EXTERNC void  QWQWidgetsetFont(void * obj, void * arg1);
EXTERNC void  QWQWidgetrender_1(void * obj, void * target, void * targetOffset, void * sourceRegion, int  renderFlags);
EXTERNC void  QWQWidgetsetWindowTitle(void * obj, char * arg1);
EXTERNC void  QWQWidgetsetToolTip(void * obj, char * arg1);
EXTERNC void  QWQWidgetsetFocus_1(void * obj);
EXTERNC int8_t  QWQWidgetisActiveWindow(void * obj);
EXTERNC void  QWQWidgetactivateWindow(void * obj);
EXTERNC void  QWQWidgetsetFocus_2(void * obj, int  reason);
EXTERNC void  QWQWidgetsetFocusPolicy(void * obj, int  policy);
EXTERNC void  QWQWidgetupdate_1(void * obj);
EXTERNC void  QWQWidgetupdate_2(void * obj, int32_t  x, int32_t  y, int32_t  w, int32_t  h);
EXTERNC void  QWQWidgetshow(void * obj);
EXTERNC void  QWQWidgetsetLayout(void * obj, void * arg1);
EXTERNC void  QWQWidgetmousePressEvent(void * obj, void * event);
EXTERNC void  QWQWidgetmouseReleaseEvent(void * obj, void * event);
EXTERNC void  QWQWidgetmouseMoveEvent(void * obj, void * event);
EXTERNC void  QWQWidgetenterEvent(void * obj, void * event);
EXTERNC void  QWQWidgetleaveEvent(void * obj, void * event);
EXTERNC void  QWQWidgetpaintEvent(void * obj, void * event);
EXTERNC void QWvalidateCB_QWidget(void *obj, int32_t objId, char *methodName);
EXTERNC void QWQWidgetDtor(void *);
EXTERNC void SCWQWidgetDtor(void *);





EXTERNC void QWEmit_(void * source, char * signalName);
EXTERNC void QWEmit_Int(void * source, char * signalName, int32_t data);
EXTERNC void QWEmit_Str(void * source, char * signalName, char * data);
EXTERNC void QWEmit_Bool(void * source, char * signalName, int32_t data);



EXTERNC void QWconnect(void * source, char *signal,
                       void * destination, char *slot);

EXTERNC void QWdisconnect(void * source, char *signal,
                          void * destination, char *slot);

EXTERNC void * QWConnectorRCTOR(int32_t objId, char * slotName, char * sigName);

EXTERNC void QWConnectorRDTOR(void * obj);

EXTERNC void * QWConnectorECTOR(int32_t objId, char * slotName, char * sigName);

EXTERNC void QWConnectorEDTOR(void * obj);


///////////////////////////////////////////////////////////////

// Native helpers

EXTERNC char * QWGetStringFromPointer(void * ptr);

EXTERNC void * QWGetPointerFromString(char * str);

EXTERNC double QWGetDoubleFromPointer(void * ptr);

EXTERNC void * QWGetPointerFromDouble(double * pd);

EXTERNC int64_t QWPointer2Int(void * val);

EXTERNC void * QWInt2Pointer(int64_t val);



// Callbacks initializers

EXTERNC void QWSetupSlotCallback(
    void (*f)(int objId, char *slotName));

EXTERNC void QWSetupSlotCallbackInt(
    void (*f)(int objId, char *slotName, STD_INT i));

EXTERNC void QWSetupSlotCallbackInt2(
    void (*f)(int objId, char *slotName, STD_INT i1, STD_INT i2));

EXTERNC void QWSetupSlotCallbackStr(
    void (*f)(int objId, char *slotName, char *s));

EXTERNC void QWSetupSlotCallbackIntStr(
    void (*f)(int objId, char *slotName, STD_INT i, char *s));

EXTERNC void QWSetupSlotCallbackBool(
    void (*f)(int objId, char *slotName, uchar b));

EXTERNC void QWSetupSlotCallbackPointer(
    void (*f)(int objId, char *slotName, void *p));

EXTERNC void QWSetupSlotCallbackQEvent(
    void (*f)(int32_t objId, const char *slotName, QEvent* event));

EXTERNC void QWSetupSlotCallbackQMouseEvent(
    void (*f)(int32_t objId, const char *slotName, QMouseEvent* event));

EXTERNC void QWSetupSlotCallbackQPaintEvent(
    void (*f)(int32_t objId, const char *slotName, QPaintEvent* event));



EXTERNC void QWSetupSlotCallbackComplexSig(
    void (*f)(int32_t objId, char *slotName, uint32_t dataId));


/////////////////////////////////////////////

EXTERNC void QWDump();

/////////////////////////////////////////////
/////////////////////////////////////////////

// // EXTERNC void * QWSCQWidgetCtor();
// //
// // EXTERNC void * QWSCQPushButtonCtor();
// //
// // EXTERNC void * QWSCQTextEditCtor();
// //
EXTERNC void QWvalidateEvent(void *obj, int32_t objId, char *methodName);




