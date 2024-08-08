#include <stdio.h>
#include <assert.h>
/*
int tempOK(float temperature, float soc, float chargeRate);
int socOK(float soc, float chargeRate);
int chargeRateOK(float chargeRate);
*/
int ErrorPrintstatus(int *BatteryTempSocChargeNOK, const char *status, int strlength);

int ErrorPrintstatus(int *BatteryTempSocChargeNOK, const char *status, int strlength)
{
 for (int count=0;BatteryTempSocChargeNOK[count]!=0&&count<strlength;count++)
  {
   printf ("%s\n", status[count]);
   return 0;
  }
 return 1;
}
/*
 int tempOK(float temperature, float soc, float chargeRate)
{ 
  return (temperature < 0 || temperature > 45)?ErrorPrintstatus("Temperature out of range!"):socOK(soc,chargeRate);
}*/
 /*int  socOK(float soc,float chargeRate)
{
   return (soc < 20 || soc > 80)?ErrorPrintstatus("State of Charge out of range!"):chargeRateOK(chargeRate);
 }
 
 int chargeRateOK(float chargeRate)
{
 
  return (chargeRate > 0.8)?ErrorPrintstatus("Charge Rate out of range!"):1;

}*/

int batteryIsOk(float temperature, float soc, float chargeRate) {
/* int Temp_RangeNOK =temperature < 0 || temperature > 45;
 int Soc_RangeNOK=soc < 20 || soc > 80;
 int ChargeRate_NOK= chargeRate > 0.8;*/
 int BatteryTempSocChargeNOK[]={temperature < 0 || temperature > 45,soc < 20 || soc > 80,chargeRate > 0.8};
 int strlength=len(BatteryTempSocChargeNOK);
 const char status[][]={"Temperature out of range!","State of Charge out of range!","State of Charge out of range!"};
 return TempRange= ErrorPrintstatus(*BatteryTempSocChargeNOK, *status, strlength);
}


int main() {
  assert(batteryIsOk(25, 70, 0.7));
  assert(!batteryIsOk(50, 85, 0));
}
