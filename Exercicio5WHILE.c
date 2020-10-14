/*Faça um algoritmo que receba dois números X e Y, sendo X < Y. Calcule e
mostre:
• a soma dos números pares desse intervalo de números, incluindo os
números digitados;
• a multiplicação dos números ímpares desse intervalo, incluindo os
digitados;*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() 
{
	int x, y, num = 0, num2 = 1;

	printf("Digite o valor de X:  ");
	scanf_s("%i", &x);
	
	printf("Digite o valor de Y:  ");
	scanf_s("%i", &y);

	while (x <= y)
	{
		
		if (x % 2 == 0)
		{
			num = num + x;
		}
		else
		{
			num2 = num2 * x;
		}
		x++;
	}
	
	printf("A soma dos numeros pares do intervalo incluindo os digitados e %i\n", num);
	printf("A multiplicacao dos numeros impares do intervalo incluindo os digitados e %i\n", num2);

	system("pause");
}