#include <reg52.h>
#include <head.h>


sbit k1= P1^0;sbit k2= P1^1;
sbit k3= P1^2;sbit k4= P1^3;
sbit k5= P1^4;sbit k6= P1^5;
sbit k7= P1^6;sbit k8= P1^7;

void O_turn();
uchar code two_sys[]={1111,1110,1101,1100,1011,1010,1001,1000,0111,0110,0101,0100,0011,0010,0001,0000}    
uchar code ox[]={f,e,d,c,b,a,9,8,7,6,5,4,3,2,1,0}

int con_s(int x)
{
	uchar n;
	for(n=15;n>=0;n--)
	{
		if(x==two_sy[n])
		return ox[n];

	} 
}

void main()
{   
	
	
	
	O_turn();

}

void O_turn()
{
	P1=0xff;
	unsigned char x;
	
	while(1)
	{
	x=matz();  
	if(x>0&&x<9)
	{
	switch(x)
	{
		case 1:k1=!k1;break;		
		case 2:k2=!k2;break;		
		case 3:k3=!k3;break;			
		case 4:k4=!k4;break;		
		case 5:k5=!k5;break;		
		case 6:k6=!k6;break;		
		case 7:k7=!k7;break;		
		case 8:k8=!k8;break;
	}
	}
}
}

