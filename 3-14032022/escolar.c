/*Programa para calcular o resultado da situação do aluno se está aprovando,reprovado ou de recuperação.Vamos levar em 
consideração a nota do aluno e compará-la a média de aprovação da escolar.Caso a nota do aluno seja maior ou igual 7,
então o aluno estára aprovado, caso a nota dele seja 4 ou menor de ele estára reprovado, se não tiver nenhum dois ele
estará com rcuperação.*/

#include <stdio.h>//Biblioteca input/output
#define APROVADO 7.0 //Constante (sempre em letra maiúsculas)
#define REPROVADO 4.0//Constante (sempre em letra maiúsculas)

int main(){
    float n1, n2, n3 , n4 ,nota_final; // variavel

    printf("Digite a sua nota do primeiro bismetre e tecle ENTER: \n");//nota do aluno
    scanf("%f",&n1);
    printf("Digite a sua nota do segundo bismetre e tecle ENTER: \n");//nota do aluno
    scanf("%f",&n2);
    printf("Digite a sua nota do terceiro bismetre e tecle ENTER: \n");//nota do aluno
    scanf("%f",&n3);
    printf("Digite a sua nota do quarto bismetre e tecle ENTER: \n");//nota do aluno
    scanf("%f",&n4);
    nota_final = ((n1 + n2 + n3 + n4)/4);

    //Desvio de fluxo com if(true) e com else(False)
    if (nota_final >= APROVADO){ // > maior, = igual, < menor e != diferente
        printf("Parabéns o aluno está aprovado!Sua nota foi: %2.f\n", nota_final); //Aluno aprovado 
    }
    else if (nota_final <= REPROVADO){
        printf("O aluno foi reprovado!Sua nota foi: %.2f\n", nota_final); // Aluno reprovado
    }
    else{
        printf("O aluno está em recuperação! Sua nota foi:%.2f\n",nota_final);//aluno em recuperação
    }
    return 0;
} 
 