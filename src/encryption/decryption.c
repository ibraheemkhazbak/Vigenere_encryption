#include<stdlib.h>
#include<string.h>
#include "shared.h"

char* decrypt(char* cipher,char* key){
int keyLength=strlen(key);
int cipherLength=strlen(cipher);
char* decryptedText=malloc(sizeof(char)*cipherLength+1);
decryptedText[cipherLength]=0;
char cipherX,y;

for (int i = 0; i < cipherLength; i++)
{
    cipherX=cipher[i];
    y=key[i%keyLength];
    if(isalpha(cipherX)){
        decryptedText[i]=getY(cipherX,y);
    }else{
        decryptedText[i]=cipherX;
    }
}
return decryptedText;

}