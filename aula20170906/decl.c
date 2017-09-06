#include <stdio.h>
int main()
{
	int numero;
	printf("Digite um numero: ");
	scanf("%d", &numero);
	if(numero%2)  //verifica se é impar
	{
		printf("O numero e impar.\n");
		if(! numero %5) 
		printf("Onumero e multiplo de 5.\n");
	}
	else 
	{
		printf("O numero e par.");
		if(! (numero %3))
		printf("O numero e multiplo de 3.");
		if(! (numero %7))
		printf("O numero e multiplo de 7.");
	}
	return 0;
}
