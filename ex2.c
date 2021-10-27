#include <stdio.h>
int main (){
  float vnd,usd;
  printf("How much money do you have: ");
  scanf("%f",&vnd);
  usd=vnd/23150;
  printf("Converted to USD: %.2f",usd);
  return 0;
}