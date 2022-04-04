//Programa para manter a tela sempre ativa. Caso o usuário digitar 9, então a tela será liberado
#include <stdio.h>
int main (){
    int x = 0;
    printf("Digite um número para sair e tecle ENTER: \n");
    scanf("%d", &x);
    while (x != 9){
        system("clear");
        printf("\nVocê errou o número...!!!");
        printf("Tente outra vez e tecle ENTER:\n");
        scanf("%d", &x);
    }
    return 0; 
} 