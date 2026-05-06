#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
int opcao, palpite;
int numeroSecreto;
//regras, iniciar jogo, ver regras, sair

    printf("====Menu Principal====\n");
    printf("1. (Iniciar jogo)\n");
    printf("2. (Ver regras)\n");
    printf("3. (Sair do jogo)\n");
    printf("Escolha uma das opções acima:\n");
scanf("%d", &opcao);


switch (opcao)
{
case 1:
    srand(time(0));
    numeroSecreto = rand() % 10;
    
    printf("\nJogo iniciado!\n");
    printf("Digite um número de 0 a 9:\n");
    scanf("%d", &palpite);

 if (numeroSecreto == palpite)
    {
        printf("\nVocê acertou o número secreto!\n");
        printf("Número secreto: %d\n", numeroSecreto);
    } else {
        printf("\nVocê errou o número secreto\n");
        printf("Número secreto: %d\n", numeroSecreto);
    }
    break;
case 2:
    printf("*Explicação das regras*\n");
    break;
case 3:
    printf("Saindo do jogo ...\n");
    break;
default:
    printf("Opção invalida.\n");
    break;
}

    return 0;
}