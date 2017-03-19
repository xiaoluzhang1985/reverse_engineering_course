#include<stdio.h>
#include<string.h>

void main (){
    struct stuff{
        char job[20];
        int age;
        float height;
    };
    
    struct stuff xiaolu;
    char *string = "unh";
    int i;
    for(i=0;i<3;i++){
        xiaolu.job[i]=*(string+i);
            
    }
    xiaolu.age = 32;
    xiaolu.height = 6.2;
    printf("%d",xiaolu.age);
    printf("%f",xiaolu.height);
    printf("%s",&xiaolu.job);
    printf("%d",*xiaolu.job);
}
