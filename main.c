#include <stdio.h>

int main(void) {
  float L1, L2, Height, SumL, Area;
  printf("Enter L1 : ");
  scanf("%f",&L1);
  printf("Enter L2 : ");
  scanf("%f",&L2);
  printf("Enter Height : ");
  scanf("%f",&Height);
  SumL = L1+L2;
  Area = 0.5*Height*SumL;
  printf("Area  = %.2f",Area);
  return 0;
}