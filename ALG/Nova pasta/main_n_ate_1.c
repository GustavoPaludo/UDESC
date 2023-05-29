#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int n;
	
	printf("Digite um numero positivo: ");
	scanf("%i", &n);
	
	while( n > 0 ){
		printf("%i\n", n);
		n = n - 1; // Decrementa a variável
	}
	
	return 0;
}
