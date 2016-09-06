#include "circulo.h"

circulo::circulo()
{
	centroX = centroY = area = raio = circunferencia = 0;
}

circulo::circulo(float _centroX, float _centroY, float _raio)
{
	centroX = _centroX;
	centroY = _centroY;
	raio = _raio;
	area = PI * powf(raio, 2.0f);
	circunferencia = 2.0f * PI * raio;
}

float circulo::calcula_area ()
{
	area = PI * powf(raio, 2.0f);
}

float circulo::calcula_distancia_centros(circulo c1)
{
	float dist;
	if (c1.get_centroX() > centroX)
		dist = sqrtf(
                      powf( (c1.get_centroX() - centroX ) ,  2.0f ) + 
                      powf( (c1.get_centroY() - centroY ) ,  2.0f )
                );
	else if (c1.get_centroX() < centroX)
		dist = sqrtf(
                      powf( (centroX - c1.get_centroX()) , 2.0f) + 
                      powf( (centroY - c1.get_centroY()) , 2.0f)
                    );
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

void circulo::set_rest()
{
	area = PI * raio * raio;
	circunferencia  = PI * raio * 2;
}

string circulo::toString()
{
	stringstream tmpss;
	string tmpstr;

	tmpss << "Centro X: " << this->centroX << " Centro Y: " << this->centroY << " Raio: " << this->raio;
	tmpss >> tmpstr;
}

bool circulo::operator^(circulo &c1)
{
	float dist;
	dist = sqrtf(
                      powf( (c1.get_centroX() - centroX ) ,  2.0f ) + 
                      powf( (c1.get_centroY() - centroY ) ,  2.0f )
                );
	if (dist > (raio + c1.get_raio()))
	{
		return false;
	}
	return true;
}

bool circulo::operator>(circulo &c1)
{
	if (area > c1.get_area())
	{
		return true;
	}
	return false;
}

bool circulo::operator<(circulo &c1)
{
	if (area < c1.get_area())
	{
		return true;
	}
	return false;
}
