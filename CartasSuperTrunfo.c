#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  
  // Área para definição das variáveis para armazenar as propriedades das cidades

    int numturisticos, numturisticos2; 
    unsigned long int populacao, populacao2;
    float area, pib, area2, pib2;
    char estado, estado2;
    char cidade[30], cidade2[30];
    char codcarta[20], codcarta2[20];
    float densipop, densipop2, pibc, pibc2;
    float superpodera, superpoderb;
    int resultadoa, resultadob, resultadoc, resultadod, resultadoe, resultadof, resultadog;

  // Área para entrada de dados
  
    printf("Código da sua carta: ");
    scanf("%s", codcarta);

    printf("Digite o nome da Cidade: ");
    scanf("%s", cidade);

    printf("Digite o Estado: ");
    scanf(" %c", &estado);

    printf("Populacao: ");
    scanf("%d", &populacao);

    printf("Numero de pontos turísticos: ");
    scanf("%d", &numturisticos);

    printf("Area: ");
    scanf("%f", &area);

    printf("PIB: ");
    scanf("%f", &pib);

    printf("Próxima Carta... \n");

    printf("Código da sua carta: ");
    scanf("%s", codcarta2);

    printf("Digite o nome da Cidade: ");
    scanf("%s", cidade2);

    printf("Digite o Estado: ");
    scanf(" %c", &estado2);

    printf("Populacao: ");
    scanf("%d", &populacao2);

    printf("Numero de pontos turísticos: ");
    scanf("%d", &numturisticos2);

    printf("Area: ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    densipop = populacao / area;
    densipop2 = populacao2 / area2;

    pibc = pib / populacao;
    pibc2 = pib2 / populacao2;

    superpodera = (float) pib + populacao + area + pibc + numturisticos + (area / populacao); 
    superpoderb = (float) pib2 + populacao2 + area2 + pibc2 + numturisticos2 + (area2 / populacao2);

  // Área para exibição dos dados da cidade
  
   printf("Carta 1 \n");
    printf("Estado: %c \n", estado);
    printf("Codigo: %c%s \n", estado, codcarta);
    printf("Nome da cidade: %s \n", cidade);
    printf("Área: %f e Pib %f \n", area, pib);
    printf("Possui populacao: %d \n", populacao);
    printf("Densidade Populacional: %.2f \n", densipop);
    printf("Pib per capita: %.2f \n", pibc);
    printf("Superpoder total: %.2f \n", superpodera);
    printf("E Possui: %d pontos turísticos \n", numturisticos);

    printf("Carta 2 \n");
    printf("Estado: %c \n", estado2);
    printf("Codigo: %c%s \n", estado2, codcarta2);
    printf("Nome da cidade: %s \n", cidade2);
    printf("Área: %f e Pib %f \n", area2, pib2);
    printf("Possui populacao: %d \n", populacao2);
    printf("Densidade Populacional: %.2f \n", densipop2);
    printf("Pib per capita: %.2f \n", pibc2);
    printf("Superpoder total: %.2f \n", superpoderb);
    printf("E Possui: %d pontos turísticos \n", numturisticos2);

    resultadoa = populacao > populacao2;
    resultadob = area > area2;
    resultadoc = pibc > pibc2;
    resultadod = numturisticos > numturisticos2;
    resultadoe = pib > pib2;
    resultadof = (float) (area / populacao) < (area2 / populacao2);
    resultadog = superpodera > superpoderb;

    printf("**COMPARACAO CARTAS**\n");

    printf("Em Populacao Carta %d venceu (%d)\n", 2- resultadoa, resultadoa);

    printf("Em Area Carta %d venceu (%d) \n", 2- resultadob, resultadob);

    printf("Em PIB per capita Carta %d venceu (%d) \n", 2- resultadoc , resultadoc);

    printf("Em Pontos Turisticos Carta %d venceu (%d) \n", 2- resultadod, resultadod);

    printf("Em PIB Carta %d venceu (%d) \n", 2- resultadoe, resultadoe);

    printf("Em Densidade populacional Carta %d venceu (%d) \n", 2- resultadof, resultadof);

    printf("Em Superpoder Carta %d venceu (%d) \n", 2- resultadog, resultadog);



    return 0;







}
