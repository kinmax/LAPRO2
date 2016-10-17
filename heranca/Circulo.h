#define PI 3.141592
#ifndef _Circulo_h_
#define _Circulo_h_

#include "Ponto.h"
#include <iostream>
#include <cmath>
#include <cstdlib>
#include <string>
using namespace std;

class Ponto;

class Circulo : Ponto
{
	protected:
		double raio;
	public:
		Circulo();
		Circulo(double _raio, double _x, double _y);
		double get_raio();
		void set_raio(double _raio);
		void exibirCirculo();
};
#endif
