//Programa de média com 10 números
#include <stdio.h>
#include<stdlib.h>
void main (){
    float num, soma = 0, media = 0;
    //Inicio do laço for
    for(int i = 1; i <= 10; i++){
        //A partir deste ponto são as intruções que devem ser executadas nas interações
        printf("Informe o número: \n");
        scanf("%f",&num);
        soma +=num;
    }
    //A media deve ser calculada apos interação
    media = soma / 10;
    printf("A media é: %f\n", media);
}