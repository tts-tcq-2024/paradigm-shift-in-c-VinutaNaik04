#include <stdio.h>
#include <assert.h>

int ErrorPrintstatus(float value, const char *ParamName);

int ErrorPrintstatus(float value, const char *ParamName)
{
 
   printf("%s is out of range (Value: %.2f)\n", ParamName, value);
   return 0;
  
}

// Function to check battery parameters
int batteryIsOk(float temperature, float soc, float chargeRate) {
    return (temperature < 0 || temperature > 45)?ErrorPrintstatus(temperature,"Temperature"):(soc < 20 || soc > 80)?ErrorPrintstatus(soc,"State of Charge"):(chargeRate > 0.8)?ErrorPrintstatus(chargeRate,"Charge Rate"):1
}

int main() {
  assert(batteryIsOk(25, 70, 0.7));
  assert(!batteryIsOk(50, 85, 0));
}
