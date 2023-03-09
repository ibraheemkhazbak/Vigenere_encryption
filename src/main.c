#include<stdio.h>
#include "encryption_decryption/encryption.h"
#include "command/commands.h"
#include "string/strings.h"

void main(int argc,char** argv){
    verifyValidCommand(argc, argv);
    struct EncryptDecryptParams parameters = extractCommandData(argc,argv); 
    char* output;
    if(parameters.isEncryption){
        output=encrypt(parameters.string,parameters.key);
        printf("%s\n",output);
    }
    }