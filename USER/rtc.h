/*********************************************************************************************************
//概述：
//作者：随风飘跃    时间：       地点：
//CPU型号：         系统主频：
//版本号：V0.0        
*********************************************************************************************************/

#ifndef __RTC_H__
#define __RTC_H__
/*********************************************************************************************************
文件包含区
*********************************************************************************************************/
#include "include.h"
/*********************************************************************************************************
宏定义区
*********************************************************************************************************/

/*********************************************************************************************************
数据类型定义
*********************************************************************************************************/
typedef struct{
 unsigned char Second;
 unsigned char Minute;
 unsigned char Hour;
 unsigned char WeekDay;
 unsigned char Day;
 unsigned char Month;
 unsigned short Year;
}TimerData_Struct;
/*********************************************************************************************************
外部变量声明区
*********************************************************************************************************/
extern RTC_TimeTypeDef   RTC_TimeStr;        //RTC时间结构体
extern RTC_DateTypeDef   RTC_DateStr;        //RTC日期结构体
extern RTC_AlarmTypeDef  RTC_AlarmStr;       //闹钟结构体
/*********************************************************************************************************
函数声明区
*********************************************************************************************************/
void Set_RTC(unsigned char *buff);
void Set_Time(RTC_TimeTypeDef  *RTC_Time);
void Set_Date(RTC_DateTypeDef  *RTC_Date);
void Alarm_Interrupt (void);
void Wake_Interrupt (void);                       //唤醒中断
void Rtc_Config(void);
void Set_Alarm(void); //设置闹钟
void rtc_interrupt (void);
/********************************************************************************************************/
#endif

/******************************************END********************************************************/
