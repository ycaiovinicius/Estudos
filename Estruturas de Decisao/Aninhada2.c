#include <stdio.h>

int main(){
    int idade, dependente;
    float renda;

    // Primeira condição: Idade do usuário estar entre 18 e 65 anos.
    // segunda condição: Renda do usuário ser menor que 3000.
    // Terceira condição: Número de dependentes ser maior que 2.

    printf("Digite sua idade:\n");
    scanf("%d", &idade);
        printf("Digite sua renda:\n");
        scanf("%f", &renda);
            printf("Digite seu numero de dependentes:\n");
            scanf("%d", &dependente);


if (idade >= 18 && idade < 65) {
    if (renda < 3000) {
        if (dependente > 2) {
            printf ("Você atente a todos os critérios\n");
    } else {
        printf("Você não possui dependentes suficiente.\n");
    }
} else {
    printf("Você ñão atende aos critérios da renda.\n");
}
} else {
    printf("Você não atende aos critérios de idade\n");
}

    return 0;
}