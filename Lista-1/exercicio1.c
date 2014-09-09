#include <stdio.h>

int main(void){

  int num1 = 0;
  int num2 = 0;

  printf("digite o primeiro numero");
  scanf("%i", &num1);

  printf("digite o segundo numero");
  scanf("%i", &num2);

  int *pnum1 = &num1;
  int *pnum2 = &num2;

  void trocarValores(int *x, int *y);

  trocarValores(pnum1, pnum2);

  printf("numero 1 = %i\nnumero 2 = %i\n",num1,num2);

  return 0;
}

void trocarValores(int *x, int *y){

  int aux = 0;
  aux = *x;
  *x = *y;
  *y = aux;

}

