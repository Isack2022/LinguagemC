//Programa de soma de valores
#include <stdio.h>//biblioteca

/*Stdlib.h é um arquivo cabeçalho da biblioteca de propósito geral padrão da linguagem de programação C. Ela possui
funções envolvendo alocação de memória, controle de processos, conversões e outras.*/
#include <stdlib.h>

/*A int main() retorna um número inteiro em quanto a void main() não retorna nada. Tudo depende se seu 
programa irá retornar um número ou não.*/
void main (){
    int soma, n1, n2;//Variaveis
    printf("Informe o primeiro número: \n");//Mostrar na tela
    scanf("%d",&n1);//Ler a variavel
     printf("Informe o primeiro número: \n");
    scanf("%d",&n2);
    soma = n1 + n2;// A soma 
    printf("O resultado da soma: %d\n",soma);//O resultado da soma mostrando na tela

}//fim 