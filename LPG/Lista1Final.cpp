#include <stdio.h>


void Exercicioum() {
  float x, y;
  printf("\n Este programa irá dizer o quadrante de um dado ponto ");
  printf("\n Digite o valor de X: ");
  scanf("%f", & x);
  printf("\n Digite o valor de Y: ");
  scanf("%f", & y);

  if (x == 0 && y == 0)
    printf("\n O ponto está na Origem");
  if (x == 0)
    printf("\n O ponto está no Eixo Y");
  if (y == 0)
    printf("\n O ponto está no eixo X");
  if (x > 0 && y > 0)
    printf("\n O ponto está no primeiro quadrante");
  if (x < 0 && y < 0)
    printf("\n O ponto está no terceiro quadrante");
  if (x > 0 && y < 0)
    printf("\n O ponto está no quarto quadrante");
  if (x < 0 && y > 0)
    printf("\n O ponto está no segundo quadrante");
}

void Exerciciodois() { //DANDO ERRO, REFAZER
  double a, b, c, A, B, C;
  printf("\n Este programa irá averiguar o tipo do triangulo dados os tamanhos de suas 3 arestas.");
  printf("\n Digite o valor da aresta A:");
  scanf("%lf", & a);
  printf("\n Digite o valor da aresta B:");
  scanf("%lf", & b);
  printf("\n Digite o valor da aresta C:");
  scanf("%lf", & c);

  if ((a >= b + c) || (b >= a + c) || (c >= a + b)) {
    printf("\n Os pontos não formam um triangulo");
  } else {
    if ((a * a) > (b * b) + (c * c) || (b * b) > (a * a) + (c * c) || (c * c) > (b * b) + (a * a)) {
      printf("\n Os pontos formam um triangulo obtusangulo");
    }
    if ((a * a) < (b * b) + (c * c) || (b * b) < (a * a) + (c * c) || (c * c) < (b * b) + (a * a)) {
      printf("\n Os pontos formam um triangulo acutangulo");
    }
    if (a == b && b == c) {
      printf("\n Os pontos formam um triangulo isosceles");
    }
    if ((a * a) == (b * b) + (c * c) || (b * b) == (a * a) + (c * c) || (c * c) == (b * b) + (a * a)) {
      printf("\n Os pontos formam um triangulo retangulo");
    }
  }
}

void Exerciciotres() {
  float h1, h2, h = 0;
  printf("\n Digite os horários de inicio e fim do jogo, respectivamente:\n ");
  scanf("%f", & h1);
  scanf(" %f", & h2);
  if (h1 == h2)
    printf("\n O jogo durou 24 horas");
  if (h1 < h2) {
    h = h2 - h1;
    printf("\n O jogo durou %.2f Horas", h);
  }
  if (h1 > h2) {
    h = (h2 + 24) - h1;
    printf("\n O jogo durou %.2f Horas", h);
  }
}

void Exercicioquatro() {
  int i, n, num, pares = 0, impares = 0, positivos = 0, negativos = 0;
  printf("\n Digite o numero de valores inteiros que serão verificados:");
  scanf("%i", & n);
  for (i = 1; i <= n; i++) {
    printf("\n Digite o %io valor:", i);
    scanf("%i", & num);
    if (num % 2 == 0)
      pares += 1;
    if (num % 2 != 0)
      impares += 1;
    if (num >= 0)
      positivos += 1;
    if (num < 0)
      negativos += 1;
  }
  printf("\n Positivos: %i", positivos);
  printf("\n Negativos: %i", negativos);
  printf("\n Pares: %i", pares);
  printf("\n Impares: %i", impares);
}

void Exerciciocinco() {
  int n, i;
  printf(" Este exercicio irá caucular a media ponderada de n casos com 3 valores cada");
  printf("\n Digite o numero de casos:");
  scanf("%i", & n);
  float num1[n], num2[n], num3[n], media[n];

  for (i = 0; i < n; i++) {
    printf(" Digite o 1o valor do %io caso:", i + 1);
    scanf("%f", & num1[i]);
    printf(" Digite o 2o valor do %io caso:", i + 1);
    scanf("%f", & num2[i]);
    printf(" Digite o 3o valor do %io caso:", i + 1);
    scanf("%f", & num3[i]);
    printf("\n");
  }
  for (i = 0; i < n; i++) {
    media[i] = ((2 * num1[i]) + (3 * num2[i]) + (5 * num3[i])) / 10;
    printf("\n Media ponderada de %.2f,%.2f e %.2f: %.2f", num1[i], num2[i], num3[i], media[i]);
  }
}

void Exercicioseis() {
  int x, y, i, count = 0;
  printf("\n Digite o primeiro valor do intervalo: ");
  scanf("%i", & x);
  printf("\n Digite o segundo valor do intervalo: ");
  scanf("%i", & y);
  for (i = x; i <= y; i++) {
    if (i % 2 != 0) {
      count += i;
    }
  }
  printf("\n Soma dos impares entre %i e %i: %i", x, y, count);
}

void Exerciciosete() {
  int i, j, n;
  printf("\n Digite o numero de casos de teste:");
  scanf("%i", & n);
  int x[n], y[n], count[n];

  for (i = 1; i <= n; i++) {
    printf("\n Digite os dois valores do %io intervalo:\n", i);
    scanf("%i", & x[i]);
    scanf("%i", & y[i]);
    for (j = x[i]; j <= y[i]; j++) {
      if (j % 2 != 0)
        count[i] += j;
    }
    printf("\n Soma dos impares entre %i e %i: %i \n", x[i], y[i], count[i]);
  }
}

int main() { //Inicio corpo do programa
  int exercicio, x, continuar = 0;
  printf("\n Este programa irá resolver a lista de exercicios 1 de LPG\n");
  do { //Inicio repetição menu

    printf("\n Escolha um exercício entre 1 e 7: \n");

    scanf("%i", & exercicio); //seleção exercicio

    switch (exercicio) { //Inicio menu

    case 1:
      Exercicioum(); //Direciona a funçao
      break;

    case 2:
      Exerciciodois();
      break;

    case 3:
      Exerciciotres();
      break;

    case 4:
      Exercicioquatro();
      break;

    case 5:
      Exerciciocinco();
      break;

    case 6:
      Exercicioseis();
      break;

    case 7:
      Exerciciosete();
      break;

    default:
      printf("\n O exercicio selecionado não consta na lista ou está fora do intervalo especificado \n");
      break;

    } //Fim menu

    printf("\n\n Deseja continuar? \n Digite 0 para sim e 1 para não \n");
    scanf("%i", & continuar); //Sobrescreve o valor da variavel Continuar
  } while (continuar == 0); //Fim repetição menu seleção
  return 0;
}
