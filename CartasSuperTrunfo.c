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

    //Exibindo os atributos das cartas

    printf("CARTA 1:\n");

    printf("ESTADO: %c\n", estado1);
    printf("CÓDIGO: %c0%s\n", estado1, codigo1);
    printf("NOME DA CIDADE: %s\n", nomeCidade1);
    printf("POPULAÇÃO: %d\n", populacao1);
    printf("ÁREA: %.2f km²\n", area1);
    printf("PIB %.2f REAIS\n", pib1);
    printf("NÚMERO DE PONTOS TURÍSTICOS: %d\n", numero1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

    printf("CARTA 2:\n");

    printf("ESTADO: %c\n", estado2);
    printf("CÓDIGO: %c0%s\n", estado2, codigo2);
    printf("NOME DA CIDADE: %s\n", nomeCidade2);
    printf("POPULAÇÃO: %d\n", populacao2);
    printf("ÁREA: %.2f\n", area2);
    printf("PIB %.2f\n", pib2);
    printf("NÚMERO DE PONTOS TURÍSTICOS: %d\n", numero2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f reais", pibPerCapita2);


    return 0;
}
