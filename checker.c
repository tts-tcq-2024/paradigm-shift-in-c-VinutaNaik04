#include <stdio.h>
#include <assert.h>

 float tempOK(float temperature, float soc, float chargeRate)
{ 
 int value;
  value = (temperature < 0 || temperature > 45)?1:0;
 if (value ==1)
 {
   printf("Temperature out of range!\n");
  return 0;
 }
 else 
 {
  return socOK(soc,chargeRate);
   }
}
 float  socOK(soc,chargeRate)
{
 int value2;
  value2 = (soc < 20 || soc > 80)?1:0;
 if (value2 ==1)
 {
   printf("State of Charge out of range!\n");
  return 0;
 }
 else 
 {
  return chargeRateOK(chargeRate);
  }
}
 float chargeRateOK(float chargeRate)
{
 int value3;
  value3= chargeRate > 0.8?1:0;
   if (value3 ==1)
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
