#include <stdio.h>
 
int main() {
    int idade = 19;
    float altura = 1.65;
    double SaldoBancario = 3000.50;
    char TipoSanguineo = 'A';
    char nome[20] = "Caio";
 
    printf("Idade: %d anos\n", idade);
    printf("Altura: %.2f metros\n", altura);
    printf("Saldo Bancário: R$ %.2f\n", SaldoBancario);
    printf("Tipo Sanguineo: %c positivo\n", TipoSanguineo);
    printf("Nome: %s\n", nome);
 
    return 0;
}