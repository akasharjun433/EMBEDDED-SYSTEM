 #include<AT89S52.h>

int wait(int);
 void main()
 {
	
	while(1){

	P0=0xF8;
	wait(1);
	P0=0xFF;
	wait(1);
	}

 }
 
int wait(int del)
{
int i,j;
for(i=0;i<del;i++)
{
for(j=0;j<10;j++)
{
}
}
}