#include "Circulo.h"

Circulo::Circulo()
{
	x = 0;
	y = 0;
	raio = 0;
}

Circulo::Circulo(double _raio, double _x, double _y)
{
	raio = _raio;
	x = _x;
	y = _y;
}

double Circulo::get_raio()
{
	return raio;
}

void Circulo::set_raio(double _raio)
{
	raio = _raio;
}

void Circulo::exibirCirculo()
{
	cout << "X do Centro: " << x << endl;
	cout << "Y do Centro: " << y << endl;
	cout << "Raio: " << raio << endl;
	cout << endl;
}
