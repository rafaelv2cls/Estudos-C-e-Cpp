#include <stdio.h>

int main() {

    int x;
    scanf("%d", &x);

    //x é par?
    if(x%2 == 0){
        printf("O valor digitado %d e par.\n", x);
    }
    else{
        printf("O valor digitado %d e impar.\n", x);
    }

return 0;
}