#include <stdio.h>

/// @return 0;
int main() {
    char Estado[20] = "Riodejaneiro";
    char codigodacarta[20] = "A03";
    char Cidade[20] = "saquarema";
    int população = 89559;
    float areaemkm = 99.12;
    float pib = 42.178;    
    int numeropontosturisticos = 15;

    // Exibição das informações da carta 1
    
    printf("digite seu estado: \n");
    scanf("%s", &Estado);
    printf("o estado é: %s\n", Estado);

    printf("digite seu codigo da carta: \n");
    scanf("%s", &codigodacarta);
    printf("o codigo da carta é: %s\n", codigodacarta);
    
    printf("digite sua cidade: \n");
    scanf("%s", &Cidade);
    printf("sua cidade é: %s\n", Cidade);
 
    printf("digite a população: \n");
    scanf("%d", &população);
    printf("número de população é: %d\n", população);

    printf("digite sua area: \n");
    scanf("%f", &areaemkm);
    printf("A area em km2 é: %f\n", areaemkm);
    
    printf("digite o pib: \n");
    scanf("%f", &pib);
    printf("O pib é: %f\n", pib);

    printf("digite o numero de pontos turiticos: \n");
    scanf("%d", &numeropontosturisticos);
    printf("Quantidade de pontos turisticos são: %d\n", numeropontosturisticos);
    
    return 0;

}