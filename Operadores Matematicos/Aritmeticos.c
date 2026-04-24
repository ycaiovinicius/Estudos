#include <stdio.h>

int main(){
    /*
    Soma (+)
    subtração (-)
    Multiplicação (*)
    Divisão (/)
    */

int numero1, numero2;
int soma, subtracao, multiplicacao, divisao;

                            //ENTRADA DE DADOS
                            printf("Entre com o número 1: \n");
                            scanf("%d", &numero1);
                            printf("Entre com o número 2: \n");
                            scanf("%d", &numero2);

    //Operação Soma
    soma = numero1 + numero2;

    //Operação Subtração
    subtracao = numero1 - numero2;

    //Operação Multiplicação
    multiplicacao = numero1 * numero2;

    //Operação divisão
    divisao = numero1 / numero2;


                            //SAIDA DE DADOS
                            printf("A soma é: %d\n", soma);
                            printf("A subtração é: %d\n", subtracao);
                            printf("A multiplicação é: %d\n", multiplicacao);
                            printf("A divisão é: %d\n", divisao);

}