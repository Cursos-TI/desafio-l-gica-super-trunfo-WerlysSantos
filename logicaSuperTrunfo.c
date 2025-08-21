#include <stdio.h>

int main() {
    //Declaração das variáveis para receber os dados das cartas
    char estado1[12], estado2[12], cidade1[22], cidade2[22];

    int pontosTuristicos1, pontosTuristicos2, primeiraCarta1, primeiraCarta2, segundaCarta1, segundaCarta2, ataqueCarta1, ataqueCarta2;
    int populacao1, populacao2;
    float area1, area2, pib1, pib2, densidadePopulacional1, pibPerCapita1, densidadePopulacional2, pibPerCapita2, superPoder1, superPoder2;

    //fiz o questionário com printf e o sancf para receber os dados nas variáveis anteriormente declaradas
    printf("Digite o estado da primeira carta: \n");
    scanf("%10s", estado1);
    printf("Digite a cidade: \n");
    scanf("%20s", cidade1);
    printf("Digite a população: \n");
    scanf("%d", &populacao1);
    printf("Digite a área: \n");
    scanf("%f", &area1);
    printf("Digite o PIB: \n");
    scanf("%f", &pib1);
    printf("Digite a quatidade de pontos turísticos: \n");
    scanf("%d", &pontosTuristicos1);

    //fiz o cálculo da densidade populacional e pib percapita, anteriormente declarados, convertendo os valores para float
    densidadePopulacional1 = populacao1 / area1;
    pibPerCapita1 = pib1 / populacao1;

    superPoder1 = populacao1 + area1 + pib1 + pontosTuristicos1 + pibPerCapita1 + (1 / densidadePopulacional1);

    //fiz o prinf que mostra a carta por completo, com os dados que foram digitados pelo usuário
    printf("Carta 1:\n Estado: %s\n Código: A01\n Nome da Cidade: %s\n População: %d\n Área: %f km²\n PIB: %f\n Número de Pontos Turisticos: %d", estado1, cidade1, populacao1, area1, pib1, pontosTuristicos1);
    printf("\nDensidade Populacional: %.2f hab/km²\n PIB per Capita: %.2f reais\n Super poder: %f\n", densidadePopulacional1, pibPerCapita1, superPoder1);

    //é inciado após apresentação da primeira carta, o questionário da segunda, da mesma forma anterior
    printf("\nDigite o estado da segunda carta: \n");
    scanf("%10s", estado2);
    printf("Digite a cidade: \n");
    scanf("%20s", cidade2);
    printf("Digite a população: \n");
    scanf("%d", &populacao2);
    printf("Digite a área: \n");
    scanf("%f", &area2);
    printf("Digite o PIB: \n");
    scanf("%f", &pib2);
    printf("Digite a quatidade de pontos turísticos: \n");
    scanf("%d", &pontosTuristicos2);

    //Cálculo de densidade populacional e pib per capita para segunda carta
    densidadePopulacional2 = populacao2 / area2;
    pibPerCapita2 = pib2 / populacao2;


    superPoder2 = populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 + (1 / densidadePopulacional2);

    //apresentação da segunda carta, igualmente a primeira
    printf("Carta 2:\n Estado: %s\n Código: A02\n Nome da Cidade: %s\n População: %d\n Área: %f km²\n PIB: %f\n Número de Pontos Turisticos: %d", estado2, cidade2, populacao2, area2, pib2, pontosTuristicos2);
    printf("\nDensidade Populacional: %.2f hab/km²\n PIB per Capita: %.2f reais\n Super poder: %f\n", densidadePopulacional2, pibPerCapita2, superPoder2);
    
    //Menú interativo de comparação de 2 atributos das cartas com decisão aninhada
    printf("\n****Comparação de cartas - Selecione um atributo para carta (1))****");
    printf("\nOpção 1 - População");
    printf("\nOpção 2 - Àrea");
    printf("\nOpção 3 - PIB");
    printf("\nOpção 4 - Pontos Turísticos");
    printf("\nDigite a opção desejada: ");
    scanf("%d", &primeiraCarta1);

    printf("\n****Comparação de cartas - Selecione outro atributo para carta (1))****");
    printf("\nOpção 1 - População");
    printf("\nOpção 2 - Àrea");
    printf("\nOpção 3 - PIB");
    printf("\nOpção 4 - Pontos Turísticos");
    printf("\nDigite a opção desejada: ");
    scanf("%d", &primeiraCarta2);

    if (primeiraCarta1 == 1 && primeiraCarta2 == 2){
        ataqueCarta1 = populacao1 + area1;
    } else if (primeiraCarta1 == 1 && primeiraCarta2 == 3){
        ataqueCarta1 = populacao1 + pib1;
    } else if (primeiraCarta1 == 1 && primeiraCarta2 == 4){
        ataqueCarta1 = populacao1 + pontosTuristicos1;
    } else if (primeiraCarta1 == 2 && primeiraCarta2 == 1){
        ataqueCarta1 = area1 + populacao1;
    } else if (primeiraCarta1 == 2 && primeiraCarta2 == 3){
        ataqueCarta1 = area1 + pib1;
    } else if (primeiraCarta1 == 2 && primeiraCarta2 == 4){
        ataqueCarta1 = area1 + pontosTuristicos1;
    } else if (primeiraCarta1 == 3 && primeiraCarta2 == 1){
        ataqueCarta1 = pib1 + populacao1;
    } else if (primeiraCarta1 == 3 && primeiraCarta2 == 2){
        ataqueCarta1 = pib1 + area1;
    } else if (primeiraCarta1 == 3 && primeiraCarta2 == 4){
        ataqueCarta1 = pib1 + pontosTuristicos1;
    } else if (primeiraCarta1 == 4 && primeiraCarta2 == 1){
        ataqueCarta1 = pontosTuristicos1 + populacao1;
    } else if (primeiraCarta1 == 4 && primeiraCarta2 == 2){
        ataqueCarta1 = pontosTuristicos1 + area1;
    } else if (primeiraCarta1 == 4 && primeiraCarta2 == 3){
        ataqueCarta1 = pontosTuristicos1 + pib1;
    } else {
        printf("\nValor inválido ou foram escolhidas opções iguais, tente novamente!");
    }


    printf("\n****Comparação de cartas - Selecione um atributo para carta (2))****");
    printf("\nOpção 1 - População");
    printf("\nOpção 2 - Àrea");
    printf("\nOpção 3 - PIB");
    printf("\nOpção 4 - Pontos Turísticos");
    printf("\nDigite a opção desejada: ");
    scanf("%d", &segundaCarta1);

    printf("\n****Comparação de cartas - Selecione outro atributo para carta (2))****");
    printf("\nOpção 1 - População");
    printf("\nOpção 2 - Àrea");
    printf("\nOpção 3 - PIB");
    printf("\nOpção 4 - Pontos Turísticos");
    printf("\nDigite a opção desejada: ");
    scanf("%d", &segundaCarta2);

    if (segundaCarta1 == 1 && segundaCarta2 == 2){
        ataqueCarta2 = populacao2 + area2;
    } else if (segundaCarta1 == 1 && segundaCarta2 == 3){
        ataqueCarta2 = populacao2 + pib2;
    } else if (segundaCarta1 == 1 && segundaCarta2 == 4){
        ataqueCarta2 = populacao2 + pontosTuristicos2;
    } else if (segundaCarta1 == 2 && segundaCarta2 == 1){
        ataqueCarta2 = area2 + populacao2;
    } else if (segundaCarta1 == 2 && segundaCarta2 == 3){
        ataqueCarta2 = area2 + pib2;
    } else if (segundaCarta1 == 2 && segundaCarta2 == 4){
        ataqueCarta2 = area2 + pontosTuristicos2;
    } else if (segundaCarta1 == 3 && segundaCarta2 == 1){
        ataqueCarta2 = pib2 + populacao2;
    } else if (segundaCarta1 == 3 && segundaCarta2 == 2){
        ataqueCarta2 = pib2 + area2;
    } else if (segundaCarta1 == 3 && segundaCarta2 == 4){
        ataqueCarta2 = pib2 + pontosTuristicos2;
    } else if (segundaCarta1 == 4 && segundaCarta2 == 1){
        ataqueCarta2 = pontosTuristicos2 + populacao2;
    } else if (segundaCarta1 == 4 && segundaCarta2 == 2){
        ataqueCarta2 = pontosTuristicos2 + area2;
    } else if (segundaCarta1 == 4 && segundaCarta2 == 3){
        ataqueCarta2 = pontosTuristicos2 + pib2;
    } else {
        printf("\nValor inválido ou foram escolhidas opções iguais, tente novamente!");
    }


    if (ataqueCarta1 > ataqueCarta2) {
        ataqueCarta1 = 1;
        ataqueCarta2 = 0;
    } else if (ataqueCarta1 < ataqueCarta2) {
        ataqueCarta1 = 0;
        ataqueCarta2 = 1;
    } else {
        printf("\nEmpate!");
    }


    switch (ataqueCarta1 || ataqueCarta2){
        case 1:
            if (ataqueCarta1 == 1 && ataqueCarta2 == 0){
                printf("\nA carta 1 venceu!");
            } else if (ataqueCarta1 == 0 && ataqueCarta2 == 1)
            {
                printf("\nA carta 2 venceu!");
            }
            break;
        default:
        printf("\nFim do jogo!");

    }

    return 0;
}
