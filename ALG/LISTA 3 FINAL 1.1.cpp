#include <stdio.h>

#include <math.h>

#include <stdlib.h>

void Exercicioum() {
  int n, inteiro, count = 0, m;
  printf("\n Digite o numero inteiro do qual queres ver a tabuada \n");
  scanf("%i", & inteiro);
  printf("\n Digite o valor de números que queres ver na tabuado \n");
  scanf("%i", & n);

  while (count <= n) {                                    //Repete enquanto não atingir n
    count = count + 1;                                   //Soma count para continuar repetindo o ciclo
    m = inteiro * count;                                //Multiplica o numero e o mostra na tela no passo seguinte
    printf("\n %i \n", m);
  }
}

void Exerciciodois() {
  int num1, num2, i;
  int count = 0;
  printf("\n Digite dois numeros inteiros: \n ");
  scanf("%i", & num1);
  scanf("%i", & num2);
  if (num1 <= num2) {                                                                  //Caso seja informado primeiro o menor termo
    for (i = num1; i < num2; i++) {                                                    //Le os valores entre os termos
      if (i % 2 != 0) {                                                                 //Caso seja impar
        count = count + i;                                                             //Soma e armazena
        printf("+(%i)", i);
      }
    }

    printf("=%i", count);
  } else {                                                                           //Caso seja informado primeiro o maior termo
    for (i = num1; i >= num2; i--) {                                                 //Le os valores entre os termos
      if (i % 2 != 0) {                                                               //Caso seja impar
        count = count + i;                                                            //Soma e armazena
      }
    }
    printf("=%i", count);
    for (i = num1; i >= num2; i--) {
      if (i % 2 != 0) {
        printf("\n +(%i)", i);
      }
    }
  }
}

void Exerciciotres() {
  int n, maior, menor, i, dif;
  printf("\n Digite o numero inteiro de valores que serão verificados:\n");
  scanf("%i", & n);
  int a[n];
  printf("\n Digite os %i valores inteiros\n", n);
  for (i = 0; i < n; i++) {
    scanf("%i", & a[i]);                                                                             //Le e atribui os valores a matriz a
  }
  maior = a[0];
  menor = a[0];

  for (i = 0; i < n; i++) {                                                                       //Repete o ciclo n vezes
    if (a[i] > maior)                                                                             //Caso seja maior que o termo anterior, armazena
      maior = a[i];
    if (a[i] < menor)                                                                           //Caso seja menor que o termo anterior, armazena
      menor = a[i];
  }
  printf("\n A amplitude entre os valores %i e %i é: %i \n", menor, maior, dif = maior - menor);
}

void Exercicioquatro() {
  int c;
  float f, c1, c2;
  printf("\n Digite a temperatura inicial do intervalo:\n");
  scanf("%f", & c1);
  printf("\n Digite a temperatura final do intervalo:\n");
  scanf("%f", & c2);
  for (c = c1; c <= c2; c++) {                                                       //Inicia o ciclo na temperatura inicial e repete até atingir a temperatura final
    f = (c * 1.8) + 32;                                                             //Conversão
    if (c % 2 == 0) {                                                               //Mostrar a conversão em um intervalo de 2 em 2
      printf("\n Temperatura %i Celcius em Fahreit: %f\n", c, f);
    }
  }
  if (c % 2 == 0)                                                                   //Condição que funcionou para retirar a duplicata de c=c2 caso seja par
  {
    printf("\n Temperatura %i Celcius em Fahreit: %f\n", c - 1, f);
  }
}

void Exerciciocinco() {
  int n, soma = 0, d;
  printf("\n Digite o valor inteiro\n");
  scanf("%i", & n);

  for (d = 1; d < n; d++) {                                                         //repete o siclo até atingir o valor do numero fornescido
    if (n % d == 0)                                                                  //Caso seja divisivel
      soma = soma + d;                                                                  //Soma
  }
  if (n == soma / 2)                                                               //Caso a soma seja o dobro do numero
    printf("\n O numero %i é perfeito\n", n);
  else
    printf("\n O numero %i não é perfeito\n", n);
}

void Exercicioseis() {
  int nh, nm, i;
  printf("\n Digite o número de Homens:\n");
  scanf("%i", & nh);
  printf("\n Digite o número de mulheres:\n");
  scanf("%i", & nm);
  float h[nh], m[nm], maior, soma = 0;                                                //Vetores h e m que irão armazenar os valores fornescidos

  if (nh != 0) {                                                                         //Faz a leitura das nh alturas dos homens
                                    
    printf("\n Digite as alturas dos %i homens em centimetros inteiros:\n", nh);
    for (i = 0; i < nh; i++) {
      scanf("%f", & h[i]);
    }
  }

  if (nm != 0) {                                                                    //Faz a leitura dos dados de altura das nm mulheres
    printf("\n Digite a altura das %i mulheres em centimetros inteiros:\n", nm);
    for (i = 0; i < nh; i++) {
      scanf("%f", & m[i]);
    }
  }
  maior = h[0];

  for (i = 0; i < nh; i++) {                                                          //Repete o ciclo para todos os n homens
    if (h[i] > maior)                                                                 //Caso a altura de algum seja maior que o anterior, grava
      maior = h[i];
  }

  for (i = 0; i < nm; i++) {
    soma = soma + m[i];                                                             //Faz a soma das alturas das mulheres
  }

  printf("\n A maior altura entre os homens é: %f\n", maior);
  printf("\n A média da altura das mulheres é: %f\n", soma / nm);                   //Mostra a média
}

