#include<stdio.h>
main(){
int n, rev = 0, remainder;

printf("Enter a number: ");
scanf("%d", &n);

while (n != 0) {
remainder = n % 10;       
rev = rev * 10 + remainder; 
n /= 10;                   
}

printf("The reverse of given number is : %d\n", rev);

return 0;
}