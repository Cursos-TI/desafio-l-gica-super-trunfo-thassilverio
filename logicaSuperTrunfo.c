#include <stdio.h>

int main(){
    char estado1[50];
    char estado2[50];
    char codigo1[4];
    char codigo2[4];
    char cidade1[50];
    char cidade2[50];
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
    float PIBpercapita1;
    float PIBpercapita2;

    printf("Digite os dados da carta 1: \n");
    printf("\n");
    printf("Digite o código da carta (01 - 08): ");
    scanf("%s", &codigo1);
    printf("Digite o estado: ");
    scanf("%s", &estado1);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", &cidade1);
    printf("Digite a população da cidade: ");
    scanf("%d", &populacao1);
    printf("Área da cidade em km²: ");
    scanf("%f", &area1);
    printf("PIB: ");
    scanf("%f", &PIB1);
    printf("Número de Pontos turisticos: ");
    scanf("%d", &pontoturistico1);

    printf("\n");

    printf("Digite os dados da carta 2: \n");
    printf("\n");
    printf("Digite o código da carta 2 (01 - 08): ");
    scanf("%s", &codigo2);
    printf("Digite o estado: ");
    scanf("%s", &estado2);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", &cidade2);
    printf("Digite a população da cidade: ");
    scanf("%d", &populacao2);
    printf("Área da cidade em km²: ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &PIB2);
    printf("Número de Pontos turisticos: ");
    scanf("%d", &pontoturistico2);

    printf("\n");


    printf("\n");


    densidade1 = populacao1 / area1;
    printf("Densidade Populacional: %.2f \n", densidade1);

    PIBpercapita1 = PIB1 / populacao1;
    printf("PIB per Capita: %.2f \n", PIBpercapita1);
   
    printf("\n");

 
    densidade2 = populacao2 / area2;
    printf("Densidade Populacional: %.3f \n", densidade2);
 
    PIBpercapita2 = PIB2 / populacao2;
    printf("PIB per Capita: %.3f \n", PIBpercapita2);



    
    printf("\n \n");
    printf("Comparação de cartas:\n \n");

    printf("Carta 1 - %s (%s): %.3f \n", cidade1, estado1, PIBpercapita1);
    printf("Carta 2 - %s (%s): %.3f \n", cidade2, estado2, PIBpercapita2);
    if(area1 > area2){
        printf("Resultado: Carta 1 %s venceu \n", cidade1);
        }   else {
        printf("Resultado: Carta 2 (%s) venceu \n", cidade2);
        }







        return 0;

}
