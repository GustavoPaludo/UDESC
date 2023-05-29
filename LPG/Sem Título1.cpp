#include <stdio.h>

void exercicioum() {
  int v[100];
  for (int i = 0; i < 100; i++) {
    v[i] = 71;
    printf("%i ", v[i]);
  }
  for (int i = 0; i < 100; i++) {
    v[i] = i + 1;
    printf("%i \n", v[i]);
  }
  for (int i = 0; i < 100; i++) {
    v[i] = 0;
  }
  for (int i = 0; i < 10; i++) {
    v[i * i] = 1;
  }
  for (int i = 0; i < 100; i++) {
    printf("%i ", v[i]);
  }
}

void exerciciodois() {
  float a[10], b[10];
  printf("Digite 10 elementos reais:\n");
  for (int i = 0; i < 10; i++) {
    scanf("%f", & a[i]);
  }
  for (int i = 0; i < 10; i++) {
    if (i % 2 == 0) {
      b[i] = a[i] / 2;
    } else {
      b[i] = a[i] * 3;
    }
  }
  for (int i = 0; i < 10; i++) {
    printf("%.2f ", b[i]);
  }
}

void exerciciotres() {
  float v[20], count = 0;
  int aux = 19;
  printf("Digite 20 valores: \n");
  for (int i = 0; i < 20; i++) {
    scanf("%f", & v[i]);
  }
  for (int i = 0; i < 10; i++) {
    float s = (v[i] - v[aux]);
    s *= s;
    count += s;
    aux--;
  }
  printf("S=%.2f", count);
}

void exercicioquatro() {
  int v[5], inverso[5];
  printf("Digite 5 valores inteiros:\n");
  for (int i = 0; i < 5; i++) {
    scanf("%i", & v[i]);
  }
  printf("\n Vetor inverso: ");
  for (int i = 0; i < 5; i++) {
    inverso[i] = v[4 - i];
    printf("%i ", inverso[i]);
  }
}

void exerciciocinco() {
  int v[12] = {
    31,
    28,
    31,
    30,
    31,
    30,
    31,
    31,
    30,
    31,
    30,
    31
  };
  int n, count = 0, dia, mes;
  printf("Digite o numero de dias decorridos desde o inicio do ano:");
  scanf("%i", & n);
  while (n <= 0 || n > 365) {
    printf("\n Valor invalido. Digite novamente: \n");
    scanf("%i", & n);
  }

  for (int i = 0; i < 12; i++) {
    n = n - v[i];
    if (n < 0) {
      n = n + v[i];
      dia = n;
      mes = i + 1;
      break;
    }
  }
  printf("%i/%i", dia, mes);
}

void exercicioseis() {
  int m[6][6];
  for (int i = 0; i < 6; i++) {
    for (int j = 0; j < 6; j++) {
      m[i][j] = 1;
    }
  }
  for (int i = 1; i < 5; i++) {
    for (int j = 1; j < 5; j++) {
      m[i][j] = 2;
    }
  }
  for (int i = 2; i < 4; i++) {
    for (int j = 2; j < 4; j++) {
      m[i][j] = 3;
    }
  }
  for (int i = 0; i < 6; i++) {
    printf("\n");
    for (int j = 0; j < 6; j++) {
      printf("%i ", m[i][j]);
    }
  }
}

void exerciciosete() {
  int a1 = 3, a2 = 4, b1 = 4, b2 = 5, aux = 0;
  float m1[a1][b1], m2[a2][b2], mult[3][5];
  printf("Digite os valores da matriz 3x4:");
  for (int i = 0; i < a1; i++) {
    for (int j = 0; j < b1; j++) {
      scanf("%f", & m1[i][j]);
    }
  }
  printf("Digite os valores da matriz 4x5:");
  for (int i = 0; i < a2; i++) {
    for (int j = 0; j < b2; j++) {
      scanf("%f", & m2[i][j]);
    }
  }
  for (int i = 0; i < a1; i++) {
    for (int j = 0; j < b2; j++) {
      mult[i][j] = 0;
      for (int x = 0; x < a2; x++) {
        aux += m1[i][x] * m2[x][j];
      }
      mult[i][j] = aux;
      aux = 0;
    }
  }
  for (int i = 0; i < 3; i++) {
    printf("\n");
    for (int j = 0; j < 5; j++) {
      printf("%.2f ", mult[i][j]);
    }
  }

}

int main() {
  int exercicio, x, continuar = 0;
  printf("\n Este programa irá resolver a lista de exercicios 3 de LPG\n");
  do {

    printf("\n Escolha um exercício entre 1 e 7: \n");

    scanf("%i", & exercicio);

    switch (exercicio) {

    case 1:
      exercicioum();
      break;

    case 2:
      exerciciodois();
      break;

    case 3:
      exerciciotres();
      break;

    case 4:
      exercicioquatro();
      break;

    case 5:
      exerciciocinco();
      break;

    case 6:
      exercicioseis();
      break;

    case 7:
      exerciciosete();
      break;

    default:
      printf("\n O exercicio selecionado não consta na lista ou está fora do intervalo especificado \n");
      break;

    }
    printf("\n\n Deseja continuar? \n Digite 0 para sim e 1 para não \n");
    scanf("%i", & continuar); //Sobrescreve o valor da variavel Continuar
  } while (continuar == 0); //Fim repetição menu seleção
  return 0;
}
