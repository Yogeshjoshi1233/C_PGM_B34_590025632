#include<stdio.h>
main(){
int day;
printf("enter a number : ");
scanf("%d",&day);

switch(day){
case 1:
printf("monday\n");
break;
case 2:
printf("tuesday\n");
break;
case 3:
printf("wednesday\n");
break;
case 4: 
printf("thursday\n");
break;
case 5:
printf("friday\n");
break;
case 6:
printf("saturday\n");
break;
case 7:
printf("sunday\n");
break;

default:
printf("invalid input! please enter a number between 1 and 7\n");
}


return 0;
}