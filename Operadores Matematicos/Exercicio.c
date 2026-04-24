#include <stdio.h>

int main(){

int numeroX = 50;
int numeroY = 5;

//Operadores aritméticos
int  soma = numeroX + numeroY;
int subtracao = numeroX - numeroY;
int multiplicacao = numeroX * numeroY;
int divisao = numeroX / numeroY;

            //Operadores  de Atribuição
            numeroX += 10; //O valor será 60
            numeroY *= 5; //O valor será 25
            
                            //Operadores de incremento e decremento
                            numeroX++;
                            numeroY--;
                                                       
    //Exibição de Resultados
printf("Soma: %d\n", soma);
printf("Subtração: %d\n", subtracao);
printf("Multiplicação: %d\n", multiplicacao);
printf("Divisão: %d\n", divisao);

printf("Novo Valor de X (Após += 10 e ++) %d\n",numeroX);
printf("Novo Valor de Y (Após *= 5 e --) %d\n",numeroY);


return 0;
}