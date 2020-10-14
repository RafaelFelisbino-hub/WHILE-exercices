/*Faça um algoritmo que, para um número indeterminado de pessoas: leia a
idade de cada uma, sendo que a idade 0 (zero) indica o fim da leitura e não
deve ser considerada. A seguir calcule:
• o número de pessoas;
• a idade média do grupo;
• a menor idade e a maior idade.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() 
{
	int idade, numeroPessoas = 0, menorIdade = 999, maiorIdade = 0,somaPessoas = 0;
	float mediaGrupo = 0;

	printf("Informe uma idade:  ");
	scanf_s("%i", &idade);

	while (idade != 0) 
	{
		somaPessoas++;
		
		if (idade > maiorIdade) 
		{
			maiorIdade = idade;
		}
		if (idade < menorIdade) 
		{
			menorIdade = idade;
		}

		numeroPessoas = somaPessoas;
		
		mediaGrupo += idade;
		
		printf("Informe uma idade:  ");
		scanf_s("%i", &idade);
	}
	
	mediaGrupo = mediaGrupo / somaPessoas;

	printf("A maior idade e:  %i\n", maiorIdade);
	printf("A menor idade e:  %i\n", menorIdade);
	printf("O numero de pessoas e:  %i\n", numeroPessoas);
	printf("A media de idade do grupo e:  %.2f\n", mediaGrupo);

	system("pause");
}