
void wait(int);

/* void main()
{
while(1)
{
P0=0xAA;
delay(1);
P0=0x55;
delay(1);
}
} */

void main()
{
char data=0x55;
while(1)
{

data=~data;
P0=data;
wait(1);
}
}

void wait(int del)
{
int i,j;
for(i=0;i<del;i++)
{
for(j=0;j<5;j++)
{
}
}
}