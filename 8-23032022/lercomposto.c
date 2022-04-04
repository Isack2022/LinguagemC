//Programa que ler entrada de texto
#include <stdio.h>//biblioteca

/*Stdlib.h é um arquivo cabeçalho da biblioteca de propósito geral padrão da linguagem de programação C. Ela possui
funções envolvendo alocação de memória, controle de processos, conversões e outras.*/
#include <stdlib.h>

/*A int main() retorna um número inteiro em quanto a void main() não retorna nada. Tudo depende se seu 
programa irá retornar um número ou não.*/
void main (){
    char produto[30];// varivel char(Caracter)
    printf("Informe o nome do produto:\n");//Mostrar na tela
    scanf("\n%[^\n]%s", &produto);// ler varivel char (caracter)
    printf("Produto: %s\n", produto); //mostra na tela
}//fim