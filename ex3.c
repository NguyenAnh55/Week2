#include <stdio.h>
#include <math.h>
int main (){
  float x;
  float y;
  printf("Type x: ");
  scanf("%f",&x);
  printf("Type y: ");
  scanf("%f",&y);
  double xpowy= pow(x,y);
  printf("x^y: %.2f", xpowy);
  return 0;
}