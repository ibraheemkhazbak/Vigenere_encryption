#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include"strings.h"
char* toStringUpper(char* string){
    int stringLength=strlen(string);
    char* output=malloc(sizeof(char)*stringLength+1);
    output[stringLength]=0;
    for (int i = 0; string[i]!='\0'; i++)
    {
        output[i]=toupper(string[i]); 
    }
return output;
}
