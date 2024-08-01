#include <stdio.h>
#include <assert.h>
 int tempratureOK(temperature)
{
  if (temperature < 0 || temperature > 45)
  {
    printf("Temperature out of range!\n");
    
  }
  return 0;
}
 int   socOK(soc)
{
  if (soc < 20 || soc > 80)
  {
    printf("State of Charge out of range!\n");
    
  }
  return 0;
}
 int    chargeRateOK(chargeRate)
{
  if (chargeRate > 0.8)
  {
     printf("Charge Rate out of range!\n");
  
  }
    return 0;
}

int batteryIsOk(float temperature, float soc, float chargeRate) {
  
  int value1 =0;
  int value2 =0;
  int value3 =0;
  /* value = (temperature < 0 || temperature > 45)?1:(soc < 20 || soc > 80)?2:(chargeRate > 0.8)?3:4;
   switch (value)
     {
    case 1:
    printf("Temperature out of range!\n");
  case 2:
    printf("State of Charge out of range!\n");
  case 3:
   printf("Charge Rate out of range!\n");
   break;
  default:
    return 1;
  break;
     }
  return 0;
  */
value1= tempratureOK(temperature);
value2=  socOK(soc);
value3= chargeRateOK(chargeRate);



return 1;
}

int main() {
  assert(batteryIsOk(25, 70, 0.7));
  assert(!batteryIsOk(50, 85, 0));
}
