#include <stdio.h>   
#include <string.h>   
#include <malloc.h>   
void  main()   
{   
    char *dup_str, *string="hello world!";   
    dup_str=strdup(string);   
    printf("%s", dup_str);   
    free(dup_str);   
       
}  
