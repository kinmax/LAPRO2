#ifndef _Ponto_h_
#define _Ponto_h_

#include <iostream>
#include <cmath>
#include <cstdlib>
#include <string>
using namespace std;

class Ponto
{
	protected:
		double x, y;
	public:
		Ponto();
		Ponto(double _x, double _y);
		double get_x();
		double get_y();
		void set_x(double _x);
		void set_y(double _y);
		void set_pos(double _x, double _y);
		double calc_dist(Ponto p2);
		double calc_dist(double _x, double _y);
		void exibirPonto();
};
#endif
