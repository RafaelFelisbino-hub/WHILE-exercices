/*Faça um algoritmo para o “jogo de adivinhar um número”, mas invertendo
os papéis desta vez. O computador que vai tentar adivinhar um número
escolhido pelo usuário. O usuário deve escolher um número e para cada
número apresentado pelo computador, responder se ele acertou, ou se o
número apresentado é maior que o escolhido, ou se ele é menor que o
escolhido. O algoritmo termina quando o usuário responder que o
computador acertou.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int main()
{
	int numero = 0, aleatorio = -1, i = 0, teste = 0;

	system("color 17");

	srand(time(NULL));

	printf("Escolha um numero:  ");
	scanf_s("%i", &numero);
	
	

	while (numero != aleatorio)
	{
		
		aleatorio = rand() % 100;

		printf("%i\n\n", aleatorio);
		
		i++;
		
		if (teste == 1)
		{
			printf("O numero e maior\n\n");
		}
		if(teste == 2)
		{
			printf("O numero e menor\n\n");
		}

		printf("O numero e maior(1) ou menor(2) ou igual(3)?");
		scanf_s("%i", &teste);
		
		numero++;
		
	}
	
	if (teste == 3)
	{
		printf("\n\nParabens computador, voce acertou com %i tentativas\n\n", i);
	}
	
	system("pause");
}