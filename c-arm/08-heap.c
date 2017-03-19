#include<stdio.h>
#include<stdlib.h>
void main(){
    int *age = malloc(sizeof(int)); 
    double *salary = malloc(sizeof(double));

    *age =30;
    printf("%d",age);
    
    *salary = 12345.67;
    printf("%f",*salary);
}
