/**************************************************************************************
*功能：数码管显示(静态扫描)  												  		  *
*硬件连接：在J4处插上跳线帽  第一位数码管 位引脚-->P2.0								  *
*							 第二位数码管 位引脚-->P2.1								  *
*							 第三位数码管 位引脚-->P2.2								  *
*							 第四位数码管 位引脚-->P2.3								  *
*							 所有的数码管 段引脚-->P0								  *
*作者：研发中心																		  *
*公司：科睿电子产品有限公司 														  *
*电话：0530-2897239   15192459227			  										  *
*地址：菏泽市开发区广州路与淮河路交叉口科睿电子产品有限公司 						  *
***************************************************************************************/
#include <reg52.h>

typedef unsigned char uchar;
typedef unsigned int uint;
sbit P2_0 = P2^0;
sbit P2_1 = P2^1;
sbit P2_2 = P2^2;
sbit P2_3 = P2^3;

uchar code table[]={0xc0,0xf9,0xa4,0xb0,0x99,0x92,0x82,
                        0xf8,0x80,0x90};//共阳数字编码  0.1.2.3.4....9
/********************************************************************
* 名称 : delay()
* 功能 : 延时
* 输入 : i
* 输出 : 无
***********************************************************************/
void delay(uint i)	 //延时函数
{
  uint j,k; 
  for(j=i;j>0;j--)
    for(k=125;k>0;k--);
}  
/********************************************************************
* 名称 : Main()
* 功能 : 主函数
* 输入 : 无
* 输出 : 无
***********************************************************************/
void main(void)
{
    unsigned int  a;
   	change(1)	  //所有数码管位 打开
	while(1)
	{
		P0=table[a];
		delay(500);
		if(a<9)
			a++;
		else
			a=0;
	}
}