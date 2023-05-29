#include<stdio.h>

int vetores_iguais(int v1[], int v2[], int n1) {
  for (int i = 0; i < n1; i++) {
    if (v1[i] != v2[i]) {
      return 0;
    }
  }
  return 1;
}

void vetor_fibonacci(int fibo[], int n2) {
  int a = 1, b = 1, atual;
  fibo[0] = 1;
  fibo[1] = 1;
  for (int i = 2; i <= n2; i++) {
    atual = a + b;
    fibo[i] = atual;
    a = b;
    b = atual;
  }
}

int soma_primos(int vetorPrimos[], int n3) {
  int primo = 0;
  for (int i = 0; i < n3; i++) {
    int count = 0;
    if (vetorPrimos[i] > 1) {
      for (int j = 1; j <= vetorPrimos[i]; j++) {
        if (vetorPrimos[i] % j == 0) {
          count = count + 1;
        }
      }
    }
    if (count == 2) {
      primo = primo + vetorPrimos[i];
    }
  }
  return primo;
}

void busca_todos(int vetorMain[], int n4, int chave, int indices[]) {
  int count = 0;
  for (int i = 0; i < n4; i++) {
    if (vetorMain[i] == chave) {
      indices[count] = i;
      count++;
    }
  }
  for (int i = count; i < n4; i++) {
    indices[i] = -1;
  }
}

int busca_seq_rec(int vetorMain2[], int n5, int chave2, int indices2[]) {
  if (n5 < 0) {
    return -1;
  } else {
    if (vetorMain2[n5] == chave2) {
      indices2[n5] = n5;
    }
    indices2[n5] = -1;
    int busca_seq_rec(vetorMain2, (n5) - 1, chave2, indices2);
    return 1;
  }
}

int main() {
  int exercicio, x, continuar = 0;
  printf("\n Este programa irá resolver a lista de exercicios 4 de LPG\n");
  do {

    printf("\n Escolha um exercício entre 1 e 5: \n");

    scanf("%i", & exercicio);

    if (exercicio == 1) {
      int n1;
      printf("Digite o tamanho dos vetores:\n");
      scanf("%d", & n1);
      int v1[n1], v2[n1];
      printf("Digite os valores de v1:\n");
      for (int i = 0; i < n1; i++) {
        scanf("%i", & v1[i]);
      }
      printf("Digite os valores de v2:\n");
      for (int i = 0; i < n1; i++) {
        scanf("%i", & v2[i]);
      }
      switch (vetores_iguais(v1, v2, n1)) {
      case (1):
        printf("Os vetores são iguáis");
        break;

      case (0):
        printf("Os vetores são diferentes");
        break;
      }
    }

    if (exercicio == 2) {
      int n2;
      printf("Digite o numero de termos a serem gerados da sequencia de Fibonacci:\n");
      scanf("%d", & n2);
      int fibo[n2];
      vetor_fibonacci(fibo, n2);
      for (int i = 0; i < n2; i++) {
        printf("%i ", fibo[i]);
      }
    }

    if (exercicio == 3) {
      int n3;
      printf("Digite o numero de termos do vetor:\n");
      scanf("%d", & n3);
      int vetorPrimos[n3];
      printf("Digite os valores:\n");
      for (int i = 0; i < n3; i++) {
        scanf("%i", & vetorPrimos[i]);
      }
      printf("Somatorio dos primos: %i", soma_primos(vetorPrimos, n3));
    }

    if (exercicio == 4) {
      int n4, chave;
      printf("Digite o numero de valores do vetor:");
      scanf("%d", & n4);
      int vetorMain[n4], indices[n4];
      printf("Digite os valores do vetor:\n");
      for (int i = 0; i < n4; i++) {
        scanf("%i", & vetorMain[i]);
      }
      printf("Digite a chave:\n");
      scanf("%i", & chave);
      busca_todos(vetorMain, n4, chave, indices);
      printf("Vetor indice:\n");
      for (int i = 0; i < n4; i++) {
        printf("%i ", indices[i]);
      }
    }

    if (exercicio == 5) {
      int n5, chave2;
      printf("Digite o numero de valores do vetor:");
      scanf("%d", & n5);
      int vetorMain2[n5], indices2[n5];
      printf("Digite os valores do vetor:\n");
      for (int i = 0; i < n5; i++) {
        scanf("%i", & vetorMain2[i]);
      }
      printf("Digite a chave:\n");
      scanf("%i", & chave2);
      int x = busca_seq_rec(vetorMain2, n5, chave2, indices2);
      printf("Vetor indice:\n");
      for (int i = 0; i < n5; i++) {
        printf("%i ", indices2[i]);
      }
    }

    printf("\n\n Deseja continuar? \n Digite 0 para sim e 1 para não \n");
    scanf("%i", & continuar); //Sobrescreve o valor da variavel Continuar
  } while (continuar == 0); //Fim repetição menu seleção
  return 0;
}
