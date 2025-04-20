#include <stdio.h>

int main (){

char pais1[50];
char pais2[50];
int populacao1;
int populacao2;
float area1;
float area2;
float PIB1;
float PIB2;
int pontoturistico1;
int pontoturistico2;
float densidade1;
float densidade2;
int atributo;

printf("Digite os dados da carta 1: \n");
    printf("\n");
    printf("Digite o país: ");
    scanf(" %[^\n]", &pais1);
    printf("Digite a população da cidade: ");
    scanf("%d", &populacao1);
    printf("Área da cidade em km²: ");
    scanf("%f", &area1);
    printf("PIB: ");
    scanf("%f", &PIB1);
    printf("Número de Pontos turisticos: ");
    scanf("%d", &pontoturistico1);
    densidade1 = populacao1 / area1;
    printf("Densidade Populacional: %.3f \n", densidade1);

    printf("\n");

    printf("Digite os dados da carta 2: \n");
    printf("\n");
    printf("Digite o país: ");
    scanf(" %[^\n]", &pais2);
    printf("Digite a população da cidade: ");
    scanf("%d", &populacao2);
    printf("Área da cidade em km²: ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &PIB2);
    printf("Número de Pontos turisticos: ");
    scanf("%d", &pontoturistico2);
    densidade2 = populacao2 / area2;
    printf("Densidade Populacional: %.3f \n", densidade2);



 
 
 
    printf("\n \n");

    printf ("Super trunfo comparação \n \n");
    printf("Escolha o atributo para comparar \n");

    int opcao;

    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Demografica\n");
    printf("\n");
    printf("Digite sua opcao: ");
    scanf("%d", &opcao);

    printf("\n \n");

    printf("Comparação entre %s e %s:\n \n", pais1, pais2);

    switch (opcao){
       case 1: //População
       printf("População \n");
        if (populacao1 > populacao2) {
            printf("Resultado: %d milhões de habitantes - %s venceu!\n", populacao1, pais1);
        } else if (populacao2 > populacao1) {
            printf("Resultado: %d milhões de habitantes- %s venceu!\n", populacao2, pais2);
        } else {
            printf("Empate!\n");
        }
        break;
        case 2: //Área
        printf("Área \n");
        if (area1 > area2) {
            printf("Resultado: %.2f km² - %s venceu!\n", area1, pais1);
        } else if (area2 > area1) {
            printf("Resultado: %.2f km² - %s venceu!\n", area2, pais2);
        } else {
            printf("Empate!\n");
        }
        break;
        case 3: //PIB
        printf("PIB \n");
        if (PIB1 > PIB2) {
            printf("Resultado: %.2f bilhões de reais- %s venceu!\n", PIB1, pais1);
        } else if (PIB2 > PIB1) {
            printf("Resultado: %.2f bilhões de reais- %s venceu!\n", PIB2, pais2);
        } else {
            printf("Empate!\n");
        }
        break;
        case 4: //Número de pontos turíticos
        printf("Número de pontos turíticos \n");
        if (pontoturistico1 > pontoturistico2) {
            printf("Resultado: %d -  %s venceu!\n", pontoturistico1, pais1);
        } else if (pontoturistico2 > pontoturistico1) {
            printf("Resultado: %d -  %s venceu!\n", pontoturistico2 , pais2);
        } else {
            printf("Empate!\n");
        }
        break;
       case 5: //Densidade Populacional
       printf("Densidade populacional \n");
        if (densidade2 > densidade1) {
            printf("Resultado: %f - %s venceu!\n", densidade1, pais1);
        } else if (densidade1 > densidade2) {
            printf("Resultado: %f - %s venceu!\n", densidade2, pais2);
        } else {
            printf("Empate!\n");
        }
        break;

        default:
            printf("Opcao invalida. Tente novamente!\n");
    }

    return 0;
}