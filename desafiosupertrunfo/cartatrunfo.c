#include <stdio.h>

int main() {
    char Estado1[20];
    char codigo_da_carta1[20];
    char Cidade1[20];
    int populacao1;
    float area_em_km1;
    float pib1;    
    int numero_pontos_turisticos1;
    float densidade_populacional1;
    float pib_per_capita1;

    // Exibição das informações da carta 1
    
    printf("digite seu estado1: \n");
    scanf("%s", &Estado1);

    printf("digite seu codigo da carta1: \n");
    scanf("%s", &codigo_da_carta1);
    
    printf("digite sua cidade1: \n");
    scanf("%s", &Cidade1);
 
    printf("digite a população1: \n");
    scanf("%d", &populacao1);

    printf("digite sua area1: \n");
    scanf("%f", &area_em_km1);
    
    printf("digite o pib1: \n");
    scanf("%f", &pib1);

    printf("digite o numero de pontos turiticos1: \n");
    scanf("%d", &numero_pontos_turisticos1);
   
    printf("\n");
    // Exibição das informações da carta 2

    char Estado2[20];
    char codigo_da_carta2[20];
    char Cidade2[20];
    int populacao2;
    float area_em_km2;
    float pib2;    
    int numero_pontos_turisticos2;
    float densidade_populacional2;
    float pib_per_capita2;

    printf("digite seu estado2: \n");
    scanf("%s", &Estado2);

    printf("digite seu codigo da carta2: \n");
    scanf("%s", &codigo_da_carta2);
    
    printf("digite sua cidade2: \n");
    scanf("%s", &Cidade2);
 
    printf("digite a população2: \n");
    scanf("%d", &populacao2);

    printf("digite sua area2: \n");
    scanf("%f", &area_em_km2);
    
    printf("digite o pib2: \n");
    scanf("%f", &pib2);

    printf("digite o numero de pontos turiticos2: \n");
    scanf("%d", &numero_pontos_turisticos2);
    
    //impressão das cartas1;
     
    printf("\n");

    printf("o estado1 é: %s\n", Estado1);
    printf("o codigo da carta1 é: %s\n", codigo_da_carta1);
    printf("sua cidade1 é: %s\n", Cidade1);
    printf("número de população1 é: %d\n", populacao1);
    printf("A area em km1 é: %f\n", area_em_km1);
    printf("O pib1 é: %f\n", pib1);
    printf("Quantidade de pontos turisticos1 são: %d\n", numero_pontos_turisticos1);

    float densidade1 = (float)populacao1 / area_em_km1;

    printf("A divisão densidade_populacional1 é: %f\n", densidade1);

    pib_per_capita2 = (float)pib1 / populacao1;

    printf("A divisão pib_per_capita1 é: %f\n", pib_per_capita1);

     //impressão das cartas2 \n;

     printf("\n");

     printf("o estado2 é: %s\n", Estado2);
     printf("o codigo da carta2 é: %s\n", codigo_da_carta2);
     printf("sua cidade2 é: %s\n", Cidade2);
     printf("número de população2 é: %d\n", populacao2);
     printf("A area em km2 é: %f\n", area_em_km2);
     printf("O pib2 é: %f\n", pib2);
     printf("Quantidade de pontos turisticos2 são: %d\n", numero_pontos_turisticos2);

    float densidade2 = (float)populacao2 / area_em_km2;

    printf("A divisão densidade_populacional2 é: %f\n", densidade2);

    pib_per_capita2 = (float)pib2 / populacao2;

    printf("A divisão pib_per_capita2 é: %f\n", pib_per_capita2);

 

    
    return 0;
}