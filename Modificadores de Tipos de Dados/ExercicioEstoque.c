#include <stdio.h>

int main(){

// Definição de produtos, estoques, valores unitários e estoque mínimo.
char produtoA[30] = "Produto A";
char produtoB[30] = "Produto B";

    unsigned int estoqueA = 1000;
    unsigned int estoqueB = 2000;

float valorA = 10.50;
float valorB = 20.40;

    unsigned int estoqueMinimoA = 500;
    unsigned int estoqueMinimoB = 2500;

double valorTotalA;
double valorTotalB;

int resultadoA;
int resultadoB;

// exibição das informações dos produtos
printf("Produto %s tem estoque %u e valor unitário é R$ %.2f\n", produtoA, estoqueA, valorA);
printf("Produto %s tem estoque %u e valor unitário é R$ %.2f\n\n", produtoB, estoqueB, valorB);


// comparação com o valor mínimo do estoque
resultadoA = estoqueA > estoqueMinimoA;
resultadoB = estoqueB > estoqueMinimoB;

printf("O produto %s tem estoque mínimo? (%d)\n", produtoA, resultadoA);
printf("O produto %s tem estoque mínimo? (%d)\n", produtoB, resultadoB);


// comparação entre valores totais dos produtos

valorTotalA = estoqueA * valorA;
valorTotalB = estoqueB * valorB;

printf("\nO valor total de A (R$ %.2f) é maior que o valor toral de B (R$ %.2f)? %d\n", valorTotalA, valorTotalB, valorTotalA > valorTotalB);


return 0;
}