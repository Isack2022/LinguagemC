#include <stdio.h>
#include <stdlib.h>
#include "curso.h"
#include "descrever.h"

void gravar(){
    //Criar um arquivo
    FILE *arquivo;
    arquivo = fopen("dados.txt","w");//Tipo de arquivo
    
    if(arquivo==NULL){//Se não exitir
        printf("Arquivo não encontrado ou não existe");
        exit(1);
    }
    //tranformando em ponteiro
    dardos_curso curso, *pcurso;
    descrever_unidade des,*pdes;

    pcurso = &curso;
    pdes = &des;

    printf("Entre com o nome do curso:\n");
    fgets(pcurso->nome,100,stdin);// Para escrever e pular o texto do char

    printf("Entre com a descrição do curso:\n");
    fgets(pcurso->descricao,500,stdin);

    printf("Entre com a carga horaria do curso:\n");
    fgets(pcurso->carga_horaria,4,stdin);

    printf("Entre com data de ínicio do curso:\n");
    fgets(pcurso->data_de_inicio,10,stdin);

    printf("Entre com data de termino do curso:\n");
    fgets(pcurso->data_de_termino,10,stdin);

    printf("Entre com o preço do curso:\n");
    scanf("%f", &pcurso->preco,stdin);


    printf("Entre com nome da unidade:\n");
    fgets(pdes->nome,100,stdin);

    printf("Entre com a localizção da unidade:\n");
    fgets(pdes->localizacao,100,stdin);

    printf("Entre com o horario de funcionamento da unidade:\n");
    fgets(pdes->horario,5,stdin);

    printf("Entre com o horario de funcionamento da unidade:\n");
    scanf("%d", &pdes->telefone,stdin); 


    //Colocado o resultado no arquivo criando
    fprintf(arquivo,pcurso->nome);
    fprintf(arquivo,pcurso->descricao);
    fprintf(arquivo,pcurso->carga_horaria);
    fprintf(arquivo,pcurso->data_de_inicio);
    fprintf(arquivo,pcurso->data_de_termino);
    fprintf(arquivo, &pcurso->preco);

    fprintf(arquivo,pdes->nome);
    fprintf(arquivo,pdes->localizacao);
    fprintf(arquivo,pdes->horario);
    fprintf(arquivo, &pdes->telefone);

    fclose(arquivo);
}