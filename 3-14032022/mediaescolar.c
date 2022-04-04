/*Programa para calcular o resultado da situação do aluno se está aprovando ou reprovado.Vamos levar em consideração a 
nota do aluno e compará-la a média de aprovação da escolar.Caso a nota do aluno seja maior ou igual 7, então o aluno 
estára aprovado, caso contrário ele estára reprovado.*/

#include <stdio.h>//Biblioteca input/output
#define MEDIA 7.0 //Constante (sempre em letra maiúsculas)
int main(){
    float nota_aluno; // variavel
    printf("Digite a sua nota e tecle ENTER: \n");//nota do aluno
    scanf("%f",&nota_aluno);
    //Devio de fluxo com if(true) e com else(False)
    if (nota_aluno >= MEDIA){ // > maior, = igual, < menor e != diferente
        printf("Parabéns você está aprovado!\n"); //Aluno aprovado 
    }
    else{
        printf("Você foi reprovado!\n"); // Aluno reprovado
    }
    return 0;  
}// fim 