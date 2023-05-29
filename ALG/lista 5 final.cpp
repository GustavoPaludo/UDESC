#include <stdio.h>

#include <math.h>

#include <stdlib.h>

void Exercicioum() {
  int i, soma = 0;
  int valores[20];

  printf("\n Digite 20 numeros inteiros dos quais \n serão contados os valores pares:\n");

  for (i = 0; i < 20; i++) //Início loop
  {
    scanf("%i", & valores[i]); //serão lidos os 20 valores
    if (valores[i] % 2 == 0) //se o valor for par
    {
      soma = soma + 1; //variavel soma armazena a somatória dos pares
    }
  }
  printf("\n Numero de valores pares: %i \n", soma);
}

void Exerciciodois() {
  int i, vetor[30];
  printf("\n Digite 30 valores. Caso o valor seja zero será substituido por um:\n");

  for (i = 0; i < 30; i++) // Inicio do loop onde serão lidos os 30 valores
  {
    scanf("%i", & vetor[i]);
    if (vetor[i] == 0) //Caso seja zero
    {
      vetor[i] = 1; //O valor na posição i é substituido por 1
    }
  }
  printf("\n Vetor final: \n");
  printf("(");
  for (i = 0; i < 30; i++) {
    printf("%i ", vetor[i]);
  }
  printf(")");
}

void Exerciciotres() {
  int count = 0;
  int i, vetor[20], positivos[count];
  printf("\n Digite 20 valores. Caso o valor seja positivo ele será mostrado na tela:\n");

  for (i = 0; i < 20; i++) //Loop que lerá os 20 valores
  {
    scanf("%i", & vetor[i]);
  }

  for (i = 0; i < 20; i++) //loop que irá verificar se o valor é positivo e printa-lo na tela (obs: loop separado pois caso contrário o valor seria printado imediatamente após ser digitado)
  {
    if (vetor[i] >= 0)
      printf("%i ", vetor[i]);
  }
}

void Exercicioquatro() {
  int vetor1[10], vetor2[10], vetmult[10], i; //vetmult= vetor que armazena os valores da multiplicação
  printf("\n Este programa irá ler 10 valores de dois vetores e \n multiplica-los");

  printf("\n Digite os valores do primeiro vetor:\n");

  for (i = 0; i < 10; i++) //Loop que irá atribuir os valores do primeiro vetor
  {
    scanf("%i", & vetor1[i]);
  }

  printf("\n Digite os valores do segundo vetor: \n");

  for (i = 0; i < 10; i++) //Loop que irá atribuir os valores do segundo vetor
  {
    scanf("%i", & vetor2[i]);
  }

  printf("\n Vetor multiplicação: (");

  for (i = 0; i < 10; i++) //Loop que multiplica os valores dos dois vetores e armazena no vetor multiplicação na posição i, e printa na tela
  {
    vetmult[i] = vetor1[i] * vetor2[i];
    printf("%i ", vetmult[i]);
  }
  printf(")");
}

void Exerciciocinco() {
  int vetor[30], i, count = 0, soma = 0;
  float media;
  printf("\n Este programa calcula a media dos valores impares de \n um vator de 30 unidades que sejam maiores que dez\n");
  printf("\n Digite os 30 valores:\n");

  for (i = 0; i < 30; i++) //Loop que lê os 30 valores do vetor e soma os maiores que dez
  {
    scanf("%i", & vetor[i]);
    if (vetor[i] > 10 && vetor[i] % 2 != 0) {
      soma = soma + vetor[i];
      count = count + 1;
    }
  }

  media = soma / count; //calculo da média

  printf("\n Média dos valores impares maiores que dez: %.2f \n", media);
}

