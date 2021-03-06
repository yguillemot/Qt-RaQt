# 
# This code has been automatically generated by RaQt_maker V0.0.1.
# 
# Rather than manually modify this file, it should be preferable to
# 
#     - 1) Modify the source files available here:
#         https://github.com/yguillemot/RaQt_maker.git
# 
#     - 2) Regenerate the whole code.
# 
unit module QtWrappers;


use NativeCall;
use Qt::QtWidgets::QtHelpers;

#BEGIN_INSERTION_HERE
#LIST_OF_QT_CLASSES_NATIVE_WRAPPERS
### Beginning of the main API part ###
sub QWQActionCtor_1(Pointer)
    returns Pointer is native(&libwrapper) is export { * }

sub SCWQActionCtor_1(Pointer)
    returns Pointer is native(&libwrapper) is export { * }

sub QWvalidateCB_QAction(Pointer, int32, Str)
    is native(&libwrapper) is export { * }

sub QWQActionDtor(Pointer)
    is native(&libwrapper) is export { * }

sub QWQActiontrigger(Pointer)
    is native(&libwrapper) is export { * }

sub QWQActionsetEnabled(Pointer, int8)
    is native(&libwrapper) is export { * }

sub QWQActionsetDisabled(Pointer, int8)
    is native(&libwrapper) is export { * }


################################################################################

sub QWQCoreApplicationsendEvent(Pointer, Pointer, Pointer)
    returns int8 is native(&libwrapper) is export { * }

sub QWQCoreApplicationquit(Pointer)
    is native(&libwrapper) is export { * }


################################################################################

sub QWQLayoutsetAlignment_1(Pointer, Pointer, int32)
    returns int8 is native(&libwrapper) is export { * }

sub QWQLayoutsetAlignment_2(Pointer, Pointer, int32)
    returns int8 is native(&libwrapper) is export { * }

sub QWQLayoutaddWidget(Pointer, Pointer)
    is native(&libwrapper) is export { * }


################################################################################

sub QWQTimerCtor(Pointer)
    returns Pointer is native(&libwrapper) is export { * }

sub SCWQTimerCtor(Pointer)
    returns Pointer is native(&libwrapper) is export { * }

sub QWvalidateCB_QTimer(Pointer, int32, Str)
    is native(&libwrapper) is export { * }

sub QWQTimerDtor(Pointer)
    is native(&libwrapper) is export { * }

sub QWQTimersetInterval_1(Pointer, int32)
    is native(&libwrapper) is export { * }

sub QWQTimerstart_2(Pointer)
    is native(&libwrapper) is export { * }

sub QWQTimerstop(Pointer)
    is native(&libwrapper) is export { * }


################################################################################

sub QWQWidgetCtor(Pointer, int32)
    returns Pointer is native(&libwrapper) is export { * }

sub SCWQWidgetCtor(Pointer, int32)
    returns Pointer is native(&libwrapper) is export { * }

sub QWvalidateCB_QWidget(Pointer, int32, Str)
    is native(&libwrapper) is export { * }

sub QWQWidgetDtor(Pointer)
    is native(&libwrapper) is export { * }

sub QWQWidgetsetDisabled(Pointer, int8)
    is native(&libwrapper) is export { * }

sub QWQWidgetwidth(Pointer)
    returns int32 is native(&libwrapper) is export { * }

sub QWQWidgetheight(Pointer)
    returns int32 is native(&libwrapper) is export { * }

sub QWQWidgetsetMinimumSize_2(Pointer, int32, int32)
    is native(&libwrapper) is export { * }

sub QWQWidgetsetFixedSize_2(Pointer, int32, int32)
    is native(&libwrapper) is export { * }

sub QWQWidgetsetFixedWidth(Pointer, int32)
    is native(&libwrapper) is export { * }

sub QWQWidgetsetFixedHeight(Pointer, int32)
    is native(&libwrapper) is export { * }

sub QWQWidgetfont(Pointer)
    returns Pointer is native(&libwrapper) is export { * }

