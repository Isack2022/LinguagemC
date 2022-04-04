//Programa para ver se o usuário que tenha mais de 16 está com a saude boa

#include<stdio.h>//biblioteca inicial

/* Stdlib.h é um arquivo cabeçalho da biblioteca de propósito geral padrão da linguagem de programação C. Ela possui
funções envolvendo alocação de memória, controle de processos, conversões e outras.*/
#include<stdlib.h>

/*A int main() retorna um número inteiro em quanto a void main() não retorna nada. Tudo depende se seu 
programa irá retornar um número ou não.*/
void main (){
    char nome [30];
    int idade,BemAlimentado,resfriado;
    float peso;
    printf("Informe o nome: \n");
    scanf("%s",&nome);
    printf("Informe o peso: \n");
    scanf("%f",&peso);
    printf("Informe a idade: \n");
    scanf("%d",&idade);
    printf("Está bem alimentado? <1-SIM / 0-NAO>\n");
    scanf("%d", &BemAlimentado);
    printf("Está refriado? <1-SIM / 0-NAO>\n");
    scanf("%d", &resfriado);
    if (peso >= 50 && (idade >= 16 && idade <=69) && BemAlimentado && ! resfriado)
    printf("O voluntario %s está apto!\n", nome);
    else
    printf("O voluntario %s não está apto!\n", nome);

}