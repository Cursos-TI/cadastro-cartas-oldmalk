#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
    // Área para definição das variáveis para armazenar as propriedades das cidades
    char estado1[2], estado2[2];
    char codigoCarta1[4], codigoCarta2[4];
    char nomeCidade1[50], nomeCidade2[50];
    int populacao1, populacao2;
    float areaKm1, areaKm2;
    float pib1, pib2;
    int quantidadePontosTuristicos1, quantidadePontosTuristicos2;

    // Área para entrada de dados

    // Cadastro da primeira carta
    printf("Cadastre a Carta 1:\n");
    printf("Informe o Estado: ");
    scanf("%s", &estado1);

    printf("Informe o Código: ");
    scanf("%s", &codigoCarta1);

    printf("Informe o Nome da Cidade: ");
    scanf("%s", &nomeCidade1);

    printf("Informe a População: ");
    scanf("%d", &populacao1);

    printf("Informe a Área: ");
    scanf("%f", &areaKm1);

    printf("Informe o PIB: ");
    scanf("%f", &pib1);

    printf("Informe o Número de Pontos Turísticos: ");
    scanf("%d", &quantidadePontosTuristicos1);

    // Cadastro da segunda carta
    printf("\nCadastre a Carta 2:\n");
    printf("Informe o Estado: ");
    scanf("%s", &estado2);

    printf("Informe o Código: ");
    scanf("%s", &codigoCarta2);

    printf("Informe o Nome da Cidade: ");
    scanf("%s", &nomeCidade2);

    printf("Informe a População: ");
    scanf("%d", &populacao2);

    printf("Informe a Área: ");
    scanf("%f", &areaKm2);

    printf("Informe o PIB: ");
    scanf("%f", &pib2);

    printf("Informe o Número de Pontos Turísticos: ");
    scanf("%d", &quantidadePontosTuristicos2);

    // Área para exibição dos dados da cidade

    // Exibição da primeira carta
    printf("\nCarta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigoCarta1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f\n", areaKm1);
    printf("PIB: %.2f\n", pib1);
    printf("Número de Pontos Turísticos: %d", quantidadePontosTuristicos1);

    // Espaçamento entre as cartas
    printf("\n\n");

    // Exibição da segunda carta
    printf("Carta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigoCarta2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f\n", areaKm2);
    printf("PIB: %.2f\n", pib2);
    printf("Número de Pontos Turísticos: %d", quantidadePontosTuristicos2);

    return 0;
} 
