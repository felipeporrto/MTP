#include <stdio.h>

int main ()

{
	float l, a;
	printf ("Digite a medida do lado do quadrado:	");
	scanf ("%f", &l); // para salvar o n�mero na vari�vel, usar o "&" e o nome da inc�gnita; para usar o double "%lf", para usar o inteiro "%d", para usar float "%f".
	a= l*l;
	printf ("a area e': %.2f", a);
	return 0;
}