void Exercicioseis() {
  int i, count = 0;
  float vetor[30], media, posicao, soma = 0, numeromaiores = 0, mediamaiores, somamaiores = 0;
  float porcentagem;
  printf("\n Este programa imá mostrar a media dos valores de um vetor com 30 numeros, \n quais valors estão acima da média, \n quantos estão acima da média, \n a soma dos números acima da média \n e a porcentagem de numeros acima da média\n");
  printf("\n Informe os 30 valores:\n");

  for (i = 0; i < 30; i++) //leitura dos 30 valores
  {
    scanf("%f", & vetor[i]);
    soma = soma + vetor[i]; //soma dos termos
    count = count + 1; //contagem dos termos
  }

  media = soma / count; //calculo da média

  printf("\n Média dos 30 valores: %.2f", media);

  printf("\n Numeros acima da média e suas posições:\n");
  for (i = 0; i < 30; i++) //loop para verificação de condição
  {
    if (vetor[i] > media) //se o valor for maior que a média
    {
      numeromaiores = numeromaiores + 1; //conta o numero de maiores que a média
      somamaiores = somamaiores + vetor[i]; //soma os numeros maiores que a média
      mediamaiores = somamaiores / numeromaiores; //faz a média dos numeros maiores que a média
      printf("\n Valor %.2f da posição %i", vetor[i], i + 1); //printar qual valor é maior que a média e sua posição
    }
  }
  printf("\n \n Numero de valores acima da média: %f", numeromaiores);
  printf("\n Soma dos numeros acima da média: %.2f", somamaiores);
  printf("\n Porcentagem de numeros acima da média: %.2f", porcentagem = ((numeromaiores / 30) * 100));
}

void Exerciciosete() {
  int i, n;
  printf("\n Este programa irá inverter os valores de uma matriz \n");
  printf("\n Digite o numero de termos que serão considerados: \n");
  scanf("%i", & n); //lê o numero de valores que serão considerados

  float vetor[n], inverso[n];

  printf("\n Digite os %i valores: \n", n);

  for (i = 1; i <= n; i++) //loop que le os valores
  {
    scanf("%f", & vetor[i]);
  }
  printf("\n Vetor inverso: \n ( ");

  for (i = 0; i < n; i++) {
    inverso[i] = vetor[n - i]; //inverte os valores lendo o vetor de  traz para a frente
    printf("%.2f ", inverso[i]);
  }
  printf(")");
}

void Exerciciooito() {
  int i, n, soma = 0, aux, a = 0, b = 1;
  printf("\n Este programa irá gerar os termos de uma sequencia de fibonacci. \n");
  printf("\n Digite o numero de termos que deseja gerar (máximo 50): \n");

  scanf("%i", & n); //Le o numero de variaveis que serão mostradas na tela 

  do {
    printf("\n Valor maior que 50. Digite um valor válido: \n");
    scanf("%i", & n);
  } while (n > 50); //enquanto o valor for maior que cinquenta requisita um valor correto

  float sequencia[n];

  for (i = 0; i < n; i++) {
    aux = a + b; //a variavel auxiliar recebe a soma de a e b (1)
    a = b; //a variavel a recebe o valor de b
    b = aux; //b recebe o valor da variavel auxiliar
    sequencia[i] = aux; //o vetor sequencia armazena os valores de aux
  }

  printf("\n Sequencia de fibonacci: \n ( 1.00 "); //Printa o primeiro 1 pos ele não aparece no calculo interno do loop
  for (i = 0; i < n - 1; i++) //loop que printa os valores da sequencia de fibobacci
  {
    printf("%.2f ", sequencia[i]);
  }
  printf(")");
}

int main() { //Inicio corpo do programa
  int exercicio = 0, x, continuar = 0;
  printf("\n Este programa irá resolver os exercícios propostos na segunda lista \n");
  do { //Inicio repetição menu
    printf("\n Escolha um exercício entre 1 e 8: \n");
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

    case 8:
      Exerciciooito();
      break;

    default:
      printf("\n O exercicio selecionado não consta na lista \n");
      break;
    } //Fim menu
    printf("\n Deseja continuar? \n Digite 0 para sim e 1 para não \n");
    scanf("%i", & continuar); //Sobrescreve o valor da variavel Continuar
  } while (continuar == 0); //Fim repetição menu seleção
  return 0;
}
