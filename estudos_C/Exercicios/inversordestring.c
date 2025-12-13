#include <stdio.h>

int main(){

    char texto[80], textoInv[80];
    int i, j;

    fgets(texto, 80, stdin);

    int fim = 0;
    while (texto[fim]!= '\0' && texto[fim] != '\n'){
        fim++;
    }

    for(i=0; i <= fim-1; i++){
        textoInv[fim-1-i] = texto[i];
    }
    
    textoInv[fim] = '\0';
    printf("%s", textoInv);

return 0;
}