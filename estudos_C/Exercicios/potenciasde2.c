#include <stdio.h>
#include <math.h>

int main(){

    int n, i = 0, pot = 1;
    printf("Digite n:\n");
    scanf("%d", &n);

    while(i <= n){
        printf("2^%d = %d\n", i, pot);
        pot *= 2;
        i++;
    }
    
return 0;
}