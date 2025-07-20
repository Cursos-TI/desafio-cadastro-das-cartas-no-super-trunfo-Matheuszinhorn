#include <stdio.h>

int main () {
printf("Desafio Super Trunfo!\n\n");


// Carta 1
int populacao1, pontos1;
float area1, pib1;


//Carta 2
int populacao2, pontos2;
float area2, pib2;

   
//Entrada de Dados - Carta 1
printf("Canoas\n");

printf("Digite a Populacao: ");
scanf ("%d",&populacao1);

printf("Digite Area: ");
scanf ("%f",&area1);

printf("Digite o Pib: ");
scanf ("%f",&pib1);

printf("Digite o numero de Pontos Turisticos: ");
scanf ("%d",&pontos1);

printf("\n");

//Entrada de Dados - Carta 2
printf("Alvorada\n");

printf("Digite a Populacao: ");
scanf ("%d",&populacao2);

printf("Digite Area: ");
scanf ("%f",&area2);

printf("Digite o Pib: ");
scanf ("%f",&pib2);

printf("Digite o numero de Pontos Turisticos: ");
scanf ("%d",&pontos2);

printf("\n");

// Exibição - Carta 1
    printf("=== Canoas ===\n");
    printf("Populacao: %d habitantes\n", populacao1);
    printf("Area: %.2f km\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontos1);

printf("\n");
    
// Exibição - Carta 2
    printf("=== Alvorada ===\n");
    printf("Populacao: %d habitantes\n", populacao2);
    printf("Area: %.2f km\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontos2);

printf("\n");

return 0;

}
 