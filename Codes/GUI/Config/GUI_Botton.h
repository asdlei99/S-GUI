#ifndef __GUI_BOTTON_H
#define __GUI_BOTTON_H

#include "GUI_Device.h"

void GUI_InitOS(void);
void GUI_TaskLock(void);
void GUI_TaskUnlock(void);
u_32 GUI_GetTaskId(void);
GUI_TIME GUI_GetTime(void);
void _GUI_Delay_ms(GUI_TIME tms);
void * _GUI_GetHeapBuffer(int Page, u_32 *Size);
void GUI_UserConfig(GUI_DEVICE *phy);
void _GUI_DebugOut(const char *s);

#endif /* __GUI_BOTTON_H */
