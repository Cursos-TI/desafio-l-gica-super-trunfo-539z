#include <stdio.h>

int main(){
    // Declara as variaveis das cartas
    int escolha, atributo1, atributo2, resultado1, resultado2;
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
        // Escolhe o primeiro atributo para comparar
        case 1:
            printf("### Iniciando jogo ###\n");
            printf("1.Comparar populacao\n");
            printf("2.Comparar area\n");
            printf("3.Comparar PIB\n");
            printf("4.Comparar pontos turísticos\n");
            printf("5.Comparar densidade populacional\n");
            printf("6.Comparar Pib per cap\n");
            printf("7.Comparar Super Poder\n"); 
            printf("Qual atributo deseja Comparar: ");
            scanf("%d", &atributo1);

            switch(atributo1) {
                case 1: 
                    printf("Voce escolheu a opcao populacao!\n");
                    if (populacao1 > populacao2)
                        resultado1 = 2;
                    else if (populacao1 < populacao2)
                        resultado1 = -2;
                    else 
                        resultado1 = -1;
                    break;
            
                case 2:
                    printf("Voce escolheu a opcao area!\n");
                    if (areacidade1 > areacidade2)
                        resultado1 = 2;
                    else if (areacidade1 < areacidade2)
                        resultado1 = -2;
                    else 
                        resultado1 = -1;
                    break;

                case 3:
                    printf("Voce escolheu a opcao PIB!\n");
                    if (pib1 > pib2)
                        resultado1 = 2;
                    else if (pib1 < pib2)
                        resultado1 = -2;
                    else 
                        resultado1 = -1;
                    break;

                case 4:
                    printf("Voce escolheu a opcao pontos turisticos!\n");
                    if (pontosturisticos1 > pontosturisticos2)
                        resultado1 = 2;
                    else if (pontosturisticos1 < pontosturisticos2)
                        resultado1 = -2;
                    else 
                        resultado1 = -1;
                    break;

                case 5:
                    printf("Voce escolheu a opcao densidade populacional!\n");
                    if (densidadepop1 < densidadepop2)
                        resultado1 = 2;
                    else if (densidadepop1 > densidadepop2)
                        resultado1 = -2;
                    else 
                        resultado1 = -1;
                    break;

                case 6:
                    printf("Voce escolheu a opcao PIB per cap!\n");
                    if (pibpercap1 > pibpercap2)
                        resultado1 = 2;
                    else if (pibpercap1 < pibpercap2)
                        resultado1 = -2;
                    else 
                        resultado1 = -1;
                    break;

                case 7:
                    printf("Voce escolheu a opcao Super Poder!\n");
                    if (superpoder1 > superpoder2)
                        resultado1 = 2;
                    else if (superpoder1 < superpoder2)
                        resultado1 = -2;
                    else 
                        resultado1 = -1;
                    break;
                
                default:
                    printf("Opcao invalida");
                    break;
            }

            // Escolhe o segundo atributo para comparar
            printf("1.Comparar populacao\n");
            printf("2.Comparar area\n");
            printf("3.Comparar PIB\n");
            printf("4.Comparar pontos turísticos\n");
            printf("5.Comparar densidade populacional\n");
            printf("6.Comparar Pib per cap\n");
            printf("7.Comparar Super Poder\n");
            printf("\nEscolha o segundo atributo que deseja comparar (Diferente do primeiro!): ");
            scanf("%d", &atributo2);

            if (atributo1 == atributo2) {
                printf("Voce escolheu o mesmo atributo");
            } else {
                switch (atributo2) {
                    case 1: 
                        printf("Voce escolheu a opcao populacao!\n");
                        if (populacao1 > populacao2)
                            resultado2 = 2;
                        else if (populacao1 < populacao2)
                            resultado2 = -2;
                        else 
                            resultado2 = -1;
                        break;
            
                    case 2:
                        printf("Voce escolheu a opcao area!\n");
                        if (areacidade1 > areacidade2)
                            resultado2 = 2;
                        else if (areacidade1 < areacidade2)
                            resultado2 = -2;
                        else 
                            resultado2 = -1;
                        break;

                    case 3:
                        printf("Voce escolheu a opcao PIB!\n");
                        if (pib1 > pib2)
                            resultado2 = 2;
                        else if (pib1 < pib2)
                            resultado2 = -2;
                        else 
                            resultado2 = -1;
                        break;

                    case 4:
                        printf("Voce escolheu a opcao pontos turisticos!\n");
                        if (pontosturisticos1 > pontosturisticos2)
                            resultado2 = 2;
                        else if (pontosturisticos1 < pontosturisticos2)
                            resultado2 = -2;
                        else 
                            resultado2 = -1;
                        break;

                    case 5:
                        printf("Voce escolheu a opcao densidade populacional!\n");
                        if (densidadepop1 < densidadepop2)
                            resultado2 = 2;
                        else if (densidadepop1 > densidadepop2)
                            resultado2 = -2;
                        else 
                            resultado2 = -1;
                        break;

                    case 6:
                        printf("Voce escolheu a opcao PIB per cap!\n");
                        if (pibpercap1 > pibpercap2)
                            resultado2 = 2;
                        else if (pibpercap1 < pibpercap2)
                            resultado2 = -2;
                        else 
                            resultado2 = -1;
                        break;

                    case 7:
                        printf("Voce escolheu a opcao Super Poder!\n");
                        if (superpoder1 > superpoder2)
                            resultado2 = 2;
                        else if (superpoder1 < superpoder2)
                            resultado2 = -2;
                        else 
                            resultado2 = -1;
                        break;
                
                    default:
                        printf("Opcao invalida");
                        break;
                }
            }

            // Logica para definir se ganhou, empatou ou perdeu
            // Cada vitoria de atributo = 2 pontos
            // Cada derrota de atributo = -2 pontos
            // Cada empate de atributo = -1 ponto
            // Ganhou = Vitoria, Vitoria || Vitoria, Empate 
            // Soma = 4 || Soma = 1
            // Ou seja Soma > 0
            // ################/
            // Perdeu = Derrota, Derrota || Derrota, Empate
            // Soma = -4 || Soma = -3
            // Ou seja Soma < 0 e ! de -2 pois -2 esta incluso no empate uma vez que : Empate, Empate (- 1 + (-1)) = -2
            // ################
            // Empate = Empate, Empate 
            // Soma = -2
            int soma = resultado1 + resultado2;

            if (soma > 0) {
                printf("Voce ganhou!\n");
            } else if (soma < 0 && soma != -2) {
                printf("Voce perdeu!\n");
            } else {
                printf("Voce empatou!\n");
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
