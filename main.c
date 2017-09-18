/**************************************************************************
Copyright:2017，money89757
File name:main.c
Description:运用PIC系列单片机控制
Author：money89757
Version：V0.1
Date：2017-9-18
History：2017-9-18 : 更新一些注释和端口
**************************************************************************/
#include "XAD168C02.h"

#define CONFIG1 IO_MODE16  & LVTEN_OFF & WDTE_OFF &RDSEL_ON&CRY_OFF&OSTE_ON   
#define CONFIG2 OTP_MOD4K & BOR20V & FOSC_RC20M & RESETE_OFF&FOSC_HS
#define CONFIG3 OTP_4K_0  & SUT_ON & SUT_0
__CONFIG(CONFIG1);
__CONFIG(CONFIG2);
__CONFIG(CONFIG3);

#define uchar unsigned char 
#define uint unsigned int 

#define LEDNUM 50

void SEVEN_COLOR_COVER_CENTER_SIDE_CHANGE(void);
void RZCode_SendDat(void);
void SEVEN_COLOR_METROR_HEAD(void);
void SEVEN_SHADE_COLOR_BOTH_BLACK(void);
void GREEN_COLOR_BOTH_BLACK(void);
void SEVEN_COLOR_ROCK(void);
void SEVEN_COLOR_METROR_HEAD_WHITE(void);
void SEVEN_SEGMENT_COLOR_BOTH_BLACK(void);
void SEVENLIGHT_SEGMENT_COLOR_FIVECOLOR(void);
void FiveUnit_SevenColour_BackMove(void);
void SEVEN_COLOR_MOVING(void);
void THREE_COLOR_MOVING(void);
void SEVEN_COLOR_COLOD(void);

volatile unsigned char Red;
volatile unsigned char Green;
volatile  unsigned char Blue;


void Delay_Nms(uint x)
{
	uchar i,j;
	uint k;
	for(k=0;k<x;k++)	
	for(i=0;i<25;i++)
	for(j=0;j<33;j++);
}

