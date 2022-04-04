/*Faça um programa em C que realize a soma de todos os valores inteiro de 1 a n, sendo que n deve ser informado pelo 
usuário*/
#include <stdio.h>
#include<stdlib.h>
void main (){
    int i =1, n , soma =0;
    printf("Informe o número:\n");
    scanf("%d", &n);
    while ( i <= n){
        soma += i;
        i++;
    }
    printf("Soma: %d \n", soma);
} 