#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  
  //CARTA 1:
  char letra_estado1;
  char codigo_de_carta1[4];
  char nome_da_cidade1[30];
  int populacao1;
  float area1;
  float pib1;
  int pontos_turisticos1;

  //CARTA 2:
  char letra_estado2;
  char codigo_de_carta2[4];
  char nome_da_cidade2[30];
  int populacao2;
  float area2;
  float pib2;
  int pontos_turisticos2;


  // Área para entrada de dados

  //CARTA 1:

  printf("CARTA 1:\n\n");

  printf("Digite a letra do estado de 'A' a 'H': ");
  scanf(" %c", &letra_estado1);

  printf("Digite o codigo da carta (a letra do estado seguida de um número de 01 a 04. Ex: A01.: ");
  scanf(" %3s", codigo_de_carta1);

  getchar(); // consome o Enter

  printf("Digite o nome da cidade: ");
  fgets(nome_da_cidade1, 30, stdin);
  nome_da_cidade1[strcspn(nome_da_cidade1, "\n")] = 0;

  printf("Digite o numero de habitantes da cidade: ");
  scanf("%d", &populacao1);

  printf("Digite a area da cidade em quilômetros quadrados (apenas numeros): ");
  scanf("%f", &area1);

  printf("Digite o Produto Interno Bruto da cidade em bilhões de reais: ");
  scanf("%f", &pib1);

  printf("Digite a quantidade de pontos turisticos na cidade: ");
  scanf("%d\n\n", &pontos_turisticos1);


  //CARTA 2:

  printf("CARTA 2:\n\n");

  printf("Digite a letra do estado de 'A' a 'H': ");
  scanf(" %c", &letra_estado2);

  printf("Digite o codigo da carta (a letra do estado seguida de um número de 01 a 04. Ex: A01.: ");
  scanf("%3s", codigo_de_carta2);
  

  getchar(); // consome o Enter

  printf("Digite o nome da cidade: ");
  fgets(nome_da_cidade2, 30, stdin);
  nome_da_cidade2[strcspn(nome_da_cidade2, "\n")] = 0;

  printf("Digite o numero de habitantes da cidade: ");
  scanf("%d", &populacao2);

  printf("Digite a area da cidade em quilômetros quadrados (apenas numeros): ");
  scanf("%f", &area2);

  printf("Digite o Produto Interno Bruto da cidade em bilhões de reais: ");
  scanf("%f", &pib2);

  printf("Digite a quantidade de pontos turisticos na cidade: ");
  scanf("%d\n\n", &pontos_turisticos2);


  // Área para exibição dos dados da cidade

  printf("==========SAIDA==========\n");

  //CARTA 1:

  printf("Carta 1:\n\n");

  printf("Estado: %c\n", letra_estado1);
  printf("Codigo: %s\n", codigo_de_carta1);
  printf("Nome da Cidade: %s\n", nome_da_cidade1);
  printf("População: %d\n", populacao1);
  printf("Área: %.2f km²\n", area1);
  printf("PIB: %.2f bilhões de reais\n", pib1);
  printf("Número de Pontos Turísticos: %d\n\n\n", pontos_turisticos1);

  //CARTA 2:

  printf("Carta 2:\n\n");

  printf("Estado: %c\n", letra_estado2);
  printf("Codigo: %s\n", codigo_de_carta2);
  printf("Nome da Cidade: %s\n", nome_da_cidade2);
  printf("População: %d\n", populacao2);
  printf("Área: %.2f km²\n", area2);
  printf("PIB: %.2f bilhões de reais\n", pib2);
  printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);

return 0;
} 
