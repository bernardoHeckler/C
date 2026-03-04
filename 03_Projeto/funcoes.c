#include <stdio.h>
int soma (int a, int b){
    return a + b;
}

int main(){
    int num1, num2, resultado;
    printf("Digite dois numeros: ");
    scanf("%d %d", &num1, &num2);
    resultado = soma(num1, num2);
    printf("a soma deu: %d", resultado);
    return 0;

}