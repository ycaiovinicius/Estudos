#include <stdio.h>

int main(){
char opcao;
float saldo = 1000;

    printf("Opção a: Verificar saldo\n");
    printf("Opção b: Fazer depósito\n");
    printf("Opção c: Fazer saque\n");
    printf("===Escolha uma opção===\n");
        scanf("%c", &opcao);

    
    switch (opcao) {
    case 'a':
        printf("\nVocê escolheu verificar saldo\n");
        printf("Seu saldo é: %.2f\n", saldo);
        break;
    case 'b':
        printf("Depósito feito com sucesso\n");
        break;
    case 'c':
        printf("Saque feito com sucesso\n");
        break;
    default:
        printf("Opção inválida\n");
        break;
    }

    return 0;
}