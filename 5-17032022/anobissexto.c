//Programa para para calcular o numero de anos bissextos em um periodo
#include <stdio.h>
int main(){
    int qtd = 0;
    int ano;

    for ( ano = 1960; ano <= 2022; ano++){//Laço de repetição
        if(ano % 4 == 0){
            printf("%d Ano bissexto\n",ano);
            qtd++;
        }
    }
    printf("Encotramos %d anos bissextos\n",ano);
    return 0; 
} 