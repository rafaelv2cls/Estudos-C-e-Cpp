#include <stdio.h>

void fibonacci(int a, int b, int x);

int main(){
    int x = 0, y = 1, i;

    scanf("%d", &i);
    fibonacci(x,y,i);
    
    return 0;
}

void fibonacci(int a, int b, int x){
    if (x==0)
        return;

    printf("%d\t", a);
    fibonacci(b, a+b, x-1);
}