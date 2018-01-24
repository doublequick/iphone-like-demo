#ifndef AGG_SCROLL_INCLUDE
#define AGG_SCROLL_INCLUDE

#include <minigui/common.h>

#ifdef __cplusplus
extern "C" {
#endif

BOOL InitScrollPage (HDC hUpLayerDC, HDC hDownLayerDC, int nWidth, int nHeight, int nFlame);
BOOL InitRollPage (PBITMAP psrcbmp, PBITMAP pbmp, int nWidth, int nHeight, int nFlame);
void SetScrollPageRender (BOOL bOpen, DWORD rgbaFront, DWORD rgbaScroll);
BOOL ScrollPageFlame (int nIdxFlame, PBITMAP pBitmap, HDC hdc_show); 

#ifdef __cplusplus
}
#endif

#endif
