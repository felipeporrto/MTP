#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	srand (time(0)); // semente
	
	int menor = 1328, maior = 1360;
	int menor1 = 0, maior1 = 99;
	int y = menor + rand () % (maior - menor + 1);
	int x = menor1 + rand () % (maior1 - menor1 + 1);
	int divisor, pontos, soma, produto, i=0;
	pontos = i;
	printf("Informe um divisor de 8192: ");
	scanf("%d", &divisor);
	if(divisor %8192==0) 
		printf("O numero e divisor: ");
	else
	{
		printf("O numero nao e divisor: ");
		pontos = 1;
	}
	printf("\nSome 101 com o seguinte numero: %d\nDigite o resultado:", y);
	scanf("%d",&soma);
	if(soma == y+101)
	{
		printf("Esta correto:%d", soma);
		pontos = pontos+1;
	}
	else
		printf("esta incorreto.");
	printf("\nAgora multiplique o seguinte numero por 3 e digite o resultado:%d\n", x);
	scanf("%d",&produto);
	if(produto == x*3)
	{
		printf("\nEsta correto:%d", produto);
		pontos = pontos+1;
	}
	else
		printf("esta incorreto.");	
		printf("\n\nSua pontuacao foi: %d", pontos);
	
	return 0;
}
