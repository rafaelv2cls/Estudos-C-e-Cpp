#include <stdio.h>

int soma(int x, int y);
int subr(int x, int y);
int maior(int x, int y);

int main(){
    int a = 10, b = 11;

    printf("Soma: %d\n", soma(a,b));
    printf("Subtração: %d\n", subr(a,b));
    printf("Maior: %d\n", maior(a,b));

    return 0;
}

int soma(int x, int y){
    return x+y;
}

int subr(int X, int Y){
    return X-Y;
}

int maior(int a, int b){
    return (a>b)?a:b;
}