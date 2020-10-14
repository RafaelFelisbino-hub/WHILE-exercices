/*Fazer um algoritmo que calcule e exiba na tela o fatorial de um n�mero
fornecido pelo usu�rio, usando o comando While. Repetir a execu��o do
algoritmo tantas vezes quantas o usu�rio quiser. Lembre-se que o resultado
do c�lculo de um fatorial pode ser um n�mero �grande� (Exemplo: Fatorial
de 8 = 40320).*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() 
{
	int fatorial = 1, numero;

	setlocale(LC_ALL, "Portuguese");
	system("color 17");
	
	printf("Forne�a um n�mero para calcular o fatorial:  ");
	scanf_s("%i", &numero);

	while (numero > 1)
	{
		fatorial = fatorial * numero;
		numero--;
		
		printf("O fatorial � %d\n",fatorial);
		
		if (numero == 1) 
		{
			printf("Forne�a um n�mero para calcular o fatorial, digite 0 para fechar o programa:  \n");
			scanf_s("%i", &numero);
		}
	}
	
	system("pause");
}