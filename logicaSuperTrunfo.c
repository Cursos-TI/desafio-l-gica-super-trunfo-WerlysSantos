#include <stdio.h>

int main() {
    char estado1[12], estado2[12], cidade1[22], cidade2[22];

    int pontosTuristicos1, pontosTuristicos2;
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

    densidadePopulacional2 = populacao2 / area2;
    pibPerCapita2 = pib2 / populacao2;


    superPoder2 = populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 + (1 / densidadePopulacional2);

    //apresentação da segunda carta, igualmente a primeira
    printf("Carta 2:\n Estado: %s\n Código: A02\n Nome da Cidade: %s\n População: %d\n Área: %f km²\n PIB: %f\n Número de Pontos Turisticos: %d", estado2, cidade2, populacao2, area2, pib2, pontosTuristicos2);
    printf("\nDensidade Populacional: %.2f hab/km²\n PIB per Capita: %.2f reais\n Super poder: %f\n", densidadePopulacional2, pibPerCapita2, superPoder2);
    
    printf("****Comparação de cartas:****");
    printf("\nResultado 1 (Carta 1 venceu) - Resultado 0 (Carta 2 venceu)");
    printf("\nPopulação: %d", populacao1 > populacao2);
    printf("\n Área: %f", area1 > area2);
    printf("\n PIB: %f", pib1 > pib2);
    printf("\n Pontos turísticos: %d", pontosTuristicos1 > pontosTuristicos2);
    printf("\n Densidade populacional: %f", densidadePopulacional1 > densidadePopulacional2);
    printf("\n PIB per capta: %f", pibPerCapita1 > pibPerCapita2);
    printf("\n Super poder: %f", superPoder1 < superPoder2); 

    printf("\n***Comparação condicional:***");
    if (populacao1 > populacao2) {
        printf("\nA carta 1 tem maior população e venceu!");
    } else {
        printf("\nA carta 2 tem maior população e venceu!");
    };

    return 0;
}
