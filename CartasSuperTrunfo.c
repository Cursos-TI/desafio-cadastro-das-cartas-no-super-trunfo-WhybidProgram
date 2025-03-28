#include <stdio.h>

int main(){

    char estado1, estado2;
    char codigo1[10], codigo2[10];
    char nomeCidade1[50], nomeCidade2[50];
    //numero = Número de Pontos Turísticos 
    int numero1, numero2, escolhaComparacao;
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

    printf("## COMPARAÇAO DAS CARTAS ###)\n");
    printf("Escolha uma opcao para comparar:\n");
    printf("1. Populacao\n");
    printf("2. Area\n");
    printf("3. PIB\n");
    printf("4. Numero de pontos turisticos\n");
    printf("5. Densidade Demografica\n");
    scanf("%d", &escolhaComparacao);

    switch (escolhaComparacao)
    {
    case 1:
        if (populacao1 > populacao2)
        {
            printf("%s: \n POPULAÇÃO: %d\n", nomeCidade1, populacao1);
            printf("%s: \n POPULAÇÃO: %d\n", nomeCidade2, populacao2);
            printf("A CARTA 1 VENCEU!\n");
        } else if (populacao1 < populacao2) {
            printf("%s: \n POPULAÇÃO: %d\n", nomeCidade1, populacao1);
            printf("%s: \n POPULAÇÃO: %d\n", nomeCidade2, populacao2);
            printf("A CARTA 2 VENCEU!\n");
        } else {
            printf("%s: \n POPULAÇÃO: %d\n", nomeCidade1, populacao1);
            printf("%s: \n POPULAÇÃO: %d\n", nomeCidade2, populacao2);
            printf("HOUVE UM EMPATE!!!\n");
        }
        break;
    case 2:
        if (area1 > area2)
        {
            printf("%s: \n AREA(km): %3.f\n", nomeCidade1, area1);
            printf("%s: \n AREA(km): %3.f\n", nomeCidade2, area2);
            printf("A CARTA 1 VENCEU!\n");
        } else if (area1 < area2) {
            printf("%s: \n AREA(km): %3.f\n", nomeCidade1, area1);
            printf("%s: \n AREA(km): %3.f\n", nomeCidade2, area2);
            printf("A CARTA 2 VENCEU!\n");
        } else {
            printf("%s: \n AREA(km): %3.f\n", nomeCidade1, area1);
            printf("%s: \n AREA(km): %3.f\n", nomeCidade2, area2);
            printf("HOUVE UM EMPATE!!!\n");
        }
        break;
    case 3:
        if (pib1 > pib2)
        {
            printf("%s: \n PIB: %3.f\n", nomeCidade1, pib1);
            printf("%s: \n PIB: %3.f\n", nomeCidade2, pib2);
            printf("A CARTA 1 VENCEU!\n");
        } else if (pib1 < pib2) {
            printf("%s: \n PIB: %3.f\n", nomeCidade1, pib1);
            printf("%s: \n PIB: %3.f\n", nomeCidade2, pib2);
            printf("A CARTA 2 VENCEU!\n");
        } else {
            printf("%s: \n PIB: %3.f\n", nomeCidade1, pib1);
            printf("%s: \n PIB: %3.f\n", nomeCidade2, pib2);
            printf("HOUVE UM EMPATE!!!\n");
        }
        break;
    case 4:
        if (numero1 > numero2)
        {
            printf("%s: \n Pontos Turisticos: %d\n", nomeCidade1, numero1);
            printf("%s: \n Pontos Turisticos: %d\n", nomeCidade2, numero2);
            printf("A CARTA 1 VENCEU!\n");
        } else if (numero1 < numero2) {
            printf("%s: \n Pontos Turisticos: %d\n", nomeCidade1, numero1);
            printf("%s: \n Pontos Turisticos: %d\n", nomeCidade2, numero2);
            printf("A CARTA 2 VENCEU!\n");
        } else {
            printf("%s: \n Pontos Turisticos: %d\n", nomeCidade1, numero1);
            printf("%s: \n Pontos Turisticos: %d\n", nomeCidade2, numero2);
            printf("HOUVE UM EMPATE!!!\n");
        }
        break;
    case 5:
        if (densidadePopulacional1 > densidadePopulacional2)
        {
            printf("%s: \n Densidade Demografica: %3.f\n", nomeCidade1, densidadePopulacional1);
            printf("%s: \n Densidade Demografica: %3.f\n", nomeCidade2, densidadePopulacional2);
            printf("A CARTA 2 VENCEU!\n");
        } else if (densidadePopulacional1 < densidadePopulacional2) {
            printf("%s: \n Densidade Demografica: %3.f\n", nomeCidade1, densidadePopulacional1);
            printf("%s: \n Densidade Demografica: %3.f\n", nomeCidade2, densidadePopulacional2);
            printf("A CARTA 1 VENCEU!\n");
        } else {
            printf("%s: \n Densidade Demografica: %3.f\n", nomeCidade1, densidadePopulacional1);
            printf("%s: \n Densidade Demografica: %3.f\n", nomeCidade2, densidadePopulacional2);
            printf("HOUVE UM EMPATE!!!\n");
        }
        break;
    
    default:
        printf("Opção invalida!!!\n");
        break;
    }

    


    return 0;
}