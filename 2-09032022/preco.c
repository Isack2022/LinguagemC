//Programa que calcula valor do desncoto do produto
#include <stdio.h> //Biblioteca

int main(){
    float valpr, valf, por; //Valores
    int vald; //porcetagem
    printf("Informe o valor do produto e dar ENTER:\n");//Valor do produto
    scanf("%f",&valpr);//Ler o valor do produto

    printf("Informe a porcetagem do desconto e dar ENTER:\n");//Valor da porcetagem
    scanf("%f", &por);//Ler porcetagem
    
    valf = valpr - (valpr * (por/(float)100));//Conta da porcetagem
    vald =  valpr - valf;
    printf("O valor do produto original é %.2f ,com o valor do desconto fica %d entã(o o produto vai custar: %.2f\n", valpr, vald, valf);//Valor final do produto
    return 0;
}//fim     