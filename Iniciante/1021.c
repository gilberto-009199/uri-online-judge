#include <stdio.h>
#include <stdlib.h>

int main(){
	double valor;
	scanf("%lf", &valor);

	printf("NOTAS:\n");  	//  100, 50, 20, 10, 5, 2

	printf("%d nota(s) de R$ 100.00\n", (int)(valor / 100));
	valor = valor - (int)(valor / 100) * 100;

	printf("%d nota(s) de R$ 50.00\n", (int)(valor / 50));
	valor = valor - (int)(valor / 50) * 50;

	printf("%d nota(s) de R$ 20.00\n", (int)(valor / 20));
	valor = valor - (int)(valor / 20) * 20;

	printf("%d nota(s) de R$ 10.00\n", (int)(valor / 10));
	valor = valor - (int)(valor / 10) * 10;

	printf("%d nota(s) de R$ 5.00\n", (int)(valor / 5));
	valor = valor - (int)(valor / 5) * 5;

	printf("%d nota(s) de R$ 2.00\n", (int)(valor / 2));
	valor = valor - (int)(valor / 2) * 2;

	printf("MOEDAS:\n");	// 1, 0.50, 0.25, 0.10, 0.05 e 0.01
	valor = valor * 100;

	printf("%d moeda(s) de R$ 1.00\n", (int)(valor / 100));
	valor = valor - (int)(valor / 100) * 100;

	printf("%d moeda(s) de R$ 0.50\n", (int)(valor / 50));
	valor = valor - (int)(valor / 50) * 50;

	printf("%d moeda(s) de R$ 0.25\n", (int)(valor / 25));
	valor = valor - (int)(valor / 25) * 25;

	printf("%d moeda(s) de R$ 0.10\n", (int)(valor / 10));
	valor = valor - (int)(valor / 10) * 10;

	printf("%d moeda(s) de R$ 0.05\n", (int)(valor / 5));
	valor = valor - (int)(valor / 5) * 5;

	printf("%d moeda(s) de R$ 0.01\n", (int)(valor / 1));
	valor = valor - (int)(valor / 1) * 1;

	return 0;
}