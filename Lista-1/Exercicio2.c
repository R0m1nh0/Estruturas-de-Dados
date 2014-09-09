#include <stdio.h>

int main(void){

  int var1 = 0;
  int var2 = 0;

  printf("digite o primeiro numero");
  scanf("%i", &var1);

  printf("digite o segundo numero");
  scanf("%i", &var2);


  int *pVar1 = &var1;
  int *pVar2 = &var2;

  int menorMaior(int *x, int*y);

  var1, var2 = menorMaior(pVar1,pVar2);

  printf("maior valor = %i\nmenor valor = %i\n",var1,var2);

  return 0;
}

void trocarValores(int *x, int *y){

  int aux = 0;

  aux = *x;
  *x = *y;
  *y = aux;

}

int menorMaior(int *x, int*y){

  void trocarValores(int *x, int *y);

  if(*x < *y){
        trocarValores(x, y);
  }

  return *x, *y;

}

