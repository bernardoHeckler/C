// regra de calculo de gasto de combustivel

#include <stdio.h>
int main(){
    float preco_litro = 6.30;
    float distancia, consumo;
    
    printf("Distância (Km):");
    scanf("%f", &distancia);
    
    printf("Consumo(Litros):");
    scanf("%f", &consumo);

    float custo_total = (distancia / consumo) * preco_litro;

    printf("Custo total: %.2f\n", custo_total);

    float custo_por_km = preco_litro / consumo;

    printf("Custo por km: %.2f", custo_por_km);


    return 0;
}