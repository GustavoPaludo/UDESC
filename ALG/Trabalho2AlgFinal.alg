#include <stdio.h>
#include <math.h>

int main()
{
int dia,mes,bisexto,ano,x,chaveano,chavemes,chaveseculo,soma,resto;
printf("\n Neste programa será determinado o dia da semana de \n uma data qualquer de 1800 a 2199 \n");
printf("\n Digite o dia: \n");
scanf("%i",&dia);
printf("\n Digite o numero do mês (ex:janeiro=1, dezembro=12): \n");
scanf("%i",&mes);
printf("\n Digite o ano: \n");
scanf("%i",&ano);

if(dia>=1 && dia<=31) // Limitando o intervalo dos dias
{
 if(mes>=1 && mes<=12) //Limitando intervalo meses
 {
  if(ano>=1800 && ano<=2199)  // Limitando intervalo anos
  {

  x=ano%100;  //Extraindo os dois ultimos algarismos do ano
  bisexto=ano%4; //Calculando a variável que dirá se o ano é bisexto
  chaveano=x/4; // Operação (2) da lista

  if(mes==1)   //Inicio atribuição de Chaves de meses
  {
   chavemes=1;
  }
  if(mes==1 && bisexto==0) // Chave para ano bisexto
  {
   chavemes=0;
  }
  if(mes==2)
  {
   chavemes=4;
  }
  if(mes==2 && bisexto==0) //Chave para ano bisexto
  {
   chavemes=3;
  }
  if(mes==3)
  {
   chavemes=4;
  }
  if(mes==4)
  {
   chavemes=0;
  }
  if(mes==5)
  {
   chavemes=2;
  }
  if(mes==6)
  {
   chavemes=5;
  }
  if(mes==7)
  {
   chavemes=0;
  }
  if(mes==8)
  {
   chavemes=3;
  }
  if(mes==9)
  {
   chavemes=6;
  }
  if(mes==10)
  {
   chavemes=1;
  }
  if(mes==11)
  {
   chavemes=4;
  }
  if(mes==12)
  {
   chavemes=6;  //Fim atribuição chaves para meses
  }

  if(ano>=1800 && ano<=1899)  //Inicio da atribuição de chaves para século
  {
   chaveseculo=2;
  }
  if(ano>=1900 && ano<=1999)
  {
   chaveseculo=0;
  }
  if(ano>=2000 && ano<=2099)
  {
   chaveseculo=6;
  }
  if(ano>=2100 && ano<=2199)
  {
   chaveseculo=4; // Fim atribuição de chaves para século
  }

  soma=x+chaveseculo+chaveano+chavemes+dia;  //Operação (6) da lista
  resto=soma%7;  //Operação (7) da lista

  if(resto==0) // Atribuindo dia da semana conforme o 'resto'
  {
   printf("\n O dia %i do mes %i do ano %i caiu em um Sábado \n",dia,mes,ano);
  }
  if(resto==1)
  {
   printf("\n O dia %i do mes %i do ano %i caiu em um Domingo \n",dia,mes,ano);
  }
  if(resto==2)
  {
   printf("\n O dia %i do mes %i do ano %i caiu em uma Segunda-Feira \n",dia,mes,ano);
  }
  if(resto==3)
  {
   printf("\n O dia %i do mes %i do ano %i caiu em uma Terça-Feira \n",dia,mes,ano);
  }
  if(resto==4)
  {
   printf("\n O dia %i do mes %i do ano %i caiu em uma Quarta-Feira \n",dia,mes,ano);
  }
  if(resto==5)
  {
   printf("\n O dia %i do mes %i do ano %i caiu em uma Quinta-Feira \n",dia,mes,ano);
  }
  if(resto==6)
  {
   printf("\n O dia %i do mes %i do ano %i caiu em uma Sexta-Feira \n",dia,mes,ano);
  }
  }

  else  //Fim condição ano
  {
  printf("\n Ano inválido ! \n");
  }
 }
 else  //Fim condição mes
 {
  printf("\n Mes inválido ! \n");
 }
}
else  //Fim condição Dia
{
printf("\n Dia inválido ! \n");
}

return 0;
}