#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Paises
// Tema 1 - Cadastro das cartas
// Objetivo: cadastrar duas cartas, calcular densidade populacional
// e PIB per capita, e exibir as informacoes de forma organizada.

int main() {
  // Variaveis da carta 1
  char letra_estado1;
  char codigo_de_carta1[4];
  char nome_da_cidade1[30];
  int populacao1;
  float area1;
  float pib1;
  int pontos_turisticos1;
  float densidade_populacional1;
  float pib_per_capita1;

  // Variaveis da carta 2
  char letra_estado2;
  char codigo_de_carta2[4];
  char nome_da_cidade2[30];
  int populacao2;
  float area2;
  float pib2;
  int pontos_turisticos2;
  float densidade_populacional2;
  float pib_per_capita2;

  // Entrada de dados da carta 1
  printf("CARTA 1:\n\n");

  printf("Digite a letra do estado de 'A' a 'H': ");
  scanf(" %c", &letra_estado1);

  printf("Digite o codigo da carta (ex: A01, B03): ");
  scanf(" %3s", codigo_de_carta1);

  getchar(); // Consome o Enter deixado pelo scanf anterior.

  printf("Digite o nome da cidade: ");
  fgets(nome_da_cidade1, 30, stdin);
  nome_da_cidade1[strcspn(nome_da_cidade1, "\n")] = 0;

  printf("Digite o numero de habitantes da cidade: ");
  scanf("%d", &populacao1);

  printf("Digite a area da cidade em quilometros quadrados: ");
  scanf("%f", &area1);

  printf("Digite o Produto Interno Bruto da cidade em bilhoes de reais: ");
  scanf("%f", &pib1);

  printf("Digite a quantidade de pontos turisticos na cidade: ");
  scanf("%d", &pontos_turisticos1);

  // Calculos da carta 1
  densidade_populacional1 = populacao1 / area1;
  pib_per_capita1 = (pib1 * 1000000000) / populacao1;

  // Entrada de dados da carta 2
  printf("\nCARTA 2:\n\n");

  printf("Digite a letra do estado de 'A' a 'H': ");
  scanf(" %c", &letra_estado2);

  printf("Digite o codigo da carta (ex: A01, B03): ");
  scanf(" %3s", codigo_de_carta2);

  getchar(); // Consome o Enter deixado pelo scanf anterior.

  printf("Digite o nome da cidade: ");
  fgets(nome_da_cidade2, 30, stdin);
  nome_da_cidade2[strcspn(nome_da_cidade2, "\n")] = 0;

  printf("Digite o numero de habitantes da cidade: ");
  scanf("%d", &populacao2);

  printf("Digite a area da cidade em quilometros quadrados: ");
  scanf("%f", &area2);

  printf("Digite o Produto Interno Bruto da cidade em bilhoes de reais: ");
  scanf("%f", &pib2);

  printf("Digite a quantidade de pontos turisticos na cidade: ");
  scanf("%d", &pontos_turisticos2);

  // Calculos da carta 2
  densidade_populacional2 = populacao2 / area2;
  pib_per_capita2 = (pib2 * 1000000000) / populacao2;

  // Exibicao dos dados cadastrados
  printf("\n========== SAIDA ==========\n\n");

  printf("Carta 1:\n\n");
  printf("Estado: %c\n", letra_estado1);
  printf("Codigo: %s\n", codigo_de_carta1);
  printf("Nome da Cidade: %s\n", nome_da_cidade1);
  printf("Populacao: %d\n", populacao1);
  printf("Area: %.2f km2\n", area1);
  printf("PIB: %.2f bilhoes de reais\n", pib1);
  printf("Numero de Pontos Turisticos: %d\n", pontos_turisticos1);
  printf("Densidade Populacional: %.2f hab/km2\n", densidade_populacional1);
  printf("PIB per Capita: %.2f reais\n\n", pib_per_capita1);

  printf("Carta 2:\n\n");
  printf("Estado: %c\n", letra_estado2);
  printf("Codigo: %s\n", codigo_de_carta2);
  printf("Nome da Cidade: %s\n", nome_da_cidade2);
  printf("Populacao: %d\n", populacao2);
  printf("Area: %.2f km2\n", area2);
  printf("PIB: %.2f bilhoes de reais\n", pib2);
  printf("Numero de Pontos Turisticos: %d\n", pontos_turisticos2);
  printf("Densidade Populacional: %.2f hab/km2\n", densidade_populacional2);
  printf("PIB per Capita: %.2f reais\n", pib_per_capita2);

  return 0;
}
