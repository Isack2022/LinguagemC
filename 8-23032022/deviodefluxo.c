/*Programa de devio de fluxo que receba um número inteiro e verifique esse número é maior que 20, em caso afirmativo
o programa deverá imprimir a messagem "Maior que 20"*/

#include <stdio.h>
/* Stdlib.h é um arquivo cabeçalho da biblioteca de propósito geral padrão da linguagem de programação C. Ela possui
funções envolvendo alocação de memória, controle de processos, conversões e outras.*/
#include<stdlib.h>

/*A int main() retorna um número inteiro em quanto a void main() não retorna nada. Tudo depende se seu 
programa irá retornar um número ou não.*/
void main (){
    int n;//varivel
    printf("Informe o número: \n");//mostrar na tela
    scanf("%d", &n);//ler int

    if (n > 20){// Se o número for maior que 20
        printf("O número %d é maior que 20\n", n);
    } 
}