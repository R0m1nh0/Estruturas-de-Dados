#include <stdio.h>
#include <math.h>


int main(void){

  float a = 0;
  float b = 0;
  float c = 0;
  float x1 = 0;
  float x2 = 0;
  int controle =0;
  float *pA = &a;
  float *pB = &b;
  float *pC = &c;
  float *pX1 = &x1;
  float *pX2 = &x2;

  int raizes(float a, float b, float c, float *x1, float *x2);
  void le_notas(float *x, float *y, float *z);

  le_notas(pA, pB, pC);
  controle = raizes(a, b, c, pX1, pX2);

  if ( controle == 2){
    printf("Raizes: %f, %f\n",x1, x2);
  } else if(controle == 1){
      printf("Raize unica: %f\n",x1);}
    else{
      printf("não existem raizes reais");
    }

  return 0;
}

int raizes(float a, float b, float c, float *x1, float *x2){

  float D = b*b - (4*a*c);

  if( D >= 0){

    if(D != 0){
      *x1 = (-b + sqrtf(D))/(2*a);
      *x2 = (-b - sqrtf(D))/(2*a);
      return 2;
    }

    else{
        *x1 = (-b + sqrtf(D))/(2*a);
        *x2 = (-b - sqrtf(D))/(2*a);
        return 1;
    }
  }

  return 0;
}

void le_notas(float *x, float *y, float *z){

  short int i = 1;

  while(i){

    printf("digite o a ");
    scanf("%f", x);
    if ( *x !=0){break;}
    printf("valor de a invalido\n");

  }

  printf("digite o b ");
  scanf("%f", y);

  printf("digite o c ");
  scanf("%f", z);
}
