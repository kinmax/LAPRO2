#define PI 3.141592f
#include <iostream>
#include <cmath>
#include "circulo.h"
#include <string>
using namespace std;

int main (void)
{
	string x;	
	circulo c1;
	c1 = circulo(15, 32, 5);
	c1.imprime_area();
	x = c1.toString();
	cout << x << endl;
	
	return 0;
}
