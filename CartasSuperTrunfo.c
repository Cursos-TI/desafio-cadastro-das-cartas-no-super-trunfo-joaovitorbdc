#include <stdio.h>

int main(){


    char estado;  
    char codigo_carta[4]; 
    char nome_cidade[50];
    int populacao;
    int pontos;
    float area_km2;
    float pib;

        //PRIMEIRA CARTA DO SUPER TRUNFO
    printf("CADASTRO DA PRIMEIRA CARTA SUPER TRUNFO \n ");

    printf("Digite o estado:  ");
    scanf(" %c", &estado);
    printf("O estado é: %c\n", estado);

    printf("Digite o código da carta:  ");
    scanf("%s", codigo_carta);
    printf("O código da carta é: %s\n", codigo_carta);

    printf("Digite o nome da cidade:  ");
    scanf("%s", nome_cidade);
    printf("O nome da cidade é: %s\n", nome_cidade);

    printf("Digite a população:  ");
    scanf("%d", &populacao);
    printf("A população é: %d\n", populacao);

    printf("Digite os pontos turísticos:  ");
    scanf("%d", &pontos);
    printf("Os pontos turísticos são: %d\n", pontos);

    printf("Digite a area em Km2:  ");
    scanf("%e", &area_km2);
    printf("A área em km2 é: %e\n", area_km2);

    printf("Digite o valor do PIB:  ");
    scanf("%e", &pib);
    printf("O valor do PIB é: %e\n", pib);



      //SEGUNDA CARTA DO SUPER TRUNFO
    printf("CADASTRO DA SEGUNDA CARTA SUPER TRUNFO \n ");

  
    printf("Digite o estado:  ");
    scanf(" %c", &estado);
    printf("O estado é: %c\n", estado);
    
    printf("Digite o código da carta:  ");
    scanf("%s", codigo_carta);
    printf("O código da carta é: %s\n", codigo_carta);

       printf("Digite o nome da cidade:  ");
    scanf("%s", nome_cidade);
    printf("O nome da cidade é: %s\n", nome_cidade);

    printf("Digite a população:  ");
    scanf("%d", &populacao);
    printf("A população é: %d\n", populacao);

    printf("Digite os pontos turísticos:  ");
    scanf("%d", &pontos);
    printf("Os pontos turísticos são: %d\n", pontos);

    printf("Digite a area em Km2:  ");
    scanf("%e", &area_km2);
    printf("A área em km2 é: %e\n", area_km2);

    printf("Digite o valor do PIB:  ");
    scanf("%e", &pib);
    printf("O valor do PIB é: %e\n", pib);


    return 0;
}
