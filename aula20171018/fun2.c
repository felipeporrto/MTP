#include <stdio.h>
#include <stdlib.h>

int divisao (int num1,  int num2, int * pquo, int * pres)
{
	*pquo = num1/num2;
	*pres = num1%num2;
			
}
int main()
{
	int num1, num2, quo, res;
	printf("entre com um numero: ");
	scanf("%d", &num1);
	printf("entre com outro numero: ");
	scanf("%d", &num2);
	if(divisao (num1, num2, &quo, &res))
			printf("resultado da divisao %d\n", quo);
			printf("tendo resto %d\n", res);
	return EXIT_SUCCESS;
}
