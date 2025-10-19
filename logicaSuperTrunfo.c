#include <stdio.h>

int main(){
    //Declara as variáveis
    char estado1[3], estado2[3];
    char codigocarta1[4], codigocarta2[4];
    char nomecidade1[50], nomecidade2[50];
    unsigned long int populacao1, populacao2;
    int pontosturisticos1, pontosturisticos2;
    float areacidade1, areacidade2;
    float pib1, pib2;


    //Solicita os dados ao usuário
    printf("Carta 1\n");
    printf("Digite o Estado: ");
    scanf(" %s", &estado1);

    printf("Digite o Código da Carta: ");
    scanf(" %s", codigocarta1);

    printf("Digite o nome da cidade: ");
    scanf(" %s", nomecidade1);

    printf("Digite a populaçao: ");
    scanf(" %lu", &populacao1);

    printf("Área da cidade: ");
    scanf(" %f", &areacidade1);

    printf("Pib da cidade: ");
    scanf(" %f", &pib1);

    printf("Quantidade de pontos turisticos da cidade: ");
    scanf(" %d", &pontosturisticos1);

    printf("\nCarta 2\n");
    printf("Digite o Estado: ");
    scanf(" %s", &estado2);

    printf("Digite o Código da Carta: ");
    scanf(" %s", codigocarta2);

    printf("Digite o nome da cidade: ");
    scanf(" %s", nomecidade2);

    printf("Digite a populaçao: ");
    scanf(" %lu", &populacao2);

    printf("Área da cidade: ");
    scanf(" %f", &areacidade2);

    printf("Pib da cidade: ");
    scanf(" %f", &pib2);

    printf("Quantidade de pontos turisticos da cidade: ");
    scanf(" %d", &pontosturisticos2);

    //Define o cálculo das variáveis
    float densidadepop1 = populacao1 / areacidade1;
    float densidadepop2 = populacao2 / areacidade2;

    float pibpercap1 = (pib1 * 1000000000) / populacao1;
    float pibpercap2 = (pib2 * 1000000000) / populacao2;
                                                        
    float superpoder1 = populacao1 + areacidade1 + pib1 + pontosturisticos1 + pibpercap1 + ((float)1 / densidadepop1) ;
    float superpoder2 = populacao2 + areacidade2 + pib2 + pontosturisticos2 + pibpercap2 + ((float)1 / densidadepop2) ;


    //Compara as cartas e escolhe a vencedora
    //Separado por atributos

    //Compara a populacao
    printf("\nComparacao de cartas Populacao:\n");

    printf("Carta 1 %c, %s: %lu\n", estado1, nomecidade1, populacao1);
    printf("Carta 2 %c, %s: %lu\n", estado2, nomecidade2, populacao2);

    if (populacao1 > populacao2){
        printf("Carta 1 venceu!\n");
    } else if(populacao1 < populacao2){
        printf("Carta 2 venceu!\n");
    } else {
        printf("As Cartas empataram!\n");
    }

    //Compara o atributo área
    printf("\nComparacao de cartas área:\n");

    printf("Carta 1 %c, %s: %.2f\n", estado1, nomecidade1, areacidade1);
    printf("Carta 2 %c, %s: %.2f\n", estado2, nomecidade2, areacidade2);

    if (areacidade1 > areacidade2){
        printf("Carta 1 venceu!\n");
    } else if(areacidade1 < areacidade2){
        printf("Carta 2 venceu!\n");
    } else {
        printf("As Cartas empataram!\n");
    }

    //Compara o atributo PIB
    printf("\nComparacao de cartas PIB:\n");

    printf("Carta 1 %c, %s: %.2f\n", estado1, nomecidade1, pib1);
    printf("Carta 2 %c, %s: %.2f\n", estado2, nomecidade2, pib2);

    if (pib1 > pib2){
        printf("Carta 1 venceu!\n");
    } else if(pib1 < pib2){
        printf("Carta 2 venceu!\n");
    } else {
        printf("As Cartas empataram!\n");
    }

    //Compara o atributo pontos turísticos
    printf("\nComparacao de cartas Pontos turísticos:\n");

    printf("Carta 1 %c, %s: %d\n", estado1, nomecidade1, pontosturisticos1);
    printf("Carta 2 %c, %s: %d\n", estado2, nomecidade2, pontosturisticos2);

    if (pontosturisticos1 > pontosturisticos2){
        printf("Carta 1 venceu!\n");
    } else if(pontosturisticos1 < pontosturisticos2){
        printf("Carta 2 venceu!\n");
    } else {
        printf("As Cartas empataram!\n");
    }

    //Compara atributo densidade populacional
    printf("\nComparacao de cartas Densidade Populacional:\n");

    printf("Carta 1 %c, %s: %.2f\n", estado1, nomecidade1, densidadepop1);
    printf("Carta 2 %c, %s: %.2f\n", estado2, nomecidade2, densidadepop2);

    
    if (densidadepop1 < densidadepop2){
        printf("Carta 1 venceu!\n");
    } else if(densidadepop1 > densidadepop2){
        printf("Carta 2 venceu!\n");
    } else {
        printf("As Cartas empataram!\n");
    }

    //Compara o atributo PIB per capita
    printf("\nComparacao de cartas Pib per cap:\n");

    printf("Carta 1 %c, %s: %.2f\n", estado1, nomecidade1, pibpercap1);
    printf("Carta 2 %c, %s: %.2f\n", estado2, nomecidade2, pibpercap2);

    if (pibpercap1 > pibpercap2){
        printf("Carta 1 venceu!\n");
    } else if(pibpercap1 < pibpercap2){
        printf("Carta 2 venceu!\n");
    } else {
        printf("As Cartas empataram!\n");
    }

    //Compara o atributo Super Poder
    printf("\nComparacao de cartas Super Poder:\n");

    printf("Carta 1 %c, %s: %.2f\n", estado1, nomecidade1, superpoder1);
    printf("Carta 2 %c, %s: %.2f\n", estado2, nomecidade2, superpoder2);
    
    if (superpoder1 > superpoder2){
        printf("Carta 1 venceu!\n");
    } else if(superpoder1 < superpoder2){
        printf("Carta 2 venceu!\n");
    } else {
        printf("As Cartas empataram!\n");
    }

    return 0;

}