#include<stdio.h>
main() {
int n,temp;

printf("Enter number of elements: ");
scanf("%d", &n);

int arr[n];  

for (int i = 0; i < n; i++) {
printf("Enter element : ");
scanf("%d", &arr[i]);
}
for (int i = 0; i < n; i++) {
    for(int j=0;j<n-i-1;++j){
if(arr[i]>arr[i+1]){
temp=arr[i+1];
    arr[i+1]=arr[i];
    arr[i]=temp;
}
}
}
printf("The second largest number is : %d", arr[n-2]);
return 0;
}