#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int n;
	
	printf("Digite um numero positivo: ");
	scanf("%i", &n);
	
	int cont = 1;
	
	while( cont <= n ){
		printf("%i\n", cont);
		cont = cont + 1; // Incrementa a variável
	}
	
	return 0;
}

