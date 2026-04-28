#include <stdio.h>

int main(){
int dia;

printf("Digite o valor do dia\n");
scanf("%d", &dia);

switch (dia) {
case 1:
    printf("domingo\n");
    break;
case 2:
    printf("Segunda-feira\n");
    break;
case 3:
    printf("Terça-feira\n");
    break;
case 4:
    printf("Quarta-feira\n");
    break;
case 5:
    printf("Quinta-feira\n");
    break;
case 6:
    printf("Sexta-feira\n");
    break;
case 7:
    printf("Sabado\n");
    break;
default:
    printf("Valor inválido\n");
}

    return 0;
}