//Bibliotecas necessárias
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Definido o valor de SIZE
#define SIZE 5

//Função que retorna um vetor alocado dinamicamente
float* Converter(float horas){
//alocando um vetor de float de tamanho 5
  float* str = (float*)malloc(SIZE*sizeof(float));
  
//Convertendo as horas nos meses, semanas, minutos, segundos e milisegundos
  str[0] = (int)(horas/720);
  str[1] = (int)(horas/168);
  str[2] = (horas*60);
  str[3] = (horas*3600);
  str[4] = (str[3]*1000);

//retornando o vetor
  return str;
  
}
  
int main(void) {
//Variavel 
  float horas;
//Ponteiro
  float* vetor;

//Recebendo do teclado o valor das horas
  printf("digite o numero de horas : ");
  scanf("%f", &horas);

//O ponteiro recebe o valor da função o vetor
  vetor = Converter(horas);

//Printando o vetor
  for(int i=0; i< SIZE; i++)
    printf("%.1f, ", vetor[i]);
  
//Liberando a memória alocada
  free(vetor);
  
  return 0;
}
