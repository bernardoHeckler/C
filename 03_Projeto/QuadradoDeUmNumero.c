#include <stdio.h>

float raiz(int x) {
    float raiz = x * x;
    return raiz;
}

int main(){
    float num1;
    printf("Digite um numero: ");
    scanf("%f", &num1);
    float resultado = raiz(num1);
    printf("Raiz quadrada de %.2f é %.2f!", num1, resultado);
    return 0;
}
