#include <stdio.h>
#include <stdlib.h>
void soma (int array[], int tamanho){
    int rs = 0;
    for(int i = 0; i < tamanho; i++){
        rs += array[i];
    }
    printf("A soma de todo vetor é %d\n",rs);
}
void maiorValor (int array[],int tamanho){
    int m = array[0];
    for(int i = 1; i < tamanho; i++){//Vai compara para ver qual é maior do vetor
        if(array[i] > m){
            m = array[i];
        }
    }
    printf("O maior valor é %d\n", m);
}
void menorValor (int array[],int tamanho){//Vai compara para ver qual é menor do vetor
    int m = array[0];
    for (int i = 1; i < tamanho; i++){
        if(array[i] < m){ 
            m = array[i];
        }
    }
    printf("O menor valor é %d\n", m);
}
void ordenacao (int valores[],int tamanho){//Vai ordenar o menor número do vetor para o maior
    for(int j = 1; j < tamanho; j++){
        int x = valores[j];//A variavel dentro do for ele só funcionar dentro do for
        int i;
        for(i = j -1; i >= 0 && valores[i] > x; i--){
            valores[i+1] = valores[i];
        }
        valores[i+1] = x;//colocado de volta no vetor J
    }
}