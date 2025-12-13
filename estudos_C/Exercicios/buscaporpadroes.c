#include <stdio.h>
#include <string.h>

int main(){
    char texto[80], palavra[80];
    printf("Digite o texto:\n");
    fgets(texto, 80, stdin);
    printf("Digite a palavra:\n");
    fgets(palavra, 80, stdin);

    int i = 0, j, tamT, tamP, ver, ocorrencias[80];
    tamP = strlen(palavra)-1;
    tamT = strlen(texto)-1;
    ocorrencias[0] = 0;

    for(i=0; i<= tamT-tamP;i++){
        if(texto[i] == palavra[0]){
            ver = 1;
            for(j=0; j<tamP; j++){
                if(palavra[j] != texto[i+j]) {
                    ver = 0;
                    break;
                }
            }
            if(ver == 1){
                ++ocorrencias[0];
                ocorrencias[ocorrencias[0]] = i;
            }
        }
    }
    if(ocorrencias[0]>1){
        printf("A palavra tem ocorrências em %d", ocorrencias[1]);
        for(i=2; i<ocorrencias[0]; i++)
            printf(", %d", ocorrencias[i]);
        printf(" e %d.", ocorrencias[ocorrencias[0]]);
    }
    else if(ocorrencias[0] == 1) printf("A palavra tem ocorrência em %d.", ocorrencias[1]);
    else printf("Não há nenhuma ocorrência.");
return 0;
}