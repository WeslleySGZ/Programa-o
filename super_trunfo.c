#include <stdio.h>

int main() {
    char estado1, estado2;
    char cdc1[20], cdc2[20];
    char nome1[20], nome2[20];
    int populacao1, populacao2;
    int numero1, numero2;
    float area1, area2;
    float pib1, pib2;
// Carta 1
    printf("Carta 1: \n");
    printf("Digite a letra do primeiro estado: \n");
    scanf(" %c", &estado1); 
    printf("Digite o código da Carta: \n");
    scanf(" %s", cdc1);
    printf("Digite o nome da cidade: \n");
    scanf(" %s", nome1);
    printf("Digite o numero da população: \n");
    scanf("%d", &populacao1);
    printf("Digite a área da cidade: \n");
    scanf("%f", &area1);
    printf("Digite o valor PIB: \n");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos do estado: \n");
    scanf("%d", &numero1);
//Carta 2
    printf("Carta 2: \n");
    printf("Digite a letra do segundo estado: \n");
    getchar();
    scanf("%c", &estado2);
    getchar();
    printf("Digite o código da Carta: \n");
    scanf(" %s", cdc2);
    printf("Digite o nome da cidade: \n");
    scanf(" %s", nome2);
    printf("Digite o número da população: \n");
    scanf("%d", &populacao2);
    printf("Digite a área da cidade: \n");
    scanf("%f", &area2);
    printf("Digite o valor PIB: \n");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos do estado: \n");
    scanf("%d", &numero2);

    // Listando as cartas
    printf("\nCarta número 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", cdc1);
    printf("Nome da cidade: %s\n", nome1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", numero1);

    printf("\nCarta número 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", cdc2);
    printf("Nome da cidade: %s\n", nome2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", numero2);

    return 0;
}