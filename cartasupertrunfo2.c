#include <stdio.h>

int main() {

    // --- Variáveis da primeira carta ---
    char estado1;
    char codigo_carta1[4];
    char nome_cidade1[50];
    int populacao1;
    int pontos1;
    float area_km21;
    float pib1;
    float densidade_populacional1;
    float pib_por_capita1;

    // --- Variáveis da segunda carta ---
    char estado2;
    char codigo_carta2[4];
    char nome_cidade2[50];
    int populacao2;
    int pontos2;
    float area_km22;
    float pib2;
    float densidade_populacional2;
    float pib_por_capita2;

    // ---  Cadastro da primeira carta super trunfo ---
    printf("CADASTRO DA PRIMEIRA CARTA SUPER TRUNFO \n");

    printf("Digite o estado (ex: S para São Paulo): ");
    scanf(" %c", &estado1);

    printf("Digite o código da carta (3 caracteres): ");
    scanf("%s", codigo_carta1);

    printf("Digite o nome da cidade: ");
    scanf("%s", nome_cidade1);

    printf("Digite a população: ");
    scanf("%d", &populacao1);

    printf("Digite os pontos turísticos: ");
    scanf("%d", &pontos1);

    printf("Digite a area em Km2: ");
    scanf("%f", &area_km21); 

    printf("Digite o valor do PIB: ");
    scanf("%f", &pib1); 

    //-- Calculo para a primeira carta--

    densidade_populacional1 = (float)populacao1 / area_km21;
    pib_por_capita1 = pib1 / populacao1;

    // --- Exibição para a primeira carta ---

    printf("\n--- DADOS DA PRIMEIRA CARTA ---\n");
    printf("Estado: %c\n", estado1);
    printf("Código da carta: %s\n", codigo_carta1);
    printf("Nome da cidade: %s\n", nome_cidade1);
    printf("População: %d\n", populacao1);
    printf("Pontos turísticos: %d\n", pontos1);
    printf("Área em Km2: %.2f\n", area_km21);
    printf("Valor do PIB: %.2f\n", pib1);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade_populacional1);
    printf("PIB per Capita: %.2f\n", pib_por_capita1);

    printf("\n-----------------------------------\n");

    // ---  Cadastro da segunsda carta super trunfo ---
    printf("CADASTRO DA SEGUNDA CARTA SUPER TRUNFO \n");

    printf("Digite o estado (ex: R para Rio de Janeiro): ");
    scanf(" %c", &estado2);

    printf("Digite o código da carta (3 caracteres): ");
    scanf("%s", codigo_carta2);

    printf("Digite o nome da cidade: ");
    scanf("%s", nome_cidade2);

    printf("Digite a população: ");
    scanf("%d", &populacao2);

    printf("Digite os pontos turísticos: ");
    scanf("%d", &pontos2);

    printf("Digite a area em Km2: ");
    scanf("%f", &area_km22); 

    printf("Digite o valor do PIB: ");
    scanf("%f", &pib2); 

    // Calculo para a segunda carta

    densidade_populacional2 = (float)populacao2 / area_km22;
    pib_por_capita2 = pib2 / populacao2;

    // --- Exibição para a segunda carta ---

    printf("\n--- DADOS DA SEGUNDA CARTA ---\n");
    printf("Estado: %c\n", estado2);
    printf("Código da carta: %s\n", codigo_carta2);
    printf("Nome da cidade: %s\n", nome_cidade2);
    printf("População: %d\n", populacao2);
    printf("Pontos turísticos: %d\n", pontos2);
    printf("Área em Km2: %.2f\n", area_km22);
    printf("Valor do PIB: %.2f\n", pib2);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade_populacional2);
    printf("PIB per Capita: %.2f\n", pib_por_capita2);

    printf("\n-----------------------------------\n");

    return 0;
}