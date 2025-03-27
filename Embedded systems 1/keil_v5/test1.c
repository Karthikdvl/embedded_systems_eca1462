#include<reg51.h>

sbit port1 = P1^0;

void delay()
{
	int j;
	for (j=0;j<=30000;j++){
	}
}

void main(){
	while(1){
		port1=0;
		delay();
		port1=1;
		delay();
	}
}