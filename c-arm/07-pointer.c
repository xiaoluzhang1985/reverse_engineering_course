#include<stdio.h>


void main(){
    int *p[3];
    int (*q)[3];
    int (**b)[3];
    int a[3]={0,1,2};
    p[0]=&a[2];
    q=&a;
    b=&q;
    printf("%d\n",*p[0]);
    printf("%d\n",(*q)[0]);
    printf("%d\n",(**b)[0]);

    
}
