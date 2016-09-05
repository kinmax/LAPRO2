#define PI 3.141592f
#include <iostream>
#include <cmath>
#include "circulo.h"
#include <string>
using namespace std;
ostream& operator<<(ostream &Saida, circulo &c1)
{
	Saida << "Raio: " << c1.get_raio() << endl;
	Saida << "Diâmetro" << c1.get_raio()*2 << endl;
	Saida << "Circunferência" << c1.get_circunferencia() << endl;
	Saida << "Área: " << c1.get_area() << endl;
	Saida << "Coordenada X do Centro: " << c1.get_centroX() << endl;
	Saida << "Coordenada Y do Centro: " << c1.get_centroY() << endl;
	return Saida;
}

istream& operator>>(istream &Entrada, circulo &c1)
{
	int x, y, i;	
	cout << "Digite a Coordenada X do Centro: " << endl;
	Entrada >> x;
	cout << "Digite a Coordenada Y do Centro: " << endl;
	Entrada >> y;
	c1.set_centro(x, y);
	cout << "Digite o Raio: " << endl;
	Entrada >> i;
	c1.set_raio(i);
	c1.set_rest();
	return Entrada;	 
}

int main (void)
{	
	circulo c1;
	c1 = circulo(15, 32, 5);
	c1.imprime_area();
	
	return 0;
}
