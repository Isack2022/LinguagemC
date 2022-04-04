// Programa que exibe uma mensagem de boas vida ao nosso usário
#include <stdio.h>// Biblioteca input/output

int main (){
    char texto [21] = "Olá! seja bem vindo ";//Char cadeia de caracter (String nas outras linguagem) 
    /*Colocou %s como caractericas de cadeia significar que vai usar mais de 1 caracter. Já o %c vai usar apenas UMA caracter*/
    printf("%s\n", texto);                    
    return 0;//fim 
}