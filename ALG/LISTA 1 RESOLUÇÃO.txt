#include <stdio.h>

// Cada exercício foi resolvido em uma função diferente
// Optei por fazer desta forma pois não há o risco de acidentalmente repetir váriaveis já que está cada uma em sua função


void Temperatura(){ //Exercício 1
float f,c;  // Declarado f para fahreinhei e c celcius como float pois pode haver numero decimal 
printf("\n Este exercício irá converter temperaturas em fahreinhein para celcius\n");
printf("\n Digite um valor para ser convertido\n");
scanf("%f", &f); //Ler e atribuir a variavel f
c=(f-32)/1.8;
printf("\n A temperatura em celcius é: %.2f\n",c); //Mostrar a conversão com apenas 2 digitos decimais
}

void Velocidade(){ //Exercício 2
float d,t,v;  // Variaveis distancia, tempo, velocidade respectivamente
printf("\n Este exercício calculará a velocidade percorrida por um piloto\n");
char nome[30]; //Limitando o numero máximo do nome 
printf("\n Digite somente o primeiro nome do piloto \n");
scanf("%s", nome); //Atribuirá a sequencia de chars á variavel nome
printf("\n Digite a distancia percorrida em Km \n");
scanf("%f", &d); //Atribuindo valor a distancia 
printf("\n Digite o tempo decorrido em horas \n");
scanf("%f",&t); //Atribuindo valor ao tempo
v=d/t;
printf("\n A velocidade do piloto %s é: %.2f KM/h \n",nome,v);
}

void Salario(){  //Exercício 3
char nome[30],sobrenome[30];
float salario, horas, remuneracao;
printf("\n Este exercício calculará o salário de um funcionário baseado no valor da hora \e no tempo trabalhado\n");
printf("\n Digite o primeiro nome do funcionário \n");
scanf("%s",nome);
printf("\n Digite o sobrenome do funcionário\n ");
scanf("%s",sobrenome);
printf("\n Digite o valor por hora do funcionário %s \n",nome);
scanf("%f",&remuneracao);
printf("\n Digite as horas trabalhadas por %s \n",nome);
scanf("%f",&horas);
salario=horas*remuneracao;
printf("\n O salário de %s %s é de R$%.2f\n", nome,sobrenome,salario);
}

void Velocidadeo(){   //Exercício 4
float vi,t,a,v; // Variáveis velocidade inicial, tempo, aceleração e velocidade final, respectivamente
printf("\n Esse exercício calculará a velocidade de um dado objeto \n");
printf("\n Dê o valor da velocidade inicial em m/s:\n");
scanf("%f",&vi);
printf("\n Dê o valor do tempo em segundos:\n");
scanf("%f",&t);
printf("\n Digite a aceleração em m/s2:\n");
scanf("%f",&a);
v=vi+(a*t);
printf("\n A velocidade do objeto é: %.2f m/s",v);
}

void Volume(){        //Exercício 5
float r,v,h;          //Variáveis raio,volume e altura,respectivamente
printf("\n Este programa irá calcular o volume de um cilindro \n");
printf("\n Qual o raio do cilindro ?\n");
scanf("%f",&r);
printf("\n Qual a altura do cilindro ?\n");
scanf("%f",&h);
v=(3.14159*(r*r)*h);
printf("\n O volume do cilindro é: %.2f\n",v);
}

void Votos(){    //Exercício 6
float b,n,v,t,bf,nf,vf;  //Variáveis votos em branco,nulos e válidos,t a soma das variaveis e bf,nf e vf a porcentagem relativa das variáveis
printf("\n Este exercício calculará a porcentagem relatica de votos brancos,nulos e válidos \n");
printf("\n Digite o numero de votos em branco:\n");
scanf("%f",&b);
printf("\n Digite o numero de votos nulos:\n");
scanf("%f",&n);
printf("\n Digite o numero de votos válidos:\n");
scanf("%f",&v);
t=b+n+v;
bf=(b/t)*100;
nf=(n/t)*100;
vf=(v/t)*100;
printf("\n As porcentagens são:\n Nulos:%.2f\n Brancos:%.2f\n Válidos:%.2f\n",nf,bf,vf); 
}

void Salariob(){   //Exercício 7
float sb,ir,inss,si,sl;     //Variáveis salário bruto, importo de renda, INSS,, sindicato e salário líquido, respectivamente
printf("\n Este exercício calculará a valor do salário líquido descontado dos valores \n do Imposto de renda, INSS e do sindicato");
printf("\n Informe o valor do salário bruto:\n");
scanf("%f",&sb);
ir=0.15*sb;
inss=0.11*sb;
si=0.03*sb;
sl=sb-ir-inss-si;
printf("\n Salário:R$%.2f \nIR:R$%.2f \nINSS:R$%.2f \nSindicato:R$%.2f \nSalário Liquido: R$%.2f",sb,ir,inss,si,sl);
}

void Lampadas(){     //Exercício 8
int n;   //Único inteiro pois é o número de lampadas
float p,l,c,a;     //Variáveis potencia, largura, comprimento e área, respectivamente
printf("\n Este exercício calculará a quantidade necesária de lampadas para \n iluminar um cômodo");
printf("\n Informe a potencia em watts da lampada a ser utilizada: \n");
scanf("%f",&p);
printf("\n Informe a largura do comodo: \n");
scanf("%f",&l);
printf("\n Informe o comprimeto do comodo: \n");
scanf("%f",&c);
a=l*c;
n=(18*a)/p;
printf("\n O numero aproximado de lampadas necessárias para iluminar os %.2f  m2 é de %i lampadas.",a,n);
}

void Horas(){   //Exercício 9
float s,m,h;     //Variáveis segundos, minutos, horas
printf("\n Este exercício converterá segundos em minutos e horas");
printf("\n Digite os segundos a serem convertidos:\n");
scanf("%f",&s);
m=s/60;
h=m/60;
printf("\n Os valores obtidos são: Segundos: %.3f\n Minutos: %.3f\n Horas: %.3f\n",s,m,h);
}

void Cedulas(){   //Exercício 10
int c50,c20,c10,c5,c2,m1,valor;  //Váriaveis cédula de 100,50,20,10,5,2, moeda de 1 real e o valor a ser convertido
printf("\n Este exercício dirá quantas de cada cédula cerão recebidas \n caso seja sacado determinado valor");
printf("\n Informe o valor inteiro a ser convertido em cédulas de 100,50,20,10,5,2 ou moedas de 1.\n");
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
printf("\n O numero de cédulas a serem recebidas é de: \n R$50: %i \n R$20: %i \n R$10: %i \n R$5: %i \n R$2: %i \n R$1: %i \n",c50,c20,c10,c5,c2,m1);
}

int main(){   //Início do programa

int exercicio;
printf("Este programa irá resolver a primeira lista de exercícios \n");
printf("Escolha um exercício de 1 a 10: \n\n");
scanf("%i", &exercicio);

//Dependendo da entrada,será redirecionado a um exercício

if(exercicio==1){
Temperatura();
}
if(exercicio==2){
Velocidade();
}
if(exercicio==3){
Salario();
}
if(exercicio==4){
Velocidadeo();
}
if(exercicio==5){
Volume();
}
if(exercicio==6){
Votos();
}
if(exercicio==7){
Salariob();
}
if(exercicio==8){
Lampadas();
}
if(exercicio==9){
Horas();
}
if(exercicio==10){
Cedulas();
}
return 0;
}



