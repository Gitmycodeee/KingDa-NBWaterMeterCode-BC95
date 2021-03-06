/*******************************************************************************
Copyright: 
File name: rs485.h
Description: rs485相关函数、变量
Author: 初学者cy
Version: 
Date: 
History:       
*******************************************************************************/
#ifndef __RS485_H__
#define __RS485_H__
/*******************************************************************************
文件包含区
*******************************************************************************/
#include "include.h"
/*******************************************************************************
宏定义区
*******************************************************************************/
//RS485电源引脚
#define RS485_PWR_Port          GPIOC                                 
#define RS485_PWR_Pin           GPIO_Pin_4
#define RS485_PWR_Mode          GPIO_Mode_Out_PP_High_Fast
#define RS485_PWR_Init          GPIO_Init(RS485_PWR_Port, RS485_PWR_Pin, RS485_PWR_Mode); 
#define RS485_PWR_Set           GPIO_SetBits(RS485_PWR_Port,RS485_PWR_Pin);
#define RS485_PWR_Rst           GPIO_ResetBits(RS485_PWR_Port,RS485_PWR_Pin);

//RS485状态指示灯
#define RS485_LED_ON()        GPIO_SetBits(GPIOD, GPIO_Pin_7)
#define RS485_LED_OFF()       GPIO_ResetBits(GPIOD, GPIO_Pin_7)
/*******************************************************************************
数据类型定义
*******************************************************************************/
/*******************************************************************************
外部变量声明区
*******************************************************************************/
/*******************************************************************************
函数声明区
*******************************************************************************/
void RS485_Init(u32 BaudRate);
void RS485_DeInit(void);
void RS485_Process(void);
void RS485_TX(uint8_t *pbuff,uint16_t length);
void RS485_LedRun(void);
/******************************************************************************/
#endif
/*************************************END**************************************/