sub QWQWidgetsetFont(Pointer, Pointer)
    is native(&libwrapper) is export { * }

sub QWQWidgetrender_1(Pointer, Pointer, Pointer, Pointer, int32)
    is native(&libwrapper) is export { * }

sub QWQWidgetsetWindowTitle(Pointer, Str)
    is native(&libwrapper) is export { * }

sub QWQWidgetsetToolTip(Pointer, Str)
    is native(&libwrapper) is export { * }

sub QWQWidgetsetFocus_1(Pointer)
    is native(&libwrapper) is export { * }

sub QWQWidgetisActiveWindow(Pointer)
    returns int8 is native(&libwrapper) is export { * }

sub QWQWidgetactivateWindow(Pointer)
    is native(&libwrapper) is export { * }

sub QWQWidgetsetFocus_2(Pointer, int32)
    is native(&libwrapper) is export { * }

sub QWQWidgetsetFocusPolicy(Pointer, int32)
    is native(&libwrapper) is export { * }

sub QWQWidgetupdate_1(Pointer)
    is native(&libwrapper) is export { * }

sub QWQWidgetupdate_2(Pointer, int32, int32, int32, int32)
    is native(&libwrapper) is export { * }

sub QWQWidgetshow(Pointer)
    is native(&libwrapper) is export { * }

sub QWQWidgetsetLayout(Pointer, Pointer)
    is native(&libwrapper) is export { * }


################################################################################

sub QWQAbstractButtonsetText(Pointer, Str)
    is native(&libwrapper) is export { * }

sub QWQAbstractButtontext(Pointer)
    returns Str is native(&libwrapper) is export { * }

sub QWQAbstractButtonclick(Pointer)
    is native(&libwrapper) is export { * }


################################################################################

sub QWQBoxLayoutaddLayout(Pointer, Pointer, int32)
    is native(&libwrapper) is export { * }


################################################################################

sub QWQLineEditCtor_1(Pointer)
    returns Pointer is native(&libwrapper) is export { * }

sub SCWQLineEditCtor_1(Pointer)
    returns Pointer is native(&libwrapper) is export { * }

sub QWvalidateCB_QLineEdit(Pointer, int32, Str)
    is native(&libwrapper) is export { * }

sub QWQLineEditCtor_2(Str, Pointer)
    returns Pointer is native(&libwrapper) is export { * }

sub SCWQLineEditCtor_2(Str, Pointer)
    returns Pointer is native(&libwrapper) is export { * }

sub QWQLineEditDtor(Pointer)
    is native(&libwrapper) is export { * }

sub QWQLineEdittext(Pointer)
    returns Str is native(&libwrapper) is export { * }

sub QWQLineEditsetAlignment(Pointer, int32)
    is native(&libwrapper) is export { * }

sub QWQLineEditsetText(Pointer, Str)
    is native(&libwrapper) is export { * }

sub QWQLineEditclear(Pointer)
    is native(&libwrapper) is export { * }


################################################################################

sub QWQMenuCtor_1(Pointer)
    returns Pointer is native(&libwrapper) is export { * }

sub SCWQMenuCtor_1(Pointer)
    returns Pointer is native(&libwrapper) is export { * }

sub QWvalidateCB_QMenu(Pointer, int32, Str)
    is native(&libwrapper) is export { * }

sub QWQMenuCtor_2(Str, Pointer)
    returns Pointer is native(&libwrapper) is export { * }

sub SCWQMenuCtor_2(Str, Pointer)
    returns Pointer is native(&libwrapper) is export { * }

sub QWQMenuDtor(Pointer)
    is native(&libwrapper) is export { * }

sub QWQMenuaddAction_1(Pointer, Str)
    returns Pointer is native(&libwrapper) is export { * }

sub QWQMenuexec_1(Pointer)
    returns Pointer is native(&libwrapper) is export { * }


################################################################################

sub QWQHBoxLayoutCtor_1()
    returns Pointer is native(&libwrapper) is export { * }

sub SCWQHBoxLayoutCtor_1()
    returns Pointer is native(&libwrapper) is export { * }

