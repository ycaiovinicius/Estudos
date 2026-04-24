#include <stdio.h>

/*
Msys
Int = 4 bytes
long int = 4 bytes
long long int = 8 bytes

Ubuntu
int = 4 bytes
long int = 8 bytes
long long int = 8 bytes
*/


int main(){

    int NumeroNormal = 2147483647; //valor máximo de int
    long int NumeroGrande = 2147483647;

    printf("Numero Regular: %d\n", NumeroNormal);
    printf("Numero Grande: %ld\n", NumeroGrande);

    NumeroGrande = 2147483648; //valor máximo de int

    printf("\nNumero Grande: %ld\n", NumeroGrande);


return 0;
}