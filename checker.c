#include <stdio.h>
#include <assert.h>

int batteryIsOk(float temperature, float soc, float chargeRate) {
  /*
  int value =0;
  value = (temperature < 0 || temperature > 45)?1:(soc < 20 || soc > 80)?2:(chargeRate > 0.8)?3:4;
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
static int tempratureOK(float temperature1);
static int socOK(float soc1);
static int chargeRateOK(float chargeRate1);
static int tempratureOK(float temperature1)
{
  if (temperature1 < 0 || temperature1 > 45)
  {
    printf("Temperature out of range!\n");
    return 0;
  }
}
static int   socOK(float soc1)
{
  if (soc1 < 20 || soc1 > 80)
  {
    printf("State of Charge out of range!\n");
    return 0;
  }
}
static int    chargeRateOK(float chargeRate1)
{
  if (chargeRate1 > 0.8)
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
