#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2

struct Carta {
    char estado;
    char cidade[50];
    char codigo[10];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
};

int main() {

    struct Carta franca = {'A', "", "A01", 2102650, 105.4, 710, 25};
    struct Carta brasil = {'B', "", "B01", 6748000, 1200.25, 300.50, 30};


    //Area para entrada de dados

    //França (carta 1)
    printf("***INSIRA AS INFORMAÇÕES DA CARTA 1***\n\n");

    printf("País: França\n");
    printf("Estado:\n");
    scanf(" %c", &franca.estado);

    printf("Nome da Cidade:\n");
    scanf(" %49[^\n]", franca.cidade);

    printf("\nCarta 1 registrada com sucesso!\n");


    //Brasil (carta 2)
    printf("***INSIRA AS INFORMAÇÕES DA CARTA 2***\n\n");

    printf("País: Brasil\n");
    printf("Estado:\n");
    scanf(" %c", &brasil.estado);

    printf("Nome da Cidade:\n");
    scanf(" %49[^\n]", brasil.cidade);

    printf("\nCarta 2 registrada com sucesso!\n\n");

// Área para exibição dos dados da cidade
    printf("====EXIBIÇÃO DAS CARTAS====\n\n");

// França (carta 1)
    printf("Carta 1:\n");
    printf("FRANÇA\n");
    printf("Estado: %c\n", franca.estado);
    printf("Cidade: %s\n", franca.cidade);
    printf("Codigo: %s\n", franca.codigo);
    printf("População: %d milhões de habitantes\n", franca.populacao);
    printf("Área da cidade: %.2f km²\n", franca.area);
    printf("PIB: US$ %.2f trilhões\n", franca.pib);
    printf("Pontos turísticos: %d\n", franca.pontos_turisticos);

    printf("\n");

// Brasil (carta2)
    printf("Carta 2:\n");
    printf("BRASIL\n");
    printf("Estado: %c\n", brasil.estado);
    printf("Cidade: %s\n", brasil.cidade);
    printf("Codigo: %s\n", brasil.codigo);
    printf("População: %d milhões de habitantes\n", brasil.populacao);
    printf("Área da cidade: %.1f km²\n", brasil.area);
    printf("PIB: %.1f bilhões de reais\n", brasil.pib);
    printf("Pontos turísticos: %d\n", brasil.pontos_turisticos);

    return 0;
}