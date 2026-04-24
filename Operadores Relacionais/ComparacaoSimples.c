#include <stdio.h>

int main(){

/*
Operadores Relacionais:
    > (maior que)
    < (menor que)
    >= (maior ou igual a)
    <= (menor ou igual a)
    == (igual a)
    != (diferente de)
*/

int a = 10;
int b = 20;


    printf("a > b: %d\n", a > b);
    printf("a < b: %d\n", a < b);
    printf("a >= b: %d\n", a >= b);
    printf("a <= b: %d\n", a <= b);
    printf("a == b: %d\n", a == b);
    printf("a != b: %d\n", a != b);

//a > b: 0 indica que a não é maior que b.
//a < b: 1 indica que a é menor que b.
//a == b: 0 indica que a não é igual a b.
//a != b: 1 indica que a é diferente de b.

    return 0;
}