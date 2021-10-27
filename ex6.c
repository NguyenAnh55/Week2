#include <stdio.h>
int main(){
int num;
printf("Please type your number!!! ");
scanf("%d",&num);
printf("The sum of digits: %d", num/100 + num%10 + (num/10)%10);
return 0;
}