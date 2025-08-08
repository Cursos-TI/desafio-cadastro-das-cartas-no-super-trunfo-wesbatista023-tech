#include <stdio.h>

int main() {

char Estado[02];
char Codigo[04];
char NomeCidade[50];
int Populacao;
float Area;
float PIB;
char PontosTuristicos;

printf("Digite aqui o estado: ");
scanf("%s", &Estado);

printf("Digite aqui o codigo: ");
scanf("%s", &Codigo);

printf("Digite o nome da cidade: ");
scanf("%s", &NomeCidade);

printf("Digite a populacao: ");
scanf("%d", &Populacao);

printf("Digite a area: ");
scanf("%f", &Area);

printf("Digite aqui o PIB: ");
scanf("%f", &PIB);

printf("Digite o numero de pontos turisticos: ");
scanf("%d", &PontosTuristicos);

    printf("\n Carta Super Trunfo\n"); // Capa da carta, teste com \n na frente
    printf("Estado: %s\n", Estado);
    printf("Codigo: %s\n", Codigo);
    printf("Nome da Cidade: %s\n", NomeCidade); // Nome só vai junto.
    printf("População: %d\n", Populacao);
    printf("Area: %.2f km²\n", Area);
    printf("PIB: %.2f bilhões de reais\n", PIB);
    printf("Pontos turisticos: %d\n", PontosTuristicos); // Já refiz várias vezes e não aparece. MDS

    
    return 0;

}