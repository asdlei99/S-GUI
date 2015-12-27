#ifndef __SCROLLBAR_H
#define __SCROLLBAR_H

#include "GUI.h"

//滚动条尺寸设定
#define SCLB_MIN_THICK          20         //最小的厚度(即高度)
#define SCLB_DFT_BTNCOLOR      0X00141312  //滑块颜色
#define SCLB_DFT_BKCOLOR       0X003D322E  //背景颜色

typedef struct {
    WIDGET Widget;
    u_16   Totality;   //总数
    u_16   Loation;    //当前位置
    u_16   MinThick;   //滑块最小高度
}SCROLLBAR_Obj;

WM_hWin SCROLLBAR_Create(i_16 x0,
                      i_16 y0,
                      u_16 xSize,
                      u_16 ySize,
                      WM_hWin hParent,
                      u_16 Id,
                      u_8 Flag);
void SCROLLBAR_SetTotality(GUI_hWin hWin, u_16 Totality);
void SCROLLBAR_SetLoation(GUI_hWin hWin, u_16 Loation);

#endif
