#include<stdio.h>
#define output1 1

inline void eatline() // inline definition/prototype
{
    int output3 = 3;
    printf("%d",output3);
}
void main(void){
    const int output2 =2;
    printf("%d",output1);
    printf("%d",output2);
    //printf("%d",output3);
}
