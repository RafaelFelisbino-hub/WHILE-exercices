/*Ler um número inteiro n.Decidir se n é um número primo e apresente o
resultado.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	int n, i = 2, primo = 1;

	setlocale(LC_ALL, "Portuguese");
	system("color 17");
	
	printf("Digite o valor de N:  ");
	scanf_s("%i", &n);

	if (n <= 1) 
	{
		primo = 0;
	}

	while (primo == 1 && i <= n / 2) 
	{
		if (n % i == 0) 
		{
			primo = 0;
		}
		i = i + 1;
	}

	if (primo == 1) 
	{
		printf("%i é um número primo\n", n);
	}
	else 
	{
		printf("%i não é um número primo\n\n",n);
	}
	
	system("pause");
}