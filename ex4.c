#include <stdio.h>
int main (){
  int asmt1,asmt2,asmt3;
  printf("Type your scores: ");
  scanf("%d%d%d", &asmt1,&asmt2,&asmt3);
  float avg=(0.3*asmt1) + (0.3*asmt2) + (0.4*asmt3);
  printf("Your score is: %.2f", avg);
  return 0;
}