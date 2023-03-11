#include<stdio.h>
#include "encryption/encryption.h"
#include "command/commands.h"
#include "utils/strings.h"
#include "encryption/decryption.h"

void main(int argc,char** argv){
    verifyValidCommand(argc, argv);
    struct EncryptDecryptParams parameters = extractCommandData(argc,argv); 
    char* output;
    if(parameters.action==ENCRYPTION){
        output=encrypt(parameters.string,parameters.key);
        printf("%s\n",output);
    }else if(parameters.action==DECRYPTION){
        output=decrypt(parameters.string,parameters.key);
    }
    printf("%s",output);
    }