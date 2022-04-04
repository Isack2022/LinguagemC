//Priograma

#include<stdio.h>//biblioteca inicial

/* Stdlib.h é um arquivo cabeçalho da biblioteca de propósito geral padrão da linguagem de programação C. Ela possui
funções envolvendo alocação de memória, controle de processos, conversões e outras.*/
#include<stdlib.h>

/*A int main() retorna um número inteiro em quanto a void main() não retorna nada. Tudo depende se seu 
programa irá retornar um número ou não.*/
void main (){
    int destino, trecho;
    printf("Infome o destino conforme a tabela a seguir: \n");
    printf("1-Região Norte\t 3 região Centro-Oeste \n");
    printf("2-Região Nordeste\t 4 região Sul \n");
    scanf("%d", &destino);
    printf("Informe o trecho: <1-IDA ou 2- IDA E VOLTA>");
    scanf("%d", &trecho);
    if (destino == 1){
        if (trecho == 1)
           printf("Região Norte  [Ida] = 500,0");
        else
           printf("Região Norte  [Ida] = 900,00");
    }
    else if (destino == 2){
        if (trecho == 1)
           printf("Região Nordeste  [Ida] = 350,00");
        else
           printf("Região Nordeste  [Ida] = 650,00");
    }
    else if (destino == 3){
        if (trecho == 1)
           printf("Região Centro-Oeste  [Ida] = 350,0");
        else
           printf("Região Centro-Oeste  [Ida] = 600,00");
    }
   else{
      if(trecho == 1){
         printf("Região Sul [IDA] = 300,00");
      }
      else{
         printf("Região Sul [IDA E VOLTA] = 550,00");
      }
   }
}