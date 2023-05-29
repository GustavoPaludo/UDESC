#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int count=0;

int main(){
    
    struct dados_filme{                          
    char nome[30];
    int duracao;
    char genero[30];
    char diretor[30];
    char nacionalidade[30];
    int dia;
    int mes;
    int ano;
    }filme[100];
    
    
    int fim=0,aux=0,opcao;
    char nomeF[30];
 
  do { 
  
    printf("\n\nCADASTRO DE FILMES \n\n");
    printf("Menu de opções:\n");
    printf("1-Inserir novo filme\n");
    printf("2-Listar dodos os filmes\n");
    printf("3-Consultar dados de um filme\n");
    printf("4-Excluir um filme\n");
    printf("5-Sair do programa\n");
    
    printf("\nDigite o numero da opção desejada: ");
    scanf("%d", &opcao); 	

    system("cls");
    
    switch(opcao){ 
//--------------------------------------------------------------------------------
    case 1:
    printf("\n\nCADASTRO DE FILMES \n\n");
    printf("\nIncersão de novo filme:\n");
    printf("\nDigite o nome do filme: ");
    fflush(stdin);
    scanf("%[^\n]", filme[aux].nome);
    
    
    //scanf("%s",filme[aux].nome);
    
    for(int i=0;i<aux;i++){
        if(strcmp(filme[i].nome,filme[aux].nome)==0){
            count++;
        }
    }
    if(count>0){
        printf("Filme já cadastrado.\n");
    }
    else{
    printf("Digite a duração do filme (minutos): ");
    scanf("%d",&filme[aux].duracao);
    while(filme[aux].duracao<0 || filme[aux].duracao>999){
        printf("Valor de duração invalido. Digite novamente: ");
      scanf("%d",&filme[aux].duracao);  
    }
    printf("Digite o genero do filme: ");
    //scanf("%s",filme[aux].genero);
    fflush(stdin);
    scanf("%[^\n]", filme[aux].genero);
    
    
    printf("Digite o nome do diretor: ");
    //scanf("%s",filme[aux].diretor);
    fflush(stdin);
    scanf("%[^\n]", filme[aux].diretor);
    
    
    printf("Digite a nacionalidade do diretor: ");
    //scanf("%s",filme[aux].nacionalidade);
    fflush(stdin);
    scanf("%[^\n]", filme[aux].nacionalidade);
    
    
    
    printf("Digite o dia atual (dd): \n");
    scanf("%d", &filme[aux].dia );
    while(filme[aux].dia<1 || filme[aux].dia>31){
        printf("Valor de dia invalido. Digite novamente: ");
      scanf("%d",&filme[aux].dia);  
    }
    printf("Digite o mes atual (mm): \n");
    scanf("%d", &filme[aux].mes );
    while(filme[aux].mes<1 || filme[aux].mes>12){
        printf("Valor de mes invalido. Digite novamente: ");
      scanf("%d",&filme[aux].mes);  
    }
    printf("Digite o ano atual (aaaa): \n");
    scanf("%d", &filme[aux].ano );
    while(filme[aux].ano<0 || filme[aux].ano>9999){
        printf("Valor de ano invalido. Digite novamente: ");
      scanf("%d",&filme[aux].ano);  
    }
    printf("\nCadastro finalizado com sucesso.\n");
    aux++;
    
    printf("\nPrecione ENTER para continuar\n");
    setbuf(stdin,NULL);
    getchar ();
    
    }
    system("cls");
    break;
//--------------------------------------------------------------------------------
    case 2:
    printf("\n\nCADASTRO DE FILMES \n\n");
    printf("\nLista de filmes: \n");
        for(int i=0;i<aux;i++){
        printf("\n%d: %s \n",i+1,filme[i].nome);
    }
    if(aux==0){
    	printf("Não há produtos cadastrados.\n");
	}
	printf("\nPrecione ENTER para continuar\n");
    setbuf(stdin,NULL);
    getchar ();
	system("cls");
      break;
//--------------------------------------------------------------------------------
    case 3:
    printf("\n\nCADASTRO DE FILMES \n\n");
    printf("\nDigite o nome do filme que desejas consultar: ");
    //scanf("%s",nomeF);
    fflush(stdin);
    scanf("%[^\n]", nomeF);
    
      for(int i=0;i<aux;i++){
        if(strcmp(nomeF,filme[i].nome)==0){
            printf("\nDados do filme:"); 
            printf("\nNome do filme: %s",filme[i].nome);
            printf("\nDuração do filme (minutos): %d",filme[i].duracao);
            printf("\nGenero do filme: %s",filme[i].genero);
            printf("\nNome do diretor: %s",filme[i].diretor);
            printf("\nNacionalidade do diretor: %s",filme[i].nacionalidade);
            printf("\nData do cadastramento (dd/mm/aaaa):%2d/%2d/%4d \n",filme[i].dia,filme[i].mes,filme[i].ano);
            count++;
        }
    }
    if(count==0){
        printf("Esse nome de filme não está cadastrado.\n");
    }
    
    printf("\nPrecione ENTER para continuar\n");
    setbuf(stdin,NULL);
    getchar ();
    system("cls");
      break;
//--------------------------------------------------------------------------------
    case 4:
    printf("\n\nCADASTRO DE FILMES \n\n");
    printf("\nDigite o nome do filme que desejas excluir: ");
      //scanf("%s",nomeF);
    fflush(stdin);
    scanf("%[^\n]", nomeF);
    
      for(int i=0;i<aux;i++){
        if(strcmp(nomeF,filme[i].nome)==0){
            while(i<aux-1){
                filme[i]=filme[i+1];
                i++;
            }
            aux--;
            count++;
        }
    }
    if(count==0){
        printf("Esse nome de produto não existe.");
    }
    else{
        printf("PRODUTO EXCLUIDO COM SUCESSO.\n");
    }
    printf("\nPrecione ENTER para continuar\n");
    setbuf(stdin,NULL);
    getchar ();
    system("cls");
      break;
//--------------------------------------------------------------------------------
    case 5:
      fim=1;
      break;
//--------------------------------------------------------------------------------
    default:
      printf("\n Opção digitada inválida. Digite novamente: \n");
      break;

    } 
  }while(fim==0);  
  return 0;
}
