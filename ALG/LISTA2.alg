#include <stdio.h>
#include <math.h>

//-----------------------------------------------------------------------------------
//FUNÇÕES
//-----------------------------------------------------------------------------------



void Exercicioum()
{
int n;
 printf("\n Digite um numero entre 1 e 9 \n");
 scanf("%i",&n);
 if(n>=1 && n<=9)
  {
   printf("\n O valor está na faixa permitida \n");
  }
 else
  {
   printf("\n O valor está fora da faixa permitida \n");
  }
}




void Exerciciodois()
{
int sexo;
float a,p;
printf("\n Qual a altura da pessoa em centimetros? \n");
scanf("%f",&a);
printf("\n Qual o sexo da pessoa? Digite 1 para homem e 2 para mulher \n");
scanf("%i",&sexo);

switch(sexo)
{
 case 1:
  p=(72.7*a)-58;
  printf("\n O peso ideal para esta pessoa é: %.2f \n",p);
 break;

 case 2:
  p=(62.1*a)-44.7;
  printf("\n O peso ideal para esta pessoa é: %.2f \n",p);
 break;

 default:
 printf("\n Erro! \n Genero Indefinido.\n Atribuindo genero: Helicoptero de Combate Boeing AH-64 Apache \n");
 printf("\n Peso ideal: 6000 Kg \n"); 
}
}




void Exerciciotres()
{
 float x,y;
 printf("\n Digite uma coordenada do plano cartesiano \n");
 printf("\n Atribua X:\n");
 scanf("%f",&x);
 printf("\n Atribua Y:\n");
 scanf("%f",&y);

if(x==0 && y==0)
 {
  printf("\n O ponto é a origem \n");
 }
if(x==0)
 {
  printf("\n O ponto está sobre o eixo y \n");
 }
if(y==0)
 {
  printf("\n O ponto está sobre o eixo x \n");
 }
if(x>0 && y>0)
 {
  printf("\n O ponto está no primeiro quadrante \n");
 }
if(x>0 && y<0)
 {
  printf("\n O ponto está no segundo quadrante\n");
 }
if(x<0 && y<0)
 {
  printf("\n O ponto está no terceiro quadrante\n");
 }
 if(x<0 && y>0)
 {
  printf("\n O ponto está no quarto quadrante\n");
 } 
}




void Exercicioquatro()
{
float m,n1,n2,n3,n4,me,e;
printf("\n Informe as quatro notas referentes ao aluno: \n");
printf("\n  Informe a primeira nota: \n");
scanf("%f",&n1);
printf("\n Informe a segunda nota: \n");
scanf("%f",&n2);
printf("\n Informe a terceira nota: \n");
scanf("%f",&n3);
printf("\n Informe a quarta nota: \n");
scanf("%f",&n4);
m=(n1+n2+n3+n4)/4;

if(m>=7)
{
 printf("\n O aluno foi aprovado \n");
}
else
{
 printf("\n Aluno em exame \n");
 printf("\n Informe a nota do exame do aluno \n");
 scanf("%f",&e);
 me=(m+e)/2;
 if(me>=5)
 {
   printf("\n O aluno foi aprovado no exame \n");
 }
 else
 {
  printf("\n O aluno foi reprovado no exame \n");
 }
}
}




void Exerciciocinco()
{
int a,b,c,d,e,m;
printf("\n Digite cinco numeros inteiros \n");
printf("\n Informe o primeiro numero \n");
scanf("%i",&a);
printf("\n Informe o segundo numero \n");
scanf("%i",&b);
printf("\n Informe o terceiro numero \n");
scanf("%i",&c);
printf("\n Informe o quarto numero \n");
scanf("%i",&d);
printf("\n Informe o quinto numero \n");
scanf("%i",&e);
m=(a+b+c+d+e)/5;
if(a>m)
{
 printf("\n O numero %i é maior que a média \n",a);
}
if(b>m)
{
 printf("\n O numero %i é maior que a média \n",b);
}
if(c>m)
{
 printf("\n O numero %i é maior que a média \n",c);
}
if(d>m)
{
 printf("\n O numero %i é maior que a média \n",d);
}
if(e>m)
{
 printf("\n O numero %i é maior que a média \n",e);
}
}




void Exercicioseis()
{
int operacao;
float n,m,r;
printf("\n Escolha uma operação matemática a ser realizada: \n");
printf("\n Digite: \n 1 (Adição) \n 2 (Subtração) \n 3 (Multiplicação) \n 4 1(Divisão) \n");
scanf("%i",&operacao);
printf("\n Digite os numeros da operação \n");
printf("\n Informe o primeiro número:\n");
scanf("%f",&n);
printf("\n Informe o segundo número \n");
scanf("%f",&m);

switch(operacao)
{
 case 1:
  r=n+m;
  printf("\n A soma é: %.2f \n",r);
 break;

 case 2:
  r=n-m;
  printf("\n A subtração é: %.2f \n",r);
 break;

 case 3:
  r=n*m;
  printf("\n A multiplicação é: %.2f \n",r);
 break;

 case 4:
  r=n/m;
  printf("\n A divisão é: %.2f \n",r);
 break;
}
}




