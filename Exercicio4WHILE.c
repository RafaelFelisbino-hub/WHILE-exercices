#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	int escolha;
	float saque, deposito, saldo = 0;
	
	setlocale(LC_ALL, "Portuguese");
	system("color 17");

	printf("Digite o que quer fazer: (1)Consulta saldo, (2)saque, (3)dep�sito, (4)sair:  ");
	scanf_s("%i", &escolha);

	while (escolha != 4)
	{
		
		if (escolha == 1)
		{

			printf("\nSeu saldo �:  %.2f", saldo);

		}
	
		if (escolha == 2)
		{
			printf("\nDigite o valor do saque:  ");
			scanf_s("%f", &saque);
			if (saldo <= 0) 
			{
				printf("Voc� n�o possui saldo");
			}
			else
			{
				saldo = saldo - saque;
				printf("\nSeu saldo �:  %.2f", saldo);
			}
			
		}
		
		if (escolha == 3)
		{
			printf("\nDigite o valor a ser depositado:  ");
			scanf_s("%f", &deposito);

			saldo = saldo + deposito;
			printf("Seu saldo � %.2f reais", saldo);
		}
		
		printf("\n\nDigite o que quer fazer: (1)Consulta saldo, (2)saque, (3)dep�sito, (4)sair:  ");
		scanf_s("%i", &escolha);
	} 
	system("pause");
}