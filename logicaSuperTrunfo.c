#include <stdio.h>

int main(){
    // Declara as variaveis das cartas
    int escolha, atributo;
    char estado1[3], estado2[3];
    char codigocarta1[4], codigocarta2[4];
    char nomecidade1[50], nomecidade2[50];
    unsigned long int populacao1, populacao2;
    int pontosturisticos1, pontosturisticos2;
    float areacidade1, areacidade2;
    float pib1, pib2;

    // Solicita os dados ao usuario
    printf("Carta 1\n");
    printf("Digite o Estado: ");
    scanf(" %s", estado1);

    printf("Digite o Codigo da Carta: ");
    scanf(" %s", codigocarta1);

    printf("Digite o nome da cidade: ");
    scanf(" %s", nomecidade1);

    printf("Digite a populacao: ");
    scanf(" %lu", &populacao1);

    printf("Area da cidade: ");
    scanf(" %f", &areacidade1);

    printf("Pib da cidade: ");
    scanf(" %f", &pib1);

    printf("Quantidade de pontos turisticos da cidade: ");
    scanf(" %d", &pontosturisticos1);

    printf("\nCarta 2\n");
    printf("Digite o Estado: ");
    scanf(" %s", estado2);

    printf("Digite o Codigo da Carta: ");
    scanf(" %s", codigocarta2);

    printf("Digite o nome da cidade: ");
    scanf(" %s", nomecidade2);

    printf("Digite a populacao: ");
    scanf(" %lu", &populacao2);

    printf("Area da cidade: ");
    scanf(" %f", &areacidade2);

    printf("Pib da cidade: ");
    scanf(" %f", &pib2);

    printf("Quantidade de pontos turisticos da cidade: ");
    scanf(" %d", &pontosturisticos2);

    // Define o calculo das seguintes variaveis
    float densidadepop1 = populacao1 / areacidade1;
    float densidadepop2 = populacao2 / areacidade2;

    float pibpercap1 = (pib1 * 1000000000) / populacao1;
    float pibpercap2 = (pib2 * 1000000000) / populacao2;
                                                        
    float superpoder1 = populacao1 + areacidade1 + pib1 + pontosturisticos1 + pibpercap1 + ((float)1 / densidadepop1) ;
    float superpoder2 = populacao2 + areacidade2 + pib2 + pontosturisticos2 + pibpercap2 + ((float)1 / densidadepop2) ;

    // Menu principal do jogo
    printf("\n### Escolha uma Opcao ###\n");
    printf("1.Iniciar jogo\n");
    printf("2.Regras\n");
    printf("3.Sair do jogo\n"); 
    scanf("%d", &escolha);
    
    switch(escolha) {
        // Inicia o jogo 
        // Compara os atributos escolhidos
        case 1:
            printf("### Iniciando jogo ###\n");
            printf("\n### Qual atributo deseja Comparar ###\n");
            printf("1.Comparar populacao\n");
            printf("2.Comparar area\n");
            printf("3.Comparar PIB\n");
            printf("4.Comparar pontos turísticos\n");
            printf("5.Comparar densidade populacional\n");
            printf("6.Comparar Pib per cap\n");
            printf("7.Comparar Super Poder\n"); 
            scanf("%d", &atributo);

            switch(atributo) {
                case 1:
                    printf("\nComparacao de cartas Populacao:\n");
                    printf("Carta 1 %s, %s: %lu\n", nomecidade1, estado1, populacao1);
                    printf("Carta 2 %s, %s: %lu\n", nomecidade2, estado2, populacao2);

                    if(populacao1 > populacao2) {
                        printf("Carta 1 venceu\n");
                    } else if (populacao1 < populacao2) {
                        printf("Carta 2 venceu\n");
                    } else {
                        printf("As cartas empataram\n");
                    }
                    break;

                case 2:
                    printf("\nComparacao de cartas area:\n");
                    printf("Carta 1 %s, %s: %.2f\n", nomecidade1, estado1, areacidade1);
                    printf("Carta 2 %s, %s: %.2f\n", nomecidade2, estado2, areacidade2);

                    if(areacidade1 > areacidade2) {
                        printf("Carta 1 venceu\n");
                    } else if (areacidade1 < areacidade2) {
                        printf("Carta 2 venceu\n");
                    } else {
                        printf("As cartas empataram\n");
                    }
                    break;

            
                case 3:
                    printf("\nComparacao de cartas PIB:\n");
                    printf("Carta 1 %s, %s: %.2f\n", nomecidade1, estado1, pib1);
                    printf("Carta 2 %s, %s: %.2f\n", nomecidade2, estado2, pib2);

                    if(pib1 > pib2) {
                        printf("Carta 1 venceu\n");
                    } else if (pib1 < pib2) {
                        printf("Carta 2 venceu\n");
                    } else {
                        printf("As cartas empataram\n");
                    }
                    break;

                case 4:
                    printf("\nComparacao de cartas Pontos turísticos:\n");
                    printf("Carta 1 %s, %s: %d\n", nomecidade1, estado1, pontosturisticos1);
                    printf("Carta 2 %s, %s: %d\n", nomecidade2, estado2, pontosturisticos2);

                    if(pontosturisticos1 > pontosturisticos2) {
                        printf("Carta 1 venceu\n");
                    } else if (pontosturisticos1 < pontosturisticos2) {
                        printf("Carta 2 venceu\n");
                    } else {
                        printf("As cartas empataram\n");
                    }
                    break;

                case 5:
                    printf("\nComparacao de cartas Densidade Populacional:\n");
                    printf("Carta 1 %s, %s: %.2f\n", nomecidade1, estado1, densidadepop1);
                    printf("Carta 2 %s, %s: %.2f\n", nomecidade2, estado2, densidadepop2);

                    if(densidadepop1 < densidadepop2) {
                        printf("Carta 1 venceu\n");
                    } else if (densidadepop1 > densidadepop2) {
                        printf("Carta 2 venceu\n");
                    } else {
                        printf("As cartas empataram\n");
                    }
                    break;

                case 6:
                    printf("\nComparacao de cartas Pib per cap:\n");
                    printf("Carta 1 %s, %s: %.2f\n", nomecidade1, estado1, pibpercap1);
                    printf("Carta 2 %s, %s: %.2f\n", nomecidade2, estado2, pibpercap2);

                    if(pibpercap1 > pibpercap2) {
                    printf("Carta 1 venceu\n");
                    } else if (pibpercap1 < pibpercap2) {
                    printf("Carta 2 venceu\n");
                    } else {
                    printf("As cartas empataram\n");
                    }
                    break;

                case 7:
                    printf("\nComparacao de cartas Super Poder:\n");
                    printf("Carta 1 %s, %s: %.2f\n", nomecidade1, estado1, superpoder1);
                    printf("Carta 2 %s, %s: %.2f\n", nomecidade2, estado2, superpoder2);

                    if(superpoder1 > superpoder2) {
                        printf("Carta 1 venceu\n");
                    } else if (superpoder1 < superpoder2) {
                        printf("Carta 2 venceu\n");
                    } else {
                        printf("As cartas empataram\n");
                    }
                    break;

                default:
                    printf("Opcao invalida\n");
                    break;
            }
            break;

        // Mostra as regras
        case 2:
            printf("\n### Regras ###\n");
            printf("Ganha a carta que tiver o maior atributo, valendo o contrario para a categoria de 'Densidade Populacional'");
            break;
        // Sai do jogo
        case 3:
            printf("### Saindo do jogo ###");
            break;
        // Opcao caso o jogador nao escolha nenhuma das opcoes disponiveis
        default:
            printf("Opcao invalida");
            break;
    }

    return 0;

}
