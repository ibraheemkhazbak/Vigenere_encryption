#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include"commands.h"
#include"../utils/strings.h"

char* getCleanKeyString(char* string);
int getCleanStringLength(char* string);
const char* HELP="--help";
const char* ENCRYPT="-encrypt";
const char* DECRYPT="-decrypt";
const char* HELP_MESSAGE = "args are:\n\t<-encrypt:-decrypt> the text to be encrypted/decrypted\n\t<text:string> the key to encrypt/decrypt\n\t<key:string> choose to encrypt or decrypt";
void verifyValidCommand(int argc,char** argv){
 if(argc==1)
    {
        exit(1);
    } else if(!strcmp(argv[1],HELP)){
        printf("%s",HELP_MESSAGE);
        exit(1);    
    }else if(!strcmp(argv[1],ENCRYPT) || !strcmp(argv[1],DECRYPT)){
        if(argc==4){
                return;
        }else{
            exit(1);
        }
    }
}

struct EncryptDecryptParams extractCommandData(int argc,char** argv){
      struct EncryptDecryptParams parameters;
       parameters.action = getAction(argv[1]);
       parameters.string = toStringUpper(argv[2]);
       parameters.key = getCleanKeyString(toStringUpper(argv[3]));
       return parameters;
}
enum Action getAction(char* parameter){
    if(!strcmp(parameter,ENCRYPT)){
        return ENCRYPTION;
    }else if(!strcmp(parameter,DECRYPT)){
        return DECRYPTION;
    }
}
char* getCleanKeyString(char* string){
    int cleanLength=getCleanStringLength(string);
    char* cleanString=malloc(sizeof(char)*cleanLength+1);
    cleanString[cleanLength]=0;
    int currentCleanIndex=0;
    for (int i = 0; string[i]!=0; i++)
    {
        if(isalpha(string[i])){
            cleanString[currentCleanIndex++]=string[i];
        }
    }
    return cleanString;


}
int getCleanStringLength(char* string){
    int length=0;
    for (int i = 0; string[i]!=0; i++)
    {
        if(isalpha(string[i])){
            length++;
        }
    }
    return length;
}