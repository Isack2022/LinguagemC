//Programa tem objetivo par mostrar o salário de acordo com seu cargo
#include <stdio.h>//Biblioteca input/output

int main (){
    char cargo[30];//Variavel cadeia
    printf("Informe seu cargo e tecle ENTER: ");//Cargo
    scanf("%s", cargo);//Ler o printf usando %s que ler a variavel char quando tem mais de um caracter
    //Desvio de fluxo
    //if se, else não e else if se não 
    if (strcmp(cargo,"Diretor")==0){//Comparação
        printf("Seu salario é R$15.000,00\n");//mostrar na tela
    }
    else if (strcmp(cargo,"Gerente")==0){//comparação
        printf("Seu salário é R$12.000,00\n");//mostrar na tela
    } 
    else if (strcmp(cargo,"Analista")==0){//comparação
        printf("Seu salário é R$8.000,00\n");//mostrar na tela
    }
    else if (strcmp(cargo,"Assistente")==0){//comparação
        printf("Seu salário é R$4.000,00\n");//mostrar na tela
    }
     else if (strcmp(cargo,"Auxiliar")==0){//comaração
        printf("Seu salário é R$2.000,00\n");//mostrar na tela
    }
    else{//Se nenhua comparação for igual
        printf("Não há salário\n");//mostrar na tela
    }
    return 0; 
}//fim