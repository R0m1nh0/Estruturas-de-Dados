#include <stdio.h>

int main(void){

  int a = 0;
  int b = 0;
  int *pA = &a;
  int *pB = &b;
  int soma;

  void le_notas(int *x, int *y);
  int somaDobro(int *x, int *y);

  le_notas(pA, pB);
  soma = somaDobro(pA, pB);

  printf("%i\n", soma);

  return 0;
}

void le_notas(int *x, int *y){

  printf("digite o primeiro numero ");
  scanf("%i", x);

  printf("digite o segundo numero ");
  scanf("%i", y);
}

int somaDobro(int *x, int *y){

  *x = 2*(*x);
  *y = 2*(*y);

  return *x + *y;
}
