#include <stdio.h>

int main() {
  float ctemp, ftemp;
  printf("Please enter C temperature: ");
  scanf("%f",&ctemp);
  ftemp=ctemp * 9/5 +32;
  printf("Converted to F temperature: %.2f", ftemp);
  return 0;
}