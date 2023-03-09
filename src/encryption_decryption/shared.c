#include "shared.h"
char getCharFromMatrix(char x,char y){
        return (x-A+y-A)%26+A;
}