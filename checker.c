#include <stdio.h>
#include <assert.h>


int batteryIsOk(float temperature, float soc, float chargeRate) {

 int value=0;
  value = (temperature < 0 || temperature > 45)?1:(soc < 20 || soc > 80)?2:(chargeRate > 0.8)?3:4;
   switch (value)
     {
    case 1:
    printf("Temperature out of range!\n");
      break;
  case 2:
    printf("State of Charge out of range!\n");
      break;
  case 3:
   printf("Charge Rate out of range!\n");
   break;
      break;
  default:
      break;
     }
 if (value==1||valu||2||value==3)
  return 0;
 else 
  return 1;

}

int main() {
  assert(batteryIsOk(25, 70, 0.7));
  assert(!batteryIsOk(50, 85, 0));
}
