#include <stdio.h>

int main(){

    char estado1, estado2;
    char codigo1[10], codigo2[10];
    char nomeCidade1[50], nomeCidade2[50];
    //numero = Número de Pontos Turísticos 
    int numero1, numero2;
    int populacao1, populacao2;
    float area1, area2, pib1, pib2;
    float densidadePopulacional1, pibPerCapita1, densidadePopulacional2, pibPerCapita2;
    float superPoder1, superPoder2;
    
     //Cadastro das duas cartas
     printf("INSIRA OS DADOS DA CARTA 1!\n");

     printf("Informe o Estado(A ao H):\n");
     scanf(" %c", &estado1);
     printf("Informe o Código da Carta(1 a 4):\n");
     scanf("%s", codigo1);
     printf("Informe o nome da cidade:\n");
     scanf("%s", nomeCidade1);
     printf("Informe a população da cidade:\n");
     scanf("%d", &populacao1);
     printf("Informe a Área (em km²) da cidade:\n");
     scanf("%f", &area1);
     printf("Informe o PIB da cidade:\n");
     scanf("%f", &pib1);
     printf("Informe o Número de Pontos Turísticos da cidade:\n");
     scanf("%d", &numero1);
     densidadePopulacional1 = (float) populacao1 / area1;
     pibPerCapita1 = (float) pib1 / populacao1;
     superPoder1 = (float) populacao1 + area1 + pib1 + numero1 + densidadePopulacional1 + pibPerCapita1;

 
     printf("INSIRA OS DADOS DA CARTA 2!\n");
     
     printf("Informe o Estado(A ao H):\n");
     scanf(" %c", &estado2);
     printf("Informe o Código da Carta(1 a 4):\n");
     scanf("%s", codigo2);
     printf("Informe o nome da cidade:\n");
     scanf("%s", nomeCidade2);
     printf("Informe a população da cidade:\n");
     scanf("%d", &populacao2);
     printf("Informe a Área (em km²) da cidade:\n");
     scanf("%f", &area2);
     printf("Informe o PIB da cidade:\n");
     scanf("%f", &pib2);
     printf("Informe o Número de Pontos Turísticos da cidade:\n");
     scanf("%d", &numero2);
     densidadePopulacional2 = (float) populacao2 / area2;
     pibPerCapita2 = (float) pib2 / populacao2;
     superPoder2 = (float) populacao2 + area2 + pib2 + numero2 + densidadePopulacional2 + pibPerCapita2;

    printf("Comparação de cartas(Area):\n");

    printf("Carta 1 - %s: %f\n", nomeCidade1, area1);
    printf("Carta 2 - %s: %f\n", nomeCidade2, area2);

    if (area1 > area2)
    {
        printf("A Carta 1 %s venceu!\n", nomeCidade1);
    }
    else{
        printf("A Carta 2 %s venceu!\n", nomeCidade2);
    }
    


    return 0;
}