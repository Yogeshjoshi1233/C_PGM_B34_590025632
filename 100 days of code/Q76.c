#include<stdio.h>
main() {
int num1,num2;
printf("Enter the rows and column you want in your matrix : ");
scanf("%d%d",&num1,&num2);
if(num1!=num2){
printf("Symmetric matrices must have equal number of rows and columns.\n");
return 0;
}
int array[num1][num2];
    for(int i=0;i<num1;++i){
for(int j=0;j<num2;++j){
printf("array[%d][%d] : ",i,j);
scanf("%d",&array[i][j]);
    }
}
    for(int i=0;i<num1;++i){
for(int j=0;j<num2;++j){
    if(i==j){
continue;
    }
    else{
if(array[i][j]==array[j][i])
    continue;
else{
    printf("False");
return 0;
            }
        }
    }
}
printf("True");
return 0;
}