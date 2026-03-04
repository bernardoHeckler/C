#include <stdio.h>

int main() {
    float g1, g2, media, nota_exame, media_final;

    printf("Digite a nota da G1: ");
    scanf("%f", &g1);

    printf("Digite a nota da G2: ");
    scanf("%f", &g2);

    media = (g1 + g2) / 2;

    printf("Media: %.2f\n", media);
    return 0;

    if (media >= 7)
    {
        printf("Aluno aprovado!\n");
    }
    else if (media >= 3 && media < 7)
    {
        printf("Aluno em exame!\n");
        printf("Digite a nota do exame: ");
        scanf("%f", &nota_exame);
        media_final = (nota_exame + media) / 2;

        printf("Média Final: %.2f\n", media_final);

        if (media_final >= 5)
        {
            printf("Aluno aprovado no exame!\n");
        }
        else
        {
            printf("Aluno reprovado no exame!\n");
        }
    }
    else
    {
        printf("Aluno reprovado direto(média menor que 3)!\n");
    }
    return 0;
}