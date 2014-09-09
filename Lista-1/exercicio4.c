#include <stdio.h>

int main(void){

  float var1 = 0;
  float var2 = 0;
  float mediaSimples;
  float mediaPonderada;
  float *pVar1 = &var1;
  float *pVar2 = &var2;
  float *pMs = &mediaSimples;
  float *pMp = &mediaPonderada;

  void le_notas(float *x, float *y);
  void calc_media(float *x, float *y,float *media_simples, float *media_ponderada);
  void exibe_dados( float x, float y);

  le_notas(pVar1, pVar2);
  calc_media(pVar1, pVar2, pMs, pMp);
  exibe_dados(mediaSimples, mediaPonderada);

  return 0;
}

void le_notas(float *x, float *y){

  printf("digite a primeira nota ");
  scanf("%f", x);

  printf("digite a segunda nota ");
  scanf("%f", y);

}

void calc_media(float *x, float *y,float *media_simples, float *media_ponderada ){

  *media_simples = (*y + *x)/2;
  *media_ponderada = (*x + *y + *y)/3;

}

void exibe_dados( float x, float y){

  printf("media simples = %f\nmedia ponderada = %f\n",x,y);

}
