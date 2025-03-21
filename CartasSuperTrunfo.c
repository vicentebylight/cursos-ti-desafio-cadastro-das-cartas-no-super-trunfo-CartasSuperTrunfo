#include <stdio.h>

int main() {
    printf("Desafio Super Trunfo - Países\n");

    // Carta 01
    printf("\nCarta_01\n");

    int populacao1 = 100000;
    float area1 = 100000.0;
    float PIB1 = 150000.0;
    int pontos1 = 25 ;
    float densidade1;
    float PIBpercapita1;

    printf("População: ", populacao1);
    scanf("%d", &populacao1);

    printf("Área: ", area1);
    scanf("%f", &area1);

    printf("PIB: ", PIB1);
    scanf("%f", &PIB1);

    printf("Pontos turísticos: ", pontos1);
    scanf("%d", &pontos1);

    densidade1 = populacao1 / area1;
    PIBpercapita1 = PIB1 / populacao1;


    printf("\nDados da Carta 01:\n");

    printf("População: %d\nÁrea: %.2f\nPIB: %.2f\nPontos turísticos: %d\n Densidade Populacional: %.2f\n PIB per capita: %.2f\n",
         populacao1, area1, PIB1, pontos1, densidade1, PIBpercapita1);

    // Carta 02
    printf("\nCarta_02\n");

    int populacao2 = 200000;
    float area2 = 200000.0;
    float PIB2 = 2200000.0;
    int pontos2 = 35;
    float densidade2;
    float PIBpercapita2;

    printf("População: ", populacao2);
    scanf("%d", &populacao2);

    printf("Área: ", area2);
    scanf("%f", &area2);

    printf("PIB: ", PIB2);
    scanf("%f", &PIB2);

    printf("Pontos turísticos: ", pontos2);
    scanf("%d", &pontos2);

    densidade2 = populacao2 / area2;
    PIBpercapita2 = PIB2 / populacao2;

    printf("\nDados da Carta 02:\n");
    printf("População: %d\n Área: %.2f\n PIB: %.2f\n Pontos turísticos: %d\n Densidade Populacional: %.2f\n PIB per capita: %.2f\n", 
           populacao2, area2, PIB2, pontos2,densidade2, PIBpercapita2);

    return 0;
}