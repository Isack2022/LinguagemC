//Programa pede ao usuário que digite seu nome. Ao fazer será alocado na variavel nome.
#include<stdio.h>//Biblioteca input/output

int main (){
    char username[100];//Variavel cadeia
    printf("Digite seu nome e tecle ENTER:\n");//Nome completo
    scanf("%s",username);// Ler o printf usando %s que ler a variavel char quando tem mais de um caracter
    printf("Seu nome: %s\n", username);//Mostrando o nome completo
    return 0;
}//fim