#include<stdio.h>
main(){
int num1,num2,num3,num4;
printf("Enter the rows and column you want in your matrix : ");
scanf("%d %d",&num1,&num2);
int array[num1][num2];
for(int i=0;i<num1;++i){
    for(int j=0;j<num2;++j){
    printf("array[%d][%d] : ",i,j);
    scanf("%d",&array[i][j]);
}
}
printf("Enter the rows and column you want in your matrix 2 : ");
scanf("%d %d",&num3,&num4);
if(num1!=num3 || num2!=num4){
 printf("Invalid matric multiplication ");
return 0;
}
int array2[num3][num4];
for(int i=0;i<num1;++i){
for(int j=0;j<num2;++j){
 printf("array[%d][%d] : ",i,j);
 scanf("%d",&array2[i][j]);
}
}
int array3[num1][num2];
for(int i=0;i<num1;++i){
 for(int j=0;j<num2;++j){
array3[i][j]=array2[i][j]*array[i][j];
    }
}
printf("multiplication : \n");
for(int i=0;i<num2;++i){
for(int j=0;j<num1;++j){
printf("%d ",array3[i][j]);
}
puts("");
}
return 0;
}    
