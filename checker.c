#include <stdio.h>
#include <assert.h>
 int tempratureOK(temperature)
{
  if (temperature < 0 || temperature > 45)
  {
    printf("Temperature out of range!\n"); 
   return 0;
  }
  return 1;
}
 int  socOK(soc)
{
  if (soc < 20 || soc > 80)
  {
    printf("State of Charge out of range!\n");
     return 0;
  }
  return 1;
}
 int    chargeRateOK(chargeRate)
{
  if (chargeRate > 0.8)
  {
     printf("Charge Rate out of range!\n");
   return 0;
  }
    return 1;
}

int batteryIsOk(float temperature, float soc, float chargeRate) {
  
  int value1 =0;
  int value2 =0;
  int value3 =0;
 int return_value=0;

value1= tempratureOK(temperature);
value2=  socOK(soc);
value3= chargeRateOK(chargeRate);

return_value=value1||value2||value3;

return ;
}

int main() {
  assert(batteryIsOk(25, 70, 0.7));
  assert(!batteryIsOk(50, 85, 0));
}
