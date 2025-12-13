#include <stdio.h>

int main(){

    int n, i = 1, j;
    printf("Insira n:\n");
    scanf("%d", &n);

    while(i <= 6){
        j = 1;
        while(j <= i){
            printf("%d ", j);
            j++;
        }
        printf("\n");
        i++;
    }

return 0;
}