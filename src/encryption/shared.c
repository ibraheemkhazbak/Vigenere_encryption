#include "shared.h"
#include "../utils/strings.h"
char getCharFromMatrix(char x,char y){
        return ((x-A)+(y-A))%26+A;
}
char getY(char cipherX,char y){
        char actualPosition=((cipherX-A)-(y-A))%26;
        if(actualPosition>=0){
                return actualPosition+A;
        }else{
                return actualPosition+Z;      
        }
}