#include <stdio.h>

#define PI 3.1416

int main() {

    float raio;

    printf("Digite o valor do raio do circulo:\n");
    scanf("%f", &raio);

    if (raio > 0.0){
        float area = PI * (raio*raio);
        printf("Area do circulo: %.2f\n", area);
    }
return 0;
}
