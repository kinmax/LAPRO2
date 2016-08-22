#include <stdio.h>


int main (void)
{
	int matsizel, matsizec;
	printf ("Digite o número de linhas da matriz: ");
	scanf ("%d", &matsizel);
	printf ("\nDigite o número de colunas da matriz: ");
	scanf ("%d", &matsizec);
	int mat[matsizel][matsizec], i, j, op, num, res, linha;
	printf ("\nDeseja multiplicar um número por uma:\n1 - Linha\nQualquer Número - Coluna");
	scanf ("%d", &op);
	printf ("\nPor qual número deseja multiplicar? ");
	scanf ("%d", &num);
	if (op == 1)
	{
		printf ("Por qual linha deseja multiplicar o número? ")
		scanf ("%d", &linha);
		for (i = 0; i < matsizec; i++)
		{
			printf ("%d", mat[linha][i] * num);
		}
	}
	else
	{
		res = multcoluna(num);
	}
	
}
