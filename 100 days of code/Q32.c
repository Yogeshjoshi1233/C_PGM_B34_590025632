#include<stdio.h>
main(){
int num, original, reversed = 0, digit;
printf("Enter the number: ");
scanf("%d", &num);

original = num; 

while (num > 0) {
    digit = num % 10;          
    reversed = reversed * 10 + digit;
    num = num / 10;            
}

if (original == reversed) {
    printf("Palindrome");
} else {
printf("Not palindrome");
}

return 0;
}