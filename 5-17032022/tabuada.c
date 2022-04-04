//Programa para calcular tabuada de acordo com a entrada do usuário
#include <stdio.h>
int main (){
    int n;
    int mut;
    printf("Digite um número para tabuada\n");
    scanf("%d", &n);
    for(mut = 0; mut <= 10; mut++);{//Laço de repetição
        printf("%d x %d = %d\n", n, mut,(n * mut));
    }
    return 0;
} 