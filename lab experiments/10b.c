#include<stdio.h>
struct node {
 int data;
 struct node *next;   
}
main(){
    struct node n1,n2,n3,n4,newnode;

    n1.data = 10; n1.next = &n2;
    n2.data = 20; n2.next = &n3;
    n3.data = 40; n3.next = &n4;
    n4.data = 50; n4.next = NULL;

    newnode.data = 30;

    newnode.next = n2.next;
    n2.next = &newnode;

    struct node *ptr = &n1;
    while (ptr != NULL) {
        printf("%d ->", ptr->data);
    ptr = ptr->next;
    }
printf("NULL");
}
