/**************************************************************************/
/* LabWindows/CVI User Interface Resource (UIR) Include File              */
/*                                                                        */
/* WARNING: Do not add to, delete from, or otherwise modify the contents  */
/*          of this include file.                                         */
/**************************************************************************/

#include <userint.h>

#ifdef __cplusplus
    extern "C" {
#endif

     /* Panels and Controls: */

#define  PANEL                            1       /* callback function: ExitFunc */
#define  PANEL_RESULT                     2       /* control type: table, callback function: (none) */
#define  PANEL_MATRIX_2                   3       /* control type: table, callback function: (none) */
#define  PANEL_MATRIX_1                   4       /* control type: table, callback function: (none) */
#define  PANEL_TEXTMSG                    5       /* control type: textMsg, callback function: (none) */
#define  PANEL_MULTIPLY                   6       /* control type: command, callback function: Multiply */
#define  PANEL_TEXTMSG_2                  7       /* control type: textMsg, callback function: (none) */
#define  PANEL_CLEAR                      8       /* control type: command, callback function: Clear */
#define  PANEL_PICTURE                    9       /* control type: picture, callback function: (none) */


     /* Control Arrays: */

          /* (no control arrays in the resource file) */


     /* Menu Bars, Menus, and Menu Items: */

          /* (no menu bars in the resource file) */


     /* Callback Prototypes: */

int  CVICALLBACK Clear(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK ExitFunc(int panel, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK Multiply(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);


#ifdef __cplusplus
    }
#endif
