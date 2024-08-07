#include <stdio.h>
#include <assert.h>
/*
 int tempOK(float temperature, float soc, float chargeRate);
 int socOK(float soc, float chargeRate);
 int chargeRateOK(float chargeRate);
int ErrorPrintstatus(const char *status);

int ErrorPrintstatus(const char *status)
{
 printf ("%s\n",status);
 return 0;
}
 int tempOK(float temperature, float soc, float chargeRate)
{ 
 if(temperature < 0 || temperature > 45)
 {
  return ErrorPrintstatus("Temperature out of range!");
 }
  return socOK(soc,chargeRate);
}
 int  socOK(float soc,float chargeRate)
{
  
 if (soc < 20 || soc > 80)
 {
   return ErrorPrintstatus("State of Charge out of range!");
 }
  return chargeRateOK(chargeRate);
}
 int chargeRateOK(float chargeRate)
{
  if (chargeRate > 0.8)
 {
   return ErrorPrintstatus("Charge Rate out of range!");
 }
 return 1;
}
*/


int batteryIsOk(float temperature, float soc, float chargeRate) {
 /*
 return tempOK(temperature,soc,chargeRate);
*/
  if(temperature < 0 || temperature > 45)
  {
    printf("Temperature out of range!\n");
    return 0;
  } 
 if(soc < 20 || soc > 80)
 {
    printf("State of Charge out of range!\n");
    return 0;
  } 
 if(chargeRate > 0.8) 
 {
    printf("Charge Rate out of range!\n");
    return 0;
  }
  return 1;
}


int main() {
  assert(batteryIsOk(25, 70, 0.7));
  assert(!batteryIsOk(50, 85, 0));
}
