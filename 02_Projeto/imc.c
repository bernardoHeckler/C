#include <stdio.h>

int main(){
    float peso, altura, imc;

    printf("Digite o peso: ");
    scanf("%f", &peso);

    printf("Digite a altura: ");
    scanf("%f", &altura);

    imc = peso / (altura * altura);
    
    printf("resultado: %2.2f\n", imc);

    if (imc < 18.5){
        printf("Classificação menor do que 18,5 -- Magreza");
    } else if (imc < 25.0){
        printf("Classificação 18,5 a 24,9 -- Peso Normal");
    } else if (imc < 30.0){
        printf("Classificação 25 a 29,9 -- Excesso de peso");
    } else if (imc < 35.0){
        printf("Classificação 30,0 a 34,9 -- Obesidade Classe I");
    } else if (imc < 40.0){
        printf("Classificação 35,0 a 39,9 -- Obesidade Classe II");
    } else {
        printf("Classificação maior que 40,0 -- Obesidade Classe III");
    }
return 0;
}