void Exerciciosete()
{
int a,b,c,s,d;
float r;
printf("\n Digite dois valores inteiros \n");
printf("\n Digite o primeiro:\n");
scanf("%i",&a);
printf("\n Digite o segundo:\n");
scanf("%i",&b);
c=a%b;
if(c==1)
{
 printf("\n Resto 1 \n Soma das variáveis: %i \n",(a+b+c));
}
else if(c==2)
{
 printf("\n Resto 2 \n");
 if(a%2==0)
 {
  printf("\n O primeiro valor é par \n");
 }
 else
 {
  printf("\n O primeiro valor é impar \n");
 }
 if(b%2==0)
 {
  printf("\n O segundo valor é par \n");
 }
 else
 {
  printf("\n O segundo valor é impar \n");
 }
}
else if(c==3)
{
 printf("\n Resto 3 \n");
 printf("\n Soma dos valores multiplicado pelo primeiro valor: %i\n",((a+b)*a));
}
else if(c==4)
{
 printf("\n Resto 4 \n");
 s=a+b;
 d=s%b;
 if(b!=0)
 {
  r=(a+b)/b;
  printf("\n A divisão da soma dos termos pelo segundo é: %.2f \n",r);
 }
 else
 {
  printf("\n Não é possivel dividir \n");
 }
}
else
{
 printf("\n O quadrado do primeiro termo é: %i \n",a*a);
 printf("\n O quadrado do segundo termo é: %i \n",b*b);
}
}




void Exerciciooito()
{
float salario, novosalario;
char nome[40];
printf("\n Digite o primeiro nome do funcionário: \n");
scanf("%s",nome);
printf("\n Digite o salário do funcionário %s: \n",nome);
scanf("%f",&salario);
if(salario<0)
{
 printf("\n ERRO:SALÁRIO INFORMADO NEGATIVO \n");
}
if(salario>=0 && salario<=400)
{
 novosalario=1.15*salario;
 printf("\n O salário com o aumento de 15 porcento do funcionário %s é: R$%.2f\n",nome,novosalario); 
}
if(salario>400 && salario<=700)
{
 novosalario=1.12*salario;
 printf("\n O salário com o aumento de 12 porcento do funcionário %s é: R$%.2f\n",nome,novosalario); 
}
if(salario>700 && salario<=1000)
{
 novosalario=1.10*salario;
 printf("\n O salário com o aumento de 10 porcento do funcionário %s é: R$%.2f\n",nome,novosalario); 
}
if(salario>1000 && salario<=1800)
{
 novosalario=1.07*salario;
 printf("\n O salário com o aumento de 7 porcento do funcionário %s é: R$%.2f\n",nome,novosalario); 
}
if(salario>1800 && salario<=2500)
{
 novosalario=1.04*salario;
 printf("\n O salário com o aumento de 4 porcento do funcionário %s é: R$%.2f\n",nome,novosalario); 
}
if(salario>2500)
{
 printf("\n O salário do funcionário %s não pode ser aumentado \n",nome); 
}
}





void Exercicionove()
{
int c50,c20,c10,c5,c2,m1,valor;  //Váriaveis cédula de 100,50,20,10,5,2, moeda de 1 real e o valor a ser convertido
printf("\n Este exercício dirá quantas de cada cédula cerão recebidas \n caso seja sacado determinado valor");
printf("\n Informe o valor inteiro a ser convertido em cédulas de 50,20,10,5,2 ou moedas de 1.\n");
scanf("%i",&valor);

c50=(valor/50);
valor=valor%50;
c20=(valor/20);
valor=valor%20;
c10=(valor/10);
valor=valor%10;
c5=(valor/5);
valor=valor%5;
c2=(valor/2);
valor=valor%2;
m1=(valor/1);
if(c50!=0)
{
 printf("\n Numero de notas de R$50 reais: %i \n",c50);
}
if(c20!=0)
{
 printf("\n Numero de notas de R$20 reais: %i \n",c20);
}
if(c10!=0)
{
 printf("\n Numero de notas de R$10 reais: %i \n",c10);
}
if(c5!=0)
{
 printf("\n Numero de notas de R$5 reais: %i \n",c5);
}
if(c2!=0)
{
 printf("\n Numero de notas de R$2 reais: %i \n",c2);
}
if(m1!=0)
{
 printf("\n Numero de moedas de R$1 real: %i \n",m1);
}
}




void Exerciciodez()
{
float a,b,c,d,x1,x2;
printf("\n Este programa calculará a(s) raiz(es) de uma equação de segundo grau. \n");
printf("\n Digite o valor da variável 'a':\n");
scanf("%f",&a);
printf("\n Digite o valor da variável 'b':\n");
scanf("%f",&b);
printf("\n Digite o valor da variável 'c':\n");
scanf("%f",&c);
if(a==0)
 {
  printf("\n A equação não é do segundo grau \n");
 }
else
 {
 d=(b*b)-(4*a*c);
 if(d>=0)
  {
   x1=((-b)+sqrt(d))/(2*a);
   x2=((-b)-sqrt(d))/(2*a);    
   printf("\n As raizes são: x1=%.2f e x2=%.2f \n",x1,x2);
  }
 if(d<0)
  {
   printf("\n A equação não possui raizes reais \n");
  }  
 }
}




//-----------------------------------------------------------------------------------
//FUNÇÕES FIM
//-----------------------------------------------------------------------------------

int main()
{
int exercicio;
printf("\n Este programa irá resolver os exercícios propostos na segunda lista \n");
printf("\n Escolha um exercício entre 1 e 10: \n");
scanf("%i",&exercicio);

switch(exercicio)
{

 case 1:
   Exercicioum();
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

 default:
  printf("\n O exercicio selecionado não consta na lista \n");
}
 return 0;
}
