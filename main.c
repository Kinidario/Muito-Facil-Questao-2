#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 5

float* Converter(float horas){
  float* str = (float*)malloc(SIZE*sizeof(float));
  
  str[0] = (int)(horas/720);
  str[1] = (int)(horas/168);
  str[2] = (horas*60);
  str[3] = (horas*3600);
  str[4] = (str[3]*1000);

  return str;
  
}
  
int main(void) {
  float horas;

  float* vetor;

  printf("digite o numero de horas : ");
  scanf("%f", &horas);

  vetor = Converter(horas);

  for(int i=0; i< SIZE; i++)
    printf("%.1f, ", vetor[i]);
    

  free(vetor);
  
  return 0;
}