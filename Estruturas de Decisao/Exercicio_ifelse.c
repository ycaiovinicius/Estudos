#include <stdio.h>

int main(){

    float temperatura, umidade;
    unsigned int estoque, estoqueMinimo = 1000;

    // entrada de dados
printf("===Entre com a temperatura===\n");
scanf("%f", &temperatura);

printf("===Entre com a umidade===\n");
scanf("%f", &umidade);

printf("Entre com o estoque===\n");
scanf("%u", &estoque);

if (temperatura > 30) {
    printf("A temperatura está alta!\n");
} else {
    printf("A temperatura está dentro dos parametros.\n");
}

if (umidade > 50) {
    printf("Umidade elevada!\n");
} else {
    printf("Umidade está dentro dos parametros\n");
}

if (estoque > estoqueMinimo) {
    printf("Estoque normal");
} else {
    printf("Estoque abaixo do mínimo!\n");
}

    return 0;
}