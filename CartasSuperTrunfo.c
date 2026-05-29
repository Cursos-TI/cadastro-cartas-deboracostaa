#include <stdio.h>

// Desafio Super Trunfo - Paises
// Tema 1 - Cadastro das cartas
// Objetivo: cadastrar duas cartas, calcular os atributos derivados,
// comparar os atributos numericos e exibir a carta vencedora.

int main() {
  // Variaveis da carta 1
  char letra_estado1;
  char codigo_de_carta1[4];
  char nome_da_cidade1[30];
  unsigned long int populacao1;
  float area1;
  float pib1;
  int pontos_turisticos1;
  float densidade_populacional1;
  float pib_per_capita1;
  float super_poder1;

  // Variaveis da carta 2
  char letra_estado2;
  char codigo_de_carta2[4];
  char nome_da_cidade2[30];
  unsigned long int populacao2;
  float area2;
  float pib2;
  int pontos_turisticos2;
  float densidade_populacional2;
  float pib_per_capita2;
  float super_poder2;

  // Variaveis para armazenar os resultados das comparacoes.
  int resultado_populacao;
  int resultado_area;
  int resultado_pib;
  int resultado_pontos_turisticos;
  int resultado_densidade_populacional;
  int resultado_pib_per_capita;
  int resultado_super_poder;

  // Entrada de dados da carta 1
  printf("CARTA 1:\n\n");

  printf("Digite a letra do estado de 'A' a 'H': ");
  scanf(" %c", &letra_estado1);

  printf("Digite o codigo da carta (ex: A01, B03): ");
  scanf(" %3s", codigo_de_carta1);

  printf("Digite o nome da cidade: ");
  scanf(" %29[^\n]", nome_da_cidade1);

  printf("Digite o numero de habitantes da cidade: ");
  scanf("%lu", &populacao1);

  printf("Digite a area da cidade em quilometros quadrados: ");
  scanf("%f", &area1);

  printf("Digite o Produto Interno Bruto da cidade em bilhoes de reais: ");
  scanf("%f", &pib1);

  printf("Digite a quantidade de pontos turisticos na cidade: ");
  scanf("%d", &pontos_turisticos1);

  // Calculos da carta 1
  densidade_populacional1 = (float)populacao1 / area1;
  pib_per_capita1 = (pib1 * 1000000000.0f) / (float)populacao1;
  super_poder1 = (float)populacao1 + area1 + pib1 + (float)pontos_turisticos1 +
                 pib_per_capita1 + (1.0f / densidade_populacional1);

  // Entrada de dados da carta 2
  printf("\nCARTA 2:\n\n");

  printf("Digite a letra do estado de 'A' a 'H': ");
  scanf(" %c", &letra_estado2);

  printf("Digite o codigo da carta (ex: A01, B03): ");
  scanf(" %3s", codigo_de_carta2);

  printf("Digite o nome da cidade: ");
  scanf(" %29[^\n]", nome_da_cidade2);

  printf("Digite o numero de habitantes da cidade: ");
  scanf("%lu", &populacao2);

  printf("Digite a area da cidade em quilometros quadrados: ");
  scanf("%f", &area2);

  printf("Digite o Produto Interno Bruto da cidade em bilhoes de reais: ");
  scanf("%f", &pib2);

  printf("Digite a quantidade de pontos turisticos na cidade: ");
  scanf("%d", &pontos_turisticos2);

  // Calculos da carta 2
  densidade_populacional2 = (float)populacao2 / area2;
  pib_per_capita2 = (pib2 * 1000000000.0f) / (float)populacao2;
  super_poder2 = (float)populacao2 + area2 + pib2 + (float)pontos_turisticos2 +
                 pib_per_capita2 + (1.0f / densidade_populacional2);

  // Comparacoes: 1 indica que a carta 1 venceu; 0 indica que a carta 2 venceu.
  resultado_populacao = populacao1 > populacao2;
  resultado_area = area1 > area2;
  resultado_pib = pib1 > pib2;
  resultado_pontos_turisticos = pontos_turisticos1 > pontos_turisticos2;
  resultado_densidade_populacional = densidade_populacional1 < densidade_populacional2;
  resultado_pib_per_capita = pib_per_capita1 > pib_per_capita2;
  resultado_super_poder = super_poder1 > super_poder2;

  // Exibicao dos dados cadastrados
  printf("\n========== SAIDA ==========\n\n");

  printf("Carta 1:\n\n");
  printf("Estado: %c\n", letra_estado1);
  printf("Codigo: %s\n", codigo_de_carta1);
  printf("Nome da Cidade: %s\n", nome_da_cidade1);
  printf("Populacao: %lu\n", populacao1);
  printf("Area: %.2f km2\n", area1);
  printf("PIB: %.2f bilhoes de reais\n", pib1);
  printf("Numero de Pontos Turisticos: %d\n", pontos_turisticos1);
  printf("Densidade Populacional: %.2f hab/km2\n", densidade_populacional1);
  printf("PIB per Capita: %.2f reais\n", pib_per_capita1);
  printf("Super Poder: %.2f\n\n", super_poder1);

  printf("Carta 2:\n\n");
  printf("Estado: %c\n", letra_estado2);
  printf("Codigo: %s\n", codigo_de_carta2);
  printf("Nome da Cidade: %s\n", nome_da_cidade2);
  printf("Populacao: %lu\n", populacao2);
  printf("Area: %.2f km2\n", area2);
  printf("PIB: %.2f bilhoes de reais\n", pib2);
  printf("Numero de Pontos Turisticos: %d\n", pontos_turisticos2);
  printf("Densidade Populacional: %.2f hab/km2\n", densidade_populacional2);
  printf("PIB per Capita: %.2f reais\n", pib_per_capita2);
  printf("Super Poder: %.2f\n\n", super_poder2);

  // Exibicao dos resultados das comparacoes
  printf("Comparacao de Cartas:\n\n");
  printf("Populacao: Carta %d venceu (%d)\n", 2 - resultado_populacao, resultado_populacao);
  printf("Area: Carta %d venceu (%d)\n", 2 - resultado_area, resultado_area);
  printf("PIB: Carta %d venceu (%d)\n", 2 - resultado_pib, resultado_pib);
  printf("Pontos Turisticos: Carta %d venceu (%d)\n", 2 - resultado_pontos_turisticos,
         resultado_pontos_turisticos);
  printf("Densidade Populacional: Carta %d venceu (%d)\n",
         2 - resultado_densidade_populacional, resultado_densidade_populacional);
  printf("PIB per Capita: Carta %d venceu (%d)\n", 2 - resultado_pib_per_capita,
         resultado_pib_per_capita);
  printf("Super Poder: Carta %d venceu (%d)\n", 2 - resultado_super_poder,
         resultado_super_poder);

  return 0;
}
