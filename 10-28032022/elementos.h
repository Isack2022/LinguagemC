#include <stdio.h>
#include <stdlib.h>
void separadorHT(){
    for (int i = 0; i <= 70; i ++){
        printf("#");
    }
    printf("\n");
}
void separadorLinha(){
    for (int i = 0; i <=70; i++){
        printf("\br");
    }
    printf("\n");
}
void pularLinha (int qtdVezes){
    for (int i =1 ; i <=qtdVezes; i++){
        printf("\n");
    }
}