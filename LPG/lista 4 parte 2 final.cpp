#include<stdio.h>
#include <time.h>
#include <stdlib.h>

float media_pares(int mediaPares[4][5]){
    int count=0,soma=0;
    float media;
    for(int i=0;i<4;i++){
        for(int j=0;j<5;j++){
            if(mediaPares[i][j]%2==0){
                soma+=mediaPares[i][j];
                count++;
            }
        }
    }
    media=(float)soma/count;
    return media;
}

void matriz_soma(int matr1[3][3],int matr2[3][3],int matrizSoma[3][3]){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            matrizSoma[i][j]=matr1[i][j]+matr2[i][j];
        }
    }
}

int busca_seq(int v[], int n, int chave){
    int i;
    for(i=0; i < n; i++){
        if(v[i] == chave){
        return i; 
        }
    }
    return -1;
}

int busca_binaria (int v[], int n, int chave){
    int ini = 0, fim = n-1, meio;
    do{
       meio = ( ini + fim ) / 2;
       if(v[meio] == chave)
           return meio; // Encontrado em meio!
       if(v[meio] < chave)
           ini = meio + 1;
       else
           fim = meio - 1;
    }while(ini <= fim);
    return -1; // Não encontrado!
}

void ordena_vetor(int vet[], int n){
	int i, j;
	for(i = 0; i < n-1; i++){
		int i_menor = i;
		for(j = i+1; j < n; j++)
			if( vet[j] < vet[i_menor] )
				i_menor = j;
		int aux = vet[i];
		vet[i] = vet[i_menor];
		vet[i_menor] = aux;
	}
}


int busca_binaria_count (int v[], int n, int chave){
    int ini = 0, fim = n-1, meio,count=0;
    do{
       meio = ( ini + fim ) / 2;
       if(v[meio] == chave){
           return meio;
       }
       if(v[meio] < chave){
           ini = meio + 1;
       }
       else{
           fim = meio - 1;
       }
       count++;
       printf("Interação %i \n",count);
    }while(ini <= fim);
    return -1; // Não encontrado!
}


int main() {
  int exercicio, x, continuar = 0;
  printf("\n Este programa irá resolver os exercicios do rascunho de LPG\n");
  do {

    printf("\n Escolha um exercício entre 1 e 5: \n");

    scanf("%i", & exercicio);

    if (exercicio == 1) {
    int mediaPares[4][5];
    printf("Digite os 20 valores da matriz: \n");
    for(int i=0;i<4;i++){
        for(int j=0;j<5;j++){
            scanf("%i",&mediaPares[i][j]);
        }
    }
    printf("Media dos pares: %.2f",media_pares(mediaPares));
    }

    if (exercicio == 2) {
        int matr1[3][3],matr2[3][3],matrizSoma[3][3];
        printf("Digite os valores da primeira matriz:\n");
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                scanf("%i",&matr1[i][j]);
            }
        }
        printf("Digite os valores da segunda matriz:\n");
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                scanf("%i",&matr2[i][j]);
            }
        }
        matriz_soma(matr1,matr2,matrizSoma);
        printf("Matriz soma:\n");
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                printf("%i ",matrizSoma[i][j]);
            }
            printf("\n");
        }

    }

    if (exercicio == 3) {
      int n2,chave;
      printf("Digite o numero de valores do vetor:");
      scanf("%d",&n2);
      int v[n2];
      printf("Digite os valores do vetor:\n");
      for(int i=0;i<n2;i++){
          scanf("%i",&v[i]);
      }
      printf("Digite a chave:\n");
      scanf("%i",&chave);
      int indice=busca_seq(v,n2,chave);
      if(indice==-1){
          printf("Não encontrado");
      }
      else{
          printf("Encontrado em: %d",indice);
      }
    }

    if (exercicio == 4) {
      int n3,chave2;
      printf("Digite o numero de valores do vetor:");
      scanf("%d",&n3);
      int v2[n3];
      printf("Digite os valores do vetor:\n");
      for(int i=0;i<n3;i++){
          scanf("%i",&v2[i]);
      }
      printf("Digite a chave:\n");
      scanf("%i",&chave2);
      int indice2=busca_binaria(v2,n3,chave2);
      if(indice2==-1){
          printf("Não encontrado");
      }
      else{
          printf("Encontrado em: %d",indice2);
      }
    }
    
    if (exercicio == 5) {
      int n4,chave3;
      printf("Digite o numero de valores do vetor:");
      scanf("%d",&n4);
      int v3[n4];
      srand(time(0));
      for(int i=0;i<n4;i++){
          v3[i]=rand()%1000;
      }
      printf("Digite a chave:\n");
      scanf("%i",&chave3);
      ordena_vetor(v3,n4);
      int indice3=busca_binaria_count(v3,n4,chave3);
      if(indice3==-1){
          printf("Não encontrado");
      }
      else{
          printf("Encontrado em: %d ",indice3);
      }
    }


    printf("\n\n Deseja continuar? \n Digite 0 para sim e 1 para não \n");
    scanf("%i", & continuar); //Sobrescreve o valor da variavel Continuar
  } while (continuar == 0); //Fim repetição menu seleção
  return 0;
}

