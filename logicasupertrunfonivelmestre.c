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
 

    
    
   char *opcao[]={
    "Populacao",
    "Area",
    "PIB",
    "Pontos Turisticos",
    "Densidade populacional"
    };

    int total = 5, opcao1, opcao2;

    printf("\n");
    printf("Escolha 2 atributos para comparação: \n");   
       // PRIMEIRA ESCOLHA
       while (1) {
        printf("\nEscolha o primeiro atributo:\n");
        for (int i = 0; i < total; i++) {
            printf("%d - %s\n", i + 1, opcao[i]);
        }
        printf("Digite o número da primeira opção: ");
        scanf("%d", &opcao1);

        if (opcao1 >= 1 && opcao1 <= total) break;
        else printf("Opção inválida! Tente novamente.\n");
    }

    // SEGUNDA ESCOLHA
    while (1) {
        printf("\nEscolha o segundo atributo para comparar:\n");
        for (int i = 0; i < total; i++) {
            if (i != (opcao1 - 1)) {
                printf("%d - %s\n", i + 1, opcao[i]);
            }
        }
        printf("Digite o número da segunda opção: ");
        scanf("%d", &opcao2);

        if (opcao2 >= 1 && opcao2 <= total && opcao2 != opcao1) break;
        else printf("Opção inválida ou repetida! Tente novamente.\n");
    }

 
    printf("\n \n");

      printf("Comparação entre %s e %s:\n \n", pais1, pais2);
    
     
    printf("\n");

    float valor1_c1, valor2_c1, valor1_c2, valor2_c2, soma1, soma2;

    switch (opcao1){

              case 1: //População
        valor1_c1 = populacao1; valor1_c2 = populacao2;
       printf("População \n");
       printf("Carta 1 - %s : %d milhões de habitantes \n", pais1, populacao1);
        printf("Carta 2 - %s : %d milhões de habitantes \n", pais2, populacao2);
        printf("\n \n");
        if (populacao1 > populacao2) {
            printf("Carta 1 - é a melhor! \n");
        } else if (populacao2 > populacao1) {
            printf("Carta 2 -  é a melhor! \n");
        } else {
            printf("Empate!\n");
        }
        break;
        case 2: //Área
        valor1_c1 = area1; valor1_c2 = area2;
        printf("Área \n");
        printf("Carta 1 - %s : %.2f km² \n", pais1, area1);
        printf("Carta 2 - %s : %.2f km² \n", pais2, area2);
        printf("\n \n");
        if (area1 > area2) {
            printf("Carta 1 - é a melhor!\n");
        } else if (area2 > area1) {
            printf("Carta 2 - é a melhor!\n");
        } else {
            printf("Empate!\n");
        }
        break;
        case 3: //PIB
        valor1_c1 = PIB1; valor1_c2 = PIB2;
        printf("PIB \n");
        printf("Carta 1 - %s:  %.2f bilhões de reais \n", pais1,PIB1);        
        printf("Carta 2 - %s:  %.2f bilhões de reais \n", pais2,PIB2);
        if (PIB1 > PIB2) {
            printf("Carta 1 - é a melhor!\n");
        } else if (PIB2 > PIB1) {
            printf("Carta 2 - é a melhor!\n");
        } else {
            printf("Empate!\n");
        }
        break;
        case 4: //Número de pontos turíticos
        valor1_c1 = pontoturistico1; valor1_c2 = pontoturistico2;
        printf("Número de pontos turíticos \n");
        printf("Carta 1 - %s: %d \n", pais1, pontoturistico1);
        printf("Carta 2 - %s: %d \n", pais2, pontoturistico2);
        printf("\n \n");
        if (pontoturistico1 > pontoturistico2) {
            printf("Carta 1 - é a melhor!\n");
        } else if (pontoturistico2 > pontoturistico1) {
            printf("Carta 2 - é a melhor!\n");
        } else {
            printf("Empate!\n");
        }
        break;
       case 5: //Densidade Populacional
       valor1_c1 = densidade1; valor2_c1 = densidade2;
       printf("Densidade populacional \n");
       printf("Carta 1 - %s: %d \n", pais1, densidade1);
       printf("Carta 2 - %s: %d \n", pais2, densidade2);
       printf("\n \n");
        if (densidade2 > densidade1) {
            printf("Carta 2 - é a melhor!\n");
        } else if (densidade1 > densidade2) {
            printf("Carta 1 - é a melhor!\n");
        } else {
            printf("Empate!\n");
        }
        break;

        default:
            printf("Opcao invalida. Tente novamente!\n");
    }
    printf("\n \n");
    switch (opcao2){

        case 1: //População
  valor2_c1 = populacao1; valor2_c2 = populacao2;
 printf("População \n");
 printf("Carta 1 - %s : %d milhões de habitantes \n", pais1, populacao1);
  printf("Carta 2 - %s : %d milhões de habitantes \n", pais2, populacao2);
  printf("\n \n");
  if (populacao1 > populacao2) {
      printf("Carta 1 - é a melhor! \n");
  } else if (populacao2 > populacao1) {
      printf("Carta 2 -  é a melhor! \n");
  } else {
      printf("Empate!\n");
  }
  break;
  case 2: //Área
  valor2_c1 = area1; valor2_c2 = area2;
  printf("Área \n");
  printf("Carta 1 - %s : %.2f km² \n", pais1, area1);
  printf("Carta 2 - %s : %.2f km² \n", pais2, area2);
  printf("\n \n");
  if (area1 > area2) {
      printf("Carta 1 - é a melhor!\n");
  } else if (area2 > area1) {
      printf("Carta 2 - é a melhor!\n");
  } else {
      printf("Empate!\n");
  }
  break;
  case 3: //PIB
  valor2_c1 = PIB1; valor2_c2 = PIB2;
  printf("PIB \n");
  printf("Carta 1 - %s:  %.2f bilhões de reais \n", pais1,PIB1);        
  printf("Carta 2 - %s:  %.2f bilhões de reais \n", pais2,PIB2);
  if (PIB1 > PIB2) {
      printf("Carta 1 - é a melhor!\n");
  } else if (PIB2 > PIB1) {
      printf("Carta 2 - é a melhor!\n");
  } else {
      printf("Empate!\n");
  }
  break;
  case 4: //Número de pontos turíticos
  valor2_c1 = pontoturistico1; valor2_c2 = pontoturistico2;
  printf("Número de pontos turíticos \n");
  printf("Carta 1 - %s: %d \n", pais1, pontoturistico1);
  printf("Carta 2 - %s: %d \n", pais2, pontoturistico2);
  printf("\n \n");
  if (pontoturistico1 > pontoturistico2) {
      printf("Carta 1 - é a melhor!\n");
  } else if (pontoturistico2 > pontoturistico1) {
      printf("Carta 2 - é a melhor!\n");
  } else {
      printf("Empate!\n");
  }
  break;
 case 5: //Densidade Populacional
 valor2_c1 = densidade1; valor2_c2 = densidade2;
 printf("Densidade populacional \n");
 printf("Carta 1 - %s: %d \n", pais1, densidade1);
 printf("Carta 2 - %s: %d \n", pais2, densidade2);
 printf("\n \n");
  if (densidade2 > densidade1) {
      printf("Carta 2 - é a melhor!\n");
  } else if (densidade1 > densidade2) {
      printf("Carta 1 - é a melhor!\n");
  } else {
      printf("Empate!\n");
  }
  break;

  default:
      printf("Opcao invalida. Tente novamente!\n");
}
printf("\n \n");

//Soma dos atributos esoclhidos

soma1 = (opcao1 == 5 ? valor1_c1 : valor1_c1) + (opcao2 == 5 ? valor2_c1 : valor2_c1);
soma2 = (opcao1 == 5 ? valor1_c2 : valor1_c2) + (opcao2 == 5 ? valor2_c2 : valor2_c2);
printf("Soma dos atributos da Carta 1 é: %.2f \n", soma1);
printf("Soma dos atributos da Carta 2 é: %.2f \n", soma2);

printf("\nResultado:\n");

if (soma1 > soma2) {
    printf("%s venceu!\n",pais1);
} else if (soma2 > soma1) {
    printf("%s venceu!\n", pais2);
} else {
    printf("Empate!\n");
}
    return 0;
}