#ifndef _Roda_h_
#define _Roda_h_

#include "Ponto.h"
#include "Circulo.h"
#include <iostream>
#include <cstdlib>
#include <cmath>
#include <string>
using namespace std;

class Ponto;
class Circulo;

class Roda
{
	protected:
		string material, fabricante;
		int aro;
	public:
		Roda();
		Roda(string _material, string _fabricante, int _aro);
		string get_material();
		string get_fabricante();
		int get_aro();
		void set_material(string _material);
		void set_fabricante(string _fabricante);
		void set_aro(int _aro);
		void exibirRoda();
};
#endif
