#include <stdio.h>

int main(){
    int populacao, pontos, carta, codigo;
    float area, PIB;
    char  estad[2];
    char cidade[30];

    printf("Digite seu código de carta: \n");
    scanf("%d", &carta);

    printf("Digite a sigla do seu estado: \n");
    scanf("%2s", &estad);

    printf("Digite o seu código: \n");
    scanf("%d", &codigo); 

    printf("Digite a sua cidade: \n");
    scanf("%29s", &cidade);

    printf("População: \n");
    scanf("%d", &populacao);

    printf("Digite a área em km²: \n");
    scanf("%f", &area);

    printf("Qual o PIB da sua cidade em reais? \n");
    scanf("%f", &PIB);

    printf("Qual a quantidade de pontos turísticos? \n");
    scanf("%d", &pontos);



    printf("\n -- Dados inseridos da carta --\n");
    printf("Carta 1: %d\n", carta);
    printf("Estado: %s\n", estad);
    printf("Código: %d\n", codigo);
    printf("Nome da cidade: %s\n", cidade);
    printf("População: %d de habitantes\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f de reais\n", PIB);
    printf("Número de pontos turísticos: %d\n", pontos);


    return 0;

}