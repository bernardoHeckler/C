#include <stdio.h>

int main(){

    int voto;
    int cand1 = 0, cand2 = 0, brancos = 0;
    
    printf("### Urna Eletronica ###\n");
    printf("1 - Candidato A\n");
    printf("2 - Candidato B\n");
    printf("3 - Voto Branco\n");
    printf("Digite -1 para encerrar e ver o resultado\n");


    while(voto != -1){

        printf("Digite o número do candidato (1, 2 ou 3) ou -1 para encerrar: ");
        scanf("%d", &voto);

        switch(voto){
            case 1:
                cand1++;
                printf("Voto contabilizado para o Candidato A\n");
                break;
            case 2:
                cand2++;
                printf("Voto contabilizado para o Candidato B\n");
                break;
            case 3:
                brancos++;
                printf("Voto contabilizado como Branco\n");
                break;
            default:
                printf("Opção inválida!\n");
        }
    }

    printf("--- Resultado ---\n");
    printf("Candidato A: %d votos\n", cand1);
    printf("Candidato B: %d votos\n", cand2);
    printf("Votos Brancos: %d votos\n", brancos);
return 0;
}