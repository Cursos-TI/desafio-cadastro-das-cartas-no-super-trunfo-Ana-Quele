#include <stdio.h>

/// @return 0;
int main() {
    char Estado[20] = "Rio_de_janeiro";
    char codigo_da_carta[20] = "A03";
    char Cidade[20] = "saquarema";
    int populacao = 89559;
    float area_em_km = 99.12;
    float pib = 42.178;    
    int numero_pontos_turisticos = 15;

    // Exibição das informações da carta 1
    
    printf("digite seu estado1: \n");
    scanf("%s", &Estado);
    printf("o estado e: %s\n", Estado);

    printf("digite seu codigo da carta1: \n");
    scanf("%s", &codigo_da_carta);
    printf("o codigo da carta e: %s\n", codigo_da_carta);
    
    printf("digite sua cidade1: \n");
    scanf("%s", &Cidade);
    printf("sua cidade e: %s\n", Cidade);
 
    printf("digite a populacao1: \n");
    scanf("%d", &populacao);
    printf("número de populacao e: %d\n", populacao);

    printf("digite sua area1: \n");
    scanf("%f", &area_em_km);
    printf("A area em km2 e: %f\n", area_em_km);
    
    printf("digite o pib1: \n");
    scanf("%f", &pib);
    printf("O pib e: %f\n", pib);

    printf("digite o numero de pontos turiticos1: \n");
    scanf("%d", &numero_pontos_turisticos);
    printf("Quantidade de pontos turisticos sao: %d\n", numero_pontos_turisticos);

    // Exibição das informações da carta 2

    char Estado2[20] = "sao_paulo";
    char codigo_da_carta2[20] = "A02";
    char Cidade2[20] = "Guarulhos";
    int populacao2 = 11.45;
    float area_em_km2 = 248.219;
    float pib2 = 10.900;    
    int numero_pontos_turisticos2 = 36;

    printf("digite seu estado2: \n");
    scanf("%s", &Estado2);
    printf("o estado e: %s\n", Estado2);

    printf("digite seu codigo da carta2: \n");
    scanf("%s", &codigo_da_carta2);
    printf("o codigo da carta e: %s\n", codigo_da_carta2);
    
    printf("digite sua cidade2: \n");
    scanf("%s", &Cidade2);
    printf("sua cidade e: %s\n", Cidade2);
 
    printf("digite a populacao1: \n");
    scanf("%d", &populacao2);
    printf("número de populacao e: %d\n", populacao2);

    printf("digite sua area2: \n");
    scanf("%f", &area_em_km2);
    printf("A area em km2 e: %f\n", area_em_km2);
    
    printf("digite o pib2: \n");
    scanf("%f", &pib2);
    printf("O pib e: %f\n", pib2);

    printf("digite o numero de pontos turiticos2: \n");
    scanf("%d", &numero_pontos_turisticos2);
    printf("Quantidade de pontos turisticos sao: %d\n", numero_pontos_turisticos2);
    
    return 0;
}