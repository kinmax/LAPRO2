#include "relogio.h"

relogio::relogio()
{
	cout << "Relógio sendo instanciado" << endl;
}

relogio::~relogio()
{
	cout << "Relógio sendo desalocado" << endl;
}

void relogio::inicializa()
{
	hora = minuto = segundo = 00;
}

void relogio::set_hora(int _hora, int _minuto, int _segundo)
{
	hora = _hora;
	minuto = _minuto;
	segundo = _segundo;
}

void relogio::get_hora(int *_hora, int *_minuto, int *_segundo)
{
	*_hora = hora;
	*_minuto = minuto;
	*_segundo = segundo;
}

void relogio::avancar()
{
	if (segundo < 59)
		segundo++;
	else
	{
		segundo = 00;
		if (minuto < 59)
			minuto++;
		else
		{
			minuto = 00;
			if (hora < 23)
				hora++;
			else
				hora = 00;	
		}
	}
}
