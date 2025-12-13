#include <stdio.h>

#define TAM_MAX 100

int main(){

    int vet[TAM_MAX];
    int n;
    printf("Digite n:\n");
    scanf("%d", &n);

    if(n>=TAM_MAX){
        printf("Valor de n invalido, alterado para %d.\n", TAM_MAX);
        n = TAM_MAX;
    }

    int i;
    for(i=0; i<n; i++){
        vet[i] = i+1;
    }

    int x;
    printf("Qual valor você deseja buscar?\n");
    scanf("%d", x);
    for(i=0; i<n; i++){
        if(vet[i]==x) print("Valor encontrado na posição: %d.\n", i);
    }
    // printf("Insira os numeros a serem adicionados:\n");
    // for(int i=0; i<n; i++){
    //     scanf("%d", &vet[i]);
    // }
    // int soma = 0;
    // for (int i=0; i<n; i++){
    //     soma += vet[i];
    // }
    // printf("A soma dos valores é: %d\n", soma);


return 0;
}