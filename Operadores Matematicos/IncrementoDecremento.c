#include <stdio.h>

int main(){
/*
Incremento (++)
Pré-incremento ++a
Pós-incremento a++
Decremento(--)
Pré-decremento --a
Pós-decremento a--
*/

int numero1 = 1, resultado;



     printf("Antes incremento %d\n", numero1);
     //numero1 = numero1 +1;
     //numero1 += 1;
    resultado = numero1++;
     //printf("Após incremento %d\n", numero1);
     printf ("Após pós-incremento numero1: %d - resultado: %d\n", numero1, resultado);

     //numero1 = numero1 -1;
     //numero1 -= 1;
     //numero1--;
      //printf("Após decremento %d\n", numero1);
}