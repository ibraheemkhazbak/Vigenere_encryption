#include "types.h"


enum Action getAction(char* parameter);
void verifyValidCommand(int argc,char** argv);
struct EncryptDecryptParams extractCommandData(int argc,char** argv);
char* cleanKeyString(char* string);
