#include <stdio.h>

int main(){

    float numero1 = 10.2;
    int numero2 = 10;

// Tipos diferentes, conversão implicita
printf("numero1 > numero2: %d\n", numero1 > numero2);
printf("numero1 == numero2: %d\n\n", numero1 == numero2);


// tipo diferentes, conversão EXPLICITA
printf("USANDO CASTING (CONVERSÂO EXPLICITA:\n");
printf("numero1 > numero2: %d\n", (int)numero1 > numero2);
printf("numero1 == numero2: %d\n", (int)numero1 == numero2);


return 0;
}