#include <stdio.h>
int main(void) {
  float L1, L2, Height, SumL, Area, Per;
  printf("Enter L1 : ");
  scanf("%f",&L1);
  printf("Enter L2 : ");
  scanf("%f",&L2);
  printf("Enter Height : ");
  scanf("%f",&Height);
  Per = ((L2-L1)/L2)*100;
  printf("Percent = %.2f%%\n",Per);
  if(Per >= 40){
    SumL = L1+L2;
    Area = 0.5*Height*SumL;
    printf("Area  = %.2f",Area);
  }else{
    printf("This program will run when L2 is 40%% greater than L1");
  }
  return 0;
}