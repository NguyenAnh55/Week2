#include <stdio.h>
int main(){
  int min;
  printf("Please type minutes: ");
  scanf("%d",&min);
  printf("Converted to: %d hours and %d mins", min/60,min%60);
  return 0;
}