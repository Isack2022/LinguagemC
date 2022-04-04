//programar para calucular o PI
#include <stdio.h> //Biblioteca standard de Input/Output
#define PI 3.14159 //constante de PI
//A seguir a função de Main
int main(){

    float raio,area;//Duas variaveis declarada
    //mostrar na tela com printf
    printf("Digite o valor do raio do circulo e de ENTER:\n");
    //le o teclado com scanf; note o & em &raio
    scanf("%f", &raio); //Exemplo: 1.23 12.e-1

    /*a seguir mostrar na tela o valor do raio usando 12 coluas, e 2 decimais arredondados por ex. 1.576 e arredondado para 1.58 so na tela*/
    printf("Raio digitado é: %12.2f\n",raio);
    area = PI * raio * raio;
    
    printf("Area do circulo com raio %f é %f\n", raio, area); // Mostrar na tela
    return 0;
     
}//fim do main