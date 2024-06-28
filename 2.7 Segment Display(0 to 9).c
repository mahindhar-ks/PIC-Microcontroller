#include<pic.h>

void delay(unsigned int x)
{
	while(x--);
}
void main()
{	
	char s[10]={0X3F,0X06,0X53,0X4F,0X66,0X6D,0X7D,0X07,0X7F,0X6F};
	TRISB=0x00;
	PORTB=0x00;

	while(1)
	{	
		for(int k=0;k<10;k++)
		{
		PORTB=s[k];
		delay(65000);
	    }
	}
}

