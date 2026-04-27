#include <stdio.h>

int main(){
int a = 10;
/* 
- Se a variável for positiva, ao usar "!NOT", a variável vai virar negativa(falso).
- Se a variável ja for valor negativo, então ela vai receber valor positivo(Verdadeiro).
*/

    if (!(a > 0)){
        printf("A variável é positiva\n");
    } else {
        printf("A variável é negativa\n");
    }

return 0;
}