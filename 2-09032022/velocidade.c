//Programa que calcula velocidade média
#include <stdio.h>//Biblioteca

int main(){
    int temp, dis, vel; //Valores inteiros

    printf("Digite valor do distancia(em quilometro) e dar ENTER:\n");//Usuario escrever
    scanf("%d",&dis);//Ler o espaço
 
    printf("Digite valor do tempo e dar ENTER:\n"); //Usuario escrever
    scanf("%d",&temp); //Ler o tempo

    vel = dis / temp; //Calculo da velociade média
    printf("A velocidade média é: %d KM/H\n", vel); //Resultado
    return 0;
}//Fim  