#include <stdio.h>

int main ()

{
	float b, h, a;
	printf ("Digite a medida da base do paralelogramo: ");
	scanf ("%f", &b); // para salvar o n�mero na vari�vel, usar o "&" e o nome da inc�gnita; para usar o double "%lf", para usar o inteiro "%d", para usar float "%f".
	printf ("Digite a medida da altura do paralelogramo: ");
	scanf ("%f", &h);
	a= b*h;
	printf ("\n\n %.3f", a);
	return 0;
}