void main ()
{
	CLKPR=0x80;
	CLKPR=0x00;
	while(CLKPCE);
	TRISA=0xff;		//设置A口方向寄存器
	TRISB=0xfe;		//设置B口方向寄存器
	PORTA=0xff;		//设置A口数据位
	PORTB=0xfe;		//设置B口数据位	
	while(1)
	{
	SEVEN_COLOR_METROR_HEAD();//七彩流星带
	SEVEN_SEGMENT_COLOR_BOTH_BLACK();//七段流水两端黑
	SEVEN_SHADE_COLOR_BOTH_BLACK();//七彩渐变中间亮两端暗	
	SEVEN_COLOR_COLOD();//七色飘带
	}
}
void RZCode_SendDat()
{
	Red=Red<<1;		
	#asm
red0:	
		bsf 0x006,0;
		btfss 0x003,0;//为1跳过
		bcf 0x006,0;
		nop;
		nop;
		nop;
		bcf 0x006,0;
#endasm
Red=Red<<1;
#asm
red1:	
		bsf 0x006,0;
		btfss 0x003,0;//为1跳过
		bcf 0x006,0;
		nop;
		nop;
		nop;
		bcf 0x006,0;
#endasm
Red=Red<<1;
	#asm
red2:	
		bsf 0x006,0;
		btfss 0x003,0;//为1跳过
		bcf 0x006,0;
		nop;
		nop;
		nop;
		bcf 0x006,0;
#endasm
Red=Red<<1;
	#asm
red3:	
		bsf 0x006,0;
		btfss 0x003,0;//为1跳过
		bcf 0x006,0;
		nop;
		nop;
		nop;
		bcf 0x006,0;
#endasm
Red=Red<<1;
	#asm
red4:	
		bsf 0x006,0;
		btfss 0x003,0;//为1跳过
		bcf 0x006,0;
		nop;
		nop;
		nop;
		bcf 0x006,0;
#endasm
Red=Red<<1;
	#asm
red5:	
		bsf 0x006,0;
		btfss 0x003,0;//为1跳过
		bcf 0x006,0;
		nop;
		nop;
		nop;
		bcf 0x006,0;
#endasm
Red=Red<<1;
	#asm
red6:	
		bsf 0x006,0;
		btfss 0x003,0;//为1跳过
		bcf 0x006,0;
		nop;
		nop;
		nop;
		bcf 0x006,0;
#endasm
Red=Red<<1;
	#asm
red7:	
		bsf 0x006,0;
		btfss 0x003,0;//为1跳过
		bcf 0x006,0;
		nop;
		nop;
		nop;
		bcf 0x006,0;
#endasm
Green=Green<<1;	
	#asm				
green0:	
		bsf 0x006,0;
		btfss 0x003,0;//为1跳过
		bcf 0x006,0;
		nop;
		nop;
		nop;
		bcf 0x006,0;
#endasm
Green=Green<<1;
	#asm
green1:	
		bsf 0x006,0;
		btfss 0x003,0;//为1跳过
		bcf 0x006,0;
		nop;
		nop;
		nop;
		bcf 0x006,0;
#endasm
Green=Green<<1;
	#asm
green2:	
		bsf 0x006,0;
		btfss 0x003,0;//为1跳过
		bcf 0x006,0;
		nop;
		nop;
		nop;
		bcf 0x006,0;
#endasm
Green=Green<<1;
	#asm
green3:	
		bsf 0x006,0;
		btfss 0x003,0;//为1跳过
		bcf 0x006,0;
		nop;
		nop;
		nop;
		bcf 0x006,0;
#endasm
Green=Green<<1;
	#asm
green4:	
		bsf 0x006,0;
		btfss 0x003,0;//为1跳过
		bcf 0x006,0;
		nop;
		nop;
		nop;
		bcf 0x006,0;
#endasm
Green=Green<<1;
	#asm
green5:	
		bsf 0x006,0;
		btfss 0x003,0;//为1跳过
		bcf 0x006,0;
		nop;
		nop;
		nop;
		bcf 0x006,0;
#endasm
Green=Green<<1;
	#asm
green6:	
		bsf 0x006,0;
		btfss 0x003,0;//为1跳过
		bcf 0x006,0;
		nop;
		nop;
		nop;
		bcf 0x006,0;
#endasm
Green=Green<<1;
	#asm
green7:	
		bsf 0x006,0;
		btfss 0x003,0;//为1跳过
		bcf 0x006,0;
		nop;
		nop;
		nop;
		bcf 0x006,0;

#endasm
Blue=Blue<<1;
	#asm

blue0:	
		bsf 0x006,0;
		btfss 0x003,0;//为1跳过
		bcf 0x006,0;
		nop;
		nop;
		nop;
		bcf 0x006,0;
#endasm
Blue=Blue<<1;
	#asm
blue1:	
		bsf 0x006,0;
		btfss 0x003,0;//为1跳过
		bcf 0x006,0;
		nop;
		nop;
		nop;
		bcf 0x006,0;
#endasm
Blue=Blue<<1;
	#asm
blue2:	
		bsf 0x006,0;
		btfss 0x003,0;//为1跳过
		bcf 0x006,0;
		nop;
		nop;
		nop;
		bcf 0x006,0;
#endasm
Blue=Blue<<1;
	#asm
blue3:	
		bsf 0x006,0;
		btfss 0x003,0;//为1跳过
		bcf 0x006,0;
		nop;
		nop;
		nop;
		bcf 0x006,0;
#endasm
Blue=Blue<<1;
	#asm
blue4:	
		bsf 0x006,0;
		btfss 0x003,0;//为1跳过
		bcf 0x006,0;
		nop;
		nop;
		nop;
		bcf 0x006,0;
#endasm
Blue=Blue<<1;
	#asm
blue5:	
		bsf 0x006,0;
		btfss 0x003,0;//为1跳过
		bcf 0x006,0;
		nop;
		nop;
		nop;
		bcf 0x006,0;
#endasm
Blue=Blue<<1;
	#asm
blue6:	
		bsf 0x006,0;
		btfss 0x003,0;//为1跳过
		bcf 0x006,0;
		nop;
		nop;
		nop;
		bcf 0x006,0;
#endasm
Blue=Blue<<1;
	#asm
blue7:	
		bsf 0x006,0;
		btfss 0x003,0;//为1跳过
		bcf 0x006,0;
		nop;
		nop;
		nop;
		bcf 0x006,0;
		#endasm	
}



/***********************************************************************************
* 函数名称：SEVEN_COLOR_METROR_HEAD()
* 功能描述：七彩流星带
* 入口参数：
* 出口参数：无
************************************************************************************/
void SEVEN_COLOR_METROR_HEAD(void)
{
	uchar i=12,j=12,k;
	uchar Metror[12]={0,0,5,5,11,11,57,57,91,155,225,255};
	uint  ONum;
	uchar record=1,colorsel=1;

	for(k=0;k<168+48;k++)
	{
		for(ONum=0;ONum<LEDNUM;ONum++)
		{
			switch(colorsel)
			{
				case 1:
				{
					Red=Metror[i];
					Green=Metror[i];
					Blue=Metror[i];
					break;
				}
				case 2:
				{
					Red=Metror[i];
					Green=Metror[i];
					break;
				}				
				case 3:
				{
					Red=Metror[i];
					Blue=Metror[i];
					break;
				}
				case 4:
				{
					Red=Metror[i];
					break;
				}
				case 5:
				{
					Green=Metror[i];
					break;
				}
				case 6:
				{
					Blue=Metror[i];
					break;
				}
				case 7:
				{
					Green=Metror[i];
					Blue=Metror[i];
					break;
				}
				default: break;
			}
			i--;
			if(i==0)
			{
				i=12;
				colorsel++;
				if(colorsel==7)
				{
					colorsel=1;
				}
			}
			RZCode_SendDat();
		}
		Delay_Nms(20);
		j--;
		if(j==0)
		{
		    j=12; 
		    record++;
			if(record==7)
			{
				record=1;
			}
		}
		colorsel=record;
		i=j;	
	}
}
/***********************************************************************************
* 函数名称：SEVEN_SHADE_COLOR_BOTH_BLACK()
* 功能描述：七彩渐变中间亮两端暗
* 入口参数：
* 出口参数：无
************************************************************************************/
void SEVEN_SHADE_COLOR_BOTH_BLACK(void)
{
	uchar i=11,j=11,k;
	uchar Metror[12]={0,5,15,35,100,255,255,100,35,15,5,0};
	uint  ONum;
	uchar record=1,colorsel=1;

	for(k=0;k<168+24;k++)
	{
		for(ONum=0;ONum<LEDNUM;ONum++)
		{
			switch(colorsel)
			{
				case 1:
				{
					Red=Metror[i];
					RZCode_SendDat();
					break;
				}
				case 2:
				{
					Red=Metror[i];
					Blue=Metror[i];
					RZCode_SendDat();
					break;
				}				
				case 3:
				{
					Red=Metror[i];
					Green=Metror[i];
					RZCode_SendDat();
					break;
				}
				case 4:
				{
					Green=Metror[i];
					Blue=Metror[i];
					RZCode_SendDat();
					break;
				}
				case 5:
				{
					Blue=Metror[i];	
					RZCode_SendDat();				
					break;
				}
				case 6:
				{
					Green=Metror[i];
					RZCode_SendDat();
					break;
				}
				case 7:
				{
					Red=Metror[i];
					Green=Metror[i];
					Blue=Metror[i];
					RZCode_SendDat();
					break;
				}
				default: break;
			}
			i--;
			if(i==0)
			{
				i=11;
				colorsel++;
				if(colorsel==7)
				{
					colorsel=1;
				}
			}
		}
		Delay_Nms(20);
		j--;
		if(j==0)
		{
		    j=11;
		    record++; 
			if(record==7)
			{
				record=1;
			}
		}
		colorsel=record;
		i=j;		
	}
}

