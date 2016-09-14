#include "circulo.h"

float circulo::calcula_area ()
{
	area = PI * powf(raio, 2);
}

float circulo::calcula_distancia_centros(circulo c1)
{
	float dist;
	if (c1.get_centroX() > centroX)
		dist = sqrtf(powf(((c1.get_centroX) - centroX), 2) + ((c1.get_centroY) - centroY), 2));
	else if (c1.get_centroX() < centroX)
		dist = sqrtf(powf((centroX - (c1.get_centroX)), 2) + (centroY - (c1.get_centroY)), 2));
	else
		dist = 0;
	return dist;
}

float circulo::calcula_circunferencia()
{
	float circ;
	circunferencia = 2.0f * PI * raio;
}

void circulo::set_raio (float _raio)
{
	raio = _raio;
	cout << "O raio foi alterado para: " << raio << endl;
}

void circulo::aumenta_raio (float perc)
{
	raio += raio * perc/100.0f;
	cout << "O raio foi aumentado para: " << raio << endl;
}

void circulo::set_centro (float x, float y)
{
	centroX = x;
	centroY = y;
	cout << "O centro agora está no ponto X = " << centroX << " Y = " << centroY << endl;
}

float circulo::get_raio ()
{
	return raio;
}

float circulo::get_circunferencia ()
{
	return circunferencia;
}

float circulo::get_area ()
{
	return area;
}

float circulo::get_centroX ()
{
	return centroX;
}

float circulo::get_centroY ()
{
	return centroY;
}

void circulo::imprime_raio ()
{
	cout << "Raio: " << raio;
}

void circulo::imprime_centro ()
{
	cout << "Centro: x = " << centroX << " Y = " << centroY << endl;
}

void circulo::imprime_area ()
{
	cout << "Área: " << area << endl;
}
