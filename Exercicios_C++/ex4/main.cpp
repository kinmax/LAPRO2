#include "relogio.h"
#include <iostream>
using namespace std;

int main (void)
{
	int hora, minuto, segundo, i;	

	relogio r1;
	r1.inicializa();
	cout << "Digite a hora: " << endl;
	cin >> hora;
	cout << "Digite o minuto: " << endl;
	cin >> minuto;
	cout << "Digite o segundo: " << endl;
	cin >> segundo;
	r1.set_hora(hora, minuto, segundo);
	for (i = 0; i <= 100; i++)
	{
		r1.get_hora(&hora, &minuto, &segundo);
		cout << "Horário atual: " << hora << ":" << minuto << ":" << segundo << endl;
		r1.avancar();
	}	
 
	

	return 0;
}