sub QWvalidateCB_QHBoxLayout(Pointer, int32, Str)
    is native(&libwrapper) is export { * }

sub QWQHBoxLayoutDtor(Pointer)
    is native(&libwrapper) is export { * }


################################################################################

sub QWQLabelCtor_1(Pointer, int32)
    returns Pointer is native(&libwrapper) is export { * }

sub SCWQLabelCtor_1(Pointer, int32)
    returns Pointer is native(&libwrapper) is export { * }

sub QWvalidateCB_QLabel(Pointer, int32, Str)
    is native(&libwrapper) is export { * }

sub QWQLabelCtor_2(Str, Pointer, int32)
    returns Pointer is native(&libwrapper) is export { * }

sub SCWQLabelCtor_2(Str, Pointer, int32)
    returns Pointer is native(&libwrapper) is export { * }

sub QWQLabelDtor(Pointer)
    is native(&libwrapper) is export { * }

sub QWQLabelsetTextFormat(Pointer, int32)
    is native(&libwrapper) is export { * }

sub QWQLabelsetAlignment(Pointer, int32)
    is native(&libwrapper) is export { * }

sub QWQLabelsetMargin(Pointer, int32)
    is native(&libwrapper) is export { * }

sub QWQLabelsetText(Pointer, Str)
    is native(&libwrapper) is export { * }

sub QWQLabelclear(Pointer)
    is native(&libwrapper) is export { * }


################################################################################

sub QWQPushButtonCtor_2(Str, Pointer)
    returns Pointer is native(&libwrapper) is export { * }

sub SCWQPushButtonCtor_2(Str, Pointer)
    returns Pointer is native(&libwrapper) is export { * }

sub QWvalidateCB_QPushButton(Pointer, int32, Str)
    is native(&libwrapper) is export { * }

sub QWQPushButtonDtor(Pointer)
    is native(&libwrapper) is export { * }

sub QWQPushButtonsetMenu(Pointer, Pointer)
    is native(&libwrapper) is export { * }


################################################################################

sub QWQVBoxLayoutCtor_1()
    returns Pointer is native(&libwrapper) is export { * }

sub SCWQVBoxLayoutCtor_1()
    returns Pointer is native(&libwrapper) is export { * }

sub QWvalidateCB_QVBoxLayout(Pointer, int32, Str)
    is native(&libwrapper) is export { * }

sub QWQVBoxLayoutDtor(Pointer)
    is native(&libwrapper) is export { * }


################################################################################

sub QWQTextEditCtor_1(Pointer)
    returns Pointer is native(&libwrapper) is export { * }

sub SCWQTextEditCtor_1(Pointer)
    returns Pointer is native(&libwrapper) is export { * }

sub QWvalidateCB_QTextEdit(Pointer, int32, Str)
    is native(&libwrapper) is export { * }

sub QWQTextEditDtor(Pointer)
    is native(&libwrapper) is export { * }

sub QWQTextEdittoPlainText(Pointer)
    returns Str is native(&libwrapper) is export { * }


################################################################################

### End of the main API part ###
### Beginning of the sub API part ###
sub QWQEventCtor_1(int32)
    returns Pointer is native(&libwrapper) is export { * }

sub QWQEventCtor_2(Pointer)
    returns Pointer is native(&libwrapper) is export { * }

sub QWQEventDtor(Pointer)
    is native(&libwrapper) is export { * }

sub QWQEventtype(Pointer)
    returns int32 is native(&libwrapper) is export { * }

sub QWQEventspontaneous(Pointer)
    returns int8 is native(&libwrapper) is export { * }

sub QWQEventisAccepted(Pointer)
    returns int8 is native(&libwrapper) is export { * }

sub QWQEventaccept(Pointer)
    is native(&libwrapper) is export { * }

sub QWQEventignore(Pointer)
    is native(&libwrapper) is export { * }


################################################################################

sub QWQPaintEventCtor_2(Pointer)
    returns Pointer is native(&libwrapper) is export { * }

