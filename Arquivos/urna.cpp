#include "urna.h"

urna::urna(int _nurna, int _nvotos)
{
	nurna = _nurna;
	nvotos = _nvotos;
}

urna::urna()
{
	nurna = -1;
	nvotos = 0;
}

void urna::set_nurna(int _nurna)
{
	nurna = _nurna;
}

void urna::set_nvotos(int _nvotos)
{
	nvotos = _nvotos;
}

int urna::get_nurna()
{
	return nurna;
}

int urna::get_nvotos()
{
	return nvotos;
}

void urna::exibir()
{
	cout << "Número da Urna: " << nurna << endl;
	cout << "Número de Votos na Urna: " << nvotos << endl;
}
