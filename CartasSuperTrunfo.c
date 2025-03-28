#include <stdio.h>

typedef struct{
    int populacao, pontos, codigo_carta, codigo;
    float area, PIB, densidade, PIBpercapita;
    char  estad[3];
    char cidade[30];
} Carta;

int main() {
    Carta cartas[2];

    for(int i = 0; i < 2; i++) {
    
        printf("\n -- Coletando dados da carta %d --\n", i+1);

        printf("Digite seu código de carta: \n");
        scanf("%d", &cartas[i].codigo_carta);

        printf("Digite a sigla do seu estado: \n");
        scanf("%3s", &cartas[i].estad);

        printf("Digite o seu código: \n");
        scanf("%d", &cartas[i].codigo); 

        printf("Digite a sua cidade: \n");
        scanf("%29s", &cartas[i].cidade);

        printf("População: \n");
        scanf("%d", &cartas[i].populacao);

        printf("Digite a área em km²: \n");
        scanf("%f", &cartas[i].area);

        printf("Qual o PIB da sua cidade em reais? \n");
        scanf("%f", &cartas[i].PIB);

        printf("Qual a quantidade de pontos turísticos? \n");
        scanf("%d", &cartas[i].pontos);

        cartas[i].densidade = cartas[i].populacao / cartas[i].area;
        cartas[i].PIBpercapita = cartas[i].PIB / (float)cartas[i].populacao;

    }

    for(int i = 0; i < 2; i++) {
    printf("\n -- Dados inseridos da carta --\n");
    printf("Código da carta: %d\n", cartas[i].codigo_carta);
    printf("Estado: %s\n", cartas[i].estad);
    printf("Código: %d\n", cartas[i].codigo);
    printf("Nome da cidade: %s\n", cartas[i].cidade);
    printf("População: %d de habitantes\n", cartas[i].populacao);
    printf("Área: %.2f km²\n", cartas[i].area);
    printf("PIB: %.2f de reais\n", cartas[i].PIB);
    printf("Número de pontos turísticos: %d\n", cartas[i].pontos);
    printf("A densidade populacional da cidade é: %.2f hab/km²\n", cartas[i].densidade);
    printf("O PIB per capita da cidade em questão é:R$ %.2f\n", cartas[i].PIBpercapita);

    }
    return 0;

    
}
