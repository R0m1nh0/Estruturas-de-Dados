#include <stdio.h>

int main(void){

  int A = 0;
  int B = 0;
  int *pA = &A;
  int *pB = &B;

  void le_notas(int *x, int *y);
  void func(int *x, int *y);

  le_notas( pA, pB);
  func( pA, pB);

  printf("valor de A = %i\nvalor de B = %i\n",A,B);

  return 0;
}

void le_notas(int *x, int *y){

  printf("digite o primeiro numero ");
  scanf("%i", x);

  printf("digite o segundo numero ");
  scanf("%i", y);
}

void func(int *x, int *y){

  *x += *y;

}
