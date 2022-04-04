/*Programa para calcular cpf do usuário.Quando o cpf foi inserido, pegamos os 9 primeiros digitos e passamos para o
calculo. É utilizado um número por vez do cpf mutiplicado peso de 10 indo até. Na segunda parte do calculo pegamos 9
primeiros mais digito encontrado e mutipliamos pelo a partir de 11. Soma se os valores encotrados e dividimos por 11.
Se o resto da divisão for menor que 2, então o digito será de 0; caso contrario o resto subraido por 11.*/
#include <stdio.h>
#define NCHAR 48 //Constante (Sempre maiscúla)
int main (){
    int peso10 = 10, peso11 = 11;
    int total = 0, resto = 0;
    char cpf[11];
    system ("clear");
    printf("Digite seu CPF sem o traço: \n");
    scanf("%s", cpf);
    /*Converter todos os caracteres do cpf para número. Para isso devemos cria um conjunto de numeros em tipo int e 
    realizar a conversão usando o for*/
    int icpf[11];
    for(int a =0; a <=10;a++){
        icpf[a] = cpf[a] - NCHAR;/*Olhar na Tabela de ASCII para ver o valor do número do char(que é diferente do int 
        que usar a forma decimal exemplo: innt = 2 no char = 50)*/
    } 
    for (int i = 0; i <=8; i++){
        total +=icpf[i]*peso10;
        peso10--;//Sempre tirar um número 
    }
    resto = total % 11; // Se o resto da divião for menor que 2, então o primeiro digito de verificação será 0(zero)
    if (resto < 2){
        icpf[9] = 0;// Por conta do char poe o 9
    }
    else{
        icpf[9] = 11 - resto;
    }

    total =0;
    resto = 0;

    for (int i = 0; i <=9; i++){
        total += icpf[i]*peso11;
        peso11--;//Sempre tirar um número
    }
    resto = total % 11; // Se o resto da divião for menor que 2, então o primeiro digito de verificação será 0(zero)
    if (resto < 2){
        icpf[10] = 0;// Por conta do char poe o 10
    }
    else{
        icpf[10] = 11 - resto;
    }

    for(int i = 0; i <=10;i++){
        printf("%d",icpf[i]);
    }
    
    return 0;
}