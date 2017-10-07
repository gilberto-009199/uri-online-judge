#include <stdlib.h>		// padrões extras
#include <string.h>		// manipulação de stirng
#include <ctype.h>		// função para string
#include <math.h>		// matemática

int main(){

	char p1[20], p2[20], p3[20];

	scanf("%s", &p1);
	scanf("%s", &p2);
	scanf("%s", &p3);

	//printf("%s\n", p1);
	//printf("%s\n", p2);
	//printf("%s\n", p3);

	// strlen(p1) -> tamanho da palavra
	// strcmp(p1, p2) == -1 (menor); 1 (maior); 0 (iguais)
	if (strcmp(p1, "vertebrado") == 0)
	{
		if (strcmp(p2, "ave") == 0)
		{
			if (strcmp(p3, "carnivoro") == 0)
			{
				printf("aguia\n");
			} 
			else if (strcmp(p3, "onivoro") == 0)
			{
				printf("pomba\n");
			}
		} 
		else if (strcmp(p2, "mamifero") == 0)
		{
			if (strcmp(p3, "onivoro") == 0)
			{
				printf("homem\n");
			} 
			else if (strcmp(p3, "herbivoro") == 0)
			{
				printf("vaca\n");
			}
		}
	} else if (strcmp(p1, "invertebrado") == 0)
	{
		if (strcmp(p2, "inseto") == 0)
		{
			if (strcmp(p3, "hematofago") == 0)
			{
				printf("pulga\n");
			} 
			else if (strcmp(p3, "herbivoro") == 0)
			{
				printf("lagarta\n");
			}
		} 
		else if (strcmp(p2, "anelideo") == 0)
		{
			if (strcmp(p3, "hematofago") == 0)
			{
				printf("sanguessuga\n");
			} 
			else if (strcmp(p3, "onivoro") == 0)
			{
				printf("minhoca\n");
			}
		}
	}

	return 0;
}