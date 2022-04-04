/*Programa para trabalhar com funções. Vams usar funçções com retorno, sem retorno, com argumentos(parâmetros),Sem agumentos*/
#include <stdio.h>
#include <stdlib.h>
void separadorHT(){
    for (int i = 0; i <= 70; i ++){
        printf("#");
    }
    printf("\n");
}
void separadorLinha(){
    for (int i = 0; i <=70; i++){
        printf("_");
    }
    printf("\n");
}
void pularLinha (int qtdVezes){
    for (int i =1 ; i <=qtdVezes; i++){
        printf("\n");
    }
}
char comparar(int v1,int v2){
    if (v1 > v2){
        printf("O primeiro número %d é maior que segundo número %d\n", v1, v2);
    }
    else if (v1 == v2){
        printf("O primeiro número %d é igual que o segundo número %d\n", v1, v2);
    }
    else{
        printf("O segundo número %d é maior que primeiro número %d\n", v2, v1);
    }
}
void main (){
    int n1, n2;
    system("clear");//Limpar a tela do terminal
    //chamando a função separadorHt
    separadorHT();
    printf("\n\t\tPrograma que exibe uma mensagem\n");
    //chamando a função separadorLinha
    separadorLinha();
    //chamando função pularLinha
    pularLinha(1);
    printf("Digite um número:\n");
    scanf("%d", &n1);
    printf("Digite outro número:\n");
    scanf("%d", &n2);
    pularLinha(1);
    //chamando a função comparar
    comparar(n1,n2);
    separadorLinha();
    separadorHT();
}