/*Escrever um algoritmo que calcule todos os números inteiros divisíveis por
um certo valor indicado pelo usuário, e compreendidos em um intervalo
também especificado pelo usuário. O usuário deve entrar com um primeiro
valor correspondente ao divisor e após ele vai fornecer o valor inicial do
intervalo, seguido do valor final deste intervalo. Usar o comando While.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() 
{
	int  numeroDivisivel = 0, intervalo1 = 0, intervalo2 = 0, resultado = 0,soma = 0;

	setlocale(LC_ALL, "Portuguese");
	system("color 17");

	printf("Digite o número que queira dividir:  ");
	scanf_s("%i", &numeroDivisivel);

	printf("Digite o primeiro intervalo:  ");
	scanf_s("%i", &intervalo1);

	printf("Digite o segundo intervalo:  ");
	scanf_s("%i", &intervalo2);

	while (intervalo1  <= intervalo2) 
	{
		
		if (intervalo1 % numeroDivisivel == 0) 
		{
			resultado++;
			soma += intervalo1;
		}
		intervalo1++;
	}

	printf("\n\nO número pode ser dividido por %i números inteiros\n\n", resultado);
	printf("A soma dos números inteiros divididos por %i é:  %i\n\n",numeroDivisivel, soma);

	system("pause");
}