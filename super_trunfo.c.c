#include <stdio.h>

int main() {
    // Declaração das variáveis para armazenar os dados das cartas
    char cidade1[50], cidade2[50];  // Nome da cidade
    char estado1[50], estado2[50];  // Nome do estado
    char codigo1[3], codigo2[3];    // Código da carta (ex: "A1", "B2")
    float populacao1, populacao2;   // População da cidade
    float area1, area2;             // Área em km² da cidade
    float pib1, pib2;               // PIB da cidade
    int pontos_turisticos1, pontos_turisticos2;  // Número de pontos turísticos

    // Entrada de dados para a primeira carta
    printf("Digite o nome da cidade da primeira carta: ");
    scanf(" %[^\n]", cidade1);  // Lê a cidade com espaços

    printf("Digite o nome do estado da primeira carta: ");
    scanf(" %[^\n]", estado1);  // Lê o estado com espaços

    printf("Digite o código da primeira carta: ");
    scanf("%s", codigo1);  // Lê o código da carta

    printf("Digite a população da primeira carta: ");
    scanf("%f", &populacao1);  // Lê a população

    printf("Digite a área da primeira carta: ");
    scanf("%f", &area1);  // Lê a área da cidade em km²

    printf("Digite o PIB da primeira carta: ");
    scanf("%f", &pib1);  // Lê o PIB da cidade

    printf("Digite os pontos turísticos da primeira carta: ");
    scanf("%d", &pontos_turisticos1);  // Lê a quantidade de pontos turísticos

    // Linha em branco para separar as cartas
    printf("\n");

    // Entrada de dados para a segunda carta
    printf("Digite o nome da cidade da segunda carta: ");
    scanf(" %[^\n]", cidade2);  // Lê a cidade com espaços

    printf("Digite o nome do estado da segunda carta: ");
    scanf(" %[^\n]", estado2);  // Lê o estado com espaços

    printf("Digite o código da segunda carta: ");
    scanf("%s", codigo2);  // Lê o código da carta

    printf("Digite a população da segunda carta: ");
    scanf("%f", &populacao2);  // Lê a população

    printf("Digite a área da segunda carta: ");
    scanf("%f", &area2);  // Lê a área da cidade em km²

    printf("Digite o PIB da segunda carta: ");
    scanf("%f", &pib2);  // Lê o PIB da cidade

    printf("Digite os pontos turísticos da segunda carta: ");
    scanf("%d", &pontos_turisticos2);  // Lê a quantidade de pontos turísticos

    // Exibindo os dados da primeira carta
    printf("\n--- Carta 1 ---\n");
    printf("Cidade: %s\n", cidade1);
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("População: %.2f\n", populacao1);
    printf("Área: %.2f km²\n", area1);  // Adicionando "km²" na saída da área
    printf("PIB: %.2f\n", pib1);
    printf("Pontos turísticos: %d\n", pontos_turisticos1);

    // Exibindo os dados da segunda carta
    printf("\n--- Carta 2 ---\n");
    printf("Cidade: %s\n", cidade2);
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("População: %.2f\n", populacao2);
    printf("Área: %.2f km²\n", area2);  // Adicionando "km²" na saída da área
    printf("PIB: %.2f\n", pib2);
    printf("Pontos turísticos: %d\n", pontos_turisticos2);

    return 0;