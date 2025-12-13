#include <stdio.h>
#include <string.h>

int main(){
    char palavra[100];
    printf("Escreva a palavra:\n");
    fgets(palavra, 100, stdin);
    
    int i, j, meio;
    meio = ((strlen(palavra)-1)/2);

    for(i=0, j=strlen(palavra)-2; i<meio; i++, j--){
        if(palavra[i] != palavra[j]){
            printf("Não é palíndromo.");
            break;
        }
    }
    if(i>=meio) printf("É palíndromo.");

return 0;
}