#include <stdio.h>
#include <assert.h>
#include <string.h>
/*
int tempOK(float temperature, float soc, float chargeRate);
int socOK(float soc, float chargeRate);
int chargeRateOK(float chargeRate);
*/
int ErrorPrintstatus(int value, const char *status);

int ErrorPrintstatus(int value, const char *status)
{
 if (value==1)
  {
   printf("%s is out of range\n", status);
   return 0;
  }
 return 1;
}


// Function to check battery parameters
int batteryIsOk(float temperature, float soc, float chargeRate) {
    int tempOk = ErrorPrintstatus(temperature < 0 || temperature > 45, "Temperature");
    int socOk = ErrorPrintstatus(soc < 20 || soc > 80,"State of Charge");
    int chargeRateOk = ErrorPrintstatus(chargeRate > 0.8, "Charge Rate");

    return tempOk && socOk && chargeRateOk;
}



int main() {
  assert(batteryIsOk(25, 70, 0.7));
  assert(!batteryIsOk(50, 85, 0));
}
