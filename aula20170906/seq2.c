#include <stdio.h>
int main()
{
	float base, altura,area;
	printf("Digite a base e altura do triangulo em sequencia: \n");
	scanf("%f", &base);
	scanf("%f", &altura);
	area = base * altura / 2;
	printf("Area do triangulo: %.3f\n", area);
	return 0;
}
