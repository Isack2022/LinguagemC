/*Programa que faz referência a uma determinada posição do vetor, devemos utilizar o nome do array e seu respectivo
índice.*/
#include<stdio.h>
#include <stdlib.h>
void main(){
      float notas[5] = {7, 8, 9.5, 9.9, 5.2};
      // declarando e inicializando o vetor notas
      
      printf("Exibindo os Valores do Vetor: \n");
      
      for(int i = 0 ; i <= 4; i++)
      {
        printf("notas[%d] = %.1f\n",i, notas[i]);
      }  
}