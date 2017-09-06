#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	srand (time(0)); // semente
	int x = rand () % 100;
	int menor = 101, maior = 293;
	int y = menor + rand () % (maior - menor + 1); // menor + (maior-menor) * randomico
	printf("Entre 0 a 99: %d\n", x);
	printf("Entre 101 a 293: %d\n", y);
	return 0;
}
