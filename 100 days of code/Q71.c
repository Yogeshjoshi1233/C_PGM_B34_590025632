#include<stdio.h>
main() {
int num1,num2;
printf("Enter the rows and column you want in your matrix : ");
scanf("%d%d",&num1,&num2);
int array[num1][num2];
for(int i=0;i<num1;++i){
for(int j=0;j<num2;++j){
printf("array[%d][%d] : ",i,j);
scanf("%d",&array[i][j]);
 }
}
for(int i=0;i<num1;++i){
for(int j=0;j<num2;++j){
printf("%d ",array[i][j]);
}
 puts("");
}
    return 0;
}