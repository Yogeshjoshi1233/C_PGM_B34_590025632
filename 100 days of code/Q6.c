#include<stdio.h>
main(){
int num1,num2,temp;

printf("Enter the first number: ");
scanf("%d", &num1);
printf("Enter the second number: ");
scanf("%d", &num2);

printf("before swapping : num1=%d,num2=%d\n",num1,num2);

temp = num1;
num1 = num2;
num2 = temp;

printf("after swapping: num1=%d, num2=%d\n",num1,num2);

return 0;
}