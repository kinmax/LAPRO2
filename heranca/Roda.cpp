#include "Roda.h"

Roda::Roda()
{
	material = "NULL";
	fabricante = "NULL";
	aro = 0;
	raio = 0;
}

Roda::Roda(string _material, string _fabricante, int _aro, double _raio)
{
	material = _material;
	fabricante = _fabricante;
	aro = _aro;
	raio = _raio;
}

string Roda::get_material()
{
	return material;
}

string Roda::get_fabricante()
{
	return fabricante;
}

int Roda::get_aro()
{
	return aro;
}

void Roda::set_material(string _material)
{
	material = _material;
}

void Roda::set_fabricante(string _fabricante)
{
	fabricante = _fabricante;
}

void Roda::set_aro(int _aro)
{
	aro = _aro;
}

void Roda::exibirRoda()
{
	cout << "Raio: " << raio << endl;
	cout << "Material: " << material << endl;
	cout << "Fabricante: " << fabricante << endl;
	cout << "Aro: " << aro << endl;
	cout << endl;
}
