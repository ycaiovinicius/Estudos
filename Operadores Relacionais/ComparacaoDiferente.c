#include <stdio.h>

int main(){


//Estão em conversões implicitas
int x = 5;
float y = 5.0;
char c = 'a';

printf("x >= y: %d\n", x >= y);
printf("x == y: %d\n", x == y);
printf("x != y: %d\n\n", x != y);

printf("O valor de %c na tabela ASCII é: %d\n", c, c);
printf("x >= c: %d\n", x >= c);
printf(" x == c: %d\n", x == c);
printf("x != c: %d\n", x != c);


return 0;
}