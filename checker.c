#include <stdio.h>
#include <assert.h>

int tempOK(float temperature, float soc, float chargeRate);
int socOK(float soc, float chargeRate);
int chargeRateOK(float chargeRate);
int ErrorPrintstatus(const char *status);

int ErrorPrintstatus(const char *status)
{
 printf ("%s\n",status);
 return 0;
}
/*
 int tempOK(float temperature, float soc, float chargeRate)
{ 
  return (temperature < 0 || temperature > 45)?ErrorPrintstatus("Temperature out of range!"):socOK(soc,chargeRate);
}*/
 int  socOK(float soc,float chargeRate)
{
   return (soc < 20 || soc > 80)?ErrorPrintstatus("State of Charge out of range!"):chargeRateOK(chargeRate);
 }
 
 int chargeRateOK(float chargeRate)
{
 
  return (chargeRate > 0.8)?ErrorPrintstatus("Charge Rate out of range!"):1;

}

int batteryIsOk(float temperature, float soc, float chargeRate) {
 int Temp_RangeNOK =temperature < 0 || temperature > 45;
 int Soc_RangeNOK=soc < 20 || soc > 80;
 int ChargeRate_NOK= chargeRate > 0.8;
 return Temp_RangeNOK?ErrorPrintstatus("State of Charge out of range!"):Soc_RangeNOK?ErrorPrintstatus("State of Charge out of range!"):ChargeRate_NOK?ErrorPrintstatus("Charge Rate out of range!"):1;
 

}


int main() {
  assert(batteryIsOk(25, 70, 0.7));
  assert(!batteryIsOk(50, 85, 0));
}
