#include <stdio.h>

int main(){
    int dia;

printf("Digite o valor do dia\n");
scanf("%d", &dia);

if (dia == 1) {
    printf("domingo\n");
} else if (dia == 2) {
    printf("Segunda-feira\n");
} else if (dia == 3) {
    printf("Terça-feira\n");
} else if (dia == 4) {
    printf("Quarta-feira\n");
} else if (dia == 5) {
    printf("Quinta-feira\n");
} else if (dia == 6) {
    printf("Sexta-feira\n");
} else if (dia ==7) {
    printf("Sabado\n");
} else {
    printf("Valor inválido\n");
}

    return 0;
}