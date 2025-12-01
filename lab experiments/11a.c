#include<stdio.h>
main() {
int a, b;

printf("Enter first number: ");
scanf("%d", &a);

printf("Enter second number: ");
scanf("%d", &b);

printf("\nBitwise AND (a & b) = %d", a & b);
printf("\nBitwise OR  (a | b) = %d", a | b);
printf("\nBitwise NOT (~a) = %d", ~a);
printf("\nBitwise NOT (~b) = %d\n", ~b);

return 0;
}