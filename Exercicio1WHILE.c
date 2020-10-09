//Ler um número inteiro n. Escrever a soma de todos os números de 1 até n.
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	int n, contador = 1,num = 0;

	setlocale(LC_ALL, "Portuguese");
	system("color 17");

	printf("Digite o valor de N:  ");
	scanf_s("%i", &n);

	while (contador <= n) 
	{
		num += contador++;
		printf("Os valores de N sao:  %i\n", num);
	}
	
	
	system("pause");



}