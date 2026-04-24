#include <stdio.h>

int main(){
int nota1, nota2, nota3;
float media;

    //Entrada de Dados
        printf("***CALCULE SUA MÈDIA AQUI***\n");
        printf("Insira sua primeira nota:\n");
            scanf("%d", &nota1);

                printf("Insira sua segunda nota:\n");
                    scanf("%d", &nota2);

                        printf("Insira sua terceira nota:\n");
                            scanf("%d", &nota3);

            //Calculando a média
            media = (float) (nota1 + nota2 + nota3) / 3;

    //Exibindo Resultado da média
    printf("Sua média é: %.1f\n", media);

        if (media >= 7) {
            printf("Parabéns, você passou\n");
        } else {
            printf("Infelizmente, você não passou");
        }

    return 0;
}