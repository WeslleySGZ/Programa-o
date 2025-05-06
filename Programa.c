#include <stdio.h>
int main() {
    char estado1;
    char estado2;
    char cdc1[20];
    char cdc2[20];
    char nome1 [20];
    char nome2[20];
    int populacao1;
    int populacao2;
    int numero1;
    int numero2;
    float area1;
    float area2;
    float pib1;
    float pib2;
//carta núme
    printf("Carta 1: \n");
    printf("digite a letra do primeiro estado: \n");
    scanf("%c",&estado1);
    printf("Digite o código da Carta: \n");
    scanf("%s", &cdc1);
    printf("Digite o nome da cidade: \n");
    scanf("%s",&nome1);
    printf("Digite o numero da população: \n");
    scanf("%d",&populacao1);
    printf("Digite a área de cidade: \n" );
    scanf("%f",&area1);
    printf("Digite o valor PIB: \n");
    scanf("%f",&pib1);
    printf("Digite o número de pontos turisticos do estado: \n");
    scanf("%d",&numero1);
//codigo segunda carta
    printf("Carta 2: \n");
    printf("digite a letra do segundo estado: \n");
    getchar();
    scanf("%c",&estado2);
    printf("Digite o código da Carta: \n");
    scanf("%s", &cdc2);
    printf("Digite o nome da cidade: \n");
    scanf("%s",&nome2);
    printf("Digite o numero da população: \n");
    scanf("%d",&populucao2);
    printf("Digite a área de cidade: \n" );
    scanf("%f",&area2);
    printf("Digite o valor PIB: \n");
    scanf("%f",&pib2);
    printf("Digite o número de pontos turisticos do estado: \n");
    scanf("%d",&numero2);
//listando cartas 1 e 2
    printf("Carta número 1: \n");
    printf("carta 1 \n");
    printf("Estado: %c \n",&estado1);
    printf("Código: %s \n",&cdc1);
    printf("Nome da cidade: %s \n", &nome1);
    printf("População: %d \n",&populacao1);
    printf("Área: %f \n", &area1);
    printf("PIB:%f \n ", &pib1);
    printf("Número de Pontos Turisticos: %d \n",&numero1);

    printf("Carta número 2: \n");
    printf("carta 2 \n");
    printf("Estado: %c \n",&estado2);
    printf("Código: %s \n",&cdc2);
    printf("Nome da cidade: %s \n", &nome2);
    printf("População: %d \n",&populucao2);
    printf("Área: %f \n", &area2);
    printf("PIB:%f \n ", &pib2);
    printf("Número de Pontos Turisticos: %d \n",&numero2);













}