//Programa de operação matematicos
#include <stdio.h> //Biblioteca standard de Input/Output

int main(){
    int n1,n2,soma,sub,div,mut;                            //Declaração var n1 e n2 inteira

    printf("Digite um valor inteiro e Enter:\n");          //mostrar na tela
    scanf("%d", &n1);                                    //ler o primeiro número, NAO digitar NADA entre %d 
    printf("\nDigite um segundo valor inteiro e Enter:\n");//mostrar na tela
    scanf("%d", &n2);                                      //Ler o segundo número,NAO digita Nada entre %d

    soma = n1 + n2;
    printf("Valor da soma é: %d\n",soma); //Soma
    sub = n1 - n2;
    printf("Valor da subtração: %d\n",sub); //Subtração
    mut = n1 * n2;
    printf("Valor da mutiplicalção: %d\n",mut); //Mutipplicação
    div = n1 / n2;
    printf("Valor da divisão: %d\n",div); //Divisão
    return 0; 
}//fim
  