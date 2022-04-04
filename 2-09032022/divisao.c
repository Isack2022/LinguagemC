//Programa de divisao com numero quebrados
#include <stdio.h> //Biblioteca standard de Input/Output

int main(){
    float a, b, c; // numeros e a divisao
    printf("Digite um numero e dar ENTER:\n");//Usario escrever o numero
    scanf("%f",&a);//Ler o valor de a
    printf("Digite um numero e dar ENTER:\n");//Usario escrever o numero
    scanf("%f",&b);//Ler o valor B
    c = a / b;//Calculo de divisao
    printf("O resultado é: %.2f \n", c);//Resultado da divisao
    return 0; 
}//fim 
 