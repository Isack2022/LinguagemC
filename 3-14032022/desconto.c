/* Programa dpara calcular o desconto de um funcionario. Onde o salário sendo maior que 5000, terá um desconto de 5%. 
Caso contrário não haverá desconto*/
#include <stdio.h>//biblioteca input/output
#define LIMITE 5000 //Constante (Sempre maiscúla)
int main (){
    float salario, des;// variavies
    printf("Informe o salário do funcionário:\n");//Salario funcionario
    scanf("%f",&salario);   
    if (salario > LIMITE){
        printf("O desconto do salário do funcionario vai será de: %.2f\n", (salario*((float)5/(float)100)));
        printf("O novo salário do funcionário será de: %.2f\n", salario -(salario*((float)5/(float)100)));
    }
    else{
        printf("O salário do funcionário não mudar\n");
    }
    return 0; 
}  