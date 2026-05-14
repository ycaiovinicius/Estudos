#include <stdio.h>

int main(){
    int opcao;
    float nota1, nota2, nota3, media;

// Menu interativo
    printf("Menu de Gerenciamento de estudante\n");
    printf("1. (Calcular Média)\n");
    printf("2. (Determinar Status)\n");
    printf("3. (Sair)\n");
    printf("Escolha uma opção\n");
    scanf("%d", &opcao);



    switch (opcao)
    {
    case 1: // Calcula a média através da entrada e saída de dados
    printf("\n==Calculando a Média==\n");
            printf("Digite a primeira nota:\n");
                scanf("%f", &nota1);
                    printf("Digite a segunda nota:\n");
                        scanf("%f", &nota2);

        // Testar a condição se a nota é >= 0 e <= 10
        if( (nota1 >= 0 && nota1 <= 10) && (nota2 >= 0 && nota2 <= 10) ){
            media = (nota1 + nota2 + nota3) / 3;   // calculando a média
            printf("Sua nota é: %.1f\n", media);
        } else {
            printf("Valores errados, entre com números de 0 a 10!\n");
        }
        break;
    case 2: // Determina se o usuário foi aprovado através da média calculada.
        printf("\n==Determinar Status==\n");
            printf("Digite sua média:\n");
                scanf("%f", &media);
                    media >= 7 ? printf("Parabéns, Aprovado!\n") : printf("Reprovado\n"); // Exibe o resultado
        break;
    case 3: // Opção para sair
        printf("Saindo do programa...\n");
        break;
    
    default:
        printf("Opção inválida\n");
        break;
    }

    return 0;
}