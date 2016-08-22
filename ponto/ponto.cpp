#include "ponto.h"

Ponto::Ponto()
{
	x = y = 0;
}

void Ponto::setX(int valor)
{
	x = valor;
}

void Ponto::setY(int valor)
{
 	y = valor;
}

void Ponto::imprime()
{
	printf("\nDados do ponto: (X = %d, Y = %d)\n", x, y);
}


