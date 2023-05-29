#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>


struct filme{                   	 
	char nome[20];
	int duracao;
	char genero[20];
	char diretor[20];
	char nacionalidade[20];
	int dia;
	int mes;
	int ano;
};

void grava_filme( struct filme *p, int aux){
FILE *f1 = fopen( "filmes.txt","wt");
if( f1 == NULL){
printf("Erro na abertura do arquivo!\n");
exit(0);
}
for(int i=0;i<aux;i++){
    fprintf(f1, "%s %d %s %s %s %d %d %d \n", p[i].nome,p[i].duracao,
p[i].genero, p[i].diretor,p[i].nacionalidade,p[i].dia,p[i].mes,p[i].ano);
}
fclose(f1);
}

void listar_filme( struct filme *p, int aux){
	printf("\nLista de filmes cadastrados: \n");
	if(aux!=0){
		printf("   -------------------------------------------------------------------------------------------------\n");
		printf("   |               Filme              Diretor        Nacionalidade    	          Cadastramento    |\n");
		printf("   -------------------------------------------------------------------------------------------------\n");
    	for(int i=0;i<aux;i++){
    		printf("   |%20s %20s %20s %20d/%2d/%4d    |\n",p[i].nome,p[i].diretor,p[i].nacionalidade,p[i].dia,p[i].mes,p[i].ano);
		}
		printf("   -------------------------------------------------------------------------------------------------\n");
	}
	else{
    	printf("\nNão há produtos cadastrados.\n");
	}
	printf("\nPrecione ENTER para continuar\n");
	setbuf(stdin,NULL);
	getchar ();
}


struct filme* le_filme(struct filme *p,int *aux){
    int count =0;
	fflush(stdin);
	printf("\nIncersão de novo filme:\n");
	printf("\nDigite o nome do filme: ");
	fflush(stdin);
	char nomef[30];
	scanf("%[^\n]", nomef);  
	for(int i=0;i<(*aux);i++){
    	if(strcmp(p[i].nome,nomef)==0){
        	count++;       	 
    	}
	}
	if(count>0){
    	printf("Filme já cadastrado.\n");
    	printf("\nPrecione ENTER para continuar\n");
    	setbuf(stdin,NULL);
    	getchar ();
    	return(p);
	}
	else{
	(*aux)++;
	p=(struct filme*)realloc(p,sizeof(struct filme)*(*aux));
	strcpy(p[*aux-1].nome,nomef);
	printf("Digite a duração do filme (minutos): ");
	scanf("%d",&p[*aux-1].duracao);
	while(p[*aux-1].duracao<0 || p[*aux-1].duracao>999){
    	printf("Valor de duração invalido. Digite novamente: ");
  	scanf("%d",&p[*aux-1].duracao);  
	}
	printf("Digite o genero do filme: ");
	fflush(stdin);
	scanf("%[^\n]", p[*aux-1].genero);
	printf("Digite o nome do diretor: ");
	fflush(stdin);
	scanf("%[^\n]", p[*aux-1].diretor);   
	printf("Digite a nacionalidade do diretor: ");
	fflush(stdin);
	scanf("%[^\n]", p[*aux-1].nacionalidade);    
	printf("Digite o dia atual (dd): \n");
	scanf("%d", &p[*aux-1].dia );
	while(p[*aux-1].dia<1 || p[*aux-1].dia>31){
    	printf("Valor de dia invalido. Digite novamente: ");
  	scanf("%d",&p[*aux-1].dia);  
	}
	printf("Digite o mes atual (mm): \n");
	scanf("%d", &p[*aux-1].mes );
	while(p[*aux-1].mes<1 || p[*aux-1].mes>12){
    	printf("Valor de mes invalido. Digite novamente: ");
  	scanf("%d",&p[*aux-1].mes);  
	}
	printf("Digite o ano atual (aaaa): \n");
	scanf("%d", &p[*aux-1].ano );
	while(p[*aux-1].ano<0 || p[*aux-1].ano>9999){
    	printf("Valor de ano invalido. Digite novamente: ");
  	scanf("%d",&p[*aux-1].ano);  
	}
	printf("\nCadastro finalizado com sucesso.\n");    
	printf("\nPrecione ENTER para continuar\n");
	setbuf(stdin,NULL);
	getchar ();  
	grava_filme(p,*aux);
	}
	return p;
}
   
void mostra_filme(struct filme *p, char nomeF[], int aux){
    int count=0;
  	for(int i=0;i<aux;i++){
    	if(strcmp(nomeF,p[i].nome)==0){
        	printf("\nConsulta de filme cadastrado:\n");
        	printf("\nNome do filme.....................: %s",p[i].nome);
        	printf("\nDuração do filme (minutos)........: %d",p[i].duracao);
        	printf("\nGenero do filme...................: %s",p[i].genero);
        	printf("\nNome do diretor...................: %s",p[i].diretor);
        	printf("\nNacionalidade do diretor..........: %s",p[i].nacionalidade);
        	printf("\nData do cadastramento (dd/mm/aaaa): %d/%d/%d \n",p[i].dia,p[i].mes,p[i].ano);
        	count++;
    	}
	}
	if(count==0){
    	printf("\nEsse nome de filme não está cadastrado.\n");
	}
    
}

