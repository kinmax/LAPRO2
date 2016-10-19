#include <iostream>
#include <cstdlib>
#include <string>
#include "Passaro.h"
#include "Arara.h"
using namespace std;

int main (void)
{
	Passaro *p[3];
	int i;
	p[0] = new Passaro();
	p[1] = new Arara();
	p[2] = new Arara();
	for(i = 0; i < 3; i++)
	{
		p[i]->canta();
		cout << "Cor predominante: " << p[i]->getCorPredominante() << endl;
		cout << endl;
	}
	for (i = 0; i < 3; i++)
	{
		delete(p[i]);
	}
	return 0;
}
