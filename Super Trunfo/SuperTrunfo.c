#include <stdio.h>
// Desafio Super Trunfo - Países

struct Carta {
    char estado;
    char cidade[50];
    char codigo[10];
    unsigned long int populacao;
    float area;
    float pib;
    int pontos_turisticos;
    float densidade_populacional;
    float pib_capita;
    float super_poder;
};

int main() {

    struct Carta franca;
    struct Carta brasil;

    // ---------------- CARTA 1 ----------------
    // --------------Entrada de dados--------------

    printf("***INSIRA AS INFORMAÇÕES DA CARTA 1***\n");

    printf("País: França\n");

    printf("Estado: ");
    scanf(" %c", &franca.estado);

    printf("\nNome da Cidade: ");
    scanf(" %49[^\n]", franca.cidade);

    printf("\nCódigo da carta: ");
    scanf("%s", franca.codigo);

    printf("\nPopulação total: ");
    scanf("%lu", &franca.populacao);

    printf("\nÁrea da cidade (km²): ");
    scanf("%f", &franca.area);

    printf("\nPIB: ");
    scanf("%f", &franca.pib);

    printf("\nNúmero de pontos turísticos: ");
    scanf("%d", &franca.pontos_turisticos);

    printf("\n\nCarta 1 registrada com sucesso!\n");

    // Calculo Densidade Populacional e PIB per Capita
    franca.densidade_populacional = franca.populacao / franca.area;
    franca.pib_capita = (franca.pib * 1000000000) / franca.populacao;

    // Calculo do Super poder
    franca.super_poder = (float)franca.populacao +
                        franca.area +
                        franca.pib +
                        (float) franca.pontos_turisticos +
                        franca.pib_capita +
                        (1.0 / franca.densidade_populacional);



    // ---------------- CARTA 2 ----------------
    // -------------Entrada de dados--------------

    printf("***INSIRA AS INFORMAÇÕES DA CARTA 2***\n");

    printf("País: Brasil\n");

    printf("Estado: ");
    scanf(" %c", &brasil.estado);

    printf("\nNome da Cidade: ");
    scanf(" %49[^\n]", brasil.cidade);

    printf("\nCódigo da carta: ");
    scanf("%s", brasil.codigo);

    printf("\nPopulação total: ");
    scanf("%lu", &brasil.populacao);

    printf("\nÁrea da cidade (km²): ");
    scanf("%f", &brasil.area);

    printf("\nPIB: ");
    scanf("%f", &brasil.pib);

    printf("\nNúmero de pontos turísticos: ");
    scanf("%d", &brasil.pontos_turisticos);

    //Calculo Densidade Populacional e PIB per Capita
    brasil.densidade_populacional =  brasil.populacao / brasil.area;
    brasil.pib_capita = (brasil.pib * 1000000000) /  brasil.populacao;

    // Calculo do Super poder
    brasil.super_poder = (float)brasil.populacao +
                        brasil.area +
                        brasil.pib +
                        (float) brasil.pontos_turisticos +
                        brasil.pib_capita +
                        (1.0 / brasil.densidade_populacional);

    printf("\nCarta 2 registrada com sucesso!\n");


    // ----------- EXIBIÇÃO DAS CARTAS -----------
    printf("===== EXIBIÇÃO DAS CARTAS =====\n\n");

    printf("Carta 1 - FRANÇA\n");
    printf("Estado: %c\n", franca.estado);
    printf("Cidade: %s\n", franca.cidade);
    printf("Código: %s\n", franca.codigo);
    printf("População: %lu\n", franca.populacao);
    printf("Área: %.2f km²\n", franca.area);
    printf("PIB: %.2f trilhões\n", franca.pib);
    printf("Pontos turísticos: %d\n", franca.pontos_turisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", franca.densidade_populacional);
    printf("PIB per Capita: %.2f\n", franca.pib_capita);
    printf("Super poder: %.2f\n\n", franca.super_poder);

    

    printf("Carta 2 - BRASIL\n");
    printf("Estado: %c\n", brasil.estado);
    printf("Cidade: %s\n", brasil.cidade);
    printf("Código: %s\n", brasil.codigo);
    printf("População: %lu\n", brasil.populacao);
    printf("Área: %.2f km²\n", brasil.area);
    printf("PIB: %.2f bilhões de reais\n", brasil.pib);
    printf("Pontos turísticos: %d\n", brasil.pontos_turisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", brasil.densidade_populacional);
    printf("PIB per Capita: %.2f reais\n", brasil.pib_capita);
    printf("Super poder: %.2f\n\n", brasil.super_poder);

// ----------- MENU INTERATIVO -----------

// Variáveis responsáveis por armazenar:
// (Resultado das comparações)
// (Atributos escolhidos pelo usuário)
int resultado1, resultado2;
char primeiroAtributo, segundoAtributo;

// ----------- ESCOLHA DO PRIMEIRO ATRIBUTO -----------

// Menu para escolha do primeiro atributo
printf("====== COMPARAÇÃO DE CARTAS ======\n");
printf("Escolha o primeiro atributo:\n");
printf("P - População\n");
printf("A - Área\n");
printf("B - PIB\n");
printf("T - Pontos Turísticos\n");
printf("D - Densidade Demográfica\n");

scanf(" %c", &primeiroAtributo);

// ----------- COMPARAÇÃO DO PRIMEIRO ATRIBUTO -----------
switch (primeiroAtributo)
{
case 'P':
case 'p':
resultado1 = franca.populacao > brasil.populacao ? 1 : 0;

    break;
case 'A':
case 'a':
resultado1 = franca.area > brasil.area ? 1 : 0;

    break;
case 'B':
case 'b':
resultado1 = franca.pib > brasil.pib ? 1 : 0;

    break;
case 'T':
case 't':
resultado1 = franca.pontos_turisticos > brasil.pontos_turisticos ? 1 : 0;

    break;
case 'D':
case 'd':
// Menor valor vence
resultado1 = franca.densidade_populacional < brasil.densidade_populacional ? 1 : 0;

    break;

default:
printf("Opção inválida!\n");
return 1;
}

// ----------- ESCOLHA DO SEGUNDO ATRIBUTO -----------
printf("\nEscolha o segundo atributo:\n");
printf("Atenção! O segundo atributo deve ser diferente do primeiro!\n");
printf("P - População\n");
printf("A - Área\n");
printf("B - PIB\n");
printf("T - Pontos Turísticos\n");
printf("D - Densidade Demográfica\n");

scanf(" %c", &segundoAtributo);

// Verifica se o jogador escolheu o mesmo atributo duas vezes
if (primeiroAtributo == segundoAtributo) {
    printf("Você escolheu o mesmo atributo!\n");
    return 1;
} else {

    // ----------- COMPARAÇÃO DO SEGUNDO ATRIBUTO -----------
    switch (segundoAtributo)
    {
case 'P':
case 'p':
resultado2 = franca.populacao > brasil.populacao ? 1 : 0;

    break;
case 'A':
case 'a':
resultado2 = franca.area > brasil.area ? 1 : 0;

    break;
case 'B':
case 'b':
resultado2 = franca.pib > brasil.pib ? 1 : 0;

    break;
case 'T':
case 't':
resultado2 = franca.pontos_turisticos > brasil.pontos_turisticos ? 1 : 0;

    break;
case 'D':
case 'd':
// Menor valor vence
resultado2 = franca.densidade_populacional < brasil.densidade_populacional ? 1 : 0;

    break;

default:
printf("\nOpção inválida!\n");
return 1;
    }
}

// Exibição dos atributos escolhidos
printf("\nPrimeiro atributo: %c", primeiroAtributo);
printf("\nSegundo atributo: %c", segundoAtributo);

// ----------- RESULTADO FINAL -----------
if(resultado1 == 1 && resultado2 == 1) {
    printf("\nParabéns, você venceu!!\n");
} else if (resultado1 != resultado2) {
    printf("\nEmpatou!\n");
} else {
    printf("\nInfelizmente, você perdeu!!\n");
}

    return 0;
}