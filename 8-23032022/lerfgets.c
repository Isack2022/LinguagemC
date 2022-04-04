//Programa que ler entrada de texto uado fgets
#include <stdio.h>

/*Stdlib.h é um arquivo cabeçalho da biblioteca de propósito geral padrão da linguagem de programação C. Ela possui
funções envolvendo alocação de memória, controle de processos, conversões e outras.*/
#include<stdlib.h>

/*A int main() retorna um número inteiro em quanto a void main() não retorna nada. Tudo depende se seu 
programa irá retornar um número ou não.*/
void main(){
    char produto[30];// varivel char(Caracter)
    printf("Informe o nome do produto:\n");//Mostrar na tela
    /* A função fgets é semelhante à função gets(), porém, além dela poder fazer a leitura a partir de um arquivo de 
    dados e incluir o caracter de nova linha na string, ela ainda especifica o tamanho máximo da string de entrada.*/
    fgets(produto, 30,stdin);
    printf("Produto: %s\n", produto); //mostra na tela
}