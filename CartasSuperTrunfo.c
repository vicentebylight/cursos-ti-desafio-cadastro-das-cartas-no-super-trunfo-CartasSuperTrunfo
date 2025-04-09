#include <stdio.h>

int main() {

    printf("Desafio Super Trunfo - Países\n");

// Carta 1
    printf("Carta_01\n");

    unsigned long int populacao1 = 100000;
    float area1 = 100000.0;
    float PIB1 = 150000.0;
    int pontos1 = 25 ;
    float densidade1;
    float PIBpercapita1;
    float superpoder1;

    printf("População: \n");
    scanf("%lu", &populacao1);

    printf("Área: \n");
    scanf("%f", &area1);

    printf("PIB: \n");
    scanf("%f", &PIB1);

    printf("Pontos turísticos: \n");
    scanf("%d", &pontos1);

    densidade1 = (float)populacao1 / area1;
    PIBpercapita1 = (float)PIB1 / populacao1;
    superpoder1 = (float) populacao1 + area1 + PIB1 + pontos1 + PIBpercapita1 + (1.0 / densidade1);
    

    printf("\nDados da Carta 01:\n");

    printf("População: %lu\nÁrea: %.2f\nPIB: %.2f\nPontos turísticos: %d\nDensidade Populacional: %.2f\nPIB per capita: %.2f\nSuper Poder: %.2f\n",
         populacao1, area1, PIB1, pontos1, densidade1, PIBpercapita1, superpoder1);

    // Carta 02
    printf("\nCarta_02\n");

    unsigned long int populacao2 = 200000;
    float area2 = 200000.0;
    float PIB2 = 2200000.0;
    int pontos2 = 35;
    float densidade2, PIBpercapita2, Superpoder2;


    printf("População: \n");
    scanf("%lu", &populacao2);

    printf("Área: \n");
    scanf("%f", &area2);

    printf("PIB: \n");
    scanf("%f", &PIB2);

    printf("Pontos turísticos: \n");
    scanf("%d", &pontos2);

    densidade2 = (float)populacao2 / area2;
    PIBpercapita2 = (float)PIB2 / populacao2;
    Superpoder2 = (float) populacao2 + area2 + PIB2 + pontos2 + PIBpercapita2 + (1.0 / densidade2);


    printf("\nDados da Carta 02:\n");
    printf("População: %lu\n Área: %.2f\n PIB: %.2f\nPontos turísticos: %d\nDensidade Populacional: %.2f\nPIB per capita: %.2f\nSuper Poder: %.2f\n", 
           populacao2, area2, PIB2, pontos2,densidade2, PIBpercapita2, Superpoder2);


           printf ("\nComparações das Cartas:\n");

           printf ("População: Carta 1 venceu (%d)\n", populacao1 > populacao2);
           printf ("Area: Carta 1 venceu (%d)\n", area1 > area2);
           printf ("PIB: Carta 1 venceu (%d)\n", PIB1 > PIB2);
           printf ("Pontos Turisticos: Carta 1 venceu (%d)\n", pontos1 > pontos2);
           printf ("Densidade Populacional: Carta 1 venceu (%d)\n", densidade1 < densidade2);
           printf ("PIB per capita: Carta 1 venceu (%d)\n", PIBpercapita1 > populacao2);
           printf ("Super Poder: Carta 1 venceu (%d)\n", superpoder1 > Superpoder2);


    return 0;


}