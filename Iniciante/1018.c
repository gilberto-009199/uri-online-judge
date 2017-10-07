#include <stdio.h>
#include <stdlib.h>

int main(){
	int valor;
	scanf("%d", &valor);
	printf("%d\n", valor);

	printf("%d nota(s) de R$ 100,00\n", (int)(valor / 100));
	valor = valor - (int)(valor / 100) * 100;

	printf("%d nota(s) de R$ 50,00\n", (int)(valor / 50));
	valor = valor - (int)(valor / 50) * 50;

	printf("%d nota(s) de R$ 20,00\n", (int)(valor / 20));
	valor = valor - (int)(valor / 20) * 20;

	printf("%d nota(s) de R$ 10,00\n", (int)(valor / 10));
	valor = valor - (int)(valor / 10) * 10;

	printf("%d nota(s) de R$ 5,00\n", (int)(valor / 5));
	valor = valor - (int)(valor / 5) * 5;

	printf("%d nota(s) de R$ 2,00\n", (int)(valor / 2));
	valor = valor - (int)(valor / 2) * 2;

	printf("%d nota(s) de R$ 1,00\n", (int)valor);

	return 0;
}