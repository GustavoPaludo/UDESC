#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct filme{                          //estrutura��o das categorias para filme
    char nome[30];
    int duracao;
    char genero[30];
    char diretor[30];
    char nacionalidade[30];
    int dia;
    int mes;
    int ano;
};

void le_filme(struct filme *p,int aux){                 //le os dados do filme
    printf("\n\nIncers�o de novo filme:\n");
    printf("Digite o nome do filme: ");
    scanf("%s",p->nome);
    
    printf("Digite a dura��o do filme: ");
    scanf("%d",&p->duracao);
    while(p->duracao<0 || p->duracao>999){
        printf("Valor de dura��o invalido. Digite novamente: ");
      scanf("%d",&p->duracao);  
    }
    printf("Digite o genero do filme: ");
    scanf("%s",p->genero);
    printf("Digite o primeiro nome do diretor: ");
    scanf("%s",p->diretor);
    printf("Digite a nacionalidade do diretor: ");
    scanf("%s",p->nacionalidade);
    
    printf("Digite o dia atual: \n");
    scanf("%d", &p->dia );
    while(p->dia<1 || p->dia>31){
        printf("Valor de dia invalido. Digite novamente: ");
      scanf("%d",&p->dia);  
    }
    
    printf("Digite o mes atual: \n");
    scanf("%d", &p->mes );
    while(p->mes<1 || p->mes>12){
        printf("Valor de mes invalido. Digite novamente: ");
      scanf("%d",&p->mes);  
    }
    printf("Digite o ano atual: \n");
    scanf("%d", &p->ano );
    while(p->ano<0 || p->ano>9999){
        printf("Valor de ano invalido. Digite novamente: ");
      scanf("%d",&p->ano);  
    }
    printf("\nPrecione ENTER para continuar\n");
    setbuf(stdin,NULL);
    getchar ();

}



void mostra_filme(struct filme *p, char nomeF[], int aux){
    int count=0;
    for(int i=0;i<aux;i++){
        if(strcmp(nomeF,p[i].nome)==0){
            printf("\nDados do filme:"); 
            printf("\nNome do filme: %s",p[i].nome);
            printf("\nDura��o do filme: %d",p[i].duracao);
            printf("\nGenero do filme: %s",p[i].genero);
            printf("\nNome do diretor: %s",p[i].diretor);
            printf("\nNacionalidade do diretor: %s",p[i].nacionalidade);
            printf("\nData do cadastramento:%2d/%2d/%4d",p[i].dia,p[i].mes,p[i].ano);
            count++;
        }
    }
    if(count==0){
        printf("Esse nome de produto n�o est� cadastrado.");
    }
    printf("\n\nPrecione ENTER para continuar\n");
    setbuf(stdin,NULL);
    getchar ();
}

void listar_filme( struct filme *p, int aux){
    printf("\nLista de filmes: \n");
    for(int i=0;i<aux;i++){
        printf("\n%d: %s \n",i+1,p[i].nome);
    }
}

int exclui_filme(struct filme *p, char nomeF[], int aux){
    int count=0;
    for(int i=0;i<aux;i++){
        if(strcmp(nomeF,p[i].nome)){
            p[i]=p[i+1];
            aux--;
            count++;
        }
    }
    if(count>0){
        printf("PRODUTO EXCLUIDO COM SUCESSO.\n");
        printf ("\nPressione ENTER Para Continuar");
        setbuf(stdin,NULL);
        getchar ();
        
    }
    else{
        printf("Esse nome de produto n�o existe.");
    }
    return aux;
}




int main() { //Inicio corpo do programa
  int opcao,fim=0,aux=0,n;
  struct filme p[100];
  char nomeF[20];
  do { //Inicio repeti��o menu
  
    printf("\n\nCADASTRO DE FILMES \n\n");
    printf("Menu de op��es:\n");
    printf("1-Inserir novo filme\n");
    printf("2-Listar dodos os filmes\n");
    printf("3-Consultar dados de um filme\n");
    printf("4-Excluir um filme\n");
    printf("5-Sair do programa\n");
    
    printf("\nDigite o numero da op��o desejada: ");
    scanf("%d", &opcao); //sele��o op��o
    switch(opcao){ //Inicio menu

    case 1:
    	system("cls");
      le_filme(&p[aux],aux);
      aux++;   
	  system("cls");             //aumenta o aux para que no cadastro do proximo filme o vetor esteja na prx. posicao
      break;

    case 2:
    	system("cls");
      listar_filme(p,aux);
      printf("\nPrecione ENTER para continuar\n");
      setbuf(stdin,NULL);
      getchar ();
      system("cls");
      break;

    case 3:
    	system("cls");
      listar_filme(p,aux);
      printf("\nDigite o nome do filme que desejas consultar: ");
      scanf("%s",nomeF);
      mostra_filme(p,nomeF,aux);
      system("cls");
      break;

    case 4:
    	system("cls");
      listar_filme(p,aux);
      printf("\nDigite o nome do filme que desejas excluir: ");
      scanf("%s",nomeF);
      aux=exclui_filme(p,nomeF,aux);
      system("cls");
      break;

    case 5:
      fim=1;
      break;

    default:
      printf("\n Op��o digitada inv�lida. Digite novamente: \n");
      break;

    } //fim menu
  }while(fim==0);  //fim repeti��o menu
  return 0;
}