sub QWQPaintEventDtor(Pointer)
    is native(&libwrapper) is export { * }

sub QWQPaintEventrect(Pointer)
    returns Pointer is native(&libwrapper) is export { * }


################################################################################

sub QWQMouseEventCtor_1(int32, Pointer, int32, int32, int32)
    returns Pointer is native(&libwrapper) is export { * }

sub QWQMouseEventCtor_2(int32, Pointer, Pointer, int32, int32, int32)
    returns Pointer is native(&libwrapper) is export { * }

sub QWQMouseEventCtor_3(int32, Pointer, Pointer, Pointer, int32, int32, int32)
    returns Pointer is native(&libwrapper) is export { * }

sub QWQMouseEventCtor_4(int32, Pointer, Pointer, Pointer, int32, int32, int32, int32)
    returns Pointer is native(&libwrapper) is export { * }

sub QWQMouseEventDtor(Pointer)
    is native(&libwrapper) is export { * }

sub QWQMouseEventx(Pointer)
    returns int32 is native(&libwrapper) is export { * }

sub QWQMouseEventy(Pointer)
    returns int32 is native(&libwrapper) is export { * }

sub QWQMouseEventbutton(Pointer)
    returns int32 is native(&libwrapper) is export { * }


################################################################################

sub QWQBrushCtor_1()
    returns Pointer is native(&libwrapper) is export { * }

sub QWQBrushCtor_2(int32)
    returns Pointer is native(&libwrapper) is export { * }

sub QWQBrushCtor_3(Pointer, int32)
    returns Pointer is native(&libwrapper) is export { * }

sub QWQBrushDtor(Pointer)
    is native(&libwrapper) is export { * }

sub QWQBrushsetStyle(Pointer, int32)
    is native(&libwrapper) is export { * }

sub QWQBrushsetColor_1(Pointer, Pointer)
    is native(&libwrapper) is export { * }


################################################################################

sub QWQColorCtor_2(int32)
    returns Pointer is native(&libwrapper) is export { * }

sub QWQColorCtor_3(int32, int32, int32, int32)
    returns Pointer is native(&libwrapper) is export { * }

sub QWQColorDtor(Pointer)
    is native(&libwrapper) is export { * }

sub QWQColoralpha(Pointer)
    returns int32 is native(&libwrapper) is export { * }

sub QWQColorred(Pointer)
    returns int32 is native(&libwrapper) is export { * }

sub QWQColorgreen(Pointer)
    returns int32 is native(&libwrapper) is export { * }

sub QWQColorblue(Pointer)
    returns int32 is native(&libwrapper) is export { * }


################################################################################

sub QWQFontCtor_1()
    returns Pointer is native(&libwrapper) is export { * }

sub QWQFontDtor(Pointer)
    is native(&libwrapper) is export { * }

sub QWQFontsetFamily(Pointer, Str)
    is native(&libwrapper) is export { * }

sub QWQFontsetPointSize(Pointer, int32)
    is native(&libwrapper) is export { * }

sub QWQFontsetBold(Pointer, int8)
    is native(&libwrapper) is export { * }

sub QWQFontsetItalic(Pointer, int8)
    is native(&libwrapper) is export { * }


################################################################################

sub QWQPainterCtor_1()
    returns Pointer is native(&libwrapper) is export { * }


sub QWQPainterCtor_QWidget(Pointer)
    returns Pointer is native(&libwrapper) is export { * }

sub QWQPainterCtor_QImage(Pointer)
    returns Pointer is native(&libwrapper) is export { * }

sub QWQPainterDtor(Pointer)
    is native(&libwrapper) is export { * }


sub QWQPainterbegin_null(Pointer)
    returns Pointer is native(&libwrapper) is export { * }

sub QWQPainterbegin_QWidget(Pointer, Pointer)
    returns Pointer is native(&libwrapper) is export { * }

sub QWQPainterbegin_QImage(Pointer, Pointer)
    returns Pointer is native(&libwrapper) is export { * }
sub QWQPainterend(Pointer)
    returns int8 is native(&libwrapper) is export { * }

