/*Programa para conveção de decimal para binario(Sempre que for fazer um programa de converção de bínario usar int pois 
int não quebrar número)*/
#include <stdio.h>
int main (){
    int decimal = 0, resto = 1, mutiplicador =1, resultado = 0;

    printf("Digite um número e tecle ENTER:\n");
    scanf("%d",&decimal);
    while (decimal!=0){//Vai dividir até chegar no número 0
        resto = decimal % 2;//Pega resto da divisão que sempre vai ser 0 ou 1 pois é um conversor de binario 
        decimal = decimal/2;//divisão para calculo do binario
        resultado = resultado + resto * mutiplicador;// Aqui é para saber o reslutado do calculo
        mutiplicador = mutiplicador * 10;//Essa parte serve para colocar o número 1 na frente
    }
    printf("%d\n", resultado); 
    return 0;
} 
    