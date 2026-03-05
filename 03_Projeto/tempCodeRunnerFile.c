#include <stdio.h>

int main() {
    char operacao;
    float num1, num2, resultado;
    
    printf("CALCULADORA COM SWITCH CASE\n");
    printf("Digite o símbolo da operação desejada (+, -, *, /): ");

    scanf("%c", &operacao);
    
    printf("Digite o primeiro número: ");
    scanf("%f", &num1);
    
    printf("Digite o segundo número: ");
    scanf("%f", &num2);
    
    switch(operacao) {
        case '+':
            resultado = num1 + num2;
            printf("\n--- Resultado ---\n");
            printf("%.2f + %.2f = %.2f\n", num1, num2, resultado);
            break;
            
        case '-':
            resultado = num1 - num2;
            printf("\n--- Resultado ---\n");
            printf("%.2f - %.2f = %.2f\n", num1, num2, resultado);
            break;
            
        case '*':
            resultado = num1 * num2;
            printf("\n--- Resultado ---\n");
            printf("%.2f * %.2f = %.2f\n", num1, num2, resultado);
            break;
            
        case '/':
    
            if(num2 != 0) {
                resultado = num1 / num2;
                printf("\n--- Resultado ---\n");
                printf("%.2f / %.2f = %.2f\n", num1, num2, resultado);
            } else {
                printf("Impossível dividir por zero!\n");
            }
            break;
            
        default:
            printf("Erro no valor digitado. Digite um número entre 1 e 4.\n");
    }
    
    return 0;
}



