//em c não existe o tipo string
//a convenção para fazer uma string é uma um vetor de caracteres
#include <stdio.h>

int main(){

    char string[8] = {'e','x','e','m','p','l','o','\0'}; // todas strings terminam com o caractere especial \0
    char string2[] = "exemplo";//nesse formato, o compilador coloca o \0 no final automaticamente
    printf(string);

return 0;
}