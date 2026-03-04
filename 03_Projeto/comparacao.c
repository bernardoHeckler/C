#include <stdio.h>

int compara(int a, int b){
    if(a > b){
        return b;
    } else{
        return a;
    }
}

int main(){
    int num1, num2;
    printf("Digite dois numeros: ");
    scanf("%d %d", &num1, &num2);
    int resultado = compara(num1, num2);
    printf("Menor número é %d!", resultado);
    return 0;
}