struct filme* exclui_filme(struct filme *p, char nomeF[], int *aux){
    int count=0,n;
	for(int i=0;i<(*aux);i++){
    	if(strcmp(p[i].nome,nomeF)==0){
        	count++;       	 
    	}
	}
	if(count==0){
    	printf("\nEsse nome de produto não existe.");
	}
	else{
   	 mostra_filme(p,nomeF,*aux);
   	 printf("\nConfirmar exclusão do filme? (1=SIM , 2=NAO) ");
   	 scanf("%d",&n);
   	 if(n==1){
   	 for(int i=0;i<*aux;i++){
   		 if(strcmp(nomeF,p[i].nome)==0){
       		 while(i<*aux-1){
           		 p[i]=p[i+1];
           		 i++;
      		      }
        	count++;
   		 }
   	 }
   	 printf("\nPRODUTO EXCLUIDO COM SUCESSO.\n");
    	(*aux)--;
    	p=(struct filme*)realloc(p,sizeof(struct filme)*(*aux));
    	grava_filme(p,*aux);
   	 }
   	 else{
   		 printf("\nProduto não excluido.\n");
   	 }
	}
	printf("\nPrecione ENTER para continuar\n");
	setbuf(stdin,NULL);
	getchar ();
	return p;
}

struct filme* carrega_filmes( struct filme *p, int *aux ){
	int i=0,x;
	printf("\nCarregando arquivo com os filmes cadastrados:");
	FILE *f1 = fopen( "filmes.txt","a+t");
	if( f1 == NULL){
    	printf("Erro na abertura do arquivo!\n");
    	exit(0);
	}
	// aloca espaço de memória para armazenar UMA pessoa
	p=(struct filme*)realloc(p,sizeof(struct filme));
	if(p==NULL) {
    	printf("Problema na realocacao!");
    	exit(0);
	}
	// Tenta ler o primeiro registro do arquivo
	x = fscanf( f1, "%s %d %s %s %s %d %d %d", p[i].nome,&p[i].duracao,
	p[i].genero, p[i].diretor,p[i].nacionalidade,&p[i].dia,&p[i].mes,&p[i].ano);
	while(x!=EOF){ // se não chegou ao "fim do arquivo" (se há dados)
    	i++;
    	p=(struct filme*)realloc(p,sizeof(struct filme)*(i+1));
    	if(p==NULL) {
        	printf("Problema na realocacao!");
        	exit(0);
    	}
    	// Tenta ler o próximo registro do arquivo
    	x = fscanf( f1, "%s %d %s %s %s %d %d %d", p[i].nome,&p[i].duracao,
	p[i].genero, p[i].diretor,p[i].nacionalidade,&p[i].dia,&p[i].mes,&p[i].ano);
	}
	*aux=i;
	printf("\nCarregou %d filmes.\n\n",*aux);
	fclose(f1);
return p;
}

int main(){
	struct filme *p;    
	p=NULL;
	int fim=0,aux=0,opcao,n;
	char nomeF[30];
	p=carrega_filmes(p,&aux);
  	do {
      	system("cls");
    	printf("\n\nCADASTRO DE FILMES \n\n");
    	printf("Menu de opções:\n");
    	printf("1-Inserir novo filme\n");
    	printf("2-Listar dodos os filmes\n");
    	printf("3-Consultar dados de um filme\n");
    	printf("4-Excluir um filme\n");
    	printf("5-Sair do programa\n");   
    	printf("\nDigite o numero da opção desejada: ");
    	scanf("%d", &opcao);	 
    	switch(opcao){
//--------------------------------------------------------------------------------
        	case 1:
            	system("cls");
            	printf("\n\nCADASTRO DE FILMES \n\n");
            	p=le_filme(p,&aux);
        	break;
//--------------------------------------------------------------------------------
        	case 2:
            	system("cls");
            	printf("\n\nCADASTRO DE FILMES \n\n");
            	listar_filme(p,aux);
        	break;
//--------------------------------------------------------------------------------
        	case 3:
            	system("cls");
            	printf("\n\nCADASTRO DE FILMES \n\n");
            	printf("\nDigite o nome do filme que desejas consultar: ");
            	fflush(stdin);
            	scanf("%[^\n]", nomeF);
            	mostra_filme(p,nomeF,aux);
            	printf("\nPrecione ENTER para continuar\n");
   			 setbuf(stdin,NULL);
   			 getchar ();
        	break;
//--------------------------------------------------------------------------------
        	case 4:
            	system("cls");
            	printf("\n\nCADASTRO DE FILMES \n\n");
            	printf("\nDigite o nome do filme que desejas excluir: ");
            	fflush(stdin);
            	scanf("%[^\n]", nomeF);
            	if(p==NULL) {
            	printf("Problema na realocacao!");
            	exit(0);
            	}
            	else{
            	fflush(stdin);
            	p=exclui_filme(p,nomeF, &aux);
            	}
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

