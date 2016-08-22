#include <stdio.h>

int main (void)
{
	int mat[5][5], i, j, lmenor, menor;
	menor = mat[0][0];
		
	for (j = 0; j <= 4; j++)
	{
		for (i = 0; i <= 4; i++)
		{
			if (mat[i][j] < menor)
			{
				menor = mat[i][j];
				lmenor = i;
			}
		}
	}

	printf ("Linha que contém o menor número: %d\n", lmenor);
	return 0;
}