void Exerciciosete() {
  int i, n, j;
  printf("\n Digite o numero de valores que serão considerados:\n");
  scanf("%i", & n);
  float valor[0], val, media, soma, harm, c[0];
  printf("\n Digite os %i valores inteiros e positivos:\n", n);
  i = 0;
  do {
    scanf("%f", & valor[i]);
    val = valor[i];
    i++;
  } while (i < n && val >= 0 && val == (int) val);                      //Repete o ciclo n vezes enquanto as condições forem cumpridas

  if (val < 0 || val != (int) val) {                             //Caso uma das condições acima seja inválida
    printf("\n Valor inválido \n");
  }

  for (i = 0; i < n; i++) {
    soma = soma + valor[i];                                     //faz a soma dos termos e atualiza a cada ciclo
  }

  for (i = 0; i < n; i++) {
    c[i] = 1 / valor[i];                                       // Atribui os valores do denominador da harmonica ao vetor c
  }

  for (i = 0; i < n; i++) {
    harm = n / c[i];                                           //Cria a armonica e grava os valores
  }
  media = soma / n;                                             //Calcula a média
  printf("\n Média aritmética: %f \n", media);
  printf("\n A armonica é: %f \n", harm);
}

void Exerciciooito() {
  int j, n;
  float r;
  double i;
  printf("\n Digite o valor inicial da PA:\n");
  scanf("%lf", & i);
  printf("\n Digite a razão da progressão: \n");
  scanf("%f", & r);
  printf("\n Digite o numero de termos que deseja gerar:\n");
  scanf("%i", & n);
  printf("\n 1o Valor:%f", i);                                  //Coloquei no lado de fora pois a contagem do for iniciou diretamente no segundo termo
  for (j = 0; j < n - 1; j++) {                                 //Repete conforme o numero de termos selecionados
    i = i + r;                                                  //Incrementa a variavel i e a reatribui a cada ciclo
    printf("\n %io Valor:%f", j + 2, i);                        //Mostra o resultado a cada ciclo
  }
}

void Exercicionove() {
  float d = 1, n1 = 1, d2 = 2, soma = 0, soma1 = 0;                //Atribui os valores que serão usados na geração da série
  int i, n;
  printf("\n Digite o numero de termos a serem gerados:\n");
  scanf("%i", & n);

  for (i = 0; i < n; i++) {                                    //Repete o ciclo conforme o numero de termos selecionado
    soma = soma + (n1 / d2);                                   //Armazena a soma em cada ciclo
    n1 = n1 + 2;                                               //Incrementa o nominador
    d2 = d2 + 3;                                               //Incrementa o denominador
  }

  for (i = 0; i < n; i++) {                                    //Gera n termos
    if (i % 2 != 0) {                                         //Se o numero do termo for impar, subtrai
      soma1 = soma1 - (1 / d);
    } else if (i % 2 == 0) {                                  //Se o numero do termo for par,soma
      soma1 = soma1 + (1 / d);
    }
    d = d + 1;                                              //Incremento do denominador para cada ciclo
  }
  printf("\n Soma da primeira série:%f \n", soma);
  printf("\n Soma da segunda série:%f \n", soma1);
}

