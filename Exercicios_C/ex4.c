#include <stdio.h>
#include <string.h>

int main (void)
{
	char name1[71], name2[71];
	printf ("Digite o primeiro nome: ");
	fgets (name1, 71, stdin);
	printf ("Digite o segundo nome: ");
	fgets (name2, 71, stdin);
	if (strcmp(name1, name2) >= 0)
	{
		printf ("\n%s\n%s\n", name2, name1);
	}
	else
	{
		printf ("\n%s\n%s\n", name1, name2);
	}

	return 0;
}
