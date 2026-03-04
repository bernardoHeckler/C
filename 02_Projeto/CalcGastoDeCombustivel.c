// regra de calculo de gasto de combustivel

#include <stdio.h>
int main(){
    float preco_litro = 5.80;
    int distancia, consumo;
    
    printf("Distância (Km):");
    scanf("%d", &distancia);
    
    printf("Consumo(Litros):");
    scanf("%d", &consumo);

    float custo_total = (distancia / consumo) * preco_litro;

    printf("Custo total: %.2f", custo_total);

    float custo_por_km = preco_litro / consumo;

    printf("Custo por km: %.2f", custo_por_km);


    return 0;
}