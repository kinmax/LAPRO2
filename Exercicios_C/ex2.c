#include <stdio.h>

int main (void)
{
	float ma, n1, n2, n3, me;
	char conceito;

	printf ("Digite a nota da primeira prova: ");
	scanf ("%f", &n1);
	printf ("\nDigite a nota da segunda prova: ");
	scanf ("%f", &n2);
	printf ("\nDigite a nota da terceira prova: ");
	scanf ("%f", &n3);
	printf ("\nDigite a nota da média de exercícios: ");
	scanf ("%f", &me);
	ma = (n1 + n2*2 + n3*3 + me)/7;
	if (ma >= 9.0f)
		conceito = 'A';
	else if (ma >= 7.5f && ma < 9.0f)
		conceito = 'B';
	else if (ma >= 6.0f && ma < 7.5f)
		conceito = 'C';
	else if (ma >= 4.0f && ma < 6.0f)
		conceito = 'D';
	else
		conceito = 'E';
	
	printf ("\nConceito: %c\n", conceito);
	return 0;

}
