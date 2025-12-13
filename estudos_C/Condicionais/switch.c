#include <stdio.h>

int main(){
    char a;
    scanf("%c", &a);

    switch(a){
        case 'A':
            printf("Aprovado, Excelente.\n");
            break;
        case 'B':
            printf("Aprovado, Bom.\n");
            break;
        case 'C':
            printf("Aprovado, Regular.\n");
            break;
        default:
            printf("Reprovado.\n");
            break;
    }
}