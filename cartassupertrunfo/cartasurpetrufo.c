#include <stdio.h>

/// @return 0;
int main() {
    char Estado;
    char codigo_da_carta[20] = "A03";
    char Cidade[20] = "saquarema";
    int população = 89559;
    float area_em_km = 99.12;
    float pib = 42.178;    
    int numero_pontos_turisticos = 15;

    // Exibição das informações da carta 1
    
    printf("digite seu estado: \n");
    scanf("%s", &Estado);
    printf("o estado é: %s\n", Estado);

    printf("digite seu codigo da carta: \n");
    scanf("%s", &codigo_da_carta);
    printf("o codigo da carta é: %s\n", codigo_da_carta);
    
    printf("digite sua cidade: \n");
    scanf("%s", &Cidade);
    printf("sua cidade é: %s\n", Cidade);
 

    printf("digite a população: \n");
    scanf("%d", &população);
    printf("número de população é: %d\n", população);

    printf("digite sua area: \n");
    scanf("%f", &area_em_km);
    printf("A area em km2 é: %f\n", area_em_km);
    
    printf("digite o pib: \n");
    scanf("%f", &pib);
    printf("O pib é: %f\n", pib);

    printf("digite o numero de pontos turiticos: \n");
    scanf("%d", &numero_pontos_turisticos);
    printf("Quantidade de pontos turisticos são: %d\n", numero_pontos_turisticos);
    
    return 0;

}