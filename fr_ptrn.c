#include<AT89S52.h>

void wait(int);

const char sa[4]={0x81,0x42,0x24,0x18};

void main()
{
int i;
while(1)
{
for(i=0;i<4;i++)
{
	P0=~sa[i];
	wait(3); }}}
	
void wait(int del){
int i,j;
for(i=0;i<del;i++){
for(j=0;j<5;j++){
}}}
