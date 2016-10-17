#include "Ponto.h"

Ponto::Ponto()
{
	x = 0;
	y = 0;
}

Ponto::Ponto(double _x, double _y)
{
	x = _x;
	y = _y;
}

double Ponto::get_x()
{
	return x;
}

double Ponto::get_y()
{
	return y;
}

void Ponto::set_x(double _x)
{
	x = _x;
}

void Ponto::set_y(double _y)
{
	y = _y;
}

void Ponto::set_pos(double _x, double _y)
{
	x = _x;
	y = _y;
}

double Ponto::calc_dist(Ponto p2)
{
	double a, b;
	a = abs(x - p2.get_x());
	b = abs(y - p2.get_y())
	return sqrt (pow(a, 2.0) + pow(b, 2.0)); 
}

double Ponto::calc_dist(double _x, double _y)
{
	double a, b;
	a = abs(x - _x);
	b = abs(y - _y);
	return sqrt (pow(a, 2.0) + pow(b, 2.0));
}

void Ponto::exibirPonto()
{
	cout << "X = " << x << endl;
	cout << "Y = " << y << endl;
	cout << endl;
}