/***********************************************************************************
* 函数名称：SEVEN_SEGMENT_COLOR_BOTH_BLACK()
* 功能描述：七段流水两端黑
* 入口参数：
* 出口参数：无
************************************************************************************/
void SEVEN_SEGMENT_COLOR_BOTH_BLACK(void)
{
	uchar i=12,j=12,k;
	uchar Metror[12]={0,0,255,255,255,255,255,255,255,255,0,0};
	uint  ONum;
	uchar record=1,colorsel=1;

	for(k=0;k<168+48;k++)
	{
		for(ONum=0;ONum<LEDNUM;ONum++)
		{
			switch(colorsel)
			{
				case 1:
				{
					Green=Metror[i];
					Blue=Metror[i];
					break;
				}
				case 2:
				{
					Red=Metror[i];
					Blue=Metror[i];
					break;
				}				
				case 3:
				{
					Red=Metror[i];
					Green=Metror[i];
					break;
				}
				case 4:
				{
					Red=Metror[i];
					break;
				}
				case 5:
				{
					Green=Metror[i];
					break;
				}
				case 6:
				{
					Blue=Metror[i];
					break;
				}
				case 7:
				{
					Red=Metror[i];
					Green=Metror[i];
					Blue=Metror[i];
					break;
				}
				default: break;
			}
			i--;
			if(i==0)
			{
				i=12;
				colorsel++;
				if(colorsel==7)
				{
					colorsel=1;
				}
			}
			RZCode_SendDat();
		}
		Delay_Nms(20);
		j--;
		if(j==0)
		{
		    j=12; 
		    record++;
			if(record==7)
			{
				record=1;
			}
		}
		colorsel=record;
		i=j;		
	}
}

/***********************************************************************************
* 函数名称：GREEN_COLOR_COLOD()
* 功能描述：七色飘带
* 入口参数：
* 出口参数：无
************************************************************************************/
void SEVEN_COLOR_COLOD(void)
{
	uchar i=23,j=23,k;
	uchar Metror[24]={0,0,5,5,15,15,35,35,100,100,225,255,255,225,100,100,35,35,15,15,5,5,0,0};
	uint  ONum;
	uchar record=1,colorsel=1;

	for(k=0;k<168+24;k++)
	{
		for(ONum=0;ONum<LEDNUM;ONum++)
		{
			switch(colorsel)
			{
				case 1:
				{
					Red=Metror[i];
					Green=Metror[i];
					Blue=Metror[i];
					break;
				}
				case 2:
				{
					Red=Metror[i];
					Green=Metror[i];
					break;
				}				
				case 3:
				{
					Red=Metror[i];
					Blue=Metror[i];
					break;
				}
				case 4:
				{
					Red=Metror[i];
					break;
				}
				case 5:
				{
					Green=Metror[i];
					break;
				}
				case 6:
				{
					Blue=Metror[i];
					break;
				}
				case 7:
				{
					Green=Metror[i];
					Blue=Metror[i];
					break;
				}
				default: break;
			}				
			i--;
			if(i==0)
			{
				i=23;
				colorsel++;
				if(colorsel==7)
				{
					colorsel=1;
				}
			}
		RZCode_SendDat();
		}
		Delay_Nms(20);
		j--;
		if(j==0)
		{
		    j=23;
		    record++; 
			if(record==7)
			{
				record=1;
			}
		}
		colorsel=record;
		i=j;		
	}
}
