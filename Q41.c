#include<stdio.h>
main(){

int num, temp, digits = 0, first, last, swapped;

printf("Enter the number: ");
scanf("%d", &num);

temp = num;
while (temp > 0) {
temp /= 10;
digits++;
}
if (digits == 1) {
printf("After swapping first and last digit: %d\n", num);
return 0;
}
int power = 1;
for (int i = 1; i < digits; i++) {
power *= 10;
}

first = num / power; 
last = num % 10;
swapped = (last * power)               
+ (num % power) - last          
+ first;                        

printf("After swapping first and last digit: %d\n", swapped);

return 0;
}