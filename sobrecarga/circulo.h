#define PI 3.141592f
#ifndef __circulo_h_
#define __circulo_h_
#include <iostream>
#include <cmath>
#include <string>
using namespace std;

class circulo
{
	private:
		float raio, circunferencia, area, centroX, centroY;
		float calcula_area();
		float calcula_distancia_centros(circulo);
		float calcula_circunferencia();
	public:
		circulo();
		circulo(float, float, float);		
		void set_raio(float);
		void aumenta_raio(float);
		void set_centro(float, float);
		float get_raio();
		float get_circunferencia();
		float get_area();
		float get_centroX();
		float get_centroY();
		void imprime_raio();
		void imprime_centro();
		void imprime_area();
		string toString();
};

#endif
