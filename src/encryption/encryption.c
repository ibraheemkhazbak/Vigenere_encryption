#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include"encryption.h"
#include"shared.h"

char* encrypt(char* string,char* key){
int keyLength=strlen(key);
int stringLength=strlen(string);
char* encryptedText=malloc(sizeof(char)*stringLength+1);
encryptedText[stringLength]=0;
char x,y;
for (int i = 0; i < stringLength; i++)
{
    x=string[i];
    y=key[i%keyLength];
    if(isalpha(x)){
        encryptedText[i]=getCharFromMatrix(x,y);
    }else{
        encryptedText[i]=x;
    }
}
return encryptedText;

}
