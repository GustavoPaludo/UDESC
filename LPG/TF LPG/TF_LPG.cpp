#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct filme{                          //estruturação das categorias para filme
    char nome[30];
    char duracao[10];
    char genero[30];
    char diretor[30];
    char nacionalidade[30];
    int dia;
    int mes;
    int ano;
};

void le_filme(struct filme *p,int aux){                 //le os dados do filme
    printf("\n\nIncersão de novo filme:\n");
    
    
    //colocar função para determinar se filme já está cadastrado
    
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
    printf("Digite o dia atual: \n");
    scanf("%d", &p->dia );
    printf("Digite o mes atual: \n");
    scanf("%d", &p->mes );
    printf("Digite o ano atual: \n");
    scanf("%d", &p->ano );
    printf("\nPrecione ENTER para continuar\n");
    setbuf(stdin,NULL);
    getchar ();

}

void mostra_filme(struct filme x){
   printf("\nDados do filme:");
   printf("\nNome do filme: %s",x.nome);
   printf("\nDuração do filme: %s",x.duracao);
   printf("\nGenero do filme: %s",x.genero);
   printf("\nNome do diretor: %s",x.diretor);
   printf("\nNacionalidade do diretor: %s",x.nacionalidade);
   printf("\nData do cadastramento:%2d/%2d/%4d",x.dia,x.mes,x.ano);
   printf("\nPrecione ENTER para continuar\n");
   setbuf(stdin,NULL);
   getchar ();
}



void mostra_lista(struct filme x,int i){
   printf("\n%d: %s",i+1,x.nome);
}

void listar_filme( struct filme *p, int aux){
    printf("\nLista de filmes: \n");
    for(int i=0;i<aux;i++){
        mostra_lista(p[i],i);
    }
}


int main() { //Inicio corpo do programa
  int opcao,fim=0,aux=0,n;
  struct filme p[100];
  do { //Inicio repetição menu
 
    printf("\n\nCADASTRO DE FILMES \n\n");
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
      le_filme(&p[aux],aux);
      aux++;                //aumenta o aux para que no cadastro do proximo filme o vetor esteja na prx. posicao
      break;

    case 2:
      listar_filme(p,aux);
      break;

    case 3:
      listar_filme(p,aux);
      printf("\nDigite o numero do filme que desejas ver as informações: ");
      scanf("%d",&n);
      mostra_filme(p[n-1]);
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

