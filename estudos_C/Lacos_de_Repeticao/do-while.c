//sempre executa o bloco de comandos na primeira vez, após isso o while verifica a condição

#include <stdio.h>

int main(){

    int i = 0;
    do{
        printf("%d * 7 = %d\n", i, i*7);
        i++;
    }   while(i <= 10);

return 0;
}