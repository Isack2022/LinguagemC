//Programa que o usuário informe seu cargo e seu salário atual para reajute do seu salário

#include<stdio.h>//biblioteca inicial

/* Stdlib.h é um arquivo cabeçalho da biblioteca de propósito geral padrão da linguagem de programação C. Ela possui
funções envolvendo alocação de memória, controle de processos, conversões e outras.*/
#include<stdlib.h>

/*A int main() retorna um número inteiro em quanto a void main() não retorna nada. Tudo depende se seu 
programa irá retornar um número ou não.*/
void main (){
    int cargo;// varivel 
    float salAtual, reajuste;// varivel de número quebrados
    printf("Infome seu cargo:\n");
    scanf("%d", &cargo);// ler int
    printf("Infome seu salário:\n");
    scanf("%f", &salAtual);//ler float

    if (cargo == 1)//se o cargo for 1 então vai ter um reajuste de 7%
        reajuste = (salAtual*7)/10;
    else if (cargo == 2)// se não for 1 então vai ter um reajuste de 9%
        reajuste = (salAtual*9)/10;
     else if (cargo == 3)// se não for 1 e 2 então vai ter um reajuste de 5%
        reajuste = (salAtual*5)/10;
     else// se não for nenhum 1, 2 e 3 então vai ter um reajuste de 12%
        reajuste = (salAtual*12)/10; 
        printf("O reajuste é: %f\n", reajuste);
        printf("O seu novo salário: %f\n", salAtual + reajuste); 
    
}