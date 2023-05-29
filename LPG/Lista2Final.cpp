#include <stdio.h>

int tipo_triangulo(int a, int b, int c){
if((a>=b+c)||(b>=a+c)||(c>=a+b)) {
    	  return 0;
    }
    else {  // se formam um tri�ngulo
	    if((a==b)&&(b==c)) {  
	     	return 1;
	    }
	    else {
	       if((a!=b)&&(b!=c)&&(a!=c)) { 
		    	return 2;
		  }
		  else { 
		    	return 3;
	       }
	    }
    }
}

int maior_tres(int a, int b, int c){
    if(a>=b && a>=c)
		return 0;
	if(b>=a && b>=c)
		return 1;
	if(c>=a && c>=b)
		return 2;
}

int eh_digito(char x){
return x>='0' && x<='9';
}


int soma_impares(int a, int b){
    int i,count=0,menor,maior;
    if(a>=b){
        maior=a;
        menor=b;
    }
    else{
        maior=b;
        menor=a;
    }
    for(i=menor;i<=maior;i++){
        if(i%2 != 0){
            count=count+i;
        }
    }
    return count;
}


void primos(int a, int b){
    int c=0,count;
    for(int i = a; c<b; i++){
         count=0;
    for(int x=1;x<=i;x++) {         
			if(i % x == 0){
				count++;
}
         }
		if(count==2) {
			printf("\n %i � primo",i);
			c++;
		}	
}
}

void fibo(float n){
    double a=1,b=1,atual,i;
    printf("1�: 1 \n2�: 1 \n");
    for ( i = 3 ; i <= n ; i++ ){
       atual = a + b; 
       printf("%.0lf�: %.0lf\n", i, atual);
       a = b; 
       b = atual; 
    }

}


int main() { //Inicio corpo do programa
  int exercicio, x, continuar = 0;
  printf("\n Este programa ir� resolver a lista de exercicios 3 de LPG\n");
  do { //Inicio repeti��o menu

    printf("\n Escolha um exerc�cio entre 1 e 6: \n");

    scanf("%i", & exercicio); //sele��o exercicio

    switch (exercicio) { //Inicio menu

    case 1:;
      int v1,v2,v3;
      printf("Digite 3 valores inteiros:\n");
      scanf("%i %i %i",&v1,&v2,&v3);
      switch(tipo_triangulo(v1,v2,v3))
      {
        case(0):
        printf("\n Medidas incorretas!");
        break;

        case(1):
        printf("\n Triangulo equilatero");
        break;

        case(2):
        printf("\n Triangulo escaleno");
        break;

        case(3):
        printf("\n Triangulo isoceles");
        break;
      }
      break;

    case 2:;
    int x,y,z;
    printf("\n Digite tres valores inteiros \n");
    scanf("%u %i %i",&x,&y,&z);
    switch(maior_tres(x,y,z))
    {
        case (0):
        printf("\n O valor %i � o maior termo",x);
        break;
        
        case (1):
        printf("\n O valor %i � o maior termo",y);
        break;
        
        case (2):
        printf("\n O valor %i � o maior termo",z);
        break;
    }
      break;

    case 3:;
    char digito;
    printf("\n Digite um Char: \n");
    scanf("%c",&digito);
    if(eh_digito(digito))
     printf("\n %c � um digito entre 0 e 9\n",digito);
    else
     printf("\n %c N�o � um digito\n",digito); 
      break;

    case 4:;
    int n1,n2;
    printf("\n Digite o valor do inicio e do fim do intervalo:\n");
    scanf("%i %i",&n1,&n2);
    printf(" Soma dos impares: %i",soma_impares(n1,n2));  
      break;


    case 5:;
    int inicio,n,i,a;
    printf("Digite o inicio do intervalo e o numero de termos a serem gerados\n");
    scanf("%i %i",&inicio,&n);
    primos(inicio,n);
      break;

    case 6:;
    float termos;
    printf("\n Digite o numero de termos: \n");
    scanf("%f",&termos);
    fibo(termos);
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
