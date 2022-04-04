//Program de cargos com terminal bonito
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
        printf("_");
    }
    printf("\n");
}
void main (){
    system("clear");
    int cargo;// varivel 
    float salAtual, reajuste;// varivel de número quebrados
    separadorHT();
    printf("Infome seu cargo:");
    scanf("%d", &cargo);// ler int
    separadorLinha();
    printf("Infome seu salário:");
    scanf("%f", &salAtual);//ler float

    if (cargo == 1)//se o cargo for 1 então vai ter um reajuste de 7%
        reajuste = salAtual -(salAtual*((float)5/(float)100));
    else if (cargo == 2)// se não for 1 então vai ter um reajuste de 9%
        reajuste = salAtual -(salAtual*((float)5/(float)100));
     else if (cargo == 3)// se não for 1 e 2 então vai ter um reajuste de 5%
        reajuste = salAtual -(salAtual*((float)9/(float)100));
     else// se não for nenhum 1, 2 e 3 então vai ter um reajuste de 12%
        reajuste = salAtual -(salAtual*((float)12/(float)100));
    separadorLinha();
    printf("O reajuste é: %2.f\n", reajuste);
    printf("O seu novo salário: %2.f\n", salAtual + reajuste); 
    separadorLinha();
    separadorHT();
}