#include <AT89S52.h>

#define G2 P0_7
#define G1 P0_6
#define G0 P0_5
#define OFF 1
#define ON 0
#define B2 P0_2
#define B1 P0_1
#define B0 P0_0


void main()
{
/* create bit variables to rea the values of switches */
  __bit g2;
  __bit g1;
  __bit g0;

/* turnoff all the switches */
  G2=OFF;
  G1=OFF;
  G0=OFF; 
  
 /* P0=0xFF; */

  while(1)
  {
  /* read the values of switch in bit variables */
  /* use reverse logic */
     g2=!G2;
     g1=!G1;
     g0=!G0;

  /*  */
     B2=!g2;
     B1=!(g2^g1);
     B0=!(g2^g1)^g0;
  }
    

}