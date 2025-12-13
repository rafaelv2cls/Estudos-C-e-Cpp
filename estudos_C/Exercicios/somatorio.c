#include <stdio.h>

int main(){

    int n;
    printf("Digite a quantidade de numeros:\n");
    scanf("%d", &n);

    int i, a, soma = 0;
    for(i = 0; i < n; i++){
        scanf("%d", &a);
        soma += a;
    }

    printf("%d\n", soma);

return 0;
}