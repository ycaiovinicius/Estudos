#include <stdio.h>

int main(){

    int a = 5;
    int b = 10;
    int c = c;

/*
a > 0: verdadeiro
b < 0: verdadeiro
verdadeiro && verdadeiro: verdadeiro (Isso testa a resposta dos dois lados.)
c == 0: falso
Situação: verdadeiro || falso: verdadeiro


    
*/


    if (a > 0 && b < 0 || c == 0){
        printf("A condição é verdadeira\n");
} else {
    printf("A condição é falsa\n");
}

    return 0;
}