#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>

struct data{
    int dia;
    int mes;
    int ano;
};

struct filme{
    char nome[30];
    char duracao[10];
    char genero[30];
    char diretor[30];
    char nacionalidade[30];
    struct data atual;
};

void le_data(struct data *p){
    printf("Digite o dia, mes e ano atuais: ");
    scanf("%d", &p->dia );
    scanf("%d", &p->mes );
    scanf("%d", &p->ano );
}

void mostra_data( struct data x ){
    printf("%2d/%2d/%4d\n", x.dia, x.mes, x.ano);
}

void le_filme(struct filme *p){
    printf("Incersão de novo filme:\n");
    printf("Digite o nome do filme: ");
    scanf("%s",p->nome);
    printf("Digite a duração do filme: ");
    scanf("%s",p->duracao);
    printf("Digite o genero do filme: ");
    scanf("%s",p->genero);
    printf("Digite o nome do diretor: ");
    scanf("%s",p->diretor);
    printf("Digite a nacionalidade do diretor: ");
    scanf("%s",p->nacionalidade);
    le_data(&p->atual);
}

void mostra_filme(struct filme x){
   printf("\nDados do filme:"); 
   printf("\nNome do filme: %s",x.nome);
   printf("\nDuração do filme: %s",x.duracao);
   printf("\nGenero do filme: %s",x.genero);
   printf("\nNome do diretor: %s",x.diretor);
   printf("\nNacionalidade do diretor: %s",x.nacionalidade);
   printf("\nData do cadastramento:%2d/%2d/%4d",x.atual.dia,x.atual.mes,x.atual.ano);
}


int main() { //Inicio corpo do programa
  int opcao,fim=0,aux=1;
  struct filme *p;
  do { //Inicio repetição menu
  
    printf("CADASTRO DE FILMES \n\n");
    printf("Menu de opções:\n");
    printf("1-Inserir novo filme\n");
    printf("2-Listar dodos os filmes\n");
    printf("3-Consultar dados de um filme\n");
    printf("4-Excluir um filme\n");
    printf("5-Sair do programa\n");
    
    printf("Digite o numero da opção desejada: ");
    scanf("%d", &opcao); //seleção opção

    switch(opcao){ //Inicio menu

    case 1:
      le_filme(p);
      break;

    case 2:
      
      break;

    case 3:
      
      break;

    case 4:
     
      break;

    case 5:
      fim=1;
      break;

    default:
      printf("\n Opção digitada inválida. Digite novamente: \n");
      break;

    } //fim menu
  }while(fim==0);  //fim repetição menu
  return 0;
}

