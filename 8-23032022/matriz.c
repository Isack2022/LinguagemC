/*Faça um programa em C que imprima uma matriz de 4 linha por 4 colunas, sendo que na primeira linha devem ser impressos
os valores 1 á 4 e partir da segunda linha, os valores impressos devem ser múltiplo da linha anterior.*/
#include <stdio.h>
#include <stdlib.h>
void main (){
    int i, j;
    //Inicio do laço do primeiro for
    for (j=1;j<=4;j++){
        if (j < 4){
            printf("%d\t", j* i);
        }
        else{
            printf("%d\n",j*i);
        }
    }
}