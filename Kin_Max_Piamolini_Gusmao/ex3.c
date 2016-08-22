#include <stdio.h>

int main (void)
{
	int maxnum, i, j, start, end, k;
	
	printf ("Digite o número máximo: ");
	scanf ("%d", &maxnum);
	while (maxnum % 2 == 0)
	{	
		printf ("\nO número deve ser ímpar!");
		printf ("\nDigite o número máximo: ");
		scanf ("%d", &maxnum);
	}
	start = 1;
	end = maxnum;
	for (i = 0; i <= (maxnum - 1)/2; i++)
	{
		for (k = 1; k <= i; k++)
		{
			printf (" ");
		}		
		for (j = start; j <= end; j++)
		{
			printf ("%d", j);
		}
		start++;
		end--;
		printf("\n");
	}
	
}
