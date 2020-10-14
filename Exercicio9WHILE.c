/*Fa�a um algoritmo para o �jogo de adivinhar um n�mero�. O computador
deve sortear um n�mero entre 0 e 100 e pedir para o usu�rio tentar
adivinhar este n�mero. O usu�rio vai dizer o seu palpite, e o computador
deve responder, se ele � maior ou menor que o n�mero que ele sorteou. O
algoritmo termina somente quando o usu�rio acertar exatamente qual o
n�mero que o computador tinha sorteado, escrevendo uma mensagem de
felicita��es para o nosso usu�rio e indicando o n�mero total de tentativas
feitas. Dica: para gerar um n�mero qualquer entre 0 e 100, use a fun��o
RandI( limite) - Retorna um n�mero inteiro gerado aleatoriamente, maior ou
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