sub QWQPaintersetPen_1(Pointer, Pointer)
    is native(&libwrapper) is export { * }

sub QWQPaintersetPen_2(Pointer, Pointer)
    is native(&libwrapper) is export { * }

sub QWQPaintersetPen_3(Pointer, int32)
    is native(&libwrapper) is export { * }

sub QWQPaintersetBrush_1(Pointer, Pointer)
    is native(&libwrapper) is export { * }

sub QWQPaintersave(Pointer)
    is native(&libwrapper) is export { * }

sub QWQPainterrestore(Pointer)
    is native(&libwrapper) is export { * }

sub QWQPainterdrawLine_3(Pointer, int32, int32, int32, int32)
    is native(&libwrapper) is export { * }

sub QWQPainterdrawRect_2(Pointer, int32, int32, int32, int32)
    is native(&libwrapper) is export { * }

sub QWQPainterdrawEllipse_3(Pointer, int32, int32, int32, int32)
    is native(&libwrapper) is export { * }


################################################################################

sub QWQPenCtor_1()
    returns Pointer is native(&libwrapper) is export { * }

sub QWQPenCtor_2(int32)
    returns Pointer is native(&libwrapper) is export { * }

sub QWQPenCtor_3(Pointer)
    returns Pointer is native(&libwrapper) is export { * }

sub QWQPenDtor(Pointer)
    is native(&libwrapper) is export { * }

sub QWQPensetWidth(Pointer, int32)
    is native(&libwrapper) is export { * }

sub QWQPensetColor(Pointer, Pointer)
    is native(&libwrapper) is export { * }

sub QWQPensetBrush(Pointer, Pointer)
    is native(&libwrapper) is export { * }


################################################################################

sub QWQPointCtor_1()
    returns Pointer is native(&libwrapper) is export { * }

sub QWQPointCtor_2(int32, int32)
    returns Pointer is native(&libwrapper) is export { * }

sub QWQPointDtor(Pointer)
    is native(&libwrapper) is export { * }

sub QWQPointisNull(Pointer)
    returns int8 is native(&libwrapper) is export { * }

sub QWQPointx(Pointer)
    returns int32 is native(&libwrapper) is export { * }

sub QWQPointy(Pointer)
    returns int32 is native(&libwrapper) is export { * }

sub QWQPointsetX(Pointer, int32)
    is native(&libwrapper) is export { * }

sub QWQPointsetY(Pointer, int32)
    is native(&libwrapper) is export { * }

sub QWQPointmanhattanLength(Pointer)
    returns int32 is native(&libwrapper) is export { * }


################################################################################

sub QWQPointFCtor_1()
    returns Pointer is native(&libwrapper) is export { * }

sub QWQPointFCtor_2(Pointer)
    returns Pointer is native(&libwrapper) is export { * }

sub QWQPointFCtor_3(num64, num64)
    returns Pointer is native(&libwrapper) is export { * }

sub QWQPointFDtor(Pointer)
    is native(&libwrapper) is export { * }

sub QWQPointFmanhattanLength(Pointer)
    returns num64 is native(&libwrapper) is export { * }

sub QWQPointFisNull(Pointer)
    returns int8 is native(&libwrapper) is export { * }

sub QWQPointFx(Pointer)
    returns num64 is native(&libwrapper) is export { * }

sub QWQPointFy(Pointer)
    returns num64 is native(&libwrapper) is export { * }

sub QWQPointFsetX(Pointer, num64)
    is native(&libwrapper) is export { * }

sub QWQPointFsetY(Pointer, num64)
    is native(&libwrapper) is export { * }


################################################################################

sub QWQRectCtor_1()
    returns Pointer is native(&libwrapper) is export { * }

sub QWQRectCtor_2(Pointer, Pointer)
    returns Pointer is native(&libwrapper) is export { * }

sub QWQRectCtor_4(int32, int32, int32, int32)
    returns Pointer is native(&libwrapper) is export { * }

sub QWQRectDtor(Pointer)
    is native(&libwrapper) is export { * }

