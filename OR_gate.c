#include<AT89S52.h>

#define LED P2_0
#define SW1 P3_0
#define SW2 P3_2
#define ON 0
#define OFF 1
#define INPUT 1

void main()
{
__bit sw1,sw2;
LED=OFF;
SW1=INPUT;
SW2=INPUT;
while(1)
{
sw1=SW1;
sw2=SW2;

if(sw1==OFF && sw2==OFF)
{
LED=OFF;
}
else
{
LED=ON;
}
}
}
