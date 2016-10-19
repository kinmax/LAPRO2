#include "Ponto.h"
#include "Circulo.h"
#include "Roda.h"
#include <iostream>
#include <cstdlib>
#include <string>
#include <cmath>
using namespace std;

int main (void)
{
	Ponto p1, p2;
	Circulo c1;
	Roda r1;
	double x, y, radius, aro, dist;
	string fab, mat;
	p1 = Ponto(2.0, 3.0);
	p2 = Ponto(5.0, 13.0);
	dist = p1.calc_dist(p2);
	cout << dist << endl;
	c1 = Circulo(5.0, 2.0, 3.0);
	c1.exibirCirculo();
	r1 = Roda("Liga Leve", "Ferrari", 20.0, 25.0);
	r1.exibirRoda();
	
	return 0;
}
