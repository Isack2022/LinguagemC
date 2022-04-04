//Programa para exibir o salário do cargo de acordo com a escolha do usário
#include <stdio.h>
int main (){
    int opcao = 0;

    // comados para limpar a tela
    system("clear");// clear screen(Limpa tela)
    printf("####################################################");
    printf("\n#\t Programa para exibir salário\t\t  #\n");
    printf("####################################################");
    printf("\n Escolha um dos cargos abaixo digitando o número correspondente\n");
    printf("\t1 - Diretor\n");
    printf("\t2 - Gerente\n");
    printf("\t3 - Analista\n");
    printf("\t4 - Assitente\n");
    printf("\t5 - Auxiliar\n");
    printf("--------------------------------------------------------------------------\n");
    scanf("%d",&opcao);
    switch (opcao){
    case 1:
    printf("O salario do Direitor é de R$15.000,00\n");
        break;
    case 2:
    printf("O salario do Gerente é de R$12.000,00\n");
        break;
    case 3:
    printf("O salario do Analista é de R$8.000,00\n");
        break;
    case 4:
    printf("O salario do Assitente é de R$4.000,00\n");
        break;
    case 5:
    printf("O salario do Auxiliar é de R$2.000,00\n");
        break;    
    default:
    printf("Não há salário\n");
        break;
    }
    return 0;
}