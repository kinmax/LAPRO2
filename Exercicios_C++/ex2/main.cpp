#include "elevador.h"
#include <iostream>
using namespace std;

int main (void)
{
	elevador e1;
	
	e1.inicializa(10, 8);
	e1.entra();
	cout << "Número de pessoas no elevador: " << e1.get_nro_pessoas() << endl;
	e1.entra();
	cout << "Número de pessoas no elevador: " << e1.get_nro_pessoas() << endl;
	e1.entra();
	cout << "Número de pessoas no elevador: " << e1.get_nro_pessoas() << endl;
	e1.entra();
	cout << "Número de pessoas no elevador: " << e1.get_nro_pessoas() << endl;
	e1.entra();
	cout << "Número de pessoas no elevador: " << e1.get_nro_pessoas() << endl;
	e1.entra();
	cout << "Número de pessoas no elevador: " << e1.get_nro_pessoas() << endl;
	e1.entra();
	cout << "Número de pessoas no elevador: " << e1.get_nro_pessoas() << endl;
	e1.entra();
	cout << "Número de pessoas no elevador: " << e1.get_nro_pessoas() << endl;
	e1.entra();
	cout << "Número de pessoas no elevador: " << e1.get_nro_pessoas() << endl;
	e1.entra();
	cout << "Número de pessoas no elevador: " << e1.get_nro_pessoas() << endl;	
	e1.entra();
	cout << "Número de pessoas no elevador: " << e1.get_nro_pessoas() << endl;
	e1.sobe();
	if (e1.get_andar_atual())
	{
		cout << "Elevador no " << e1.get_andar_atual() << "º andar" << endl;
	}
	else
	{
		cout << "Elevador no térreo" << endl;
	}
	e1.sobe();
	if (e1.get_andar_atual())
	{
		cout << "Elevador no " << e1.get_andar_atual() << "º andar" << endl;
	}
	else
	{
		cout << "Elevador no térreo" << endl;
	}
	e1.sobe();
	if (e1.get_andar_atual())
	{
		cout << "Elevador no " << e1.get_andar_atual() << "º andar" << endl;
	}
	else
	{
		cout << "Elevador no térreo" << endl;
	}
	e1.sobe();
	if (e1.get_andar_atual())
	{
		cout << "Elevador no " << e1.get_andar_atual() << "º andar" << endl;
	}
	else
	{
		cout << "Elevador no térreo" << endl;
	}
	cout << "Parei na secretaria da FACIN e dei uma paradinha" << endl;
	e1.sobe();
	if (e1.get_andar_atual())
	{
		cout << "Elevador no " << e1.get_andar_atual() << "º andar" << endl;
	}
	else
	{
		cout << "Elevador no térreo" << endl;
	}
	e1.sobe();
	if (e1.get_andar_atual())
	{
		cout << "Elevador no " << e1.get_andar_atual() << "º andar" << endl;
	}
	else
	{
		cout << "Elevador no térreo" << endl;
	}
	e1.sobe();
	if (e1.get_andar_atual())
	{
		cout << "Elevador no " << e1.get_andar_atual() << "º andar" << endl;
	}
	else
	{
		cout << "Elevador no térreo" << endl;
	}
	e1.sobe();
	if (e1.get_andar_atual())
	{
		cout << "Elevador no " << e1.get_andar_atual() << "º andar" << endl;
	}
	else
	{
		cout << "Elevador no térreo" << endl;
	}
	e1.sobe();
	if (e1.get_andar_atual())
	{
		cout << "Elevador no " << e1.get_andar_atual() << "º andar" << endl;
	}
	else
	{
		cout << "Elevador no térreo" << endl;
	}

	return 0;
}
