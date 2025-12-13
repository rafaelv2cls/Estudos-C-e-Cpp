#include <stdio.h>
#include <string.h>

int main(){
    char texto[100], troca;
    printf("Insira o texto:\n");
    fgets(texto, 100, stdin);

    int i=0, j=strlen(texto)-1;
    while(i<j){
        troca = texto[i];
        texto[i] = texto[j];
        texto[j] = troca;
        --j;
        ++i;
    }

    printf("%s", texto);
return 0;
}