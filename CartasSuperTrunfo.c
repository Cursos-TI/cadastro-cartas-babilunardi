#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  
  // Área para definição das variáveis para armazenar as propriedades das cidades

    int populacao, numturisticos, populacao2, numturisticos2; 
    float area, pib, area2, pib2;
    char estado, estado2;
    char cidade[30], cidade2[30];
    char codcarta[20], codcarta2[20];

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

  // Área para exibição dos dados da cidade
  
    printf("Carta 1: \n");
    printf("Estado: %c \n", estado);
    printf("Codigo: %c%s \n", estado, codcarta);
    printf("Nome da cidade: %s \n", cidade);
    printf("Área: %f e Pib %f \n", area, pib);
    printf("Possui populacao: %d \n", populacao);
    printf("E Possui: %d pontos turísticos \n", numturisticos);

    printf("Carta 2: \n");
    printf("Estado: %c \n", estado2);
    printf("Codigo: %c%s \n", estado2, codcarta2);
    printf("Nome da cidade: %s \n", cidade2);
    printf("Área: %f e Pib %f \n", area2, pib2);
    printf("Possui populacao: %d \n", populacao2);
    printf("E Possui: %d pontos turísticos \n", numturisticos2);

  
return 0;
} 
