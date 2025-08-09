#include <stdio.h>

int main() {
// Carta 1
char Estado1[3];
char Codigo1[5];
char NomeCidade1[50];
int Populacao1;
float Area1;
float PIB1;
int PontosTuristicos1;
float Densidade1; // Novas adições nivel medio
float PIBCapita1;
float InversoDensidade1; // Nivel Mestre
float SuperPoder1; // Nível Mestre

// Carta 2
    char Estado2[3];
    char Codigo2[5];
    char NomeCidade2[50];
    int Populacao2;
    float Area2;
    float PIB2;
    int PontosTuristicos2;
    float Densidade2; 
    float PIBCapita2;
    float InversoDensidade2; 
    float SuperPoder2; 

    // Preparação Carta 1
printf("Digite aqui o estado da carta 1: ");
scanf("%s", Estado1);

printf("Digite aqui o codigo da carta 1: ");
scanf("%s", Codigo1);

printf("Digite o nome da cidade da carta 1: ");
scanf(" %[^\n]", NomeCidade1);

printf("Digite a populacao da carta 1: ");
scanf("%d", &Populacao1);

printf("Digite a area da carta 1: ");
scanf("%f", &Area1);

printf("Digite aqui o PIB da carta 1: ");
scanf("%f", &PIB1);

printf("Digite o numero de pontos turisticos da carta 1: ");
scanf("%d", &PontosTuristicos1);

  
    Densidade1 = (float)Populacao1 / Area1;
    PIBCapita1 = (PIB1 * 1000000000.0f) / Populacao1;
    InversoDensidade1 = 1 / Densidade1;
    SuperPoder1 = Populacao1 + Area1 + PIB1 + PontosTuristicos1 + PIBCapita1 + InversoDensidade1;
    
    getchar(); // Esse comando é para limpar o espaço do buffer
            // Preparação Carta 2
    printf("\nDigite aqui o estado da Carta 2: ");
    scanf("%s", Estado2);

    printf("Digite aqui o código da Carta 2: ");
    scanf("%s", Codigo2);

    printf("Digite o nome da cidade da Carta 2: ");
    scanf(" %[^\n]", NomeCidade2);

    printf("Digite a população da Carta 2: ");
    scanf("%d", &Populacao2);

    printf("Digite a área da Carta 2: ");
    scanf("%f", &Area2);

    printf("Digite aqui o PIB da Carta 2: ");
    scanf("%f", &PIB2);

    printf("Digite o número de pontos turísticos da Carta 2: ");
    scanf("%d", &PontosTuristicos2);

     // Adição Nivel Medio. Calculos.
    Densidade2 = (float)Populacao2 / Area2;
    PIBCapita2 = (PIB2 * 1000000000.0f) / Populacao2; 
    InversoDensidade2 = 1 / Densidade2;
    SuperPoder2 = Populacao2 + Area2 + PIB2 + PontosTuristicos2 + PIBCapita2 + InversoDensidade2;

    // Comparando tudo antes de imprimir
    int popVence = (Populacao1 > Populacao2) ? 1 : 0;
    int areaVence = (Area1 > Area2) ? 1 : 0;
    int pibVence = (PIB1 > PIB2) ? 1 : 0;
    int ptsVence = (PontosTuristicos1 > PontosTuristicos2) ? 1 : 0;
    int densVence = (Densidade1 < Densidade2) ? 1 : 0; 
    int pibPCVence = (PIBCapita1 > PIBCapita2) ? 1 : 0;
    int superVence = (SuperPoder1 > SuperPoder2) ? 1 : 0;

    // Carta 1 - Impressão
    printf("\nCarta Super Trunfo 1\n"); 
    printf("========================\n"); 
    printf("Estado: %s\n", Estado1);
    printf("Codigo: %s\n", Codigo1);
    printf("Nome da Cidade: %s\n", NomeCidade1); 
    printf("População: %d\n", Populacao1);
    printf("Area: %.2f km²\n", Area1);
    printf("PIB: %.2f bilhões de reais\n", PIB1);
    printf("Pontos turisticos: %d\n", PontosTuristicos1); 
    printf("Densidade Populacional: %.2f hab/km²\n", Densidade1);
    printf("PIB per Capita: %.2f reais\n", PIBCapita1); 

    // Carta 2 - Impressão
    printf("\nCarta Super Trunfo 2\n");
    printf("========================\n");
    printf("Estado: %s\n", Estado2);
    printf("Código: %s\n", Codigo2);
    printf("Nome da Cidade: %s\n", NomeCidade2);
    printf("População: %d\n", Populacao2);
    printf("Área: %.2f km²\n", Area2);
    printf("PIB: %.2f bilhões de reais\n", PIB2);
    printf("Pontos turísticos: %d\n", PontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", Densidade2);
    printf("PIB per Capita: %.2f reais\n", PIBCapita2);

    printf("\nComparacao de Cartas:\n");
    printf("Populacao: Carta %d venceu (%d)\n", popVence ? 1 : 2, popVence);
    printf("Area: Carta %d venceu (%d)\n", areaVence ? 1 : 2, areaVence);
    printf("PIB: Carta %d venceu (%d)\n", pibVence ? 1 : 2, pibVence);
    printf("Pontos Turisticos: Carta %d venceu (%d)\n", ptsVence ? 1 : 2, ptsVence);
    printf("Densidade Populacional: Carta %d venceu (%d)\n", densVence ? 1 : 2, densVence);
    printf("PIB per Capita: Carta %d venceu (%d)\n", pibPCVence ? 1 : 2, pibPCVence);
    printf("Super Poder: Carta %d venceu (%d)\n", superVence ? 1 : 2, superVence);

    return 0;
    
}
