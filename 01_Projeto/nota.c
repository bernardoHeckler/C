#include <stdio.h>

int main() {
    float g1, g2, media;
    printf("Digite as notas da G1 e da G2:\n");
    scanf("%f%f", &g1, &g2);
    media = (g1+g2)/2;
    printf("sua média: %.2f", media);
    return 0;
}

