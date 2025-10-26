#include<stdio.h>
main() {
int n;

printf("Enter number of elements: ");
scanf("%d", &n);

int arr[n + 1];  

for (int i = 0; i < n; i++) {
printf("Enter element %d: ", i + 1);
scanf("%d", &arr[i]);
}

int index, number;
printf("Enter the index where you want to insert: ");
scanf("%d", &index);

if (index < 0 || index > n) {
printf("Invalid index! Must be between 0 and %d.\n", n);
return 1;
}

printf("Enter the number to insert: ");
scanf("%d", &number);

for (int i = n; i > index; i--) {
arr[i] = arr[i - 1];
}

    
arr[index] = number;

printf("Final array:\n");
for (int i = 0; i < n + 1; i++) {
printf("%d ", arr[i]);
}

return 0;
}