#include <stdio.h>
    /*
    Este código vai verificar se uma pessoa está qualificada
    para receber um desconto especial.
    para a pessoa ter o desconto, ela deve ter:
    - mais de 60 anos ou menos de 18 anos
    - ter uma renda mensal a baixo de 2000 reais
    */

int main() {
  int idade;
  float renda;

  printf("Digite a sua idade:\n");
  scanf("%d", &idade);
    printf("Digite a sua renda mensal:\n");
  scanf("%f", &renda);

  if (idade > 60 || idade < 18) {
    if (renda < 2000) {
      printf("Você está qualificado para o desconto especial!\n");
    } else {
      printf("Desculpe, você não tem direito ao desconto devido à sua renda.\n");
    }
  } else {
    printf("Desculpe, você não tem direito ao desconto devido à sua idade.\n");
  }

    return 0;
}