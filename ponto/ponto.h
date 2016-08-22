#ifndef __PONTO_H
#define __PONTO_H

#include <stdio.h>

class Ponto
{
	private:
		int x, y;
	public:
		Ponto();
		void setX(int valor);
		void setY(int valor);
		void imprime();
};

#endif
