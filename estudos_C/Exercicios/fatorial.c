#include <stdio.h>

int main(){

    int n, fat = 1;
    printf("Insira n:\n");
    scanf("%d",&n);

    for(int i = n; i > 1; i--){
        fat *= i;
    }

    printf("%d! = %d", n, fat);

return 0;
}