void Exerciciodez() {
  int sh = 0, nh = 0, sm = 0, nm = 0;                                                         //Variaveis Sim(s),Não(n),Homem(h),Mulher(m)
  int i, n, g, r;
  printf("\n Informe a quantidade de pessoas entrevistadas:\n");
  scanf("%i", & n);
  for (i = 0; i < n; i++) {                                                                                   //Repetir o ciclo conforme o numero n de pessoas entrevistadas
    printf("\n Informe o sexo do %io entrevistado. Para homem digite 0 e para mulher digite 1:\n", i + 1);
    scanf("%i", & g);
    if (g == 0) { //Se for homem
      printf("\n Informe a resposta. Para sim digite 1 e para não digite 0:\n");
      scanf("%i", & r);
      if (r == 1) {                                                                      //Se a resposta foi sim acrescenta h1(numero de homens) e sh
        sh = sh + 1;
      } else if (r == 0) {                                                               //Se for não conta os homens que responderam não
        nh = nh + 1;
      } else {
        printf("\n Resposta não consta no formulário\n");                                //Caso a resposta seja diferente de 0 ou 1
        break;
      }
    } else if (g == 1) {                                                                //Se for mulher, faz o mesmo de antes
      printf("\n Informe a resposta. Para sim digite 1 e para não digite 0:\n");
      scanf("%i", & r);
      if (r == 1) {
        sm = sm + 1;
      } else if (r == 0) {
        nm = nm + 1;
      } else {
        printf("\n Resposta não consta no formulário\n");
        break;
      }
    } else {                                                                           //Caso seja digitado algo além de 1 ou 2
      printf("\n Genero não determinado\n");
      break;
    }
  }
  float somasim, somanao, porhomnao, pormulsim, nmul, nhom;

  nhom = sh + nh;                                                                       //Soma o numero de homens
  nmul = sm + nm;                                                                       //Soma o numero de mulheres
  somasim = sm + sh;                                                                    //Soma as respostas positivas
  somanao = nh + nm;                                                                    //Soma as respostas negativas
  porhomnao = (nh / nhom) * 100;                                                        //Calcula a porcentagem de nãos entre os homens
  pormulsim = (sm / nmul) * 100;                                                        //Calcula a porcentagem de sim entre as mulheres
  printf("\n Numero de pessoas que responderam sim:%f \n", somasim);
  printf("\n Numero de pessoas que responderam não:%f \n", somanao);
  printf("\n Porcentagem de mulheres que responderam sim:%f\n", pormulsim);
  printf("\n Porcentagem de homens que responderam não:%f\n", porhomnao);
}

void Exercicioonze() {
  float habA = 90000, habB = 200000;
  int tano = 0, tmes = 0;
  printf("\n Contagem de tempo para que as cidaes A e B tenham a mesma população\n");
  do {
    habA = habA + (0.03 * habA);
    habB = habB + (0.015 * habB);
    tmes = tmes + 1;
    if (tmes == 12) {
      tano = tano + 1;
      tmes = 0;
    }
  } while (habA < habB);
  printf("\n Habitantes de A: %f\n", habA);
  printf("\n Habitantes de B: %f\n", habB);
  printf("\n Levou %i Ano(s) e %i Mes(es) para que A ultrapassasse B\n", tano, tmes);
}

void Exerciciodoze() {
  double tano = 0, tmes = 0, pA = 0, pB = 0;                                                                          //Criando variavel para receber valores de grande porte
  float porcA, porcB;
  printf("\n Contagem de tempo para que as cidaes A e B tenham a mesma população\n");
  printf("\n Informe a população da cidade A:\n");
  scanf("%lf", & pA);
  printf("\n Informe a população da cidade B:\n");
  scanf("%lf", & pB);
  printf("\n Informe o percentual de crescimento da cidae A:\n");
  scanf("%f", & porcA);
  printf("\n Informe o percentual de crescimento da cidae B:\n");
  scanf("%f", & porcB);
  if (pA <= 0 || pB <= 0) {                                                                                            //Caso a população seja zero ela não irá crescer e não pode exirtir população negativa
    printf("\n População negativa ou nula, finalizando o código\n");
  } else {
    do {                                                                                                                //Inicio ciclo
      pA = pA + ((porcA / 100) * pA);                                                                                   //Calculo da população atualizado a cada ciclo
      pB = pB + ((porcB / 100) * pB);
      tmes = tmes + 1;                                                                                                  //Soma os meses a cada ciclo
      if (tmes == 12) {
        tano = tano + 1;                                                                                                //Incrementa ano
        tmes = 0; //Zera mes
      }
    } while (pA < pB); //fim ciclo caso A passe B
  }
  printf("\n Habitantes de A: %f\n", pA);
  printf("\n Habitantes de B: %f\n", pB);
  printf("\n Levou %f Ano(s) e %f Mes(es) para que A ultrapassasse B\n", tano, tmes);
}

int main() {                                                                                         //Inicio corpo do programa
  int exercicio = 0, x, continuar = 0;
  printf("\n Este programa irá resolver os exercícios propostos na segunda lista \n");
  do {                                                                                            //Inicio repetição menu
    printf("\n Escolha um exercício entre 1 e 12: \n");
    scanf("%i", & exercicio); //seleção exercicio

    switch (exercicio) {                                                     //Inicio menu

    case 1:
      Exercicioum();                                                         //Direciona a funçao
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

    case 9:
      Exercicionove();
      break;

    case 10:
      Exerciciodez();
      break;

    case 11:
      Exercicioonze();
      break;

    case 12:
      Exerciciodoze();
      break;

    default:
      printf("\n O exercicio selecionado não consta na lista \n");
      break;
    } //Fim menu
    printf("\n Deseja continuar? \n Digite 0 para sim e 1 para não \n");
    scanf("%i", & continuar);                                                                  //Sobrescreve o valor da variavel Continuar
  } while (continuar == 0);                                                                    //Fim repetição menu seleção
  return 0;
}
