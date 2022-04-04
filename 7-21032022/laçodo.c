//Programa para apresentar pares entres 0 e 50. Vamos usar a estrutura do while
#include <stdio.h>
int main (){
    int p =0;
    do{
        if (p %2 == 0){
            printf("O número %d par\n",p);
        }
        p++;
    }while(p <= 50);
}