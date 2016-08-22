#include "elevador.h"

elevador::elevador()
{
	cout << "Elevador sendo instanciado" << endl;
	andar_atual = total_andares = nro_pessoas = capacidade = 0;
}
		
elevador::~elevador()
{
	cout << "Objeto sendo desalocado" << endl;
}
		
void elevador::inicializa(int _capacidade, int _total_andares)
{
	capacidade = _capacidade;
	total_andares = _total_andares;
	cout << "Inicializando a capacidade e o número de andares do prédio" << endl;
}
void elevador::entra()
{
	if (nro_pessoas < capacidade)
	{
		cout << "Seja bem-vindo ao elevador" << endl;
		nro_pessoas++;
	}
	else 
	{
		cout << "Elevador lotado!!!" << endl;
	}
}

void elevador::sai()
{
	if (nro_pessoas > 0)
	{
		cout << "Saiu um vivente!!!" << endl;
		nro_pessoas--;
	}
	else
	{
		cout << "Ninguém saiu pois o elevador está vazio" << endl;
	}
}

void elevador::sobe()
{
	if(andar_atual < total_andares)
	{
		cout << "Suuuubindo!!!" << endl;
		andar_atual++;
	}
	else
	{
		cout << "Elevador no topo do prédio" << endl;
	}
}

void elevador::desce()
{
	if(andar_atual > 0)
	{
		cout << "Deeeeeescendo!!!" << endl;	
		andar_atual--;
	}
	else
	{
		cout << "Elevador no térreo do prédio" << endl;
	}
}

int elevador::get_andar_atual()
{
	return andar_atual;
}

int elevador::get_capacidade()
{
	return capacidade;
}

int elevador::get_nro_pessoas()
{
	return nro_pessoas;
}

int elevador::get_total_andares()
{
	return total_andares;
}
