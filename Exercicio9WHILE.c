/*Faça um algoritmo para o “jogo de adivinhar um número”. O computador
deve sortear um número entre 0 e 100 e pedir para o usuário tentar
adivinhar este número. O usuário vai dizer o seu palpite, e o computador
deve responder, se ele é maior ou menor que o número que ele sorteou. O
algoritmo termina somente quando o usuário acertar exatamente qual o
número que o computador tinha sorteado, escrevendo uma mensagem de
felicitações para o nosso usuário e indicando o número total de tentativas
feitas. Dica: para gerar um número qualquer entre 0 e 100, use a função
RandI( limite) - Retorna um número inteiro gerado aleatoriamente, maior ou
igual a zero e menor que limite. */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int main() 
{
	int numero,aleatorio = -1,i = 0;

	system("color 17");

	printf("Digite um numero inteiro:  ");
	scanf_s("%i", &numero);

	srand(time(NULL));

	aleatorio = rand() % 100;

	while (numero != aleatorio) 
	{
		
		if (numero < aleatorio) 
		{
			printf("\nO numero e maior");
		}
		else
		{
			printf("\nO numero e menor");
		}
		
		printf("\tDigite um numero inteiro:  ");
		scanf_s("%i", &numero);

		i++;
	}
	
	if (numero == aleatorio)
	{
		printf("\n\nParabens, voce acertou com %i tentativas\n\n",i);
	}
	
	system("pause");
}