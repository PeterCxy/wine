/************************************************************
 *    ICommDlgBrowser
 */

#ifndef __WINE_WINE_OBJ_ICOMMDLGBROWSER_H
#define __WINE_WINE_OBJ_ICOMMDLGBROWSER_H

#include "winbase.h"
#include "winuser.h"
#include "wine/obj_base.h"
#include "wine/obj_shellview.h"

#ifdef __cplusplus
extern "C" {
#endif /* defined(__cplusplus) */

DEFINE_SHLGUID(IID_ICommDlgBrowser,     0x000214F1L, 0, 0);
typedef struct 	ICommDlgBrowser ICommDlgBrowser, *LPCOMMDLGBROWSER;

/* for OnStateChange*/
#define CDBOSC_SETFOCUS     0x00000000
#define CDBOSC_KILLFOCUS    0x00000001
#define CDBOSC_SELCHANGE    0x00000002
#define CDBOSC_RENAME       0x00000003


#define ICOM_INTERFACE ICommDlgBrowser
#define ICommDlgBrowser_METHODS \
	ICOM_METHOD1(HRESULT, OnDefaultCommand, IShellView*, IShellView) \
	ICOM_METHOD2(HRESULT, OnStateChange, IShellView*, IShellView, ULONG, uChange) \
	ICOM_METHOD2(HRESULT, IncludeObject, IShellView*, IShellView, LPCITEMIDLIST, pidl)
#define ICommDlgBrowser_IMETHODS \
	IUnknown_IMETHODS \
	ICommDlgBrowser_METHODS
ICOM_DEFINE(ICommDlgBrowser,IUnknown)
#undef ICOM_INTERFACE

#ifdef ICOM_CINTERFACE
#define ICommDlgBrowser_QueryInterface(p,a,b)	ICOM_CALL2(QueryInterface,p,a,b)
#define ICommDlgBrowser_AddRef(p)		ICOM_CALL(AddRef,p)
#define ICommDlgBrowser_Release(p)		ICOM_CALL(Release,p)
#define ICommDlgBrowser_OnDefaultCommand(p,a)	ICOM_CALL1(OnDefaultCommand,p,a)
#define ICommDlgBrowser_OnStateChange(p,a,b)	ICOM_CALL2(OnStateChange,p,a,b)
#define ICommDlgBrowser_IncludeObject(p,a,b)	ICOM_CALL2(IncludeObject,p,a,b)
#endif

#ifdef __cplusplus
} /* extern "C" */
#endif /* defined(__cplusplus) */

#endif /* __WINE_WINE_OBJ_ICOMMDLGBROWSER_H */