sub QWQRectx(Pointer)
    returns int32 is native(&libwrapper) is export { * }

sub QWQRecty(Pointer)
    returns int32 is native(&libwrapper) is export { * }

sub QWQRectwidth(Pointer)
    returns int32 is native(&libwrapper) is export { * }

sub QWQRectheight(Pointer)
    returns int32 is native(&libwrapper) is export { * }


################################################################################

sub QWQRegionCtor_1()
    returns Pointer is native(&libwrapper) is export { * }

sub QWQRegionDtor(Pointer)
    is native(&libwrapper) is export { * }


################################################################################

sub QWQImageCtor_3(int32, int32, int32)
    returns Pointer is native(&libwrapper) is export { * }

sub QWQImageDtor(Pointer)
    is native(&libwrapper) is export { * }

sub QWQImagewidth(Pointer)
    returns int32 is native(&libwrapper) is export { * }

sub QWQImageheight(Pointer)
    returns int32 is native(&libwrapper) is export { * }

sub QWQImagepixelColor_1(Pointer, int32, int32)
    returns Pointer is native(&libwrapper) is export { * }

sub QWQImagefill_2(Pointer, Pointer)
    is native(&libwrapper) is export { * }


################################################################################

### End of the sub API part ###
#END_INSERTION_HERE




##########################################################################

# From/to native conversion helper

sub QWGetStringFromPointer(Pointer)
        returns Str is native(&libwrapper) is export { * }

sub QWGetPointerFromString(CArray[uint8])
        returns Pointer is native(&libwrapper) is export { * }

sub QWGetDoubleFromPointer(Pointer)
        returns num64 is native(&libwrapper) is export { * }

sub QWGetPointerFromDouble(num64 is rw)
        returns Pointer is native(&libwrapper) is export { * }

sub QWPointer2Int(Pointer)
        returns int64 is native(&libwrapper) is export { * }

sub QWInt2Pointer(int64)
        returns Pointer is native(&libwrapper) is export { * }


# For slots slotCallbacks

sub QWSetupSlotCaller(&f (int32, Str, CArray[Pointer]))
        is native(&libwrapper) is export { * }

sub QWSetupSlotCallback(&f (int32, Str))
        is native(&libwrapper) is export { * }

sub QWSetupSlotCallbackInt(&f (int32, Str, long))
        is native(&libwrapper) is export { * }

sub QWSetupSlotCallbackInt2(&f (int32, Str, long, long))
        is native(&libwrapper) is export { * }

sub QWSetupSlotCallbackStr(&f (int32, Str, Str))
        is native(&libwrapper) is export { * }

sub QWSetupSlotCallbackIntStr(&f (int32, Str, long, Str))
        is native(&libwrapper) is export { * }

sub QWSetupSlotCallbackBool(&f (int32, Str, Bool))
        is native(&libwrapper) is export { * }

sub QWSetupSlotCallbackPointer(&f (int32, Str, Pointer))
        is native(&libwrapper) is export { * }

sub QWEmit_(Pointer, Str)
        is native(&libwrapper) is export { * }

sub QWEmit_Int(Pointer, Str, int32)
        is native(&libwrapper) is export { * }

sub QWEmit_Str(Pointer, Str, Str)
        is native(&libwrapper) is export { * }

sub QWEmit_Bool(Pointer, Str, int32)
        is native(&libwrapper) is export { * }





#BEGIN_INSERTION_HERE
#SETUP_CALLBACK_WRAPPERS
sub QWSetupSlotCallbackQEvent(&f (int32, Str, Pointer))
        is native(&libwrapper) is export { * }

sub QWSetupSlotCallbackQMouseEvent(&f (int32, Str, Pointer))
        is native(&libwrapper) is export { * }

sub QWSetupSlotCallbackQPaintEvent(&f (int32, Str, Pointer))
        is native(&libwrapper) is export { * }

#END_INSERTION_HERE


sub QWSetupSlotCallbackComplexSig(&f (int32, Str, uint32))
        is native(&libwrapper) is export { * }




