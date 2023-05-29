#include <stdio.h>
#include <stdlib.h>

int soma_especial(int n, int k, int x){
if(n=1){
    return 0;
}
else{
    return x+soma_especial(n-1,k,x);
}
}


int soma_recursiva(int num){
    if(num==0){
        return 0;
    }
    else{
        return num+soma_recursiva(num-1);
    }
}

int soma_interativa(int num){
    int count=0,p=0;
    for(int i=1;p<num;i++){
        count+=i;
        p++;
    }
    return count;
}

float harmonica_recursiva(int num){
    if(num==1){
        return 1;
    }
    else{
        return (1.0/(float)num)+harmonica_recursiva(num-1);
    }    
}

float harmonica_interativa(int num){
    int p=0;
    float count=0;
    for(int i=1;p<num;i++){
        count+=(1/(float)i);
        p++;
    }
    return count;
}

int fatorial(int n){
    if(n>1){
        return n*fatorial(n-1);
    }
    else{
        return 1;
    }
}

float somatorio_recursivo(int n){
if(1.0/fatorial(n)<10e-8){
    return 1.0/fatorial(n);
}else{
    return 1.0/(fatorial(n)+somatorio_recursivo(n+1));
}
}

float somatorio_interativo(int num){
    float count=0,x;
    float fat;
  for(int i = 1; i <= num; i++){
    fat = 1.0;
    for(int j = 2; j <= i; j++)
    {
      fat = fat * j;
    }
    count = count + (1.0 / fat);
  }
    
return count;
}


int main() { //Inicio corpo do programa
  int exercicio, x, continuar = 0;
  printf("\n Este programa ir� resolver a lista de exercicios 2 de LPG (segunda parte)\n");
  do { //Inicio repeti��o menu

    printf("\n Escolha um exerc�cio entre 7 e 10: \n");

    scanf("%i", & exercicio); //sele��o exercicio

    switch (exercicio) { //Inicio menu
    
case 7:;
    int n,k,x,t;
    printf("Digite o numero de termos a serem gerados:\n");
    scanf("%i",&n);
    printf("Digite o intervalo entre as termos (k):\n");
    scanf("%i",&k);
    printf("Digite o termo a partir do qual ser�o mostrados os termos:\n");
    scanf("%i",&x);
    printf("= %i ",soma_especial(n,k,x));   
    break;
    
    case 8:;
    int s,num;
    printf("Digite o numero de valores 'n' que ser�o somados:\n");
    scanf("%i",&num);
    printf("Digite 1 para calcular de forma recursiva ou 2 para calcular de forma interativa:\n");
    scanf("%i",&s);
    if(s==1){
        printf("%i",soma_recursiva(num));
    }
    if(s==2){
        printf("%i",soma_interativa(num));
    }
    break;
    
    case 9:;
    int s2,num2;
    printf("Digite o numero de valores 'n' que ser�o gerados:\n");
    scanf("%i",&num2);
    printf("Digite 1 para calcular de forma recursiva ou 2 para calcular de forma interativa:\n");
    scanf("%i",&s2);
    if(s2==1){
        printf("%f",harmonica_recursiva(num2));
    }
    if(s2==2){
        printf("%f",harmonica_interativa(num2));
    }
    break;
    
    case 10:;
    int s3,num3;
    printf("Digite o numero de valores 'n' que ser�o gerados:\n");
    scanf("%i",&num3);
    printf("Digite 1 para calcular de forma recursiva ou 2 para calcular de forma interativa:\n");
    scanf("%i",&s3);
    if(s3==1){
        printf("%f",somatorio_recursivo(num3));
    }
    if(s3==2){
        printf("%f",somatorio_interativo(num3));
    }
    break;

    default:
      printf("\n O exercicio selecionado n�o consta na lista ou est� fora do intervalo especificado \n");
      break;

    } //Fim menu

    printf("\n\n Deseja continuar? \n Digite 0 para sim e 1 para n�o \n");
    scanf("%i", & continuar); //Sobrescreve o valor da variavel Continuar
  } while (continuar == 0); //Fim repeti��o menu sele��o
  return 0;
}

