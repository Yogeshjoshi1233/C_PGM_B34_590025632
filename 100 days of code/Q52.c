#include<stdio.h>
main(){

    int i, j;
for (i = 1; i <= 5; i++) {       
int count;                   

if (i == 1) count = 1;
else if (i == 2) count = 3;
else if (i == 3) count = 5;
else if (i == 4) count = 3;
else count = 1;

for (j = 1; j <= count; j++) {   
printf("*\n");
}
printf("\n"); 
}

return 0;
}