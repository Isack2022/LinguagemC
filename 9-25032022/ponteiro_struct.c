//Programa para cadastra cliente com as seguintes dados:nomes,idade e e-mail
#include <stdio.h>
#include<stdlib.h>
void main(){
    struct cliente{//Sempre que usar struct(elemento composto) usar }; pois ele uma estrutura com informações
        char nome [150];
        char email [100];
        int idade;
    };
    //Varivel com elemento composto
    struct cliente novoCliente, *pNovoCliente;//Declaração de varivel de estrutura
    pNovoCliente = &novoCliente;
    printf("Entre com o nome do cliente:\n");
    scanf("%s", &pNovoCliente->nome);//Pegando o nome co cliente dentro de struct
    printf("Entre com a idade do cliente:\n");
    scanf("%d", &pNovoCliente->idade);
    printf("Entre com o email do cliente:\n");
    scanf("%s", &pNovoCliente->email);

    printf("O nome do cliente é %s\n", pNovoCliente->nome);
    printf("O e-mail do cliente é %s\n", pNovoCliente->email);
    printf("O idade do cliente é %d\n", pNovoCliente->idade); 
} 