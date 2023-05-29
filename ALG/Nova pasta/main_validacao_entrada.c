#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	float nota;
	
	int quant = 0;
	
	printf("Digite a nota (0-10): ");
	scanf("%f", &nota);
	
	while( nota < 0 || nota > 10 ){
		printf("Entrada invalida!! Digite a nota (0-10): ");
		scanf("%f", &nota);
		quant = quant + 1; // Incremento da variável.
	}
	
	printf("Nota: %.2f\n", nota);
	
	if( quant == 0)
		printf("Parabens! :-)\n");
	else
		printf("Voce errou a entrada %d vezes... ;-)\n", quant);
	
	return 0;
}
