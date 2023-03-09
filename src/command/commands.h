#include "structs.h"


char isEncrypt(char* parameter);
void verifyValidCommand(int argc,char** argv);
struct EncryptDecryptParams extractCommandData(int argc,char** argv);
char* cleanKeyString(char* string);
