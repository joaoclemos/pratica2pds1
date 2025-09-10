#include <stdio.h>
#include <math.h>

float cauchy(float x){
    float resultado;
    resultado = 1.0/(M_PI*(1.0+x*x));
    return resultado;
}

int main() {
    float x;
    float valor;
    scanf("%f", &x);
    valor = cauchy(x);

    printf("%.2f\n", valor);

    return 0;
}