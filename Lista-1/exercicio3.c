#include <stdio.h>

int main(void){

  int var1 = 0;
  int var2 = 0;
  int var3 = 0;

  printf("digite o primeiro numero");
  scanf("%i", &var1);

  printf("digite o segundo numero");
  scanf("%i", &var2);

  printf("digite o segundo numero");
  scanf("%i", &var3);

  int *pVar1 = &var1;
  int *pVar2 = &var2;
  int *pVar3 = &var3;

  int ordena(int *x, int *y, int *z);

  ordena(pVar1,pVar2,pVar3);

  printf("%i,%i,%i",var1,var2,var3);

  return 0;
}

void trocarValores(int *x, int *y){

  int aux = 0;
  aux = *x;
  *x = *y;
  *y = aux;

}

int ordena(int *x, int *y, int *z){
 int aux = 0;
 void trocarValores(int *x, int *y);

 if(*x != *y || *y != *z){
    if(*x > *y){

        trocarValores(x, y);
    }

    if(*y > *z){

        trocarValores(y, z);
    }

    if(*x > *y){

        trocarValores(x, y);
    }
    return 0;
 }

 return 1;
}
