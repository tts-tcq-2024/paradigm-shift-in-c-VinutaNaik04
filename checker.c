#include <stdio.h>
#include <assert.h>

 int tempOK(float temperature, float soc, float chargeRate);
 int socOK(float soc, float chargeRate);
 int chargeRateOK(float chargeRate);
 int tempOK(float temperature, float soc, float chargeRate)
{ 
 if(temperature < 0 || temperature > 45)
 {
   printf("Temperature out of range!\n");
  return 0;
 }
  return socOK(soc,chargeRate);
}
 int  socOK(float soc,float chargeRate)
{
  
 if (soc < 20 || soc > 80)
 {
   printf("State of Charge out of range!\n");
  return 0;
 }
  return chargeRateOK(chargeRate);
}
 int chargeRateOK(float chargeRate)
{
 
  if (chargeRate > 0.8)
 {
  printf("Charge Rate out of range!\n");
  return 0;
 }
 else 
 {
  return 1;
  }
}


int batteryIsOk(float temperature, float soc, float chargeRate) {
int return_value;
 return_value=tempOK(temperature,soc,chargeRate);

 return return_value;

}

int main() {
  assert(batteryIsOk(25, 70, 0.7));
  assert(!batteryIsOk(50, 85, 0));
}
