#include<AT89S52.h>

void wait(int);

const char code[]={0xC0,0xF9,0xA4,0xB0,0x99,0x92,0x82,0xF8,0x80,0x90};
void main()
{
	while(1){
	char i;
	for( i=0;i<10;i++)
	{
	 P0=code[i];
	 wait(1);
	}
	}
}

void wait(int del)
{
int i,j;
for(i=0;i<del;i++)
{
for(j=0;j<30;j++)
{
}
}
}